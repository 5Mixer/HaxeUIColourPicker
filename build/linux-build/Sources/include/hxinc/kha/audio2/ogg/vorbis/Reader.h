// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_audio2_ogg_vorbis_Reader
#define INCLUDED_kha_audio2_ogg_vorbis_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,Reader)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecoder)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x6940300d };

		void __construct( ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.Reader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.Reader"); }
		static hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength);
		static hx::ObjectPtr< Reader_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		static  ::kha::audio2::ogg::vorbis::Reader openFromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic openFromBytes_dyn();

		static void seekBytes( ::haxe::io::BytesInput bytes,int pos);
		static ::Dynamic seekBytes_dyn();

		static  ::kha::audio2::ogg::vorbis::Reader openFromFile(::String fileName);
		static ::Dynamic openFromFile_dyn();

		static  ::kha::audio2::ogg::vorbis::data::Header readAll( ::haxe::io::Bytes bytes, ::haxe::io::Output output,hx::Null< bool >  useFloat);
		static ::Dynamic readAll_dyn();

		 ::kha::audio2::ogg::vorbis::VorbisDecoder decoder;
		inline  ::kha::audio2::ogg::vorbis::VorbisDecoder _hx_set_decoder(hx::StackContext *_hx_ctx, ::kha::audio2::ogg::vorbis::VorbisDecoder _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return decoder=_hx_v; }
		 ::kha::audio2::ogg::vorbis::data::Header get_header();
		::Dynamic get_header_dyn();

		int get_totalSample();
		::Dynamic get_totalSample_dyn();

		Float get_totalMillisecond();
		::Dynamic get_totalMillisecond_dyn();

		int get_currentSample();
		::Dynamic get_currentSample_dyn();

		int set_currentSample(int value);
		::Dynamic set_currentSample_dyn();

		Float get_currentMillisecond();
		::Dynamic get_currentMillisecond_dyn();

		Float set_currentMillisecond(Float value);
		::Dynamic set_currentMillisecond_dyn();

		 ::Dynamic loopStart;
		inline  ::Dynamic _hx_set_loopStart(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return loopStart=_hx_v; }
		 ::Dynamic loopLength;
		inline  ::Dynamic _hx_set_loopLength(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return loopLength=_hx_v; }
		 ::Dynamic seekFunc;
		inline  ::Dynamic _hx_set_seekFunc(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return seekFunc=_hx_v; }
		Dynamic seekFunc_dyn() { return seekFunc;}
		int inputLength;
		int read( ::kha::arrays::Float32ArrayPrivate output, ::Dynamic samples, ::Dynamic channels, ::Dynamic sampleRate,hx::Null< bool >  useFloat);
		::Dynamic read_dyn();

		 ::kha::audio2::ogg::vorbis::Reader clone();
		::Dynamic clone_dyn();

		Float sampleToMillisecond(int samples);
		::Dynamic sampleToMillisecond_dyn();

		int millisecondToSample(Float millseconds);
		::Dynamic millisecondToSample_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_Reader */ 
