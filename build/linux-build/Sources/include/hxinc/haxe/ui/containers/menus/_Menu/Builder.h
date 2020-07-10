// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_containers_menus__Menu_Builder
#define INCLUDED_haxe_ui_containers_menus__Menu_Builder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <hxinc/haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,containers,menus,Menu)
HX_DECLARE_CLASS5(haxe,ui,containers,menus,_Menu,Builder)
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
namespace menus{
namespace _Menu{


class HXCPP_CLASS_ATTRIBUTES Builder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef Builder_obj OBJ_;
		Builder_obj();

	public:
		enum { _hx_ClassId = 0x4cb4a045 };

		void __construct( ::haxe::ui::containers::menus::Menu menu);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.menus._Menu.Builder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.menus._Menu.Builder"); }
		static hx::ObjectPtr< Builder_obj > __new( ::haxe::ui::containers::menus::Menu menu);
		static hx::ObjectPtr< Builder_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::Menu menu);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Builder_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Builder",fb,02,0c,3d); }

		 ::haxe::ui::containers::menus::Menu _menu;
		inline  ::haxe::ui::containers::menus::Menu _hx_set__menu(hx::StackContext *_hx_ctx, ::haxe::ui::containers::menus::Menu _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _menu=_hx_v; }
		 ::haxe::ds::ObjectMap _subMenus;
		inline  ::haxe::ds::ObjectMap _hx_set__subMenus(hx::StackContext *_hx_ctx, ::haxe::ds::ObjectMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _subMenus=_hx_v; }
		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		void onComponentAdded( ::haxe::ui::core::Component child);

		 ::Dynamic findComponent(::String criteria,hx::Class type, ::Dynamic recursive,::String searchType);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _Menu

#endif /* INCLUDED_haxe_ui_containers_menus__Menu_Builder */ 