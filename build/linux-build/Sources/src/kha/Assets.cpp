// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <hxinc/StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <hxinc/kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <hxinc/kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_LoaderImpl
#include <hxinc/kha/LoaderImpl.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <hxinc/kha/Sound.h>
#endif
#ifndef INCLUDED_kha_Video
#include <hxinc/kha/Video.h>
#endif
#ifndef INCLUDED_kha__Assets_BlobList
#include <hxinc/kha/_Assets/BlobList.h>
#endif
#ifndef INCLUDED_kha__Assets_FontList
#include <hxinc/kha/_Assets/FontList.h>
#endif
#ifndef INCLUDED_kha__Assets_ImageList
#include <hxinc/kha/_Assets/ImageList.h>
#endif
#ifndef INCLUDED_kha__Assets_SoundList
#include <hxinc/kha/_Assets/SoundList.h>
#endif
#ifndef INCLUDED_kha__Assets_VideoList
#include <hxinc/kha/_Assets/VideoList.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <hxinc/kha/internal/BytesBlob.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_109_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",109,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_122_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",122,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_124_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",124,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_113_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",113,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_116_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",116,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_126_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",126,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_130_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",130,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_136_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",136,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_89_loadEverything,"kha.Assets","loadEverything",0x85f39fda,"kha.Assets.loadEverything","kha/Assets.hx",89,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_165_loadImage,"kha.Assets","loadImage",0xe6c94354,"kha.Assets.loadImage","kha/Assets.hx",165,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_163_loadImage,"kha.Assets","loadImage",0xe6c94354,"kha.Assets.loadImage","kha/Assets.hx",163,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_178_loadImageFromPath,"kha.Assets","loadImageFromPath",0x3f4a27a3,"kha.Assets.loadImageFromPath","kha/Assets.hx",178,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_186_get_imageFormats,"kha.Assets","get_imageFormats",0xb185ddab,"kha.Assets.get_imageFormats","kha/Assets.hx",186,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_191_loadBlob,"kha.Assets","loadBlob",0xeb2f7b84,"kha.Assets.loadBlob","kha/Assets.hx",191,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_189_loadBlob,"kha.Assets","loadBlob",0xeb2f7b84,"kha.Assets.loadBlob","kha/Assets.hx",189,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_197_loadBlobFromPath,"kha.Assets","loadBlobFromPath",0x75ec0fd3,"kha.Assets.loadBlobFromPath","kha/Assets.hx",197,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_204_loadSound,"kha.Assets","loadSound",0xaa2cb0c8,"kha.Assets.loadSound","kha/Assets.hx",204,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_202_loadSound,"kha.Assets","loadSound",0xaa2cb0c8,"kha.Assets.loadSound","kha/Assets.hx",202,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_210_loadSoundFromPath,"kha.Assets","loadSoundFromPath",0xfcc62917,"kha.Assets.loadSoundFromPath","kha/Assets.hx",210,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_218_get_soundFormats,"kha.Assets","get_soundFormats",0xd5f5c6b7,"kha.Assets.get_soundFormats","kha/Assets.hx",218,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_223_loadFont,"kha.Assets","loadFont",0xedd69bf6,"kha.Assets.loadFont","kha/Assets.hx",223,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_221_loadFont,"kha.Assets","loadFont",0xedd69bf6,"kha.Assets.loadFont","kha/Assets.hx",221,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_229_loadFontFromPath,"kha.Assets","loadFontFromPath",0x1433f245,"kha.Assets.loadFontFromPath","kha/Assets.hx",229,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_237_get_fontFormats,"kha.Assets","get_fontFormats",0xc3a68c23,"kha.Assets.get_fontFormats","kha/Assets.hx",237,0x66f27110)
static const ::String _hx_array_data_b6c313ad_29[] = {
	HX_("ttf",e6,6a,58,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_242_loadVideo,"kha.Assets","loadVideo",0x605c3874,"kha.Assets.loadVideo","kha/Assets.hx",242,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_240_loadVideo,"kha.Assets","loadVideo",0x605c3874,"kha.Assets.loadVideo","kha/Assets.hx",240,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_248_loadVideoFromPath,"kha.Assets","loadVideoFromPath",0x02873cc3,"kha.Assets.loadVideoFromPath","kha/Assets.hx",248,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_256_get_videoFormats,"kha.Assets","get_videoFormats",0xdbb9cc8b,"kha.Assets.get_videoFormats","kha/Assets.hx",256,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_260_reporter,"kha.Assets","reporter",0x170a9702,"kha.Assets.reporter","kha/Assets.hx",260,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_64_boot,"kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",64,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_65_boot,"kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",65,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_66_boot,"kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",66,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_67_boot,"kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",67,0x66f27110)
HX_LOCAL_STACK_FRAME(_hx_pos_4e1ab36908a6f223_68_boot,"kha.Assets","boot",0x977fac93,"kha.Assets.boot","kha/Assets.hx",68,0x66f27110)
namespace kha{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7959a1a3;
}

 ::kha::_Assets::ImageList Assets_obj::images;

 ::kha::_Assets::SoundList Assets_obj::sounds;

 ::kha::_Assets::BlobList Assets_obj::blobs;

 ::kha::_Assets::FontList Assets_obj::fonts;

 ::kha::_Assets::VideoList Assets_obj::videos;

Float Assets_obj::progress;

void Assets_obj::loadEverything( ::Dynamic callback, ::Dynamic filter, ::Dynamic uncompressSoundsFilter, ::Dynamic failed){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_5, ::Dynamic,uncompressSoundsFilter) HXARGC(3)
            		void _hx_run( ::Dynamic desc, ::Dynamic done, ::Dynamic failure){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_109_loadEverything)
HXLINE( 110)			::String name = ( (::String)(desc->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE( 111)			 ::Dynamic _hx_switch_0 =  ::Dynamic(desc->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic));
            			if (  (_hx_switch_0==HX_("blob",5d,3d,19,41)) ){
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,done) HXARGC(1)
            				void _hx_run( ::kha::internal::BytesBlob blob){
            					HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_122_loadEverything)
HXLINE( 122)					done();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 122)				::kha::Assets_obj::loadBlob(name, ::Dynamic(new _hx_Closure_0(done)),failure,hx::SourceInfo(HX_("kha/Assets.hx",10,71,f2,66),122,HX_("kha.Assets",ad,13,c3,b6),HX_("loadEverything",39,d4,86,35)));
HXDLIN( 122)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("font",cf,5d,c0,43)) ){
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::Dynamic,done) HXARGC(1)
            				void _hx_run( ::kha::Kravur font){
            					HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_124_loadEverything)
