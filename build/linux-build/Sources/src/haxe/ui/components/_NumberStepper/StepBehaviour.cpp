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
#ifndef INCLUDED_haxe_ui_components__NumberStepper_StepBehaviour
#include <hxinc/haxe/ui/components/_NumberStepper/StepBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_71ca7078c630bf2a_53_new,"haxe.ui.components._NumberStepper.StepBehaviour","new",0xa5c332e4,"haxe.ui.components._NumberStepper.StepBehaviour.new","haxe/ui/components/NumberStepper.hx",53,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_71ca7078c630bf2a_54_get,"haxe.ui.components._NumberStepper.StepBehaviour","get",0xa5bde31a,"haxe.ui.components._NumberStepper.StepBehaviour.get","haxe/ui/components/NumberStepper.hx",54,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_71ca7078c630bf2a_59_set,"haxe.ui.components._NumberStepper.StepBehaviour","set",0xa5c6fe26,"haxe.ui.components._NumberStepper.StepBehaviour.set","haxe/ui/components/NumberStepper.hx",59,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void StepBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_71ca7078c630bf2a_53_new)
HXDLIN(  53)		super::__construct(component);
            	}

Dynamic StepBehaviour_obj::__CreateEmpty() { return new StepBehaviour_obj; }

void *StepBehaviour_obj::_hx_vtable = 0;

Dynamic StepBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StepBehaviour_obj > _hx_result = new StepBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StepBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6c6873cd) {
		if (inClassId<=(int)0x48ff1074) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x48ff1074;
		} else {
			return inClassId==(int)0x6c6873cd;
		}
	} else {
		return inClassId==(int)0x76789974;
	}
}

 ::haxe::ui::util::VariantType StepBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_71ca7078c630bf2a_54_get)
HXLINE(  55)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  56)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(step->get_step());
            	}


void StepBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_71ca7078c630bf2a_59_set)
HXLINE(  60)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  61)		step->set_step(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value)) ));
            	}



hx::ObjectPtr< StepBehaviour_obj > StepBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< StepBehaviour_obj > __this = new StepBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< StepBehaviour_obj > StepBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	StepBehaviour_obj *__this = (StepBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StepBehaviour_obj), true, "haxe.ui.components._NumberStepper.StepBehaviour"));
	*(void **)__this = StepBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

StepBehaviour_obj::StepBehaviour_obj()
{
}

hx::Val StepBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StepBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StepBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String StepBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

hx::Class StepBehaviour_obj::__mClass;

void StepBehaviour_obj::__register()
{
	StepBehaviour_obj _hx_dummy;
	StepBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.StepBehaviour",f2,30,b7,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StepBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StepBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StepBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StepBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper
