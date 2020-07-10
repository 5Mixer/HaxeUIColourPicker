// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_core_Component
#define INCLUDED_haxe_ui_core_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <hxinc/haxe/ui/core/IComponentBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
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
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,events,AnimationEvent)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,scripting,ScriptInterp)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,Animation)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,AnimationOptions)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrames)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS1(hscript,Interp)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Component_obj : public  ::haxe::ui::backend::ComponentImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentImpl_obj super;
		typedef Component_obj OBJ_;
		Component_obj();

	public:
		enum { _hx_ClassId = 0x7140e8dc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.Component"); }
		static hx::ObjectPtr< Component_obj > __new();
		static hx::ObjectPtr< Component_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Component",9d,d0,26,b1); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void addNamedComponentsFrom( ::haxe::ui::core::Component parent,::Array< ::Dynamic> list);
		static ::Dynamic addNamedComponentsFrom_dyn();

		hx::Class _defaultLayoutClass;
		inline hx::Class _hx_set__defaultLayoutClass(hx::StackContext *_hx_ctx,hx::Class _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _defaultLayoutClass=_hx_v; }
		void create();
		::Dynamic create_dyn();

		hx::Class _compositeBuilderClass;
		inline hx::Class _hx_set__compositeBuilderClass(hx::StackContext *_hx_ctx,hx::Class _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _compositeBuilderClass=_hx_v; }
		 ::haxe::ui::core::CompositeBuilder _compositeBuilder;
		inline  ::haxe::ui::core::CompositeBuilder _hx_set__compositeBuilder(hx::StackContext *_hx_ctx, ::haxe::ui::core::CompositeBuilder _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _compositeBuilder=_hx_v; }
		virtual void registerComposite();
		::Dynamic registerComposite_dyn();

		virtual void createDefaults();
		::Dynamic createDefaults_dyn();

		virtual void createChildren();
		::Dynamic createChildren_dyn();

		void destroyChildren();
		::Dynamic destroyChildren_dyn();

		 ::haxe::ui::layouts::Layout createLayout();
		::Dynamic createLayout_dyn();

		 ::Dynamic _native;
		inline  ::Dynamic _hx_set__native(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _native=_hx_v; }
		 ::Dynamic get_native();
		::Dynamic get_native_dyn();

		 ::Dynamic set_native( ::Dynamic value);
		::Dynamic set_native_dyn();

		bool _animatable;
		bool get_animatable();
		::Dynamic get_animatable_dyn();

		bool set_animatable(bool value);
		::Dynamic set_animatable_dyn();

		 ::haxe::ui::styles::animation::Animation _componentAnimation;
		inline  ::haxe::ui::styles::animation::Animation _hx_set__componentAnimation(hx::StackContext *_hx_ctx, ::haxe::ui::styles::animation::Animation _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _componentAnimation=_hx_v; }
		 ::haxe::ui::styles::animation::Animation get_componentAnimation();
		::Dynamic get_componentAnimation_dyn();

		 ::haxe::ui::styles::animation::Animation set_componentAnimation( ::haxe::ui::styles::animation::Animation value);
		::Dynamic set_componentAnimation_dyn();

		 ::Dynamic userData;
		inline  ::Dynamic _hx_set_userData(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return userData=_hx_v; }
		 ::haxe::ui::core::Screen screen;
		inline  ::haxe::ui::core::Screen _hx_set_screen(hx::StackContext *_hx_ctx, ::haxe::ui::core::Screen _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return screen=_hx_v; }
		 ::haxe::ui::core::Screen get_screen();
		::Dynamic get_screen_dyn();

		bool bindingRoot;
		 ::haxe::ui::core::Component get_rootComponent();
		::Dynamic get_rootComponent_dyn();

		int get_numComponents();
		::Dynamic get_numComponents_dyn();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);

		 ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);

		void onComponentAdded( ::haxe::ui::core::Component child);
		::Dynamic onComponentAdded_dyn();

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  dispose,hx::Null< bool >  invalidate);

		 ::haxe::ui::core::Component removeComponentAt(int index,hx::Null< bool >  dispose,hx::Null< bool >  invalidate);

		void onComponentRemoved( ::haxe::ui::core::Component child);
		::Dynamic onComponentRemoved_dyn();

		void assignPositionClasses(hx::Null< bool >  invalidate);
		::Dynamic assignPositionClasses_dyn();

		void destroyComponent();
		::Dynamic destroyComponent_dyn();

		void onDestroy();
		::Dynamic onDestroy_dyn();

		void walkComponents( ::Dynamic callback);
		::Dynamic walkComponents_dyn();

		void removeAllComponents(hx::Null< bool >  dispose);
		::Dynamic removeAllComponents_dyn();

		bool matchesSearch(::String criteria,hx::Class type,::String searchType);
		::Dynamic matchesSearch_dyn();

		 ::Dynamic findComponent(::String criteria,hx::Class type, ::Dynamic recursive,::String searchType);
		::Dynamic findComponent_dyn();

		::cpp::VirtualArray findComponents(::String styleName,hx::Class type,hx::Null< int >  maxDepth);
		::Dynamic findComponents_dyn();

		 ::Dynamic findAncestor(::String criteria,hx::Class type,::String searchType);
		::Dynamic findAncestor_dyn();

		::Array< ::Dynamic> findComponentsUnderPoint(Float screenX,Float screenY,hx::Class type);
		::Dynamic findComponentsUnderPoint_dyn();

		int getComponentIndex( ::haxe::ui::core::Component child);
		::Dynamic getComponentIndex_dyn();

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		 ::haxe::ui::core::Component getComponentAt(int index);
		::Dynamic getComponentAt_dyn();

		virtual void hide();
		::Dynamic hide_dyn();

		virtual void show();
		::Dynamic show_dyn();

		bool _hidden;
		bool get_hidden();
		::Dynamic get_hidden_dyn();

		bool set_hidden(bool value);
		::Dynamic set_hidden_dyn();

		 ::haxe::ui::styles::Style customStyle;
		inline  ::haxe::ui::styles::Style _hx_set_customStyle(hx::StackContext *_hx_ctx, ::haxe::ui::styles::Style _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return customStyle=_hx_v; }
		 ::haxe::ui::styles::Style set_customStyle( ::haxe::ui::styles::Style v);
		::Dynamic set_customStyle_dyn();

		::Array< ::String > classes;
		inline ::Array< ::String > _hx_set_classes(hx::StackContext *_hx_ctx,::Array< ::String > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return classes=_hx_v; }
		void addClass(::String name,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic addClass_dyn();

		void addClasses(::Array< ::String > names,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic addClasses_dyn();

		void removeClass(::String name,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic removeClass_dyn();

		void removeClasses(::Array< ::String > names,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic removeClasses_dyn();

		bool hasClass(::String name);
		::Dynamic hasClass_dyn();

		void swapClass(::String classToAdd,::String classToRemove,hx::Null< bool >  invalidate,hx::Null< bool >  recursive);
		::Dynamic swapClass_dyn();

		::String get_styleNames();
		::Dynamic get_styleNames_dyn();

		::String set_styleNames(::String value);
		::Dynamic set_styleNames_dyn();

		::String _styleString;
		inline ::String _hx_set__styleString(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return _styleString=_hx_v; }
		::String get_styleString();
		::Dynamic get_styleString_dyn();

		::String set_styleString(::String value);
		::Dynamic set_styleString_dyn();

		bool _includeInLayout;
		bool get_includeInLayout();
		::Dynamic get_includeInLayout_dyn();

		bool set_includeInLayout(bool value);
		::Dynamic set_includeInLayout_dyn();

		 ::haxe::ui::layouts::Layout get_layout();
		::Dynamic get_layout_dyn();

		 ::haxe::ui::layouts::Layout set_layout( ::haxe::ui::layouts::Layout value);
		::Dynamic set_layout_dyn();

		void lockLayout(hx::Null< bool >  recursive);
		::Dynamic lockLayout_dyn();

		void unlockLayout(hx::Null< bool >  recursive);
		::Dynamic unlockLayout_dyn();

		void ready();
		::Dynamic ready_dyn();

		virtual void onReady();
		::Dynamic onReady_dyn();

		virtual void onInitialize();
		::Dynamic onInitialize_dyn();

		void onResized();
		::Dynamic onResized_dyn();

		void onMoved();
		::Dynamic onMoved_dyn();

		bool scriptAccess;
		 ::haxe::ui::scripting::ScriptInterp _interp;
		inline  ::haxe::ui::scripting::ScriptInterp _hx_set__interp(hx::StackContext *_hx_ctx, ::haxe::ui::scripting::ScriptInterp _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _interp=_hx_v; }
		::String _script;
		inline ::String _hx_set__script(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return _script=_hx_v; }
		::String script;
		inline ::String _hx_set_script(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return script=_hx_v; }
		::String set_script(::String value);
		::Dynamic set_script_dyn();

		void executeScriptCall(::String expr, ::haxe::ds::StringMap variables);
		::Dynamic executeScriptCall_dyn();

		 ::haxe::ui::scripting::ScriptInterp findScriptInterp(hx::Null< bool >  refreshNamedComponents);
		::Dynamic findScriptInterp_dyn();

		void initScript();
		::Dynamic initScript_dyn();

		 ::haxe::ds::StringMap _scriptEvents;
		inline  ::haxe::ds::StringMap _hx_set__scriptEvents(hx::StackContext *_hx_ctx, ::haxe::ds::StringMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _scriptEvents=_hx_v; }
		 ::haxe::ds::StringMap scriptEvents;
		inline  ::haxe::ds::StringMap _hx_set_scriptEvents(hx::StackContext *_hx_ctx, ::haxe::ds::StringMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return scriptEvents=_hx_v; }
		 ::haxe::ds::StringMap get_scriptEvents();
		::Dynamic get_scriptEvents_dyn();

		void addScriptEvent(::String event,::String script);
		::Dynamic addScriptEvent_dyn();

		void _onScriptEvent(::String eventId, ::haxe::ui::events::UIEvent event);
		::Dynamic _onScriptEvent_dyn();

		::Array< ::Dynamic> namedComponents;
		inline ::Array< ::Dynamic> _hx_set_namedComponents(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return namedComponents=_hx_v; }
		::Array< ::Dynamic> get_namedComponents();
		::Dynamic get_namedComponents_dyn();

		void onThemeChanged();
		::Dynamic onThemeChanged_dyn();

		void initializeComponent();

		bool _initialSizeApplied;
		void validateInitialSize(bool isInitialized);

		virtual bool validateComponentLayout();

		void validateComponentStyle();

		void validateComponentPosition();

		void updateComponentDisplay();
		::Dynamic updateComponentDisplay_dyn();

		bool validateComponentAutoSize();
		::Dynamic validateComponentAutoSize_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);

		void onPointerEventsMouseOver( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseOver_dyn();

		void onPointerEventsMouseOut( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseOut_dyn();

		void onPointerEventsMouseDown( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseDown_dyn();

		void onPointerEventsMouseUp( ::haxe::ui::events::MouseEvent e);
		::Dynamic onPointerEventsMouseUp_dyn();

		void applyAnimationKeyFrame( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::haxe::ui::styles::animation::AnimationOptions options);
		::Dynamic applyAnimationKeyFrame_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		::String cssName;
		inline ::String _hx_set_cssName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return cssName=_hx_v; }
		virtual ::String get_cssName();
		::Dynamic get_cssName_dyn();

		virtual void registerBehaviours();

		 ::Dynamic get_color();
		::Dynamic get_color_dyn();

		 ::Dynamic set_color( ::Dynamic value);
		::Dynamic set_color_dyn();

		 ::Dynamic get_backgroundColor();
		::Dynamic get_backgroundColor_dyn();

		 ::Dynamic set_backgroundColor( ::Dynamic value);
		::Dynamic set_backgroundColor_dyn();

		 ::Dynamic get_borderColor();
		::Dynamic get_borderColor_dyn();

		 ::Dynamic set_borderColor( ::Dynamic value);
		::Dynamic set_borderColor_dyn();

		 ::Dynamic get_borderSize();
		::Dynamic get_borderSize_dyn();

		 ::Dynamic set_borderSize( ::Dynamic value);
		::Dynamic set_borderSize_dyn();

		 ::Dynamic get_borderRadius();
		::Dynamic get_borderRadius_dyn();

		 ::Dynamic set_borderRadius( ::Dynamic value);
		::Dynamic set_borderRadius_dyn();

		 ::Dynamic get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		 ::Dynamic set_paddingLeft( ::Dynamic value);
		::Dynamic set_paddingLeft_dyn();

		 ::Dynamic get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		 ::Dynamic set_paddingRight( ::Dynamic value);
		::Dynamic set_paddingRight_dyn();

		 ::Dynamic get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		 ::Dynamic set_paddingTop( ::Dynamic value);
		::Dynamic set_paddingTop_dyn();

		 ::Dynamic get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		 ::Dynamic set_paddingBottom( ::Dynamic value);
		::Dynamic set_paddingBottom_dyn();

		 ::Dynamic get_marginLeft();
		::Dynamic get_marginLeft_dyn();

		 ::Dynamic set_marginLeft( ::Dynamic value);
		::Dynamic set_marginLeft_dyn();

		 ::Dynamic get_marginRight();
		::Dynamic get_marginRight_dyn();

		 ::Dynamic set_marginRight( ::Dynamic value);
		::Dynamic set_marginRight_dyn();

		 ::Dynamic get_marginTop();
		::Dynamic get_marginTop_dyn();

		 ::Dynamic set_marginTop( ::Dynamic value);
		::Dynamic set_marginTop_dyn();

		 ::Dynamic get_marginBottom();
		::Dynamic get_marginBottom_dyn();

		 ::Dynamic set_marginBottom( ::Dynamic value);
		::Dynamic set_marginBottom_dyn();

		 ::Dynamic get_clip();
		::Dynamic get_clip_dyn();

		 ::Dynamic set_clip( ::Dynamic value);
		::Dynamic set_clip_dyn();

		 ::Dynamic get_opacity();
		::Dynamic get_opacity_dyn();

		 ::Dynamic set_opacity( ::Dynamic value);
		::Dynamic set_opacity_dyn();

		::String get_horizontalAlign();
		::Dynamic get_horizontalAlign_dyn();

		::String set_horizontalAlign(::String value);
		::Dynamic set_horizontalAlign_dyn();

		::String get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		::String set_verticalAlign(::String value);
		::Dynamic set_verticalAlign_dyn();

		virtual  ::haxe::ui::core::ComponentContainer self();

		 ::Dynamic _hx___onAnimationStart;
		inline  ::Dynamic _hx_set__hx___onAnimationStart(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___onAnimationStart=_hx_v; }
		Dynamic _hx___onAnimationStart_dyn() { return _hx___onAnimationStart;}
		 ::Dynamic onAnimationStart;
		inline  ::Dynamic _hx_set_onAnimationStart(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onAnimationStart=_hx_v; }
		Dynamic onAnimationStart_dyn() { return onAnimationStart;}
		 ::Dynamic set_onAnimationStart( ::Dynamic value);
		::Dynamic set_onAnimationStart_dyn();

		 ::Dynamic _hx___onAnimationEnd;
		inline  ::Dynamic _hx_set__hx___onAnimationEnd(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___onAnimationEnd=_hx_v; }
		Dynamic _hx___onAnimationEnd_dyn() { return _hx___onAnimationEnd;}
		 ::Dynamic onAnimationEnd;
		inline  ::Dynamic _hx_set_onAnimationEnd(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onAnimationEnd=_hx_v; }
		Dynamic onAnimationEnd_dyn() { return onAnimationEnd;}
		 ::Dynamic set_onAnimationEnd( ::Dynamic value);
		::Dynamic set_onAnimationEnd_dyn();

		 ::Dynamic _hx___onClick;
		inline  ::Dynamic _hx_set__hx___onClick(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___onClick=_hx_v; }
		Dynamic _hx___onClick_dyn() { return _hx___onClick;}
		 ::Dynamic onClick;
		inline  ::Dynamic _hx_set_onClick(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onClick=_hx_v; }
		Dynamic onClick_dyn() { return onClick;}
		 ::Dynamic set_onClick( ::Dynamic value);
		::Dynamic set_onClick_dyn();

		 ::Dynamic _hx___onRightClick;
		inline  ::Dynamic _hx_set__hx___onRightClick(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___onRightClick=_hx_v; }
		Dynamic _hx___onRightClick_dyn() { return _hx___onRightClick;}
		 ::Dynamic onRightClick;
		inline  ::Dynamic _hx_set_onRightClick(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onRightClick=_hx_v; }
		Dynamic onRightClick_dyn() { return onRightClick;}
		 ::Dynamic set_onRightClick( ::Dynamic value);
		::Dynamic set_onRightClick_dyn();

		 ::Dynamic _hx___onChange;
		inline  ::Dynamic _hx_set__hx___onChange(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _hx___onChange=_hx_v; }
		Dynamic _hx___onChange_dyn() { return _hx___onChange;}
		 ::Dynamic onChange;
		inline  ::Dynamic _hx_set_onChange(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onChange=_hx_v; }
		Dynamic onChange_dyn() { return onChange;}
		 ::Dynamic set_onChange( ::Dynamic value);
		::Dynamic set_onChange_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_Component */ 