HXLINE( 124)					done();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 124)				::kha::Assets_obj::loadFont(name, ::Dynamic(new _hx_Closure_1(done)),failure,hx::SourceInfo(HX_("kha/Assets.hx",10,71,f2,66),124,HX_("kha.Assets",ad,13,c3,b6),HX_("loadEverything",39,d4,86,35)));
HXDLIN( 124)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2, ::Dynamic,done) HXARGC(1)
            				void _hx_run( ::kha::Image image){
            					HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_113_loadEverything)
HXLINE( 113)					done();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 113)				::kha::Assets_obj::loadImage(name, ::Dynamic(new _hx_Closure_2(done)),failure,hx::SourceInfo(HX_("kha/Assets.hx",10,71,f2,66),113,HX_("kha.Assets",ad,13,c3,b6),HX_("loadEverything",39,d4,86,35)));
HXDLIN( 113)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("sound",cf,8c,cc,80)) ){
            				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_3, ::Dynamic,uncompressSoundsFilter, ::Dynamic,desc, ::Dynamic,done) HXARGC(1)
            				void _hx_run( ::kha::Sound sound){
            					HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_116_loadEverything)
HXLINE( 116)					bool loadFunc1;
HXDLIN( 116)					if (hx::IsNotNull( uncompressSoundsFilter )) {
HXLINE( 116)						loadFunc1 = ( (bool)(uncompressSoundsFilter(desc)) );
            					}
            					else {
HXLINE( 116)						loadFunc1 = true;
            					}
HXDLIN( 116)					if (loadFunc1) {
HXLINE( 117)						sound->uncompress(done);
            					}
            					else {
HXLINE( 119)						done();
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 115)				::kha::Assets_obj::loadSound(name, ::Dynamic(new _hx_Closure_3(uncompressSoundsFilter,desc,done)),failure,hx::SourceInfo(HX_("kha/Assets.hx",10,71,f2,66),115,HX_("kha.Assets",ad,13,c3,b6),HX_("loadEverything",39,d4,86,35)));
HXDLIN( 115)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("video",7b,14,fc,36)) ){
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_4, ::Dynamic,done) HXARGC(1)
            				void _hx_run( ::kha::Video video){
            					HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_126_loadEverything)
HXLINE( 126)					done();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 126)				::kha::Assets_obj::loadVideo(name, ::Dynamic(new _hx_Closure_4(done)),failure,hx::SourceInfo(HX_("kha/Assets.hx",10,71,f2,66),126,HX_("kha.Assets",ad,13,c3,b6),HX_("loadEverything",39,d4,86,35)));
HXDLIN( 126)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            		HX_END_LOCAL_FUNC3((void))

            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_6,int,fileCount,::Array< int >,filesLeft, ::Dynamic,callback) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_130_loadEverything)
HXLINE( 131)			filesLeft[0]--;
HXLINE( 132)			::kha::Assets_obj::progress = (( (Float)(1) ) - (( (Float)(filesLeft->__get(0)) ) / ( (Float)(fileCount) )));
HXLINE( 133)			if ((filesLeft->__get(0) == 0)) {
HXLINE( 133)				callback();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_7, ::Dynamic,onLoaded, ::Dynamic,failed) HXARGC(1)
            		void _hx_run( ::Dynamic err){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_136_loadEverything)
HXLINE( 137)			::kha::Assets_obj::reporter(failed,hx::SourceInfo(HX_("kha/Assets.hx",10,71,f2,66),137,HX_("kha.Assets",ad,13,c3,b6),HX_("loadEverything",39,d4,86,35)))(err);
HXLINE( 138)			onLoaded();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_89_loadEverything)
HXLINE(  90)		::cpp::VirtualArray lists = ::cpp::VirtualArray_obj::__new(5)->init(0,hx::ClassOf< ::kha::_Assets::ImageList >())->init(1,hx::ClassOf< ::kha::_Assets::SoundList >())->init(2,hx::ClassOf< ::kha::_Assets::BlobList >())->init(3,hx::ClassOf< ::kha::_Assets::FontList >())->init(4,hx::ClassOf< ::kha::_Assets::VideoList >());
HXLINE(  91)		::cpp::VirtualArray listInstances = ::cpp::VirtualArray_obj::__new(5)->init(0,::kha::Assets_obj::images)->init(1,::kha::Assets_obj::sounds)->init(2,::kha::Assets_obj::blobs)->init(3,::kha::Assets_obj::fonts)->init(4,::kha::Assets_obj::videos);
HXLINE(  92)		int fileCount = 0;
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			while((_g < lists->get_length())){
HXLINE(  94)				 ::Dynamic list = lists->__get(_g);
HXDLIN(  94)				_g = (_g + 1);
HXLINE(  95)				{
HXLINE(  95)					int _g1 = 0;
HXDLIN(  95)					::Array< ::String > _g11 = ::Type_obj::getInstanceFields(list);
HXDLIN(  95)					while((_g1 < _g11->length)){
HXLINE(  95)						::String file = _g11->__get(_g1);
HXDLIN(  95)						_g1 = (_g1 + 1);
HXLINE(  96)						if (::StringTools_obj::endsWith(file,HX_("Description",dc,a0,4f,43))) {
HXLINE(  97)							fileCount = (fileCount + 1);
            						}
            					}
            				}
            			}
            		}
HXLINE( 102)		if ((fileCount == 0)) {
HXLINE( 103)			callback();
HXLINE( 104)			return;
            		}
