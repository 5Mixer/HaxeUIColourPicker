// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_containers_Frame
#define INCLUDED_haxe_ui_containers_Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,Frame)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES Frame_obj : public  ::haxe::ui::containers::Box_obj
{
	public:
		typedef  ::haxe::ui::containers::Box_obj super;
		typedef Frame_obj OBJ_;
		Frame_obj();

	public:
		enum { _hx_ClassId = 0x680facf9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.Frame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.Frame"); }
		static hx::ObjectPtr< Frame_obj > __new();
		static hx::ObjectPtr< Frame_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frame_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Frame",0d,e8,b0,99); }

		void registerBehaviours();

		 ::Dynamic get_value();

		 ::Dynamic set_value( ::Dynamic value);

		 ::haxe::ui::core::ComponentContainer cloneComponent();

		 ::haxe::ui::core::ComponentContainer self();

		void registerComposite();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_Frame */ 
