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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <hxinc/haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Slider
#include <hxinc/haxe/ui/components/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Slider_MinBehaviour
#include <hxinc/haxe/ui/components/_Slider/MinBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8fdedfe6c5955b10_91_new,"haxe.ui.components._Slider.MinBehaviour","new",0x812913b1,"haxe.ui.components._Slider.MinBehaviour.new","haxe/ui/components/Slider.hx",91,0x55cb8456)
HX_LOCAL_STACK_FRAME(_hx_pos_8fdedfe6c5955b10_92_validateData,"haxe.ui.components._Slider.MinBehaviour","validateData",0x27dda06f,"haxe.ui.components._Slider.MinBehaviour.validateData","haxe/ui/components/Slider.hx",92,0x55cb8456)
namespace haxe{
namespace ui{
namespace components{
namespace _Slider{

void MinBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8fdedfe6c5955b10_91_new)
HXDLIN(  91)		super::__construct(component);
            	}

Dynamic MinBehaviour_obj::__CreateEmpty() { return new MinBehaviour_obj; }

void *MinBehaviour_obj::_hx_vtable = 0;

Dynamic MinBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MinBehaviour_obj > _hx_result = new MinBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MinBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x3db3d93b || inClassId==(int)0x6c6873cd;
	}
}

void MinBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_8fdedfe6c5955b10_92_validateData)
HXLINE(  93)		if (hx::IsNull( hx::TCast<  ::haxe::ui::components::Slider >::cast(this->_component)->get_start() )) {
HXLINE(  94)			 ::haxe::ui::components::Range _hx_tmp = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Range >(),null(),null()).StaticCast<  ::haxe::ui::components::Range >();
HXDLIN(  94)			_hx_tmp->set_start(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value));
            		}
HXLINE(  96)		 ::haxe::ui::components::Range _hx_tmp1 = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Range >(),null(),null()).StaticCast<  ::haxe::ui::components::Range >();
HXDLIN(  96)		_hx_tmp1->set_min(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
HXLINE(  97)		{
HXLINE(  97)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  97)			bool _hx_tmp2;
HXDLIN(  97)			if (hx::IsNotNull( _this->_layout )) {
HXLINE(  97)				_hx_tmp2 = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  97)				_hx_tmp2 = true;
            			}
HXDLIN(  97)			if (!(_hx_tmp2)) {
HXLINE(  97)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
            	}



hx::ObjectPtr< MinBehaviour_obj > MinBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< MinBehaviour_obj > __this = new MinBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< MinBehaviour_obj > MinBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MinBehaviour_obj *__this = (MinBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MinBehaviour_obj), true, "haxe.ui.components._Slider.MinBehaviour"));
	*(void **)__this = MinBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MinBehaviour_obj::MinBehaviour_obj()
{
}

hx::Val MinBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *MinBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MinBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String MinBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class MinBehaviour_obj::__mClass;

void MinBehaviour_obj::__register()
{
	MinBehaviour_obj _hx_dummy;
	MinBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Slider.MinBehaviour",3f,67,ef,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MinBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MinBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MinBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MinBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Slider