// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_themes_Theme
#include <hxinc/haxe/ui/themes/Theme.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78d817c3c3f18acf_8_new,"haxe.ui.themes.Theme","new",0x53240349,"haxe.ui.themes.Theme.new","haxe/ui/themes/Theme.hx",8,0x61905ea8)
namespace haxe{
namespace ui{
namespace themes{

void Theme_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_78d817c3c3f18acf_8_new)
HXDLIN(   8)		this->_hx_set_styles(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
            	}

Dynamic Theme_obj::__CreateEmpty() { return new Theme_obj; }

void *Theme_obj::_hx_vtable = 0;

Dynamic Theme_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Theme_obj > _hx_result = new Theme_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Theme_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e97ac9d;
}


Theme_obj::Theme_obj()
{
}

void Theme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(styles,"styles");
	HX_MARK_END_CLASS();
}

void Theme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(styles,"styles");
}

hx::Val Theme_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"styles") ) { return hx::Val( styles ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Theme_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { _hx_set_parent(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		if (HX_FIELD_EQ(inName,"styles") ) { _hx_set_styles(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("styles",22,e6,d2,15));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Theme_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Theme_obj,parent),HX_("parent",2a,05,7e,ed)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Theme_obj,styles),HX_("styles",22,e6,d2,15)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Theme_obj_sStaticStorageInfo = 0;
#endif

static ::String Theme_obj_sMemberFields[] = {
	HX_("parent",2a,05,7e,ed),
	HX_("styles",22,e6,d2,15),
	::String(null()) };

hx::Class Theme_obj::__mClass;

void Theme_obj::__register()
{
	Theme_obj _hx_dummy;
	Theme_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.themes.Theme",d7,aa,a4,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Theme_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Theme_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Theme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Theme_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace themes