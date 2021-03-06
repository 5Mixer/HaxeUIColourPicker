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
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <hxinc/haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuCheckBox_SelectedBehaviour
#include <hxinc/haxe/ui/containers/menus/_MenuCheckBox/SelectedBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2117ebfac4376b79_44_new,"haxe.ui.containers.menus._MenuCheckBox.SelectedBehaviour","new",0x512eef23,"haxe.ui.containers.menus._MenuCheckBox.SelectedBehaviour.new","haxe/ui/containers/menus/MenuCheckBox.hx",44,0x8c3cb656)
HX_LOCAL_STACK_FRAME(_hx_pos_2117ebfac4376b79_45_validateData,"haxe.ui.containers.menus._MenuCheckBox.SelectedBehaviour","validateData",0x04edc6bd,"haxe.ui.containers.menus._MenuCheckBox.SelectedBehaviour.validateData","haxe/ui/containers/menus/MenuCheckBox.hx",45,0x8c3cb656)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuCheckBox{

void SelectedBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2117ebfac4376b79_44_new)
HXDLIN(  44)		super::__construct(component);
            	}

Dynamic SelectedBehaviour_obj::__CreateEmpty() { return new SelectedBehaviour_obj; }

void *SelectedBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SelectedBehaviour_obj > _hx_result = new SelectedBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x6c6873cd || inClassId==(int)0x6f6644c5;
	}
}

void SelectedBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_2117ebfac4376b79_45_validateData)
HXLINE(  46)		 ::haxe::ui::components::CheckBox checkbox = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::CheckBox >(),false,null()).StaticCast<  ::haxe::ui::components::CheckBox >();
HXLINE(  47)		if (hx::IsNull( checkbox )) {
HXLINE(  48)			checkbox =  ::haxe::ui::components::CheckBox_obj::__alloc( HX_CTX );
HXLINE(  49)			checkbox->set_styleNames(HX_("menuitem-checkbox",fe,2a,b2,34));
HXLINE(  50)			checkbox->scriptAccess = false;
HXLINE(  51)			this->_component->addComponent(checkbox);
            		}
HXLINE(  54)		checkbox->set_selected(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            	}



hx::ObjectPtr< SelectedBehaviour_obj > SelectedBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< SelectedBehaviour_obj > __this = new SelectedBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< SelectedBehaviour_obj > SelectedBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedBehaviour_obj *__this = (SelectedBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SelectedBehaviour_obj), true, "haxe.ui.containers.menus._MenuCheckBox.SelectedBehaviour"));
	*(void **)__this = SelectedBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedBehaviour_obj::SelectedBehaviour_obj()
{
}

hx::Val SelectedBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SelectedBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SelectedBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class SelectedBehaviour_obj::__mClass;

void SelectedBehaviour_obj::__register()
{
	SelectedBehaviour_obj _hx_dummy;
	SelectedBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuCheckBox.SelectedBehaviour",b1,21,62,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SelectedBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SelectedBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuCheckBox
