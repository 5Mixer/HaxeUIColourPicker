// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_http_HttpBase
#define INCLUDED_haxe_http_HttpBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,http,HttpBase)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace http{


class HXCPP_CLASS_ATTRIBUTES HttpBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HttpBase_obj OBJ_;
		HttpBase_obj();

	public:
		enum { _hx_ClassId = 0x461c056b };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.http.HttpBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.http.HttpBase"); }
		static hx::ObjectPtr< HttpBase_obj > __new(::String url);
		static hx::ObjectPtr< HttpBase_obj > __alloc(hx::Ctx *_hx_ctx,::String url);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(hx::Ctx *_hx_alloc,HttpBase_obj *_hx_obj);
		//~HttpBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HttpBase",d9,cf,1a,f8); }

		::String url;
		inline ::String _hx_set_url(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return url=_hx_v; }
		 ::haxe::io::Bytes responseBytes;
		inline  ::haxe::io::Bytes _hx_set_responseBytes(hx::StackContext *_hx_ctx, ::haxe::io::Bytes _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return responseBytes=_hx_v; }
		::String responseAsString;
		inline ::String _hx_set_responseAsString(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return responseAsString=_hx_v; }
		::String postData;
		inline ::String _hx_set_postData(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return postData=_hx_v; }
		 ::haxe::io::Bytes postBytes;
		inline  ::haxe::io::Bytes _hx_set_postBytes(hx::StackContext *_hx_ctx, ::haxe::io::Bytes _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return postBytes=_hx_v; }
		::Array< ::Dynamic> headers;
		inline ::Array< ::Dynamic> _hx_set_headers(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return headers=_hx_v; }
		::Array< ::Dynamic> params;
		inline ::Array< ::Dynamic> _hx_set_params(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return params=_hx_v; }
		 ::Dynamic emptyOnData;
		inline  ::Dynamic _hx_set_emptyOnData(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return emptyOnData=_hx_v; }
		Dynamic emptyOnData_dyn() { return emptyOnData;}
		::Dynamic onData;
		inline ::Dynamic _hx_set_onData(hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onData=_hx_v; }
		inline ::Dynamic &onData_dyn() {return onData; }

		::Dynamic onBytes;
		inline ::Dynamic _hx_set_onBytes(hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onBytes=_hx_v; }
		inline ::Dynamic &onBytes_dyn() {return onBytes; }

		::Dynamic onError;
		inline ::Dynamic _hx_set_onError(hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onError=_hx_v; }
		inline ::Dynamic &onError_dyn() {return onError; }

		::Dynamic onStatus;
		inline ::Dynamic _hx_set_onStatus(hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onStatus=_hx_v; }
		inline ::Dynamic &onStatus_dyn() {return onStatus; }

		bool hasOnData();
		::Dynamic hasOnData_dyn();

		void success( ::haxe::io::Bytes data);
		::Dynamic success_dyn();

		::String get_responseData();
		::Dynamic get_responseData_dyn();

};

} // end namespace haxe
} // end namespace http

#endif /* INCLUDED_haxe_http_HttpBase */ 
