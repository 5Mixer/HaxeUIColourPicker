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
#ifndef INCLUDED_haxe_ui_components_Range
#include <hxinc/haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Range_RangeEnd
#include <hxinc/haxe/ui/components/_Range/RangeEnd.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c686f1c6835e011d_89_new,"haxe.ui.components._Range.RangeEnd","new",0x97c1e6fa,"haxe.ui.components._Range.RangeEnd.new","haxe/ui/components/Range.hx",89,0x313cba28)
HX_LOCAL_STACK_FRAME(_hx_pos_c686f1c6835e011d_90_validateData,"haxe.ui.components._Range.RangeEnd","validateData",0xb44e9c06,"haxe.ui.components._Range.RangeEnd.validateData","haxe/ui/components/Range.hx",90,0x313cba28)
namespace haxe{
namespace ui{
namespace components{
namespace _Range{

void RangeEnd_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_c686f1c6835e011d_89_new)
HXDLIN(  89)		super::__construct(component);
            	}

Dynamic RangeEnd_obj::__CreateEmpty() { return new RangeEnd_obj; }

void *RangeEnd_obj::_hx_vtable = 0;

Dynamic RangeEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RangeEnd_obj > _hx_result = new RangeEnd_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RangeEnd_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x66611090 || inClassId==(int)0x6c6873cd;
	}
}

void RangeEnd_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_c686f1c6835e011d_90_validateData)
HXLINE(  91)		 ::haxe::ui::components::Range range = hx::TCast<  ::haxe::ui::components::Range >::cast(this->_component);
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (hx::IsNotNull( this->_value )) {
HXLINE(  92)			 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN(  92)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(range->get_min()));
            		}
            		else {
HXLINE(  92)			_hx_tmp = false;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  93)			this->_hx_set__value(HX_CTX, ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(range->get_min()));
            		}
            		else {
HXLINE(  94)			bool _hx_tmp2;
HXDLIN(  94)			if (hx::IsNotNull( this->_value )) {
HXLINE(  94)				 ::haxe::ui::util::VariantType _hx_tmp3 = this->_value;
HXDLIN(  94)				_hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp3,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(range->get_max()));
            			}
            			else {
HXLINE(  94)				_hx_tmp2 = false;
            			}
HXDLIN(  94)			if (_hx_tmp2) {
HXLINE(  95)				this->_hx_set__value(HX_CTX, ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(range->get_max()));
            			}
            		}
HXLINE(  97)		range->set_end(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
HXLINE(  98)		{
HXLINE(  98)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  98)			bool _hx_tmp4;
HXDLIN(  98)			if (hx::IsNotNull( _this->_layout )) {
HXLINE(  98)				_hx_tmp4 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  98)				_hx_tmp4 = true;
            			}
HXDLIN(  98)			if (!(_hx_tmp4)) {
HXLINE(  98)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
HXLINE( 100)		 ::haxe::ui::events::UIEvent changeEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 101)		this->_component->dispatch(changeEvent);
            	}



hx::ObjectPtr< RangeEnd_obj > RangeEnd_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< RangeEnd_obj > __this = new RangeEnd_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< RangeEnd_obj > RangeEnd_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	RangeEnd_obj *__this = (RangeEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RangeEnd_obj), true, "haxe.ui.components._Range.RangeEnd"));
	*(void **)__this = RangeEnd_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

RangeEnd_obj::RangeEnd_obj()
{
}

hx::Val RangeEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *RangeEnd_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RangeEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String RangeEnd_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class RangeEnd_obj::__mClass;

void RangeEnd_obj::__register()
{
	RangeEnd_obj _hx_dummy;
	RangeEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Range.RangeEnd",08,a2,d8,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RangeEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RangeEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RangeEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RangeEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Range
