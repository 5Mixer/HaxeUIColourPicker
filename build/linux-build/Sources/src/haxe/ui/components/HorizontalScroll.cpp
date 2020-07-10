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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <hxinc/haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <hxinc/haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <hxinc/haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_ApplyPageFromCoord
#include <hxinc/haxe/ui/components/_HorizontalScroll/ApplyPageFromCoord.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_HorizontalScrollLayout
#include <hxinc/haxe/ui/components/_HorizontalScroll/HorizontalScrollLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_PosFromCoord
#include <hxinc/haxe/ui/components/_HorizontalScroll/PosFromCoord.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <hxinc/haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <hxinc/haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <hxinc/haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_8_new,"haxe.ui.components.HorizontalScroll","new",0x09f3bd29,"haxe.ui.components.HorizontalScroll.new","haxe/ui/components/HorizontalScroll.hx",8,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_12_registerBehaviours,"haxe.ui.components.HorizontalScroll","registerBehaviours",0xa0618530,"haxe.ui.components.HorizontalScroll.registerBehaviours","haxe/ui/components/HorizontalScroll.hx",12,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_18_createChildren,"haxe.ui.components.HorizontalScroll","createChildren",0x87c13e32,"haxe.ui.components.HorizontalScroll.createChildren","haxe/ui/components/HorizontalScroll.hx",18,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_25_createDefaults,"haxe.ui.components.HorizontalScroll","createDefaults",0xc6f0f585,"haxe.ui.components.HorizontalScroll.createDefaults","haxe/ui/components/HorizontalScroll.hx",25,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_4635c2762000af34_521_cloneComponent,"haxe.ui.components.HorizontalScroll","cloneComponent",0xeb738f77,"haxe.ui.components.HorizontalScroll.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_340f816d8c22b0c6_302_self,"haxe.ui.components.HorizontalScroll","self",0xae9fcea3,"haxe.ui.components.HorizontalScroll.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void HorizontalScroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic HorizontalScroll_obj::__CreateEmpty() { return new HorizontalScroll_obj; }

void *HorizontalScroll_obj::_hx_vtable = 0;

Dynamic HorizontalScroll_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HorizontalScroll_obj > _hx_result = new HorizontalScroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalScroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x2a04b446) {
			if (inClassId<=(int)0x1906ee01) {
				if (inClassId<=(int)0x0fddceef) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0fddceef;
				} else {
					return inClassId==(int)0x1906ee01;
				}
			} else {
				return inClassId==(int)0x23af8dfd || inClassId==(int)0x2a04b446;
			}
		} else {
			if (inClassId<=(int)0x419aedfd) {
				return inClassId==(int)0x324697fd || inClassId==(int)0x419aedfd;
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

void HorizontalScroll_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_12_registerBehaviours)
HXLINE(  13)		this->super::registerBehaviours();
HXLINE(  14)		this->behaviours->_hx_register(HX_("posFromCoord",b7,d4,5e,a6),hx::ClassOf< ::haxe::ui::components::_HorizontalScroll::PosFromCoord >(),null());
HXLINE(  15)		this->behaviours->_hx_register(HX_("applyPageFromCoord",4e,e6,f7,52),hx::ClassOf< ::haxe::ui::components::_HorizontalScroll::ApplyPageFromCoord >(),null());
            	}


void HorizontalScroll_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_18_createChildren)
HXLINE(  19)		this->super::createChildren();
HXLINE(  20)		if (hx::IsLessEq( this->get_componentWidth(),0 )) {
HXLINE(  21)			this->set_componentWidth(150);
            		}
            	}


void HorizontalScroll_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_25_createDefaults)
HXLINE(  26)		this->super::createDefaults();
HXLINE(  27)		this->_hx_set__defaultLayoutClass(HX_CTX, hx::ClassOf< ::haxe::ui::components::_HorizontalScroll::HorizontalScrollLayout >());
            	}


 ::haxe::ui::core::ComponentContainer HorizontalScroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_4635c2762000af34_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::components::HorizontalScroll c = ( ( ::haxe::ui::components::HorizontalScroll)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer HorizontalScroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_340f816d8c22b0c6_302_self)
HXDLIN( 302)		return  ::haxe::ui::components::HorizontalScroll_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HorizontalScroll_obj > HorizontalScroll_obj::__new() {
	hx::ObjectPtr< HorizontalScroll_obj > __this = new HorizontalScroll_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HorizontalScroll_obj > HorizontalScroll_obj::__alloc(hx::Ctx *_hx_ctx) {
	HorizontalScroll_obj *__this = (HorizontalScroll_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalScroll_obj), true, "haxe.ui.components.HorizontalScroll"));
	*(void **)__this = HorizontalScroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalScroll_obj::HorizontalScroll_obj()
{
}

hx::Val HorizontalScroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *HorizontalScroll_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HorizontalScroll_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalScroll_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("createChildren",5b,98,a4,c2),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class HorizontalScroll_obj::__mClass;

void HorizontalScroll_obj::__register()
{
	HorizontalScroll_obj _hx_dummy;
	HorizontalScroll_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.HorizontalScroll",b7,f4,d9,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HorizontalScroll_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalScroll_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalScroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalScroll_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
