// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <hxinc/haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <hxinc/haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <hxinc/haxe/ui/backend/DialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <hxinc/haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogEvent
#include <hxinc/haxe/ui/containers/dialogs/DialogEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <hxinc/haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <hxinc/haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <hxinc/haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <hxinc/haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <hxinc/haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <hxinc/haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <hxinc/haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <hxinc/haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <hxinc/haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <hxinc/haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f22ce9c60b952717_70_new,"haxe.ui.containers.dialogs.Dialog","new",0x34905b47,"haxe.ui.containers.dialogs.Dialog.new","haxe/ui/containers/dialogs/Dialog.hx",70,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_f22ce9c60b952717_75_set_onDialogClosed,"haxe.ui.containers.dialogs.Dialog","set_onDialogClosed",0x73152c89,"haxe.ui.containers.dialogs.Dialog.set_onDialogClosed","haxe/ui/containers/dialogs/Dialog.hx",75,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_3b5960fab4234575_315_registerBehaviours,"haxe.ui.containers.dialogs.Dialog","registerBehaviours",0xd64b78d2,"haxe.ui.containers.dialogs.Dialog.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8282b85acad398e5_521_cloneComponent,"haxe.ui.containers.dialogs.Dialog","cloneComponent",0xa86e8a19,"haxe.ui.containers.dialogs.Dialog.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_3b5960fab4234575_302_self,"haxe.ui.containers.dialogs.Dialog","self",0xcd0d8ac5,"haxe.ui.containers.dialogs.Dialog.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void Dialog_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f22ce9c60b952717_70_new)
HXDLIN(  70)		super::__construct();
            	}

Dynamic Dialog_obj::__CreateEmpty() { return new Dialog_obj; }

void *Dialog_obj::_hx_vtable = 0;

Dynamic Dialog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Dialog_obj > _hx_result = new Dialog_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Dialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
		if (inClassId<=(int)0x23af8dfd) {
			if (inClassId<=(int)0x0b312307) {
				if (inClassId<=(int)0x052624b3) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x052624b3;
				} else {
					return inClassId==(int)0x0b312307;
				}
			} else {
				return inClassId==(int)0x0fddceef || inClassId==(int)0x23af8dfd;
			}
		} else {
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x2a04b446 || inClassId==(int)0x324697fd;
			} else {
				return inClassId==(int)0x41081cbb;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				if (inClassId<=(int)0x4eb0678b) {
					return inClassId==(int)0x4a06d0bc || inClassId==(int)0x4eb0678b;
				} else {
					return inClassId==(int)0x7140e8dc;
				}
			} else {
				return inClassId==(int)0x7ee2d869;
			}
		} else {
			return inClassId==(int)0x7f63f3f1 || inClassId==(int)0x7ff0cb0e;
		}
	}
}

 ::Dynamic Dialog_obj::set_onDialogClosed( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_f22ce9c60b952717_75_set_onDialogClosed)
HXLINE(  76)		if (hx::IsNotNull( this->_hx___onDialogClosed )) {
HXLINE(  77)			this->unregisterEvent(HX_("dialogClosed",94,e8,f8,2e),this->_hx___onClick);
HXLINE(  78)			this->_hx_set__hx___onDialogClosed(HX_CTX, null());
            		}
HXLINE(  80)		this->registerEvent(HX_("dialogClosed",94,e8,f8,2e),value,null());
HXLINE(  81)		this->_hx_set__hx___onDialogClosed(HX_CTX, value);
HXLINE(  82)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Dialog_obj,set_onDialogClosed,return )

void Dialog_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_3b5960fab4234575_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Dialog_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8282b85acad398e5_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::containers::dialogs::Dialog c = ( ( ::haxe::ui::containers::dialogs::Dialog)(this->super::cloneComponent()) );
HXLINE( 287)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 287)		if (hx::IsNull( this->_children )) {
HXLINE( 287)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 287)			_hx_tmp = this->_children;
            		}
HXDLIN( 287)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 287)		if (hx::IsNull( c->_children )) {
HXLINE( 287)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 287)			_hx_tmp1 = c->_children;
            		}
HXDLIN( 287)		if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 288)			int _g = 0;
HXDLIN( 288)			::Array< ::Dynamic> _g1;
HXDLIN( 288)			if (hx::IsNull( this->_children )) {
HXLINE( 288)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 288)				_g1 = this->_children;
            			}
HXDLIN( 288)			while((_g < _g1->length)){
HXLINE( 288)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 288)				_g = (_g + 1);
HXLINE( 289)				c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            			}
            		}
HXLINE( 293)		return c;
            	}


 ::haxe::ui::core::ComponentContainer Dialog_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_3b5960fab4234575_302_self)
HXDLIN( 302)		return  ::haxe::ui::containers::dialogs::Dialog_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Dialog_obj > Dialog_obj::__new() {
	hx::ObjectPtr< Dialog_obj > __this = new Dialog_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Dialog_obj > Dialog_obj::__alloc(hx::Ctx *_hx_ctx) {
	Dialog_obj *__this = (Dialog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Dialog_obj), true, "haxe.ui.containers.dialogs.Dialog"));
	*(void **)__this = Dialog_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Dialog_obj::Dialog_obj()
{
}

void Dialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dialog);
	HX_MARK_MEMBER_NAME(_hx___onDialogClosed,"__onDialogClosed");
	HX_MARK_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	 ::haxe::ui::backend::DialogBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Dialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___onDialogClosed,"__onDialogClosed");
	HX_VISIT_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	 ::haxe::ui::backend::DialogBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Dialog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { return hx::Val( onDialogClosed ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onDialogClosed") ) { return hx::Val( _hx___onDialogClosed ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_onDialogClosed") ) { return hx::Val( set_onDialogClosed_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Dialog_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_onDialogClosed(inValue.Cast<  ::Dynamic >()) );_hx_set_onDialogClosed(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__onDialogClosed") ) { _hx_set__hx___onDialogClosed(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Dialog_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Dialog_obj,_hx___onDialogClosed),HX_("__onDialogClosed",73,d3,27,8d)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Dialog_obj,onDialogClosed),HX_("onDialogClosed",53,48,e8,58)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Dialog_obj_sStaticStorageInfo = 0;
#endif

static ::String Dialog_obj_sMemberFields[] = {
	HX_("__onDialogClosed",73,d3,27,8d),
	HX_("onDialogClosed",53,48,e8,58),
	HX_("set_onDialogClosed",90,5b,31,d1),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class Dialog_obj::__mClass;

void Dialog_obj::__register()
{
	Dialog_obj _hx_dummy;
	Dialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.dialogs.Dialog",d5,ab,c9,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Dialog_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Dialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dialog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
