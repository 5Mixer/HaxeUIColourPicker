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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <hxinc/haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <hxinc/haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_PrecisionBehaviour
#include <hxinc/haxe/ui/components/_NumberStepper/PrecisionBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <hxinc/haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <hxinc/haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6dfd189cc570b01f_92_new,"haxe.ui.components._NumberStepper.PrecisionBehaviour","new",0x3e5975d0,"haxe.ui.components._NumberStepper.PrecisionBehaviour.new","haxe/ui/components/NumberStepper.hx",92,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd189cc570b01f_93_get,"haxe.ui.components._NumberStepper.PrecisionBehaviour","get",0x3e542606,"haxe.ui.components._NumberStepper.PrecisionBehaviour.get","haxe/ui/components/NumberStepper.hx",93,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_6dfd189cc570b01f_98_set,"haxe.ui.components._NumberStepper.PrecisionBehaviour","set",0x3e5d4112,"haxe.ui.components._NumberStepper.PrecisionBehaviour.set","haxe/ui/components/NumberStepper.hx",98,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void PrecisionBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6dfd189cc570b01f_92_new)
HXDLIN(  92)		super::__construct(component);
            	}

Dynamic PrecisionBehaviour_obj::__CreateEmpty() { return new PrecisionBehaviour_obj; }

void *PrecisionBehaviour_obj::_hx_vtable = 0;

Dynamic PrecisionBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PrecisionBehaviour_obj > _hx_result = new PrecisionBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PrecisionBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c6873cd) {
		if (inClassId<=(int)0x48ff1074) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x48ff1074;
		} else {
			return inClassId==(int)0x6c6873cd;
		}
	} else {
		return inClassId==(int)0x70d9f1b8;
	}
}

 ::haxe::ui::util::VariantType PrecisionBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_6dfd189cc570b01f_93_get)
HXLINE(  94)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  95)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(step->get_precision()) ));
            	}


void PrecisionBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_6dfd189cc570b01f_98_set)
HXLINE(  99)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE( 100)		step->set_precision(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            	}



hx::ObjectPtr< PrecisionBehaviour_obj > PrecisionBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< PrecisionBehaviour_obj > __this = new PrecisionBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< PrecisionBehaviour_obj > PrecisionBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PrecisionBehaviour_obj *__this = (PrecisionBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PrecisionBehaviour_obj), true, "haxe.ui.components._NumberStepper.PrecisionBehaviour"));
	*(void **)__this = PrecisionBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PrecisionBehaviour_obj::PrecisionBehaviour_obj()
{
}

hx::Val PrecisionBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *PrecisionBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PrecisionBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PrecisionBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

hx::Class PrecisionBehaviour_obj::__mClass;

void PrecisionBehaviour_obj::__register()
{
	PrecisionBehaviour_obj _hx_dummy;
	PrecisionBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.PrecisionBehaviour",de,8d,de,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PrecisionBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PrecisionBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrecisionBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrecisionBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper
