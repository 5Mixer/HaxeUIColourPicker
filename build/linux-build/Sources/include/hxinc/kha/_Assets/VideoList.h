// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha__Assets_VideoList
#define INCLUDED_kha__Assets_VideoList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,_Assets,VideoList)

namespace kha{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES VideoList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VideoList_obj OBJ_;
		VideoList_obj();

	public:
		enum { _hx_ClassId = 0x0649a597 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha._Assets.VideoList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha._Assets.VideoList"); }
		static hx::ObjectPtr< VideoList_obj > __new();
		static hx::ObjectPtr< VideoList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VideoList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoList",59,96,3e,0f); }

		 ::kha::Video get(::String name);
		::Dynamic get_dyn();

		::Array< ::String > names;
		inline ::Array< ::String > _hx_set_names(hx::StackContext *_hx_ctx,::Array< ::String > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return names=_hx_v; }
};

} // end namespace kha
} // end namespace _Assets

#endif /* INCLUDED_kha__Assets_VideoList */ 
