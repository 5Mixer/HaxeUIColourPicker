// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <hxinc/Date.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Calendar
#include <hxinc/haxe/ui/components/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_DateUtils
#include <hxinc/haxe/ui/components/_Calendar/DateUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Calendar_NextMonthBehaviour
#include <hxinc/haxe/ui/components/_Calendar/NextMonthBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Grid
#include <hxinc/haxe/ui/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <hxinc/haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d7c6f770dc0912c7_50_new,"haxe.ui.components._Calendar.NextMonthBehaviour","new",0x038f2cd9,"haxe.ui.components._Calendar.NextMonthBehaviour.new","haxe/ui/components/Calendar.hx",50,0xa4f8a419)
HX_LOCAL_STACK_FRAME(_hx_pos_d7c6f770dc0912c7_51_call,"haxe.ui.components._Calendar.NextMonthBehaviour","call",0x126fa605,"haxe.ui.components._Calendar.NextMonthBehaviour.call","haxe/ui/components/Calendar.hx",51,0xa4f8a419)
namespace haxe{
namespace ui{
namespace components{
namespace _Calendar{

void NextMonthBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d7c6f770dc0912c7_50_new)
HXDLIN(  50)		super::__construct(component);
            	}

Dynamic NextMonthBehaviour_obj::__CreateEmpty() { return new NextMonthBehaviour_obj; }

void *NextMonthBehaviour_obj::_hx_vtable = 0;

Dynamic NextMonthBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NextMonthBehaviour_obj > _hx_result = new NextMonthBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NextMonthBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f647935) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5f647935;
	} else {
		return inClassId==(int)0x6c6873cd;
	}
}

 ::haxe::ui::util::VariantType NextMonthBehaviour_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_d7c6f770dc0912c7_51_call)
HXLINE(  52)		 ::haxe::ui::components::Calendar calendar = hx::TCast<  ::haxe::ui::components::Calendar >::cast(this->_component);
HXLINE(  53)		calendar->set_date(::haxe::ui::components::_Calendar::DateUtils_obj::nextMonth(calendar->get_date()));
HXLINE(  54)		return null();
            	}



hx::ObjectPtr< NextMonthBehaviour_obj > NextMonthBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< NextMonthBehaviour_obj > __this = new NextMonthBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< NextMonthBehaviour_obj > NextMonthBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NextMonthBehaviour_obj *__this = (NextMonthBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NextMonthBehaviour_obj), true, "haxe.ui.components._Calendar.NextMonthBehaviour"));
	*(void **)__this = NextMonthBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NextMonthBehaviour_obj::NextMonthBehaviour_obj()
{
}

hx::Val NextMonthBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *NextMonthBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NextMonthBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String NextMonthBehaviour_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

hx::Class NextMonthBehaviour_obj::__mClass;

void NextMonthBehaviour_obj::__register()
{
	NextMonthBehaviour_obj _hx_dummy;
	NextMonthBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Calendar.NextMonthBehaviour",67,cc,b7,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NextMonthBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NextMonthBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NextMonthBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NextMonthBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Calendar
