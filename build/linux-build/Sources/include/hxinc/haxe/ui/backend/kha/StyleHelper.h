// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_backend_kha_StyleHelper
#define INCLUDED_haxe_ui_backend_kha_StyleHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,backend,kha,StyleHelper)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace haxe{
namespace ui{
namespace backend{
namespace kha{


class HXCPP_CLASS_ATTRIBUTES StyleHelper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StyleHelper_obj OBJ_;
		StyleHelper_obj();

	public:
		enum { _hx_ClassId = 0x2d419531 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.kha.StyleHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.kha.StyleHelper"); }

		inline static hx::ObjectPtr< StyleHelper_obj > __new() {
			hx::ObjectPtr< StyleHelper_obj > __this = new StyleHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< StyleHelper_obj > __alloc(hx::Ctx *_hx_ctx) {
			StyleHelper_obj *__this = (StyleHelper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StyleHelper_obj), false, "haxe.ui.backend.kha.StyleHelper"));
			*(void **)__this = StyleHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleHelper",5f,a9,18,60); }

		static void paintStyle( ::kha::graphics2::Graphics g, ::haxe::ui::styles::Style style,Float x,Float y,Float w,Float h);
		static ::Dynamic paintStyle_dyn();

		static void drawCircle( ::kha::graphics2::Graphics g,Float xm,Float ym,Float r);
		static ::Dynamic drawCircle_dyn();

		static void drawShadow( ::kha::graphics2::Graphics g,int color,Float x,Float y,Float w,Float h,int size,hx::Null< bool >  inset);
		static ::Dynamic drawShadow_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace kha

#endif /* INCLUDED_haxe_ui_backend_kha_StyleHelper */ 