HXLINE( 107)		::Array< int > filesLeft = ::Array_obj< int >::__new(1)->init(0,fileCount);
HXLINE( 109)		 ::Dynamic loadFunc =  ::Dynamic(new _hx_Closure_5(uncompressSoundsFilter));
HXLINE( 130)		 ::Dynamic onLoaded =  ::Dynamic(new _hx_Closure_6(fileCount,filesLeft,callback));
HXLINE( 136)		 ::Dynamic onError =  ::Dynamic(new _hx_Closure_7(onLoaded,failed));
HXLINE( 141)		{
HXLINE( 141)			int _g12 = 0;
HXDLIN( 141)			int _g2 = lists->get_length();
HXDLIN( 141)			while((_g12 < _g2)){
HXLINE( 141)				_g12 = (_g12 + 1);
HXDLIN( 141)				int i = (_g12 - 1);
HXLINE( 142)				hx::Class list1 = lists->__get(i);
HXLINE( 143)				 ::Dynamic listInstance = listInstances->__get(i);
HXLINE( 144)				{
HXLINE( 144)					int _g13 = 0;
HXDLIN( 144)					::Array< ::String > _g21 = ::Type_obj::getInstanceFields(list1);
HXDLIN( 144)					while((_g13 < _g21->length)){
HXLINE( 144)						::String field = _g21->__get(_g13);
HXDLIN( 144)						_g13 = (_g13 + 1);
HXLINE( 145)						if (!(::StringTools_obj::endsWith(field,HX_("Description",dc,a0,4f,43)))) {
HXLINE( 145)							continue;
            						}
HXLINE( 146)						 ::Dynamic desc1 = ::Reflect_obj::field(listInstance,field);
HXLINE( 147)						bool _hx_tmp;
HXDLIN( 147)						if (hx::IsNotNull( filter )) {
HXLINE( 147)							_hx_tmp = ( (bool)(filter(desc1)) );
            						}
            						else {
HXLINE( 147)							_hx_tmp = true;
            						}
HXDLIN( 147)						if (_hx_tmp) {
HXLINE( 148)							loadFunc(desc1,onLoaded,onError);
            						}
            						else {
HXLINE( 151)							onLoaded();
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadEverything,(void))

void Assets_obj::loadImage(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Image image){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_165_loadImage)
HXLINE( 166)			::Reflect_obj::setField(::kha::Assets_obj::images,name,image);
HXLINE( 167)			done(image);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_163_loadImage)
HXLINE( 164)		 ::Dynamic description = ::Reflect_obj::field(::kha::Assets_obj::images,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 165)		::kha::LoaderImpl_obj::loadImageFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)),::kha::Assets_obj::reporter(failed,pos));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadImage,(void))

void Assets_obj::loadImageFromPath(::String path,bool readable, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_178_loadImageFromPath)
HXLINE( 179)		 ::Dynamic description =  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path))
            			->setFixed(1,HX_("readable",f0,1b,87,7d),readable));
HXLINE( 180)		::kha::LoaderImpl_obj::loadImageFromDescription(description,done,::kha::Assets_obj::reporter(failed,pos));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,loadImageFromPath,(void))

::Array< ::String > Assets_obj::imageFormats;

::Array< ::String > Assets_obj::get_imageFormats(){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_186_get_imageFormats)
HXDLIN( 186)		return ::kha::LoaderImpl_obj::getImageFormats();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_imageFormats,return )

void Assets_obj::loadBlob(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::internal::BytesBlob blob){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_191_loadBlob)
HXLINE( 192)			::Reflect_obj::setField(::kha::Assets_obj::blobs,name,blob);
HXLINE( 193)			done(blob);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_189_loadBlob)
HXLINE( 190)		 ::Dynamic description = ::Reflect_obj::field(::kha::Assets_obj::blobs,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 191)		::kha::LoaderImpl_obj::loadBlobFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)),::kha::Assets_obj::reporter(failed,pos));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadBlob,(void))

void Assets_obj::loadBlobFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_197_loadBlobFromPath)
HXLINE( 198)		 ::Dynamic description =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path)));
HXLINE( 199)		::kha::LoaderImpl_obj::loadBlobFromDescription(description,done,::kha::Assets_obj::reporter(failed,pos));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadBlobFromPath,(void))

