// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#define INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ad5d07f812e15772_124_new)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__buf)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_fontinfo)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_fontinfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_fontinfo_obj OBJ_;
		Stbtt_fontinfo_obj();

	public:
		enum { _hx_ClassId = 0x36f9d3a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_fontinfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt_fontinfo"); }

		inline static hx::ObjectPtr< Stbtt_fontinfo_obj > __new() {
			hx::ObjectPtr< Stbtt_fontinfo_obj > __this = new Stbtt_fontinfo_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< Stbtt_fontinfo_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_fontinfo_obj *__this = (Stbtt_fontinfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_fontinfo_obj), true, "kha.graphics2.truetype.Stbtt_fontinfo"));
			*(void **)__this = Stbtt_fontinfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ad5d07f812e15772_124_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_fontinfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt_fontinfo",bb,e8,2f,90); }

		 ::kha::internal::BytesBlob data;
		inline  ::kha::internal::BytesBlob _hx_set_data(hx::StackContext *_hx_ctx, ::kha::internal::BytesBlob _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return data=_hx_v; }
		int fontstart;
		int numGlyphs;
		int loca;
		int head;
		int glyf;
		int hhea;
		int hmtx;
		int kern;
		int gpos;
		int index_map;
		int indexToLocFormat;
		 ::kha::graphics2::truetype::Stbtt__buf cff;
		inline  ::kha::graphics2::truetype::Stbtt__buf _hx_set_cff(hx::StackContext *_hx_ctx, ::kha::graphics2::truetype::Stbtt__buf _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return cff=_hx_v; }
		 ::kha::graphics2::truetype::Stbtt__buf charstrings;
		inline  ::kha::graphics2::truetype::Stbtt__buf _hx_set_charstrings(hx::StackContext *_hx_ctx, ::kha::graphics2::truetype::Stbtt__buf _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return charstrings=_hx_v; }
		 ::kha::graphics2::truetype::Stbtt__buf gsubrs;
		inline  ::kha::graphics2::truetype::Stbtt__buf _hx_set_gsubrs(hx::StackContext *_hx_ctx, ::kha::graphics2::truetype::Stbtt__buf _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return gsubrs=_hx_v; }
		 ::kha::graphics2::truetype::Stbtt__buf subrs;
		inline  ::kha::graphics2::truetype::Stbtt__buf _hx_set_subrs(hx::StackContext *_hx_ctx, ::kha::graphics2::truetype::Stbtt__buf _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return subrs=_hx_v; }
		 ::kha::graphics2::truetype::Stbtt__buf fontdicts;
		inline  ::kha::graphics2::truetype::Stbtt__buf _hx_set_fontdicts(hx::StackContext *_hx_ctx, ::kha::graphics2::truetype::Stbtt__buf _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return fontdicts=_hx_v; }
		 ::kha::graphics2::truetype::Stbtt__buf fdselect;
		inline  ::kha::graphics2::truetype::Stbtt__buf _hx_set_fdselect(hx::StackContext *_hx_ctx, ::kha::graphics2::truetype::Stbtt__buf _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return fdselect=_hx_v; }
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo */ 
