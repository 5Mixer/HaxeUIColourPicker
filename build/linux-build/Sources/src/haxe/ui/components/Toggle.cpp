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
#ifndef INCLUDED_haxe_ui_components_Button
#include <hxinc/haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Toggle
#include <hxinc/haxe/ui/components/Toggle.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7442e3b51cb7ad4a_5_new,"haxe.ui.components.Toggle","new",0x81dd02ac,"haxe.ui.components.Toggle.new","haxe/ui/components/Toggle.hx",5,0xb371b4c3)
HX_LOCAL_STACK_FRAME(_hx_pos_34fb9499765b96a9_315_registerBehaviours,"haxe.ui.components.Toggle","registerBehaviours",0x5f52eb0d,"haxe.ui.components.Toggle.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_32eee032dab2c949_521_cloneComponent,"haxe.ui.components.Toggle","cloneComponent",0xd7ab82d4,"haxe.ui.components.Toggle.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_34fb9499765b96a9_302_self,"haxe.ui.components.Toggle","self",0x22d35bc0,"haxe.ui.components.Toggle.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Toggle_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7442e3b51cb7ad4a_5_new)
HXLINE(   6)		super::__construct();
HXLINE(   7)		this->set_toggle(true);
            	}

Dynamic Toggle_obj::__CreateEmpty() { return new Toggle_obj; }

void *Toggle_obj::_hx_vtable = 0;

Dynamic Toggle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Toggle_obj > _hx_result = new Toggle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Toggle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x282ff24c) {
			if (inClassId<=(int)0x23718646) {
				if (inClassId<=(int)0x0fddceef) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0fddceef;
				} else {
					return inClassId==(int)0x23718646;
				}
			} else {
				return inClassId==(int)0x23af8dfd || inClassId==(int)0x282ff24c;
			}
		} else {
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x2a04b446 || inClassId==(int)0x324697fd;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				if (inClassId<=(int)0x5f23eff4) {
					return inClassId==(int)0x4eb0678b || inClassId==(int)0x5f23eff4;
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

void Toggle_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_34fb9499765b96a9_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer Toggle_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_32eee032dab2c949_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::components::Toggle c = ( ( ::haxe::ui::components::Toggle)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Toggle_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_34fb9499765b96a9_302_self)
HXDLIN( 302)		return  ::haxe::ui::components::Toggle_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Toggle_obj > Toggle_obj::__new() {
	hx::ObjectPtr< Toggle_obj > __this = new Toggle_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Toggle_obj > Toggle_obj::__alloc(hx::Ctx *_hx_ctx) {
	Toggle_obj *__this = (Toggle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Toggle_obj), true, "haxe.ui.components.Toggle"));
	*(void **)__this = Toggle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Toggle_obj::Toggle_obj()
{
}

hx::Val Toggle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Toggle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Toggle_obj_sStaticStorageInfo = 0;
#endif

static ::String Toggle_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class Toggle_obj::__mClass;

void Toggle_obj::__register()
{
	Toggle_obj _hx_dummy;
	Toggle_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Toggle",ba,7c,2b,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Toggle_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Toggle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Toggle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Toggle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
