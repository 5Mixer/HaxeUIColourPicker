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
#ifndef INCLUDED_haxe_ui_components_HorizontalRangePosFromCoord
#include <hxinc/haxe/ui/components/HorizontalRangePosFromCoord.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <hxinc/haxe/ui/components/Range.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_23ed289461d9bc99_21_new,"haxe.ui.components.HorizontalRangePosFromCoord","new",0x7484db9c,"haxe.ui.components.HorizontalRangePosFromCoord.new","haxe/ui/components/HorizontalRange.hx",21,0xb87225ec)
HX_LOCAL_STACK_FRAME(_hx_pos_23ed289461d9bc99_22_call,"haxe.ui.components.HorizontalRangePosFromCoord","call",0x7872e1e2,"haxe.ui.components.HorizontalRangePosFromCoord.call","haxe/ui/components/HorizontalRange.hx",22,0xb87225ec)
namespace haxe{
namespace ui{
namespace components{

void HorizontalRangePosFromCoord_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_23ed289461d9bc99_21_new)
HXDLIN(  21)		super::__construct(component);
            	}

Dynamic HorizontalRangePosFromCoord_obj::__CreateEmpty() { return new HorizontalRangePosFromCoord_obj; }

void *HorizontalRangePosFromCoord_obj::_hx_vtable = 0;

Dynamic HorizontalRangePosFromCoord_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HorizontalRangePosFromCoord_obj > _hx_result = new HorizontalRangePosFromCoord_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HorizontalRangePosFromCoord_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x588cb3bc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x588cb3bc;
	} else {
		return inClassId==(int)0x6c6873cd;
	}
}

 ::haxe::ui::util::VariantType HorizontalRangePosFromCoord_obj::call( ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_23ed289461d9bc99_22_call)
HXLINE(  23)		 ::haxe::ui::components::Range range = hx::TCast<  ::haxe::ui::components::Range >::cast(this->_component);
HXLINE(  24)		 ::haxe::ui::geom::Point p = hx::TCast<  ::haxe::ui::geom::Point >::cast(pos);
HXLINE(  25)		Float p1 = p->x;
HXDLIN(  25)		Float xpos = (p1 - range->get_layout()->get_paddingLeft());
HXLINE(  26)		Float ucx = range->get_layout()->get_usableWidth();
HXLINE(  27)		if ((xpos >= ucx)) {
HXLINE(  28)			xpos = ucx;
            		}
HXLINE(  31)		Float m = range->get_max();
HXDLIN(  31)		Float m1 = (m - range->get_min());
HXLINE(  32)		Float d = (ucx / m1);
HXLINE(  33)		Float v = (xpos + (( (Float)(range->get_start()) ) * d));
HXLINE(  34)		Float p2 = (v / d);
HXLINE(  36)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(p2);
            	}



hx::ObjectPtr< HorizontalRangePosFromCoord_obj > HorizontalRangePosFromCoord_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< HorizontalRangePosFromCoord_obj > __this = new HorizontalRangePosFromCoord_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< HorizontalRangePosFromCoord_obj > HorizontalRangePosFromCoord_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	HorizontalRangePosFromCoord_obj *__this = (HorizontalRangePosFromCoord_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalRangePosFromCoord_obj), true, "haxe.ui.components.HorizontalRangePosFromCoord"));
	*(void **)__this = HorizontalRangePosFromCoord_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

HorizontalRangePosFromCoord_obj::HorizontalRangePosFromCoord_obj()
{
}

hx::Val HorizontalRangePosFromCoord_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *HorizontalRangePosFromCoord_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HorizontalRangePosFromCoord_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalRangePosFromCoord_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

hx::Class HorizontalRangePosFromCoord_obj::__mClass;

void HorizontalRangePosFromCoord_obj::__register()
{
	HorizontalRangePosFromCoord_obj _hx_dummy;
	HorizontalRangePosFromCoord_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.HorizontalRangePosFromCoord",aa,1d,d8,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HorizontalRangePosFromCoord_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalRangePosFromCoord_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalRangePosFromCoord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalRangePosFromCoord_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
