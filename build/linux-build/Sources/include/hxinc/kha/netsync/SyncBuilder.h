// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_netsync_SyncBuilder
#define INCLUDED_kha_netsync_SyncBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,netsync,SyncBuilder)

namespace kha{
namespace netsync{


class HXCPP_CLASS_ATTRIBUTES SyncBuilder_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SyncBuilder_obj OBJ_;
		SyncBuilder_obj();

	public:
		enum { _hx_ClassId = 0x034570cc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.netsync.SyncBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.netsync.SyncBuilder"); }

		inline static hx::ObjectPtr< SyncBuilder_obj > __new() {
			hx::ObjectPtr< SyncBuilder_obj > __this = new SyncBuilder_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< SyncBuilder_obj > __alloc(hx::Ctx *_hx_ctx) {
			SyncBuilder_obj *__this = (SyncBuilder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SyncBuilder_obj), false, "kha.netsync.SyncBuilder"));
			*(void **)__this = SyncBuilder_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SyncBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SyncBuilder",e0,b1,98,aa); }

		static void __boot();
		static int nextId;
		static ::cpp::VirtualArray objects;
};

} // end namespace kha
} // end namespace netsync

#endif /* INCLUDED_kha_netsync_SyncBuilder */ 
