// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <hxinc/haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <hxinc/haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <hxinc/haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalRangeLayout
#include <hxinc/haxe/ui/components/VerticalRangeLayout.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2204d88e01bf82e0_44_new,"haxe.ui.components.VerticalRangeLayout","new",0x3e4ddcfd,"haxe.ui.components.VerticalRangeLayout.new","haxe/ui/components/VerticalRange.hx",44,0x5f5177be)
HX_LOCAL_STACK_FRAME(_hx_pos_2204d88e01bf82e0_45_resizeChildren,"haxe.ui.components.VerticalRangeLayout","resizeChildren",0xfcfff1d6,"haxe.ui.components.VerticalRangeLayout.resizeChildren","haxe/ui/components/VerticalRange.hx",45,0x5f5177be)
HX_LOCAL_STACK_FRAME(_hx_pos_2204d88e01bf82e0_75_repositionChildren,"haxe.ui.components.VerticalRangeLayout","repositionChildren",0x9283acbe,"haxe.ui.components.VerticalRangeLayout.repositionChildren","haxe/ui/components/VerticalRange.hx",75,0x5f5177be)
namespace haxe{
namespace ui{
namespace components{

void VerticalRangeLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2204d88e01bf82e0_44_new)
HXDLIN(  44)		super::__construct();
            	}

Dynamic VerticalRangeLayout_obj::__CreateEmpty() { return new VerticalRangeLayout_obj; }

void *VerticalRangeLayout_obj::_hx_vtable = 0;

Dynamic VerticalRangeLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VerticalRangeLayout_obj > _hx_result = new VerticalRangeLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalRangeLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x06f1ce9d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06f1ce9d;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void VerticalRangeLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_2204d88e01bf82e0_45_resizeChildren)
HXLINE(  46)		this->super::resizeChildren();
HXLINE(  48)		 ::haxe::ui::components::Range range = hx::TCast<  ::haxe::ui::components::Range >::cast(this->get_component());
HXLINE(  49)		 ::haxe::ui::core::Component value = ( ( ::haxe::ui::core::Component)(this->findComponent(((HX_("",00,00,00,00) + range->get_cssName()) + HX_("-value",24,bc,c7,2f)),null(),null(),null())) );
HXLINE(  50)		if (hx::IsNotNull( value )) {
HXLINE(  51)			Float ucy = this->get_usableHeight();
HXLINE(  53)			Float m = range->get_max();
HXDLIN(  53)			Float m1 = (m - range->get_min());
HXLINE(  54)			Float d = (ucy / m1);
HXLINE(  55)			Float startInPixels = (( (Float)(range->get_start()) ) * d);
HXDLIN(  55)			Float startInPixels1 = (startInPixels - (range->get_min() * d));
HXLINE(  56)			Float endInPixels = (range->get_end() * d);
HXDLIN(  56)			Float endInPixels1 = (endInPixels - (range->get_min() * d));
HXLINE(  57)			Float cy = ::Math_obj::fround((endInPixels1 - startInPixels1));
HXLINE(  59)			if ((cy < 0)) {
HXLINE(  60)				cy = ( (Float)(0) );
            			}
            			else {
HXLINE(  61)				if ((cy > ucy)) {
HXLINE(  62)					cy = ucy;
            				}
            			}
HXLINE(  65)			if ((cy == 0)) {
HXLINE(  66)				value->set_height(0);
HXLINE(  67)				value->set_hidden(true);
            			}
            			else {
HXLINE(  69)				value->set_height(cy);
HXLINE(  70)				value->set_hidden(false);
            			}
            		}
            	}


void VerticalRangeLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_2204d88e01bf82e0_75_repositionChildren)
HXLINE(  76)		 ::haxe::ui::components::Range range = hx::TCast<  ::haxe::ui::components::Range >::cast(this->get_component());
HXLINE(  77)		 ::haxe::ui::core::Component value = ( ( ::haxe::ui::core::Component)(this->findComponent(((HX_("",00,00,00,00) + range->get_cssName()) + HX_("-value",24,bc,c7,2f)),null(),null(),null())) );
HXLINE(  79)		Float ucy = this->get_usableHeight();
HXLINE(  80)		Float m = range->get_max();
HXDLIN(  80)		Float m1 = (m - range->get_min());
HXLINE(  81)		Float d = (ucy / m1);
HXLINE(  83)		Float startInPixels = (ucy - ( (Float)(value->get_height()) ));
HXDLIN(  83)		Float startInPixels1 = (( (Float)(range->get_start()) ) * d);
HXDLIN(  83)		Float startInPixels2 = (startInPixels - (startInPixels1 - (range->get_min() * d)));
HXLINE(  84)		value->set_left(this->get_paddingLeft());
HXLINE(  85)		value->set_top((this->get_paddingTop() + startInPixels2));
            	}



hx::ObjectPtr< VerticalRangeLayout_obj > VerticalRangeLayout_obj::__new() {
	hx::ObjectPtr< VerticalRangeLayout_obj > __this = new VerticalRangeLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VerticalRangeLayout_obj > VerticalRangeLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VerticalRangeLayout_obj *__this = (VerticalRangeLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VerticalRangeLayout_obj), true, "haxe.ui.components.VerticalRangeLayout"));
	*(void **)__this = VerticalRangeLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalRangeLayout_obj::VerticalRangeLayout_obj()
{
}

hx::Val VerticalRangeLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *VerticalRangeLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VerticalRangeLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalRangeLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	::String(null()) };

hx::Class VerticalRangeLayout_obj::__mClass;

void VerticalRangeLayout_obj::__register()
{
	VerticalRangeLayout_obj _hx_dummy;
	VerticalRangeLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.VerticalRangeLayout",8b,9a,8a,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VerticalRangeLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VerticalRangeLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalRangeLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalRangeLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
