// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_StringExtensions
#define INCLUDED_kha_StringExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,StringExtensions)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES StringExtensions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StringExtensions_obj OBJ_;
		StringExtensions_obj();

	public:
		enum { _hx_ClassId = 0x19012c49 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.StringExtensions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.StringExtensions"); }

		inline static hx::ObjectPtr< StringExtensions_obj > __new() {
			hx::ObjectPtr< StringExtensions_obj > __this = new StringExtensions_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< StringExtensions_obj > __alloc(hx::Ctx *_hx_ctx) {
			StringExtensions_obj *__this = (StringExtensions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StringExtensions_obj), false, "kha.StringExtensions"));
			*(void **)__this = StringExtensions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringExtensions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringExtensions",65,14,a4,fd); }

		static ::Array< int > toCharArray(::String s);
		static ::Dynamic toCharArray_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_StringExtensions */ 