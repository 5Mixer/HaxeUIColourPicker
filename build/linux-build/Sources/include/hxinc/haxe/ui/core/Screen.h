// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_core_Screen
#define INCLUDED_haxe_ui_core_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <hxinc/haxe/ui/backend/ScreenImpl.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,DialogBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS4(haxe,ui,containers,dialogs,Dialog)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Screen_obj : public  ::haxe::ui::backend::ScreenImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::ScreenImpl_obj super;
		typedef Screen_obj OBJ_;
		Screen_obj();

	public:
		enum { _hx_ClassId = 0x772cb325 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.Screen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.Screen"); }
		static hx::ObjectPtr< Screen_obj > __new();
		static hx::ObjectPtr< Screen_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Screen",8c,af,f1,7b); }

		static  ::haxe::ui::core::Screen _instance;
		static  ::haxe::ui::core::Screen get_instance();
		static ::Dynamic get_instance_dyn();

		::Array< ::Dynamic> rootComponents;
		inline ::Array< ::Dynamic> _hx_set_rootComponents(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return rootComponents=_hx_v; }
		 ::haxe::ui::util::EventMap _eventMap;
		inline  ::haxe::ui::util::EventMap _hx_set__eventMap(hx::StackContext *_hx_ctx, ::haxe::ui::util::EventMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _eventMap=_hx_v; }
		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component component);

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component component);

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		void refreshStyleRootComponents();
		::Dynamic refreshStyleRootComponents_dyn();

		void _refreshStyleComponent( ::haxe::ui::core::Component component);
		::Dynamic _refreshStyleComponent_dyn();

		void _onRootComponentResize( ::haxe::ui::events::UIEvent e);
		::Dynamic _onRootComponentResize_dyn();

		 ::haxe::ui::containers::dialogs::Dialog messageBox(::String message,::String title,::String type,hx::Null< bool >  modal, ::Dynamic callback);
		::Dynamic messageBox_dyn();

		 ::haxe::ui::containers::dialogs::Dialog dialog( ::haxe::ui::core::Component contents,::String title,::String buttons,hx::Null< bool >  modal, ::Dynamic callback);
		::Dynamic dialog_dyn();

		void invalidateAll();
		::Dynamic invalidateAll_dyn();

		void invalidateChildren( ::haxe::ui::core::Component c);
		::Dynamic invalidateChildren_dyn();

		void onThemeChanged();
		::Dynamic onThemeChanged_dyn();

		void onThemeChangedChildren( ::haxe::ui::core::Component c);
		::Dynamic onThemeChangedChildren_dyn();

		void registerEvent(::String type, ::Dynamic listener,hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void _onMappedEvent( ::haxe::ui::events::UIEvent event);
		::Dynamic _onMappedEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Screen */ 
