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
#ifndef INCLUDED_haxe_ui_focus_FocusInfo
#include <hxinc/haxe/ui/focus/FocusInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8939703bfe92536_6_new,"haxe.ui.focus.FocusInfo","new",0xf0315150,"haxe.ui.focus.FocusInfo.new","haxe/ui/focus/FocusManager.hx",6,0xe315a5e0)
namespace haxe{
namespace ui{
namespace focus{

void FocusInfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c8939703bfe92536_6_new)
            	}

Dynamic FocusInfo_obj::__CreateEmpty() { return new FocusInfo_obj; }

void *FocusInfo_obj::_hx_vtable = 0;

Dynamic FocusInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FocusInfo_obj > _hx_result = new FocusInfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FocusInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3dcfb628;
}


FocusInfo_obj::FocusInfo_obj()
{
}

void FocusInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusInfo);
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(currentFocus,"currentFocus");
	HX_MARK_END_CLASS();
}

void FocusInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(currentFocus,"currentFocus");
}

hx::Val FocusInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return hx::Val( view ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFocus") ) { return hx::Val( currentFocus ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FocusInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { _hx_set_view(HX_CTX_GET,inValue.Cast<  ::haxe::ui::core::Component >()); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFocus") ) { _hx_set_currentFocus(HX_CTX_GET,inValue.Cast< ::Dynamic >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("view",65,32,4f,4e));
	outFields->push(HX_("currentFocus",df,44,95,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FocusInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(FocusInfo_obj,view),HX_("view",65,32,4f,4e)},
	{hx::fsObject /* ::Dynamic */ ,(int)offsetof(FocusInfo_obj,currentFocus),HX_("currentFocus",df,44,95,4b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FocusInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusInfo_obj_sMemberFields[] = {
	HX_("view",65,32,4f,4e),
	HX_("currentFocus",df,44,95,4b),
	::String(null()) };

hx::Class FocusInfo_obj::__mClass;

void FocusInfo_obj::__register()
{
	FocusInfo_obj _hx_dummy;
	FocusInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.focus.FocusInfo",5e,a9,c2,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FocusInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FocusInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace focus
