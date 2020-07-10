// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_debug_CallStackHelper
#define INCLUDED_haxe_ui_debug_CallStackHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,debug,CallStackHelper)

namespace haxe{
namespace ui{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES CallStackHelper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CallStackHelper_obj OBJ_;
		CallStackHelper_obj();

	public:
		enum { _hx_ClassId = 0x29789d3f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.debug.CallStackHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.debug.CallStackHelper"); }

		inline static hx::ObjectPtr< CallStackHelper_obj > __new() {
			hx::ObjectPtr< CallStackHelper_obj > __this = new CallStackHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< CallStackHelper_obj > __alloc(hx::Ctx *_hx_ctx) {
			CallStackHelper_obj *__this = (CallStackHelper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallStackHelper_obj), false, "haxe.ui.debug.CallStackHelper"));
			*(void **)__this = CallStackHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CallStackHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallStackHelper",b8,2e,b0,7b); }

		static void traceCallStack();
		static ::Dynamic traceCallStack_dyn();

		static void traceExceptionStack();
		static ::Dynamic traceExceptionStack_dyn();

		static ::String getCallStackString();
		static ::Dynamic getCallStackString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace debug

#endif /* INCLUDED_haxe_ui_debug_CallStackHelper */ 