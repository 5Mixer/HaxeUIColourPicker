// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#define INCLUDED_haxe_ui_backend_PlatformBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5f6a4436ed5b466b_4_new)
HX_DECLARE_CLASS3(haxe,ui,backend,PlatformBase)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES PlatformBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PlatformBase_obj OBJ_;
		PlatformBase_obj();

	public:
		enum { _hx_ClassId = 0x7f3979e6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.PlatformBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.PlatformBase"); }

		inline static hx::ObjectPtr< PlatformBase_obj > __new() {
			hx::ObjectPtr< PlatformBase_obj > __this = new PlatformBase_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< PlatformBase_obj > __alloc(hx::Ctx *_hx_ctx) {
			PlatformBase_obj *__this = (PlatformBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PlatformBase_obj), false, "haxe.ui.backend.PlatformBase"));
			*(void **)__this = PlatformBase_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5f6a4436ed5b466b_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlatformBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlatformBase",84,e8,70,b0); }

		virtual Float getMetric(::String id);
		::Dynamic getMetric_dyn();

		 ::Dynamic getColor(::String id);
		::Dynamic getColor_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_PlatformBase */ 
