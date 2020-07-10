// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#define INCLUDED_haxe_ui_backend_ImageDisplayImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <hxinc/haxe/ui/backend/ImageBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ImageDisplayImpl_obj : public  ::haxe::ui::backend::ImageBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ImageBase_obj super;
		typedef ImageDisplayImpl_obj OBJ_;
		ImageDisplayImpl_obj();

	public:
		enum { _hx_ClassId = 0x65937de1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ImageDisplayImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ImageDisplayImpl"); }
		static hx::ObjectPtr< ImageDisplayImpl_obj > __new();
		static hx::ObjectPtr< ImageDisplayImpl_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageDisplayImpl_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageDisplayImpl",c7,ca,63,12); }

		 ::kha::Image _buffer;
		inline  ::kha::Image _hx_set__buffer(hx::StackContext *_hx_ctx, ::kha::Image _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _buffer=_hx_v; }
		void validateData();

		bool scaled;
		bool get_scaled();
		::Dynamic get_scaled_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ImageDisplayImpl */ 
