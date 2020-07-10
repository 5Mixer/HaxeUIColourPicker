// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyBuilder
#define INCLUDED_haxe_ui_containers_properties_PropertyBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <hxinc/haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,Label)
HX_DECLARE_CLASS4(haxe,ui,containers,properties,PropertyBuilder)
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
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace properties{


class HXCPP_CLASS_ATTRIBUTES PropertyBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef PropertyBuilder_obj OBJ_;
		PropertyBuilder_obj();

	public:
		enum { _hx_ClassId = 0x082e46c7 };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.properties.PropertyBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.properties.PropertyBuilder"); }
		static hx::ObjectPtr< PropertyBuilder_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< PropertyBuilder_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyBuilder_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertyBuilder",26,a7,38,96); }

		 ::haxe::ui::core::Component editor;
		inline  ::haxe::ui::core::Component _hx_set_editor(hx::StackContext *_hx_ctx, ::haxe::ui::core::Component _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return editor=_hx_v; }
		 ::haxe::ui::components::Label label;
		inline  ::haxe::ui::components::Label _hx_set_label(hx::StackContext *_hx_ctx, ::haxe::ui::components::Label _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return label=_hx_v; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties

#endif /* INCLUDED_haxe_ui_containers_properties_PropertyBuilder */ 