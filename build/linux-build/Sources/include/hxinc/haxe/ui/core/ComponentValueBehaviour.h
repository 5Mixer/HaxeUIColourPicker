// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_core_ComponentValueBehaviour
#define INCLUDED_haxe_ui_core_ComponentValueBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,ValueBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValueBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentValueBehaviour_obj : public  ::haxe::ui::behaviours::ValueBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::ValueBehaviour_obj super;
		typedef ComponentValueBehaviour_obj OBJ_;
		ComponentValueBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x2e6c9e6c };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentValueBehaviour")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentValueBehaviour"); }
		static hx::ObjectPtr< ComponentValueBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static hx::ObjectPtr< ComponentValueBehaviour_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentValueBehaviour_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentValueBehaviour",09,ba,36,23); }

		virtual void set( ::haxe::ui::util::VariantType value);

		 ::haxe::ui::util::VariantType get();

		 ::Dynamic getDynamic();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentValueBehaviour */ 
