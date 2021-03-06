// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__buf
#include <hxinc/kha/graphics2/truetype/Stbtt__buf.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#include <hxinc/kha/graphics2/truetype/Stbtt_fontinfo.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad5d07f812e15772_124_new,"kha.graphics2.truetype.Stbtt_fontinfo","new",0xce315f22,"kha.graphics2.truetype.Stbtt_fontinfo.new","kha/graphics2/truetype/StbTruetype.hx",124,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt_fontinfo_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ad5d07f812e15772_124_new)
            	}

Dynamic Stbtt_fontinfo_obj::__CreateEmpty() { return new Stbtt_fontinfo_obj; }

void *Stbtt_fontinfo_obj::_hx_vtable = 0;

Dynamic Stbtt_fontinfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt_fontinfo_obj > _hx_result = new Stbtt_fontinfo_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt_fontinfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36f9d3a6;
}


Stbtt_fontinfo_obj::Stbtt_fontinfo_obj()
{
}

void Stbtt_fontinfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt_fontinfo);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(fontstart,"fontstart");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(loca,"loca");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(glyf,"glyf");
	HX_MARK_MEMBER_NAME(hhea,"hhea");
	HX_MARK_MEMBER_NAME(hmtx,"hmtx");
	HX_MARK_MEMBER_NAME(kern,"kern");
	HX_MARK_MEMBER_NAME(gpos,"gpos");
	HX_MARK_MEMBER_NAME(index_map,"index_map");
	HX_MARK_MEMBER_NAME(indexToLocFormat,"indexToLocFormat");
	HX_MARK_MEMBER_NAME(cff,"cff");
	HX_MARK_MEMBER_NAME(charstrings,"charstrings");
	HX_MARK_MEMBER_NAME(gsubrs,"gsubrs");
	HX_MARK_MEMBER_NAME(subrs,"subrs");
	HX_MARK_MEMBER_NAME(fontdicts,"fontdicts");
	HX_MARK_MEMBER_NAME(fdselect,"fdselect");
	HX_MARK_END_CLASS();
}

void Stbtt_fontinfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(fontstart,"fontstart");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(loca,"loca");
	HX_VISIT_MEMBER_NAME(head,"head");
	HX_VISIT_MEMBER_NAME(glyf,"glyf");
	HX_VISIT_MEMBER_NAME(hhea,"hhea");
	HX_VISIT_MEMBER_NAME(hmtx,"hmtx");
	HX_VISIT_MEMBER_NAME(kern,"kern");
	HX_VISIT_MEMBER_NAME(gpos,"gpos");
	HX_VISIT_MEMBER_NAME(index_map,"index_map");
	HX_VISIT_MEMBER_NAME(indexToLocFormat,"indexToLocFormat");
	HX_VISIT_MEMBER_NAME(cff,"cff");
	HX_VISIT_MEMBER_NAME(charstrings,"charstrings");
	HX_VISIT_MEMBER_NAME(gsubrs,"gsubrs");
	HX_VISIT_MEMBER_NAME(subrs,"subrs");
	HX_VISIT_MEMBER_NAME(fontdicts,"fontdicts");
	HX_VISIT_MEMBER_NAME(fdselect,"fdselect");
}

