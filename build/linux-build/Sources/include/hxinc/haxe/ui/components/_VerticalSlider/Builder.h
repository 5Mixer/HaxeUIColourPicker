// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_components__VerticalSlider_Builder
#define INCLUDED_haxe_ui_components__VerticalSlider_Builder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_SliderBuilder
#include <hxinc/haxe/ui/components/SliderBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Range)
HX_DECLARE_CLASS3(haxe,ui,components,SliderBuilder)
HX_DECLARE_CLASS4(haxe,ui,components,_VerticalSlider,Builder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _VerticalSlider{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::components::SliderBuilder_obj
{
	public:
		typedef  ::haxe::ui::components::SliderBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x7295ae1d };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._VerticalSlider.Builder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components._VerticalSlider.Builder"); }
		static hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< Builder_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Builder_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Builder",fb,02,0c,3d); }

		 ::haxe::ui::components::Range createValueComponent();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _VerticalSlider

#endif /* INCLUDED_haxe_ui_components__VerticalSlider_Builder */ 