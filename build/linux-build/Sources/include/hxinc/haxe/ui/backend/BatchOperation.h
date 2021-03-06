// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_backend_BatchOperation
#define INCLUDED_haxe_ui_backend_BatchOperation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,BatchOperation)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
namespace haxe{
namespace ui{
namespace backend{


class BatchOperation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BatchOperation_obj OBJ_;

	public:
		BatchOperation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.backend.BatchOperation",d9,88,b7,51); }
		::String __ToString() const { return HX_("BatchOperation.",61,be,0b,1e) + _hx_tag; }

		static ::haxe::ui::backend::BatchOperation ApplyScissor(int x,int y,int w,int h);
		static ::Dynamic ApplyScissor_dyn();
		static ::haxe::ui::backend::BatchOperation ClearScissor;
		static inline ::haxe::ui::backend::BatchOperation ClearScissor_dyn() { return ClearScissor; }
		static ::haxe::ui::backend::BatchOperation DrawImage( ::haxe::ui::backend::ComponentImpl c);
		static ::Dynamic DrawImage_dyn();
		static ::haxe::ui::backend::BatchOperation DrawStyle( ::haxe::ui::backend::ComponentImpl c);
		static ::Dynamic DrawStyle_dyn();
		static ::haxe::ui::backend::BatchOperation DrawText( ::haxe::ui::backend::ComponentImpl c);
		static ::Dynamic DrawText_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_BatchOperation */ 