void Assets_obj::loadSound(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Sound sound){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_204_loadSound)
HXLINE( 205)			::Reflect_obj::setField(::kha::Assets_obj::sounds,name,sound);
HXLINE( 206)			done(sound);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_202_loadSound)
HXLINE( 203)		 ::Dynamic description = ::Reflect_obj::field(::kha::Assets_obj::sounds,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 204)		::kha::LoaderImpl_obj::loadSoundFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)),::kha::Assets_obj::reporter(failed,pos));
HXDLIN( 204)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadSound,(void))

void Assets_obj::loadSoundFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_210_loadSoundFromPath)
HXLINE( 211)		 ::Dynamic description =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path)));
HXLINE( 212)		::kha::LoaderImpl_obj::loadSoundFromDescription(description,done,::kha::Assets_obj::reporter(failed,pos));
HXDLIN( 212)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadSoundFromPath,(void))

::Array< ::String > Assets_obj::soundFormats;

::Array< ::String > Assets_obj::get_soundFormats(){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_218_get_soundFormats)
HXDLIN( 218)		return ::kha::LoaderImpl_obj::getSoundFormats();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_soundFormats,return )

void Assets_obj::loadFont(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Kravur font){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_223_loadFont)
HXLINE( 224)			::Reflect_obj::setField(::kha::Assets_obj::fonts,name,font);
HXLINE( 225)			done(font);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_221_loadFont)
HXLINE( 222)		 ::Dynamic description = ::Reflect_obj::field(::kha::Assets_obj::fonts,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 223)		::kha::LoaderImpl_obj::loadFontFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)),::kha::Assets_obj::reporter(failed,pos));
HXDLIN( 223)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadFont,(void))

void Assets_obj::loadFontFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_229_loadFontFromPath)
HXLINE( 230)		 ::Dynamic description =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path)));
HXLINE( 231)		::kha::LoaderImpl_obj::loadFontFromDescription(description,done,::kha::Assets_obj::reporter(failed,pos));
HXDLIN( 231)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadFontFromPath,(void))

::Array< ::String > Assets_obj::fontFormats;

::Array< ::String > Assets_obj::get_fontFormats(){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_237_get_fontFormats)
HXDLIN( 237)		return ::Array_obj< ::String >::fromData( _hx_array_data_b6c313ad_29,1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_fontFormats,return )

void Assets_obj::loadVideo(::String name, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::kha::Video video){
            			HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_242_loadVideo)
HXLINE( 243)			::Reflect_obj::setField(::kha::Assets_obj::videos,name,video);
HXLINE( 244)			done(video);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_240_loadVideo)
HXLINE( 241)		 ::Dynamic description = ::Reflect_obj::field(::kha::Assets_obj::videos,(name + HX_("Description",dc,a0,4f,43)));
HXLINE( 242)		::kha::LoaderImpl_obj::loadVideoFromDescription(description, ::Dynamic(new _hx_Closure_0(name,done)),::kha::Assets_obj::reporter(failed,pos));
HXDLIN( 242)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadVideo,(void))

void Assets_obj::loadVideoFromPath(::String path, ::Dynamic done, ::Dynamic failed, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_248_loadVideoFromPath)
HXLINE( 249)		 ::Dynamic description =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("files",77,de,98,00),::Array_obj< ::String >::__new(1)->init(0,path)));
HXLINE( 250)		::kha::LoaderImpl_obj::loadVideoFromDescription(description,done,::kha::Assets_obj::reporter(failed,pos));
HXDLIN( 250)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,loadVideoFromPath,(void))

::Array< ::String > Assets_obj::videoFormats;

::Array< ::String > Assets_obj::get_videoFormats(){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_256_get_videoFormats)
HXDLIN( 256)		return ::kha::LoaderImpl_obj::getVideoFormats();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_videoFormats,return )

 ::Dynamic Assets_obj::reporter( ::Dynamic custom, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_260_reporter)
