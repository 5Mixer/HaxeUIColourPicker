// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Value
#include <hxinc/haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#include <hxinc/haxe/ui/styles/elements/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <hxinc/haxe/ui/styles/elements/Directive.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cc416496d2e87bfa_10_new,"haxe.ui.styles.elements.AnimationKeyFrame","new",0x60953407,"haxe.ui.styles.elements.AnimationKeyFrame.new","haxe/ui/styles/elements/AnimationKeyFrame.hx",10,0x930c97c9)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void AnimationKeyFrame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cc416496d2e87bfa_10_new)
            	}

Dynamic AnimationKeyFrame_obj::__CreateEmpty() { return new AnimationKeyFrame_obj; }

void *AnimationKeyFrame_obj::_hx_vtable = 0;

Dynamic AnimationKeyFrame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AnimationKeyFrame_obj > _hx_result = new AnimationKeyFrame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnimationKeyFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x468e5d57;
}


AnimationKeyFrame_obj::AnimationKeyFrame_obj()
{
}

void AnimationKeyFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationKeyFrame);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(directives,"directives");
	HX_MARK_END_CLASS();
}

void AnimationKeyFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(directives,"directives");
}

hx::Val AnimationKeyFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { return hx::Val( directives ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AnimationKeyFrame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { _hx_set_time(HX_CTX_GET,inValue.Cast<  ::haxe::ui::styles::Value >()); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { _hx_set_directives(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationKeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("directives",44,dd,1a,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AnimationKeyFrame_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::styles::Value */ ,(int)offsetof(AnimationKeyFrame_obj,time),HX_("time",0d,cc,fc,4c)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(AnimationKeyFrame_obj,directives),HX_("directives",44,dd,1a,28)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AnimationKeyFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String AnimationKeyFrame_obj_sMemberFields[] = {
	HX_("time",0d,cc,fc,4c),
	HX_("directives",44,dd,1a,28),
	::String(null()) };

hx::Class AnimationKeyFrame_obj::__mClass;

void AnimationKeyFrame_obj::__register()
{
	AnimationKeyFrame_obj _hx_dummy;
	AnimationKeyFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.AnimationKeyFrame",95,24,c3,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AnimationKeyFrame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationKeyFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationKeyFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationKeyFrame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements