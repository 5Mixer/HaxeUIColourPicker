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
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <hxinc/haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#include <hxinc/haxe/ui/components/CheckBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxBuilder
#include <hxinc/haxe/ui/components/OptionBoxBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <hxinc/haxe/ui/core/CompositeBuilder.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bce5fa2e00c9db93_104_new,"haxe.ui.components.OptionBoxBuilder","new",0xd07dd33d,"haxe.ui.components.OptionBoxBuilder.new","haxe/ui/components/OptionBox.hx",104,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_bce5fa2e00c9db93_106_get_cssName,"haxe.ui.components.OptionBoxBuilder","get_cssName",0x0822c7a2,"haxe.ui.components.OptionBoxBuilder.get_cssName","haxe/ui/components/OptionBox.hx",106,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{

void OptionBoxBuilder_obj::__construct( ::haxe::ui::components::CheckBox checkbox){
            	HX_STACKFRAME(&_hx_pos_bce5fa2e00c9db93_104_new)
HXDLIN( 104)		super::__construct(checkbox);
            	}

Dynamic OptionBoxBuilder_obj::__CreateEmpty() { return new OptionBoxBuilder_obj; }

void *OptionBoxBuilder_obj::_hx_vtable = 0;

Dynamic OptionBoxBuilder_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OptionBoxBuilder_obj > _hx_result = new OptionBoxBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionBoxBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6fc7eb95) {
		if (inClassId<=(int)0x09e8ff48) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x09e8ff48;
		} else {
			return inClassId==(int)0x6fc7eb95;
		}
	} else {
		return inClassId==(int)0x7f9f6a15;
	}
}

::String OptionBoxBuilder_obj::get_cssName(){
            	HX_STACKFRAME(&_hx_pos_bce5fa2e00c9db93_106_get_cssName)
HXDLIN( 106)		return HX_("optionbox",b6,c1,6b,82);
            	}



hx::ObjectPtr< OptionBoxBuilder_obj > OptionBoxBuilder_obj::__new( ::haxe::ui::components::CheckBox checkbox) {
	hx::ObjectPtr< OptionBoxBuilder_obj > __this = new OptionBoxBuilder_obj();
	__this->__construct(checkbox);
	return __this;
}

hx::ObjectPtr< OptionBoxBuilder_obj > OptionBoxBuilder_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::components::CheckBox checkbox) {
	OptionBoxBuilder_obj *__this = (OptionBoxBuilder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OptionBoxBuilder_obj), true, "haxe.ui.components.OptionBoxBuilder"));
	*(void **)__this = OptionBoxBuilder_obj::_hx_vtable;
	__this->__construct(checkbox);
	return __this;
}

OptionBoxBuilder_obj::OptionBoxBuilder_obj()
{
}

hx::Val OptionBoxBuilder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"get_cssName") ) { return hx::Val( get_cssName_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *OptionBoxBuilder_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *OptionBoxBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionBoxBuilder_obj_sMemberFields[] = {
	HX_("get_cssName",c5,1f,bf,00),
	::String(null()) };

hx::Class OptionBoxBuilder_obj::__mClass;

void OptionBoxBuilder_obj::__register()
{
	OptionBoxBuilder_obj _hx_dummy;
	OptionBoxBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.OptionBoxBuilder",cb,70,72,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OptionBoxBuilder_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBoxBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBoxBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBoxBuilder_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components