#ifndef UI_UIMESSAGES_H
#define UI_UIMESSAGES_H
#include "obj/Msg.h"
#include "ui/UIComponent.h"
#include "ui/UITrigger.h"

BEGIN_MESSAGE(UIComponentScrollMsg, component_scroll, UIComponent*, LocalUser*);
END_MESSAGE;

BEGIN_MESSAGE(UIComponentSelectMsg, component_select, UIComponent*, LocalUser*);
END_MESSAGE;

BEGIN_MESSAGE(UIComponentSelectDoneMsg, component_select_done, UIComponent*, LocalUser*);
END_MESSAGE;

BEGIN_MESSAGE(UIComponentScrollSelectMsg, component_scroll_select, UIComponent*, LocalUser*, bool);
END_MESSAGE;

BEGIN_MESSAGE(UIComponentFocusChangeMsg, component_focus, UIComponent*, UIComponent*, PanelDir*, Symbol);
END_MESSAGE;

BEGIN_MESSAGE(UITriggerCompleteMsg, ui_trigger_complete, UITrigger*);
END_MESSAGE;

BEGIN_MESSAGE(UIComponentScrollStartMsg, component_scroll_start, UIComponent*, LocalUser*);
END_MESSAGE;

inline UIComponentScrollMsg::UIComponentScrollMsg(UIComponent* comp, LocalUser* user) : 
    Message(Type(), DataNode(comp), DataNode(user)){}

inline UIComponentSelectMsg::UIComponentSelectMsg(UIComponent* comp, LocalUser* user) : 
    Message(Type(), DataNode(comp), DataNode(user)){}

inline UIComponentSelectDoneMsg::UIComponentSelectDoneMsg(UIComponent* comp, LocalUser* user) : 
    Message(Type(), DataNode(comp), DataNode(user)){}

inline UIComponentScrollSelectMsg::UIComponentScrollSelectMsg(UIComponent* comp, LocalUser* user, bool b) : 
    Message(Type(), DataNode(comp), DataNode(user), DataNode(b)){}

inline UIComponentFocusChangeMsg::UIComponentFocusChangeMsg(UIComponent* comp1, UIComponent* comp2, PanelDir* dir, Symbol s) : 
    Message(Type(), DataNode(comp1), DataNode(comp2), DataNode(dir), DataNode(s)){}

inline UITriggerCompleteMsg::UITriggerCompleteMsg(UITrigger* trig) : 
    Message(Type(), DataNode(trig)){}

inline UIComponentScrollStartMsg::UIComponentScrollStartMsg(UIComponent* comp, LocalUser* user) :
    Message(Type(), DataNode(comp), DataNode(user)){}

#endif
