// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_region
#include <hxinc/kha/graphics2/truetype/Stbtt_temp_region.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ed07173d6a5850b_43_new,"kha.graphics2.truetype.Stbtt_temp_region","new",0xdcdd6e5e,"kha.graphics2.truetype.Stbtt_temp_region.new","kha/graphics2/truetype/StbTruetype.hx",43,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_temp_region_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6ed07173d6a5850b_43_new)
            	}

Dynamic Stbtt_temp_region_obj::__CreateEmpty() { return new Stbtt_temp_region_obj; }

void *Stbtt_temp_region_obj::_hx_vtable = 0;

Dynamic Stbtt_temp_region_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt_temp_region_obj > _hx_result = new Stbtt_temp_region_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_temp_region_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6336c9d2;
}


Stbtt_temp_region_obj::Stbtt_temp_region_obj()
{
}

hx::Val Stbtt_temp_region_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { return hx::Val( xoff ); }
		if (HX_FIELD_EQ(inName,"yoff") ) { return hx::Val( yoff ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt_temp_region_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { xoff=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoff") ) { yoff=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_temp_region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("xoff",f7,2d,a6,4f));
	outFields->push(HX_("yoff",96,64,4f,50));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt_temp_region_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,xoff),HX_("xoff",f7,2d,a6,4f)},
	{hx::fsInt,(int)offsetof(Stbtt_temp_region_obj,yoff),HX_("yoff",96,64,4f,50)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt_temp_region_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_temp_region_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("xoff",f7,2d,a6,4f),
	HX_("yoff",96,64,4f,50),
	::String(null()) };

hx::Class Stbtt_temp_region_obj::__mClass;

void Stbtt_temp_region_obj::__register()
{
	Stbtt_temp_region_obj _hx_dummy;
	Stbtt_temp_region_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_temp_region",6c,a7,7b,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt_temp_region_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_temp_region_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_temp_region_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_temp_region_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