HXDLIN( 260)		if (hx::IsNotNull( custom )) {
HXDLIN( 260)			return custom;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,infos, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_4e1ab36908a6f223_260_reporter)
HXDLIN( 260)				f(v,infos);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXDLIN( 260)			 ::Dynamic f = ::haxe::Log_obj::trace;
HXDLIN( 260)			 ::Dynamic infos = pos;
HXDLIN( 260)			return  ::Dynamic(new _hx_Closure_0(infos,f));
            		}
HXDLIN( 260)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,reporter,return )


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { outValue = ( blobs ); return true; }
		if (HX_FIELD_EQ(inName,"fonts") ) { outValue = ( fonts ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { outValue = ( images ); return true; }
		if (HX_FIELD_EQ(inName,"sounds") ) { outValue = ( sounds ); return true; }
		if (HX_FIELD_EQ(inName,"videos") ) { outValue = ( videos ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { outValue = ( progress ); return true; }
		if (HX_FIELD_EQ(inName,"loadBlob") ) { outValue = loadBlob_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reporter") ) { outValue = reporter_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadVideo") ) { outValue = loadVideo_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontFormats") ) { outValue = ( inCallProp == hx::paccAlways ? get_fontFormats() : fontFormats ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageFormats") ) { outValue = ( inCallProp == hx::paccAlways ? get_imageFormats() : imageFormats ); return true; }
		if (HX_FIELD_EQ(inName,"soundFormats") ) { outValue = ( inCallProp == hx::paccAlways ? get_soundFormats() : soundFormats ); return true; }
		if (HX_FIELD_EQ(inName,"videoFormats") ) { outValue = ( inCallProp == hx::paccAlways ? get_videoFormats() : videoFormats ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadEverything") ) { outValue = loadEverything_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_fontFormats") ) { outValue = get_fontFormats_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_imageFormats") ) { outValue = get_imageFormats_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadBlobFromPath") ) { outValue = loadBlobFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_soundFormats") ) { outValue = get_soundFormats_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFontFromPath") ) { outValue = loadFontFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_videoFormats") ) { outValue = get_videoFormats_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadImageFromPath") ) { outValue = loadImageFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadSoundFromPath") ) { outValue = loadSoundFromPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadVideoFromPath") ) { outValue = loadVideoFromPath_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blobs") ) { blobs=ioValue.Cast<  ::kha::_Assets::BlobList >(); return true; }
		if (HX_FIELD_EQ(inName,"fonts") ) { fonts=ioValue.Cast<  ::kha::_Assets::FontList >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"images") ) { images=ioValue.Cast<  ::kha::_Assets::ImageList >(); return true; }
		if (HX_FIELD_EQ(inName,"sounds") ) { sounds=ioValue.Cast<  ::kha::_Assets::SoundList >(); return true; }
		if (HX_FIELD_EQ(inName,"videos") ) { videos=ioValue.Cast<  ::kha::_Assets::VideoList >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fontFormats") ) { fontFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imageFormats") ) { imageFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"soundFormats") ) { soundFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"videoFormats") ) { videoFormats=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::kha::_Assets::ImageList */ ,(void *) &Assets_obj::images,HX_("images",b8,50,92,fe)},
	{hx::fsObject /*  ::kha::_Assets::SoundList */ ,(void *) &Assets_obj::sounds,HX_("sounds",c4,a8,2e,32)},
	{hx::fsObject /*  ::kha::_Assets::BlobList */ ,(void *) &Assets_obj::blobs,HX_("blobs",76,74,fc,b4)},
	{hx::fsObject /*  ::kha::_Assets::FontList */ ,(void *) &Assets_obj::fonts,HX_("fonts",c4,b7,91,04)},
	{hx::fsObject /*  ::kha::_Assets::VideoList */ ,(void *) &Assets_obj::videos,HX_("videos",98,d7,95,e5)},
	{hx::fsFloat,(void *) &Assets_obj::progress,HX_("progress",ad,f7,2a,86)},
	{hx::fsObject /* ::Array< ::String > */ ,(void *) &Assets_obj::imageFormats,HX_("imageFormats",41,3b,f7,ce)},
	{hx::fsObject /* ::Array< ::String > */ ,(void *) &Assets_obj::soundFormats,HX_("soundFormats",4d,24,67,f3)},
	{hx::fsObject /* ::Array< ::String > */ ,(void *) &Assets_obj::fontFormats,HX_("fontFormats",4d,73,ff,f3)},
	{hx::fsObject /* ::Array< ::String > */ ,(void *) &Assets_obj::videoFormats,HX_("videoFormats",21,2a,2b,f9)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::images,"images");
	HX_MARK_MEMBER_NAME(Assets_obj::sounds,"sounds");
	HX_MARK_MEMBER_NAME(Assets_obj::blobs,"blobs");
	HX_MARK_MEMBER_NAME(Assets_obj::fonts,"fonts");
	HX_MARK_MEMBER_NAME(Assets_obj::videos,"videos");
	HX_MARK_MEMBER_NAME(Assets_obj::progress,"progress");
	HX_MARK_MEMBER_NAME(Assets_obj::imageFormats,"imageFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::soundFormats,"soundFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::fontFormats,"fontFormats");
	HX_MARK_MEMBER_NAME(Assets_obj::videoFormats,"videoFormats");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::images,"images");
	HX_VISIT_MEMBER_NAME(Assets_obj::sounds,"sounds");
	HX_VISIT_MEMBER_NAME(Assets_obj::blobs,"blobs");
	HX_VISIT_MEMBER_NAME(Assets_obj::fonts,"fonts");
	HX_VISIT_MEMBER_NAME(Assets_obj::videos,"videos");
	HX_VISIT_MEMBER_NAME(Assets_obj::progress,"progress");
	HX_VISIT_MEMBER_NAME(Assets_obj::imageFormats,"imageFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::soundFormats,"soundFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::fontFormats,"fontFormats");
	HX_VISIT_MEMBER_NAME(Assets_obj::videoFormats,"videoFormats");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_("images",b8,50,92,fe),
	HX_("sounds",c4,a8,2e,32),
	HX_("blobs",76,74,fc,b4),
	HX_("fonts",c4,b7,91,04),
	HX_("videos",98,d7,95,e5),
	HX_("progress",ad,f7,2a,86),
	HX_("loadEverything",39,d4,86,35),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadImageFromPath",a4,b8,7a,eb),
	HX_("imageFormats",41,3b,f7,ce),
	HX_("get_imageFormats",ca,27,96,d3),
	HX_("loadBlob",a3,0e,b9,b1),
	HX_("loadBlobFromPath",f2,59,fc,97),
	HX_("loadSound",c9,d8,03,9c),
	HX_("loadSoundFromPath",18,ba,f6,a8),
	HX_("soundFormats",4d,24,67,f3),
	HX_("get_soundFormats",d6,10,06,f8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadFontFromPath",64,3c,44,36),
	HX_("fontFormats",4d,73,ff,f3),
	HX_("get_fontFormats",e4,2a,e1,b4),
	HX_("loadVideo",75,60,33,52),
	HX_("loadVideoFromPath",c4,cd,b7,ae),
	HX_("videoFormats",21,2a,2b,f9),
	HX_("get_videoFormats",aa,16,ca,fd),
	HX_("reporter",21,2a,94,dd),
	::String(null())
};

void Assets_obj::__register()
{
	Assets_obj _hx_dummy;
	Assets_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.Assets",ad,13,c3,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4e1ab36908a6f223_64_boot)
HXDLIN(  64)		images =  ::kha::_Assets::ImageList_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4e1ab36908a6f223_65_boot)
HXDLIN(  65)		sounds =  ::kha::_Assets::SoundList_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4e1ab36908a6f223_66_boot)
HXDLIN(  66)		blobs =  ::kha::_Assets::BlobList_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4e1ab36908a6f223_67_boot)
HXDLIN(  67)		fonts =  ::kha::_Assets::FontList_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4e1ab36908a6f223_68_boot)
HXDLIN(  68)		videos =  ::kha::_Assets::VideoList_obj::__alloc( HX_CTX );
            	}
}

} // end namespace kha
