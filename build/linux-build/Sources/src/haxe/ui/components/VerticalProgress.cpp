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
#ifndef INCLUDED_haxe_ui_components_Progress
#include <hxinc/haxe/ui/components/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <hxinc/haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalProgress
#include <hxinc/haxe/ui/components/VerticalProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalRangeLayout
#include <hxinc/haxe/ui/components/VerticalRangeLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalRangePosFromCoord
#include <hxinc/haxe/ui/components/VerticalRangePosFromCoord.h>
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
#ifndef INCLUDED_haxe_ui_geom_Point
#include <hxinc/haxe/ui/geom/Point.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <hxinc/haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf2d6e1240057d70_6_new,"haxe.ui.components.VerticalProgress","new",0xfa7e885b,"haxe.ui.components.VerticalProgress.new","haxe/ui/components/VerticalProgress.hx",6,0x71e56eb4)
HX_LOCAL_STACK_FRAME(_hx_pos_9a41c078accf460f_389_posFromCoord,"haxe.ui.components.VerticalProgress","posFromCoord",0xdba8c55c,"haxe.ui.components.VerticalProgress.posFromCoord","haxe/ui/macros/Macros.hx",389,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9a41c078accf460f_314_registerBehaviours,"haxe.ui.components.VerticalProgress","registerBehaviours",0xf31b223e,"haxe.ui.components.VerticalProgress.registerBehaviours","haxe/ui/macros/Macros.hx",314,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_01e92b77961aecaa_521_cloneComponent,"haxe.ui.components.VerticalProgress","cloneComponent",0xb67a0d85,"haxe.ui.components.VerticalProgress.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_9a41c078accf460f_302_self,"haxe.ui.components.VerticalProgress","self",0x3786cf31,"haxe.ui.components.VerticalProgress.self","haxe/ui/macros/Macros.hx",302,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9a41c078accf460f_72_registerComposite,"haxe.ui.components.VerticalProgress","registerComposite",0xa0127e5f,"haxe.ui.components.VerticalProgress.registerComposite","haxe/ui/macros/Macros.hx",72,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void VerticalProgress_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bf2d6e1240057d70_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic VerticalProgress_obj::__CreateEmpty() { return new VerticalProgress_obj; }

void *VerticalProgress_obj::_hx_vtable = 0;

Dynamic VerticalProgress_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VerticalProgress_obj > _hx_result = new VerticalProgress_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalProgress_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x324697fd) {
		if (inClassId<=(int)0x23af8dfd) {
			if (inClassId<=(int)0x0fddceef) {
				if (inClassId<=(int)0x0a86699d) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0a86699d;
				} else {
					return inClassId==(int)0x0fddceef;
				}
			} else {
				return inClassId==(int)0x145bb833 || inClassId==(int)0x23af8dfd;
			}
		} else {
			if (inClassId<=(int)0x303867e9) {
				return inClassId==(int)0x2a04b446 || inClassId==(int)0x303867e9;
			} else {
				return inClassId==(int)0x324697fd;
			}
		}
	} else {
		if (inClassId<=(int)0x7140e8dc) {
			if (inClassId<=(int)0x5f23eff4) {
				if (inClassId<=(int)0x4eb0678b) {
					return inClassId==(int)0x4a06d0bc || inClassId==(int)0x4eb0678b;
				} else {
					return inClassId==(int)0x5f23eff4;
				}
			} else {
				return inClassId==(int)0x7140e8dc;
			}
		} else {
			if (inClassId<=(int)0x7f63f3f1) {
				return inClassId==(int)0x7ee2d869 || inClassId==(int)0x7f63f3f1;
			} else {
				return inClassId==(int)0x7ff0cb0e;
			}
		}
	}
}

Float VerticalProgress_obj::posFromCoord( ::haxe::ui::geom::Point coord){
            	HX_STACKFRAME(&_hx_pos_9a41c078accf460f_389_posFromCoord)
HXDLIN( 389)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->call(HX_("posFromCoord",b7,d4,5e,a6),coord))) );
            	}


void VerticalProgress_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_9a41c078accf460f_314_registerBehaviours)
HXLINE( 315)		this->super::registerBehaviours();
HXLINE( 395)		this->behaviours->_hx_register(HX_("posFromCoord",b7,d4,5e,a6),hx::ClassOf< ::haxe::ui::components::VerticalRangePosFromCoord >(),null());
            	}


 ::haxe::ui::core::ComponentContainer VerticalProgress_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_01e92b77961aecaa_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::components::VerticalProgress c = ( ( ::haxe::ui::components::VerticalProgress)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer VerticalProgress_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_9a41c078accf460f_302_self)
HXDLIN( 302)		return  ::haxe::ui::components::VerticalProgress_obj::__alloc( HX_CTX );
            	}


void VerticalProgress_obj::registerComposite(){
            	HX_GC_STACKFRAME(&_hx_pos_9a41c078accf460f_72_registerComposite)
HXLINE(  73)		this->super::registerComposite();
HXLINE(  89)		this->_hx_set__defaultLayoutClass(HX_CTX, hx::ClassOf< ::haxe::ui::components::VerticalRangeLayout >());
            	}



hx::ObjectPtr< VerticalProgress_obj > VerticalProgress_obj::__new() {
	hx::ObjectPtr< VerticalProgress_obj > __this = new VerticalProgress_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VerticalProgress_obj > VerticalProgress_obj::__alloc(hx::Ctx *_hx_ctx) {
	VerticalProgress_obj *__this = (VerticalProgress_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VerticalProgress_obj), true, "haxe.ui.components.VerticalProgress"));
	*(void **)__this = VerticalProgress_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalProgress_obj::VerticalProgress_obj()
{
}

hx::Val VerticalProgress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"posFromCoord") ) { return hx::Val( posFromCoord_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *VerticalProgress_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VerticalProgress_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalProgress_obj_sMemberFields[] = {
	HX_("posFromCoord",b7,d4,5e,a6),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

hx::Class VerticalProgress_obj::__mClass;

void VerticalProgress_obj::__register()
{
	VerticalProgress_obj _hx_dummy;
	VerticalProgress_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.VerticalProgress",e9,be,2e,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VerticalProgress_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VerticalProgress_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalProgress_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalProgress_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components