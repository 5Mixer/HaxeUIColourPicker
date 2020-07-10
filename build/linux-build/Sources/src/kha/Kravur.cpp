// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <hxinc/haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <hxinc/kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_KravurImage
#include <hxinc/kha/KravurImage.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_StbTruetype
#include <hxinc/kha/graphics2/truetype/StbTruetype.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#include <hxinc/kha/graphics2/truetype/Stbtt_bakedchar.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#include <hxinc/kha/graphics2/truetype/Stbtt_fontinfo.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_temp_font_v_metrics
#include <hxinc/kha/graphics2/truetype/Stbtt_temp_font_v_metrics.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_865862c4e1864848_127_new,"kha.Kravur","new",0x6ca37955,"kha.Kravur.new","kha/Kravur.hx",127,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_145__get,"kha.Kravur","_get",0x987df302,"kha.Kravur._get","kha/Kravur.hx",145,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_205_height,"kha.Kravur","height",0x9f26a612,"kha.Kravur.height","kha/Kravur.hx",205,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_209_width,"kha.Kravur","width",0xa8a6463b,"kha.Kravur.width","kha/Kravur.hx",209,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_213_widthOfCharacters,"kha.Kravur","widthOfCharacters",0xae851f7c,"kha.Kravur.widthOfCharacters","kha/Kravur.hx",213,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_217_baseline,"kha.Kravur","baseline",0x90869b70,"kha.Kravur.baseline","kha/Kravur.hx",217,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_221_setFontIndex,"kha.Kravur","setFontIndex",0x86000f2c,"kha.Kravur.setFontIndex","kha/Kravur.hx",221,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_224_unload,"kha.Kravur","unload",0x02673f2a,"kha.Kravur.unload","kha/Kravur.hx",224,0xdd7a3f9a)
HX_LOCAL_STACK_FRAME(_hx_pos_865862c4e1864848_142_fromBytes,"kha.Kravur","fromBytes",0x65a94156,"kha.Kravur.fromBytes","kha/Kravur.hx",142,0xdd7a3f9a)
namespace kha{

void Kravur_obj::__construct( ::kha::internal::BytesBlob blob,hx::Null< int >  __o_fontIndex){
            		int fontIndex = __o_fontIndex.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_127_new)
HXLINE( 133)		this->_hx_set_images(HX_CTX,  ::haxe::ds::IntMap_obj::__alloc( HX_CTX ));
HXLINE( 137)		this->_hx_set_blob(HX_CTX, blob);
HXLINE( 138)		this->fontIndex = fontIndex;
            	}

Dynamic Kravur_obj::__CreateEmpty() { return new Kravur_obj; }

void *Kravur_obj::_hx_vtable = 0;

Dynamic Kravur_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Kravur_obj > _hx_result = new Kravur_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Kravur_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ae4e6bd;
}

static ::kha::Resource_obj _hx_kha_Kravur__hx_kha_Resource= {
	( void (hx::Object::*)())&::kha::Kravur_obj::unload,
};

void *Kravur_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf962acd2: return &_hx_kha_Kravur__hx_kha_Resource;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::kha::KravurImage Kravur_obj::_get(int fontSize){
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_145__get)
HXLINE( 146)		::Array< int > glyphs = ::kha::graphics2::Graphics_obj::fontGlyphs;
HXLINE( 148)		if (hx::IsNotEq( glyphs,this->oldGlyphs )) {
HXLINE( 149)			this->_hx_set_oldGlyphs(HX_CTX, glyphs);
HXLINE( 151)			::kha::KravurImage_obj::charBlocks = ::Array_obj< int >::__new(1)->init(0,glyphs->__get(0));
HXLINE( 152)			int nextChar = (::kha::KravurImage_obj::charBlocks->__get(0) + 1);
HXLINE( 153)			{
HXLINE( 153)				int _g = 1;
HXDLIN( 153)				int _g1 = glyphs->length;
HXDLIN( 153)				while((_g < _g1)){
HXLINE( 153)					_g = (_g + 1);
HXDLIN( 153)					int i = (_g - 1);
HXLINE( 154)					if ((glyphs->__get(i) != nextChar)) {
HXLINE( 155)						::kha::KravurImage_obj::charBlocks->push(glyphs->__get((i - 1)));
HXLINE( 156)						::kha::KravurImage_obj::charBlocks->push(glyphs->__get(i));
HXLINE( 157)						nextChar = (glyphs->__get(i) + 1);
            					}
            					else {
HXLINE( 158)						nextChar = (nextChar + 1);
            					}
            				}
            			}
HXLINE( 160)			::kha::KravurImage_obj::charBlocks->push(glyphs->__get((glyphs->length - 1)));
            		}
