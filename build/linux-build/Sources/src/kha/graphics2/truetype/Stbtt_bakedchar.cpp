// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#include <hxinc/kha/graphics2/truetype/Stbtt_bakedchar.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9be8653c209e72e_57_new,"kha.graphics2.truetype.Stbtt_bakedchar","new",0x49d21da0,"kha.graphics2.truetype.Stbtt_bakedchar.new","kha/graphics2/truetype/StbTruetype.hx",57,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_bakedchar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e9be8653c209e72e_57_new)
            	}

Dynamic Stbtt_bakedchar_obj::__CreateEmpty() { return new Stbtt_bakedchar_obj; }

void *Stbtt_bakedchar_obj::_hx_vtable = 0;

Dynamic Stbtt_bakedchar_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt_bakedchar_obj > _hx_result = new Stbtt_bakedchar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_bakedchar_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12b7e778;
}


Stbtt_bakedchar_obj::Stbtt_bakedchar_obj()
{
}

hx::Val Stbtt_bakedchar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return hx::Val( x0 ); }
		if (HX_FIELD_EQ(inName,"y0") ) { return hx::Val( y0 ); }
		if (HX_FIELD_EQ(inName,"x1") ) { return hx::Val( x1 ); }
		if (HX_FIELD_EQ(inName,"y1") ) { return hx::Val( y1 ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { return hx::Val( xoff ); }
		if (HX_FIELD_EQ(inName,"yoff") ) { return hx::Val( yoff ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return hx::Val( xadvance ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt_bakedchar_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xoff") ) { xoff=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoff") ) { yoff=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_bakedchar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x0",b8,68,00,00));
	outFields->push(HX_("y0",97,69,00,00));
	outFields->push(HX_("x1",b9,68,00,00));
	outFields->push(HX_("y1",98,69,00,00));
	outFields->push(HX_("xoff",f7,2d,a6,4f));
	outFields->push(HX_("yoff",96,64,4f,50));
	outFields->push(HX_("xadvance",0a,87,b1,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt_bakedchar_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt_bakedchar_obj,x0),HX_("x0",b8,68,00,00)},
	{hx::fsInt,(int)offsetof(Stbtt_bakedchar_obj,y0),HX_("y0",97,69,00,00)},
	{hx::fsInt,(int)offsetof(Stbtt_bakedchar_obj,x1),HX_("x1",b9,68,00,00)},
	{hx::fsInt,(int)offsetof(Stbtt_bakedchar_obj,y1),HX_("y1",98,69,00,00)},
	{hx::fsFloat,(int)offsetof(Stbtt_bakedchar_obj,xoff),HX_("xoff",f7,2d,a6,4f)},
	{hx::fsFloat,(int)offsetof(Stbtt_bakedchar_obj,yoff),HX_("yoff",96,64,4f,50)},
	{hx::fsFloat,(int)offsetof(Stbtt_bakedchar_obj,xadvance),HX_("xadvance",0a,87,b1,be)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt_bakedchar_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_bakedchar_obj_sMemberFields[] = {
	HX_("x0",b8,68,00,00),
	HX_("y0",97,69,00,00),
	HX_("x1",b9,68,00,00),
	HX_("y1",98,69,00,00),
	HX_("xoff",f7,2d,a6,4f),
	HX_("yoff",96,64,4f,50),
	HX_("xadvance",0a,87,b1,be),
	::String(null()) };

hx::Class Stbtt_bakedchar_obj::__mClass;

void Stbtt_bakedchar_obj::__register()
{
	Stbtt_bakedchar_obj _hx_dummy;
	Stbtt_bakedchar_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_bakedchar",ae,0d,53,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt_bakedchar_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_bakedchar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_bakedchar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_bakedchar_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
