// Generated by Haxe 4.0.5
#ifndef INCLUDED_sys_ssl_Socket
#define INCLUDED_sys_ssl_Socket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_net_Socket
#include <hxinc/sys/net/Socket.h>
#endif
HX_DECLARE_CLASS2(sys,net,Host)
HX_DECLARE_CLASS2(sys,net,Socket)
HX_DECLARE_CLASS2(sys,ssl,Certificate)
HX_DECLARE_CLASS2(sys,ssl,Key)
HX_DECLARE_CLASS2(sys,ssl,Socket)

namespace sys{
namespace ssl{


class HXCPP_CLASS_ATTRIBUTES Socket_obj : public  ::sys::net::Socket_obj
{
	public:
		typedef  ::sys::net::Socket_obj super;
		typedef Socket_obj OBJ_;
		Socket_obj();

	public:
		enum { _hx_ClassId = 0x0bc4ca72 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.ssl.Socket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.ssl.Socket"); }
		static hx::ObjectPtr< Socket_obj > __new();
		static hx::ObjectPtr< Socket_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Socket_obj();

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
		static void __init__();

		::String __ToString() const { return HX_("Socket",d3,ff,da,5a); }

		static void __boot();
		static  ::Dynamic DEFAULT_VERIFY_CERT;
		static  ::sys::ssl::Certificate DEFAULT_CA;
		 ::Dynamic conf;
		inline  ::Dynamic _hx_set_conf(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return conf=_hx_v; }
		 ::Dynamic ssl;
		inline  ::Dynamic _hx_set_ssl(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return ssl=_hx_v; }
		 ::Dynamic verifyCert;
		inline  ::Dynamic _hx_set_verifyCert(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return verifyCert=_hx_v; }
		 ::sys::ssl::Certificate caCert;
		inline  ::sys::ssl::Certificate _hx_set_caCert(hx::StackContext *_hx_ctx, ::sys::ssl::Certificate _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return caCert=_hx_v; }
		::String hostname;
		inline ::String _hx_set_hostname(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return hostname=_hx_v; }
		 ::sys::ssl::Certificate ownCert;
		inline  ::sys::ssl::Certificate _hx_set_ownCert(hx::StackContext *_hx_ctx, ::sys::ssl::Certificate _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return ownCert=_hx_v; }
		 ::sys::ssl::Key ownKey;
		inline  ::sys::ssl::Key _hx_set_ownKey(hx::StackContext *_hx_ctx, ::sys::ssl::Key _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return ownKey=_hx_v; }
		::Array< ::Dynamic> altSNIContexts;
		inline ::Array< ::Dynamic> _hx_set_altSNIContexts(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return altSNIContexts=_hx_v; }
		 ::Dynamic sniCallback;
		inline  ::Dynamic _hx_set_sniCallback(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return sniCallback=_hx_v; }
		bool handshakeDone;
		void init();

		void connect( ::sys::net::Host host,int port);

		void handshake();
		::Dynamic handshake_dyn();

		void close();

		 ::Dynamic buildSSLConfig(bool server);
		::Dynamic buildSSLConfig_dyn();

};

} // end namespace sys
} // end namespace ssl

#endif /* INCLUDED_sys_ssl_Socket */ 