HXLINE( 163)		int imageIndex = (((this->fontIndex * 10000000) + (fontSize * 10000)) + glyphs->length);
HXLINE( 164)		if (!(this->images->exists(imageIndex))) {
HXLINE( 165)			int width = 64;
HXLINE( 166)			int height = 32;
HXLINE( 167)			::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new(glyphs->length);
HXDLIN( 167)			::Array< ::Dynamic> baked = this1;
HXLINE( 168)			{
HXLINE( 168)				int _g2 = 0;
HXDLIN( 168)				int _g11 = baked->length;
HXDLIN( 168)				while((_g2 < _g11)){
HXLINE( 168)					_g2 = (_g2 + 1);
HXDLIN( 168)					int i1 = (_g2 - 1);
HXLINE( 169)					{
HXLINE( 169)						 ::kha::graphics2::truetype::Stbtt_bakedchar val =  ::kha::graphics2::truetype::Stbtt_bakedchar_obj::__alloc( HX_CTX );
HXDLIN( 169)						baked->__unsafe_set(i1,val);
            					}
            				}
            			}
HXLINE( 172)			 ::kha::internal::BytesBlob pixels = null();
HXLINE( 174)			int offset = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetFontOffsetForIndex(this->blob,this->fontIndex);
HXLINE( 175)			if ((offset == -1)) {
HXLINE( 176)				offset = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetFontOffsetForIndex(this->blob,0);
            			}
HXLINE( 178)			int status = -1;
HXLINE( 179)			while((status <= 0)){
HXLINE( 180)				if ((height < width)) {
HXLINE( 180)					height = (height * 2);
            				}
            				else {
HXLINE( 181)					width = (width * 2);
            				}
HXLINE( 182)				pixels = ::kha::internal::BytesBlob_obj::alloc((width * height));
HXLINE( 183)				status = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_BakeFontBitmap(this->blob,offset,( (Float)(fontSize) ),pixels,width,height,glyphs,baked);
            			}
HXLINE( 188)			 ::kha::graphics2::truetype::Stbtt_fontinfo info =  ::kha::graphics2::truetype::Stbtt_fontinfo_obj::__alloc( HX_CTX );
HXLINE( 189)			::kha::graphics2::truetype::StbTruetype_obj::stbtt_InitFont(info,this->blob,offset);
HXLINE( 191)			 ::kha::graphics2::truetype::Stbtt_temp_font_v_metrics metrics = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_GetFontVMetrics(info);
HXLINE( 192)			Float scale = ::kha::graphics2::truetype::StbTruetype_obj::stbtt_ScaleForPixelHeight(info,( (Float)(fontSize) ));
HXLINE( 193)			int ascent = ::Math_obj::round((( (Float)(metrics->ascent) ) * scale));
HXLINE( 194)			int descent = ::Math_obj::round((( (Float)(metrics->descent) ) * scale));
HXLINE( 195)			int lineGap = ::Math_obj::round((( (Float)(metrics->lineGap) ) * scale));
HXLINE( 197)			 ::kha::KravurImage image =  ::kha::KravurImage_obj::__alloc( HX_CTX ,::Std_obj::_hx_int(( (Float)(fontSize) )),ascent,descent,lineGap,width,height,baked,pixels);
HXLINE( 198)			this->images->set(imageIndex,image);
HXLINE( 199)			return image;
            		}
HXLINE( 201)		return ( ( ::kha::KravurImage)(this->images->get(imageIndex)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,_get,return )

Float Kravur_obj::height(int fontSize){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_205_height)
HXDLIN( 205)		return this->_get(fontSize)->getHeight();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,height,return )

Float Kravur_obj::width(int fontSize,::String str){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_209_width)
HXDLIN( 209)		return this->_get(fontSize)->stringWidth(str);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Kravur_obj,width,return )

Float Kravur_obj::widthOfCharacters(int fontSize,::Array< int > characters,int start,int length){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_213_widthOfCharacters)
HXDLIN( 213)		return this->_get(fontSize)->charactersWidth(characters,start,length);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Kravur_obj,widthOfCharacters,return )

Float Kravur_obj::baseline(int fontSize){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_217_baseline)
HXDLIN( 217)		return this->_get(fontSize)->getBaselinePosition();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,baseline,return )

void Kravur_obj::setFontIndex(int fontIndex){
            	HX_STACKFRAME(&_hx_pos_865862c4e1864848_221_setFontIndex)
HXDLIN( 221)		this->fontIndex = fontIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Kravur_obj,setFontIndex,(void))

