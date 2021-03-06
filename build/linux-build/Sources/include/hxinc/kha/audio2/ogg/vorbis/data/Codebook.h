// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Codebook
#define INCLUDED_kha_audio2_ogg_vorbis_data_Codebook

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Codebook_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Codebook_obj OBJ_;
		Codebook_obj();

	public:
		enum { _hx_ClassId = 0x2a1d9542 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Codebook")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Codebook"); }
		static hx::ObjectPtr< Codebook_obj > __new();
		static hx::ObjectPtr< Codebook_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Codebook_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Codebook",f6,8b,46,64); }

		static void __boot();
		static int NO_CODE;
		static  ::kha::audio2::ogg::vorbis::data::Codebook read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		static ::Dynamic read_dyn();

		static int delay;
		int dimensions;
		int entries;
		::Array< int > codewordLengths;
		inline ::Array< int > _hx_set_codewordLengths(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return codewordLengths=_hx_v; }
		Float minimumValue;
		Float deltaValue;
		int valueBits;
		int lookupType;
		bool sequenceP;
		bool sparse;
		int lookupValues;
		::Array< Float > multiplicands;
		inline ::Array< Float > _hx_set_multiplicands(hx::StackContext *_hx_ctx,::Array< Float > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return multiplicands=_hx_v; }
		::Array< int > codewords;
		inline ::Array< int > _hx_set_codewords(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return codewords=_hx_v; }
		::Array< int > fastHuffman;
		inline ::Array< int > _hx_set_fastHuffman(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return fastHuffman=_hx_v; }
		::Array< int > sortedCodewords;
		inline ::Array< int > _hx_set_sortedCodewords(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return sortedCodewords=_hx_v; }
		::Array< int > sortedValues;
		inline ::Array< int > _hx_set_sortedValues(hx::StackContext *_hx_ctx,::Array< int > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return sortedValues=_hx_v; }
		int sortedEntries;
		void addEntry(int huffCode,int symbol,int count,int len,::Array< int > values);
		::Dynamic addEntry_dyn();

		bool includeInSort(int len);
		::Dynamic includeInSort_dyn();

		bool computeCodewords(::Array< int > len,int n,::Array< int > values);
		::Dynamic computeCodewords_dyn();

		void computeSortedHuffman(::Array< int > lengths,::Array< int > values);
		::Dynamic computeSortedHuffman_dyn();

		void computeAcceleratedHuffman();
		::Dynamic computeAcceleratedHuffman_dyn();

		bool codebookDecode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< Float > output,int offset,int len);
		::Dynamic codebookDecode_dyn();

		bool codebookDecodeStep( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< Float > output,int offset,int len,int step);
		::Dynamic codebookDecodeStep_dyn();

		int decodeStart( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		::Dynamic decodeStart_dyn();

		 ::Dynamic decodeDeinterleaveRepeat( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< ::Dynamic> residueBuffers,int ch,int cInter,int pInter,int len,int totalDecode);
		::Dynamic decodeDeinterleaveRepeat_dyn();

		bool residueDecode( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< Float > target,int offset,int n,int rtype);
		::Dynamic residueDecode_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Codebook */ 
