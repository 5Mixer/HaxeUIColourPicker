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
#ifndef INCLUDED_haxe_ui_components_Image
#include <hxinc/haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__CheckBox_CheckBoxLayout
#include <hxinc/haxe/ui/components/_CheckBox/CheckBoxLayout.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <hxinc/haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <hxinc/haxe/ui/layouts/HorizontalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f436fda044ebfe43_213_new,"haxe.ui.components._CheckBox.CheckBoxLayout","new",0x644d3991,"haxe.ui.components._CheckBox.CheckBoxLayout.new","haxe/ui/components/CheckBox.hx",213,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_f436fda044ebfe43_214_repositionChildren,"haxe.ui.components._CheckBox.CheckBoxLayout","repositionChildren",0x7a0396aa,"haxe.ui.components._CheckBox.CheckBoxLayout.repositionChildren","haxe/ui/components/CheckBox.hx",214,0xaeb3e5d4)
namespace haxe{
namespace ui{
namespace components{
namespace _CheckBox{

void CheckBoxLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f436fda044ebfe43_213_new)
HXDLIN( 213)		super::__construct();
            	}

Dynamic CheckBoxLayout_obj::__CreateEmpty() { return new CheckBoxLayout_obj; }

void *CheckBoxLayout_obj::_hx_vtable = 0;

Dynamic CheckBoxLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBoxLayout_obj > _hx_result = new CheckBoxLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBoxLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x232229d5) {
		if (inClassId<=(int)0x0b6561df) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6561df;
		} else {
			return inClassId==(int)0x232229d5;
		}
	} else {
		return inClassId==(int)0x548a03f5 || inClassId==(int)0x652c3c60;
	}
}

void CheckBoxLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_f436fda044ebfe43_214_repositionChildren)
HXLINE( 215)		this->super::repositionChildren();
HXLINE( 217)		 ::haxe::ui::components::Image icon = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),true,null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 218)		if (hx::IsNotNull( icon )) {
HXLINE( 219)			icon->set_left(::Math_obj::fround(( (Float)(icon->get_left()) )));
HXLINE( 220)			icon->set_top(::Math_obj::fround(( (Float)(icon->get_top()) )));
            		}
            	}



hx::ObjectPtr< CheckBoxLayout_obj > CheckBoxLayout_obj::__new() {
	hx::ObjectPtr< CheckBoxLayout_obj > __this = new CheckBoxLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CheckBoxLayout_obj > CheckBoxLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	CheckBoxLayout_obj *__this = (CheckBoxLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxLayout_obj), true, "haxe.ui.components._CheckBox.CheckBoxLayout"));
	*(void **)__this = CheckBoxLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBoxLayout_obj::CheckBoxLayout_obj()
{
}

hx::Val CheckBoxLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CheckBoxLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CheckBoxLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	::String(null()) };

hx::Class CheckBoxLayout_obj::__mClass;

void CheckBoxLayout_obj::__register()
{
	CheckBoxLayout_obj _hx_dummy;
	CheckBoxLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._CheckBox.CheckBoxLayout",1f,1d,d3,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBoxLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBoxLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _CheckBox