void Kravur_obj::unload(){
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_224_unload)
HXLINE( 225)		this->_hx_set_blob(HX_CTX, null());
HXLINE( 226)		this->_hx_set_images(HX_CTX, null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Kravur_obj,unload,(void))

 ::kha::Kravur Kravur_obj::fromBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_fontIndex){
            		int fontIndex = __o_fontIndex.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_865862c4e1864848_142_fromBytes)
HXDLIN( 142)		return  ::kha::Kravur_obj::__alloc( HX_CTX ,::kha::internal::BytesBlob_obj::fromBytes(bytes),fontIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Kravur_obj,fromBytes,return )


hx::ObjectPtr< Kravur_obj > Kravur_obj::__new( ::kha::internal::BytesBlob blob,hx::Null< int >  __o_fontIndex) {
	hx::ObjectPtr< Kravur_obj > __this = new Kravur_obj();
	__this->__construct(blob,__o_fontIndex);
	return __this;
}

hx::ObjectPtr< Kravur_obj > Kravur_obj::__alloc(hx::Ctx *_hx_ctx, ::kha::internal::BytesBlob blob,hx::Null< int >  __o_fontIndex) {
	Kravur_obj *__this = (Kravur_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Kravur_obj), true, "kha.Kravur"));
	*(void **)__this = Kravur_obj::_hx_vtable;
	__this->__construct(blob,__o_fontIndex);
	return __this;
}

Kravur_obj::Kravur_obj()
{
}

void Kravur_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Kravur);
	HX_MARK_MEMBER_NAME(oldGlyphs,"oldGlyphs");
	HX_MARK_MEMBER_NAME(blob,"blob");
	HX_MARK_MEMBER_NAME(images,"images");
	HX_MARK_MEMBER_NAME(fontIndex,"fontIndex");
	HX_MARK_END_CLASS();
}

void Kravur_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(oldGlyphs,"oldGlyphs");
	HX_VISIT_MEMBER_NAME(blob,"blob");
	HX_VISIT_MEMBER_NAME(images,"images");
	HX_VISIT_MEMBER_NAME(fontIndex,"fontIndex");
}

hx::Val Kravur_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blob") ) { return hx::Val( blob ); }
		if (HX_FIELD_EQ(inName,"_get") ) { return hx::Val( _get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { return hx::Val( images ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"baseline") ) { return hx::Val( baseline_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldGlyphs") ) { return hx::Val( oldGlyphs ); }
		if (HX_FIELD_EQ(inName,"fontIndex") ) { return hx::Val( fontIndex ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFontIndex") ) { return hx::Val( setFontIndex_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"widthOfCharacters") ) { return hx::Val( widthOfCharacters_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Kravur_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

hx::Val Kravur_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"blob") ) { _hx_set_blob(HX_CTX_GET,inValue.Cast<  ::kha::internal::BytesBlob >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { _hx_set_images(HX_CTX_GET,inValue.Cast<  ::haxe::ds::IntMap >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"oldGlyphs") ) { _hx_set_oldGlyphs(HX_CTX_GET,inValue.Cast< ::Array< int > >()); return inValue; }
		if (HX_FIELD_EQ(inName,"fontIndex") ) { fontIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Kravur_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("oldGlyphs",4e,7d,44,b9));
	outFields->push(HX_("blob",5d,3d,19,41));
	outFields->push(HX_("images",b8,50,92,fe));
	outFields->push(HX_("fontIndex",c3,3e,f0,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Kravur_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(Kravur_obj,oldGlyphs),HX_("oldGlyphs",4e,7d,44,b9)},
	{hx::fsObject /*  ::kha::internal::BytesBlob */ ,(int)offsetof(Kravur_obj,blob),HX_("blob",5d,3d,19,41)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(Kravur_obj,images),HX_("images",b8,50,92,fe)},
	{hx::fsInt,(int)offsetof(Kravur_obj,fontIndex),HX_("fontIndex",c3,3e,f0,69)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Kravur_obj_sStaticStorageInfo = 0;
#endif

static ::String Kravur_obj_sMemberFields[] = {
	HX_("oldGlyphs",4e,7d,44,b9),
	HX_("blob",5d,3d,19,41),
	HX_("images",b8,50,92,fe),
	HX_("fontIndex",c3,3e,f0,69),
	HX_("_get",97,c5,19,3f),
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("widthOfCharacters",c7,93,4f,40),
	HX_("baseline",85,dc,27,11),
	HX_("setFontIndex",c1,fe,3f,8e),
	HX_("unload",ff,a0,8c,65),
	::String(null()) };

hx::Class Kravur_obj::__mClass;

static ::String Kravur_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void Kravur_obj::__register()
{
	Kravur_obj _hx_dummy;
	Kravur_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.Kravur",e3,2a,15,17);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Kravur_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Kravur_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Kravur_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Kravur_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Kravur_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Kravur_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
