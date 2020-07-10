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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Stepper
#include <hxinc/haxe/ui/components/Stepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <hxinc/haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_PosBehaviour
#include <hxinc/haxe/ui/components/_NumberStepper/PosBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <hxinc/haxe/ui/util/StringUtil.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_982fc19fbf91f39a_32_new,"haxe.ui.components._NumberStepper.PosBehaviour","new",0x1514267a,"haxe.ui.components._NumberStepper.PosBehaviour.new","haxe/ui/components/NumberStepper.hx",32,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_982fc19fbf91f39a_33_validateData,"haxe.ui.components._NumberStepper.PosBehaviour","validateData",0x75786c86,"haxe.ui.components._NumberStepper.PosBehaviour.validateData","haxe/ui/components/NumberStepper.hx",33,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void PosBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_982fc19fbf91f39a_32_new)
HXDLIN(  32)		super::__construct(component);
            	}

Dynamic PosBehaviour_obj::__CreateEmpty() { return new PosBehaviour_obj; }

void *PosBehaviour_obj::_hx_vtable = 0;

Dynamic PosBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PosBehaviour_obj > _hx_result = new PosBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PosBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x4f91c5e2 || inClassId==(int)0x6c6873cd;
	}
}

void PosBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_982fc19fbf91f39a_33_validateData)
HXLINE(  34)		 ::haxe::ui::components::Stepper step = this->_component->findComponent(HX_("stepper-step",48,ff,e2,4c),hx::ClassOf< ::haxe::ui::components::Stepper >(),null(),null()).StaticCast<  ::haxe::ui::components::Stepper >();
HXLINE(  35)		Float preciseValue = ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) );
HXLINE(  36)		if (hx::IsNotNull( step->get_precision() )) {
HXLINE(  37)			int precision = ( (int)(step->get_precision()) );
HXDLIN(  37)			preciseValue = (( (Float)(::Math_obj::round((preciseValue * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
            		}
HXLINE(  40)		 ::Dynamic v = preciseValue;
HXDLIN(  40)		 ::Dynamic min = step->get_min();
HXDLIN(  40)		 ::Dynamic max = step->get_max();
HXDLIN(  40)		bool preciseValue1;
HXDLIN(  40)		if (hx::IsNotNull( v )) {
HXLINE(  40)			preciseValue1 = ::Math_obj::isNaN(( (Float)(v) ));
            		}
            		else {
HXLINE(  40)			preciseValue1 = true;
            		}
HXDLIN(  40)		if (preciseValue1) {
HXLINE(  40)			preciseValue = ( (Float)(min) );
            		}
            		else {
HXLINE(  40)			bool preciseValue2;
HXDLIN(  40)			if (hx::IsNotNull( min )) {
HXLINE(  40)				preciseValue2 = hx::IsLess( v,min );
            			}
            			else {
HXLINE(  40)				preciseValue2 = false;
            			}
HXDLIN(  40)			if (preciseValue2) {
HXLINE(  40)				v = min;
            			}
            			else {
HXLINE(  40)				bool preciseValue3;
HXDLIN(  40)				if (hx::IsNotNull( max )) {
HXLINE(  40)					preciseValue3 = hx::IsGreater( v,max );
            				}
            				else {
HXLINE(  40)					preciseValue3 = false;
            				}
HXDLIN(  40)				if (preciseValue3) {
HXLINE(  40)					v = max;
            				}
            			}
HXDLIN(  40)			preciseValue = ( (Float)(v) );
            		}
HXLINE(  41)		step->set_pos(preciseValue);
HXLINE(  43)		 ::haxe::ui::components::TextField textfield = this->_component->findComponent(HX_("stepper-textfield",71,2b,a8,b3),hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE(  44)		::String value = ::haxe::ui::util::StringUtil_obj::padDecimal(preciseValue,step->get_precision());
HXLINE(  45)		textfield->set_text(value);
HXLINE(  47)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE(  48)		this->_component->dispatch(event);
            	}



hx::ObjectPtr< PosBehaviour_obj > PosBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< PosBehaviour_obj > __this = new PosBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< PosBehaviour_obj > PosBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PosBehaviour_obj *__this = (PosBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PosBehaviour_obj), true, "haxe.ui.components._NumberStepper.PosBehaviour"));
	*(void **)__this = PosBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PosBehaviour_obj::PosBehaviour_obj()
{
}

hx::Val PosBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *PosBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PosBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PosBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class PosBehaviour_obj::__mClass;

void PosBehaviour_obj::__register()
{
	PosBehaviour_obj _hx_dummy;
	PosBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.PosBehaviour",88,21,35,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PosBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PosBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PosBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PosBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper