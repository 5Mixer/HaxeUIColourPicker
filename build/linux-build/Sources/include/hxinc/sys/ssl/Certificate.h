// Generated by Haxe 4.0.5
#ifndef INCLUDED_sys_ssl_Certificate
#define INCLUDED_sys_ssl_Certificate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c0214e5b70eb6c30_33_new)
HX_DECLARE_CLASS2(sys,ssl,Certificate)

namespace sys{
namespace ssl{


class HXCPP_CLASS_ATTRIBUTES Certificate_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Certificate_obj OBJ_;
		Certificate_obj();

	public:
		enum { _hx_ClassId = 0x0b8db5f8 };

		void __construct( ::Dynamic x, ::sys::ssl::Certificate h);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.ssl.Certificate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.ssl.Certificate"); }

		inline static hx::ObjectPtr< Certificate_obj > __new( ::Dynamic x, ::sys::ssl::Certificate h) {
			hx::ObjectPtr< Certificate_obj > __this = new Certificate_obj();
			__this->__construct(x,h);
			return __this;
		}

		inline static hx::ObjectPtr< Certificate_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic x, ::sys::ssl::Certificate h) {
			Certificate_obj *__this = (Certificate_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Certificate_obj), true, "sys.ssl.Certificate"));
			*(void **)__this = Certificate_obj::_hx_vtable;
{
            	HX_GC_STACKFRAME(&_hx_pos_c0214e5b70eb6c30_33_new)
HXLINE(  34)		( ( ::sys::ssl::Certificate)(__this) )->_hx_set__hx___x(HX_CTX, x);
HXLINE(  35)		( ( ::sys::ssl::Certificate)(__this) )->_hx_set__hx___h(HX_CTX, h);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Certificate_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_("Certificate",f7,60,75,ff); }

		static void __boot();
		static  ::sys::ssl::Certificate loadFile(::String file);
		static ::Dynamic loadFile_dyn();

		static  ::sys::ssl::Certificate loadPath(::String path);
		static ::Dynamic loadPath_dyn();

		static  ::sys::ssl::Certificate loadDefaults();
		static ::Dynamic loadDefaults_dyn();

		 ::sys::ssl::Certificate _hx___h;
		inline  ::sys::ssl::Certificate _hx_set__hx___h(hx::StackContext *_hx_ctx, ::sys::ssl::Certificate _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___h=_hx_v; }
		 ::Dynamic _hx___x;
		inline  ::Dynamic _hx_set__hx___x(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___x=_hx_v; }
};

} // end namespace sys
} // end namespace ssl

#endif /* INCLUDED_sys_ssl_Certificate */ 