hx::Val Stbtt_fontinfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cff") ) { return hx::Val( cff ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"loca") ) { return hx::Val( loca ); }
		if (HX_FIELD_EQ(inName,"head") ) { return hx::Val( head ); }
		if (HX_FIELD_EQ(inName,"glyf") ) { return hx::Val( glyf ); }
		if (HX_FIELD_EQ(inName,"hhea") ) { return hx::Val( hhea ); }
		if (HX_FIELD_EQ(inName,"hmtx") ) { return hx::Val( hmtx ); }
		if (HX_FIELD_EQ(inName,"kern") ) { return hx::Val( kern ); }
		if (HX_FIELD_EQ(inName,"gpos") ) { return hx::Val( gpos ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"subrs") ) { return hx::Val( subrs ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gsubrs") ) { return hx::Val( gsubrs ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fdselect") ) { return hx::Val( fdselect ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontstart") ) { return hx::Val( fontstart ); }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return hx::Val( numGlyphs ); }
		if (HX_FIELD_EQ(inName,"index_map") ) { return hx::Val( index_map ); }
		if (HX_FIELD_EQ(inName,"fontdicts") ) { return hx::Val( fontdicts ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charstrings") ) { return hx::Val( charstrings ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexToLocFormat") ) { return hx::Val( indexToLocFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt_fontinfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cff") ) { _hx_set_cff(HX_CTX_GET,inValue.Cast<  ::kha::graphics2::truetype::Stbtt__buf >()); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { _hx_set_data(HX_CTX_GET,inValue.Cast<  ::kha::internal::BytesBlob >()); return inValue; }
		if (HX_FIELD_EQ(inName,"loca") ) { loca=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glyf") ) { glyf=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hhea") ) { hhea=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hmtx") ) { hmtx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kern") ) { kern=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gpos") ) { gpos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"subrs") ) { _hx_set_subrs(HX_CTX_GET,inValue.Cast<  ::kha::graphics2::truetype::Stbtt__buf >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"gsubrs") ) { _hx_set_gsubrs(HX_CTX_GET,inValue.Cast<  ::kha::graphics2::truetype::Stbtt__buf >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fdselect") ) { _hx_set_fdselect(HX_CTX_GET,inValue.Cast<  ::kha::graphics2::truetype::Stbtt__buf >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontstart") ) { fontstart=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index_map") ) { index_map=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontdicts") ) { _hx_set_fontdicts(HX_CTX_GET,inValue.Cast<  ::kha::graphics2::truetype::Stbtt__buf >()); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"charstrings") ) { _hx_set_charstrings(HX_CTX_GET,inValue.Cast<  ::kha::graphics2::truetype::Stbtt__buf >()); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"indexToLocFormat") ) { indexToLocFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt_fontinfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("fontstart",33,a8,b9,9c));
	outFields->push(HX_("numGlyphs",2d,44,5a,5f));
	outFields->push(HX_("loca",e1,9b,b7,47));
	outFields->push(HX_("head",20,29,0b,45));
	outFields->push(HX_("glyf",32,57,67,44));
	outFields->push(HX_("hhea",5c,73,0d,45));
	outFields->push(HX_("hmtx",c9,4b,11,45));
	outFields->push(HX_("kern",d6,db,06,47));
	outFields->push(HX_("gpos",8d,57,6a,44));
	outFields->push(HX_("index_map",af,db,52,10));
	outFields->push(HX_("indexToLocFormat",ea,bc,00,76));
	outFields->push(HX_("cff",63,78,4b,00));
	outFields->push(HX_("charstrings",6c,56,27,53));
	outFields->push(HX_("gsubrs",7a,97,77,b3));
	outFields->push(HX_("subrs",41,6d,b5,84));
	outFields->push(HX_("fontdicts",0e,22,73,f2));
	outFields->push(HX_("fdselect",ba,f6,ae,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt_fontinfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(Stbtt_fontinfo_obj,data),HX_("data",2a,56,63,42)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,fontstart),HX_("fontstart",33,a8,b9,9c)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,numGlyphs),HX_("numGlyphs",2d,44,5a,5f)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,loca),HX_("loca",e1,9b,b7,47)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,head),HX_("head",20,29,0b,45)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,glyf),HX_("glyf",32,57,67,44)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,hhea),HX_("hhea",5c,73,0d,45)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,hmtx),HX_("hmtx",c9,4b,11,45)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,kern),HX_("kern",d6,db,06,47)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,gpos),HX_("gpos",8d,57,6a,44)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,index_map),HX_("index_map",af,db,52,10)},
	{hx::fsInt,(int)offsetof(Stbtt_fontinfo_obj,indexToLocFormat),HX_("indexToLocFormat",ea,bc,00,76)},
	{hx::fsObject /*  ::kha::graphics2::truetype::Stbtt__buf */ ,(int)offsetof(Stbtt_fontinfo_obj,cff),HX_("cff",63,78,4b,00)},
	{hx::fsObject /*  ::kha::graphics2::truetype::Stbtt__buf */ ,(int)offsetof(Stbtt_fontinfo_obj,charstrings),HX_("charstrings",6c,56,27,53)},
	{hx::fsObject /*  ::kha::graphics2::truetype::Stbtt__buf */ ,(int)offsetof(Stbtt_fontinfo_obj,gsubrs),HX_("gsubrs",7a,97,77,b3)},
	{hx::fsObject /*  ::kha::graphics2::truetype::Stbtt__buf */ ,(int)offsetof(Stbtt_fontinfo_obj,subrs),HX_("subrs",41,6d,b5,84)},
	{hx::fsObject /*  ::kha::graphics2::truetype::Stbtt__buf */ ,(int)offsetof(Stbtt_fontinfo_obj,fontdicts),HX_("fontdicts",0e,22,73,f2)},
	{hx::fsObject /*  ::kha::graphics2::truetype::Stbtt__buf */ ,(int)offsetof(Stbtt_fontinfo_obj,fdselect),HX_("fdselect",ba,f6,ae,72)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt_fontinfo_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt_fontinfo_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("fontstart",33,a8,b9,9c),
	HX_("numGlyphs",2d,44,5a,5f),
	HX_("loca",e1,9b,b7,47),
	HX_("head",20,29,0b,45),
	HX_("glyf",32,57,67,44),
	HX_("hhea",5c,73,0d,45),
	HX_("hmtx",c9,4b,11,45),
	HX_("kern",d6,db,06,47),
	HX_("gpos",8d,57,6a,44),
	HX_("index_map",af,db,52,10),
	HX_("indexToLocFormat",ea,bc,00,76),
	HX_("cff",63,78,4b,00),
	HX_("charstrings",6c,56,27,53),
	HX_("gsubrs",7a,97,77,b3),
	HX_("subrs",41,6d,b5,84),
	HX_("fontdicts",0e,22,73,f2),
	HX_("fdselect",ba,f6,ae,72),
	::String(null()) };

hx::Class Stbtt_fontinfo_obj::__mClass;

void Stbtt_fontinfo_obj::__register()
{
	Stbtt_fontinfo_obj _hx_dummy;
	Stbtt_fontinfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics2.truetype.Stbtt_fontinfo",30,e6,ce,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt_fontinfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt_fontinfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt_fontinfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt_fontinfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
