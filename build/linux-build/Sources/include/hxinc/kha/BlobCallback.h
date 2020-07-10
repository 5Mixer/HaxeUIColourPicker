// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_BlobCallback
#define INCLUDED_kha_BlobCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,BlobCallback)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)


#include <Kore/pch.h>
#include <Kore/System.h>
#include <khalib/loader.h>

namespace kha{


class HXCPP_CLASS_ATTRIBUTES BlobCallback_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BlobCallback_obj OBJ_;
		BlobCallback_obj();

	public:
		enum { _hx_ClassId = 0x2c60f87e };

		void __construct( ::Dynamic success, ::Dynamic error);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.BlobCallback")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.BlobCallback"); }
		static hx::ObjectPtr< BlobCallback_obj > __new( ::Dynamic success, ::Dynamic error);
		static hx::ObjectPtr< BlobCallback_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic success, ::Dynamic error);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlobCallback_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlobCallback",62,04,9c,ca); }

		 ::Dynamic success;
		inline  ::Dynamic _hx_set_success(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return success=_hx_v; }
		Dynamic success_dyn() { return success;}
		 ::Dynamic error;
		inline  ::Dynamic _hx_set_error(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return error=_hx_v; }
		Dynamic error_dyn() { return error;}
};

} // end namespace kha

#endif /* INCLUDED_kha_BlobCallback */ 
