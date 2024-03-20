#include "rndobj/Group.h"

int GROUP_REV = 14;

RndGroup::RndGroup() : mObjects(this, kObjListOwnerControl), mEnv(this, 0), mDrawOnly(this, 0), mLod(this, 0), mLodScreenSize(0.0f), unkf8(0) {
    unk8p1 = 0;
}

SAVE_OBJ(RndGroup, 0x30);

void RndGroup::Load(BinStream& bs){
    int rev;
    bs >> rev;
    if(GROUP_REV > rev) MILO_FAIL("%s can't load new %s version %d > %d", PathName(this), ClassName(), GROUP_REV, rev);
    if(rev > 7) Hmx::Object::Load(bs);
    RndAnimatable::Load(bs);
    RndTransformable::Load(bs);
    RndDrawable::Load(bs);
    if(rev > 10){
        bs >> mObjects >> mEnv;
        if(rev > 12) bs >> mDrawOnly;
        else mDrawOnly = 0;
        Update();
    }
    if(rev > 11){
        bs >> mLod >> mLodScreenSize;
    }
    if(rev > 13){
        bool read_in;
        bs >> read_in;
        unk8p1 = read_in;
    }
    UpdateLODState();
}
