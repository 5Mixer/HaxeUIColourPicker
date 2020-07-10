// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_components_HorizontalProgress
#define INCLUDED_haxe_ui_components_HorizontalProgress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_components_Progress
#include <hxinc/haxe/ui/components/Progress.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,HorizontalProgress)
HX_DECLARE_CLASS3(haxe,ui,components,Progress)
HX_DECLARE_CLASS3(haxe,ui,components,Range)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{


class HXCPP_CLASS_ATTRIBUTES HorizontalProgress_obj : public  ::haxe::ui::components::Progress_obj
{
	public:
		typedef  ::haxe::ui::components::Progress_obj super;
		typedef HorizontalProgress_obj OBJ_;
		HorizontalProgress_obj();

	public:
		enum { _hx_ClassId = 0x2ab0afcd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.HorizontalProgress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.components.HorizontalProgress"); }
		static hx::ObjectPtr< HorizontalProgress_obj > __new();
		static hx::ObjectPtr< HorizontalProgress_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HorizontalProgress_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HorizontalProgress",d1,58,80,a6); }

		Float posFromCoord( ::haxe::ui::geom::Point coord);

		void registerBehaviours();

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_HorizontalProgress */ 