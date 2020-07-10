// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_styles_animation_KeyFrame
#define INCLUDED_haxe_ui_styles_animation_KeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,EasingFunction)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,KeyFrame)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,Actuator)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES KeyFrame_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef KeyFrame_obj OBJ_;
		KeyFrame_obj();

	public:
		enum { _hx_ClassId = 0x4b277596 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.KeyFrame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.KeyFrame"); }
		static hx::ObjectPtr< KeyFrame_obj > __new();
		static hx::ObjectPtr< KeyFrame_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyFrame_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyFrame",2e,da,9e,24); }

		::Array< ::Dynamic> directives;
		inline ::Array< ::Dynamic> _hx_set_directives(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return directives=_hx_v; }
		Float time;
		Float delay;
		 ::haxe::ui::styles::EasingFunction easingFunction;
		inline  ::haxe::ui::styles::EasingFunction _hx_set_easingFunction(hx::StackContext *_hx_ctx, ::haxe::ui::styles::EasingFunction _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return easingFunction=_hx_v; }
		 ::haxe::ui::styles::animation::util::Actuator _actuator;
		inline  ::haxe::ui::styles::animation::util::Actuator _hx_set__actuator(hx::StackContext *_hx_ctx, ::haxe::ui::styles::animation::util::Actuator _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _actuator=_hx_v; }
		void stop();
		::Dynamic stop_dyn();

		void run( ::Dynamic target, ::Dynamic cb);
		::Dynamic run_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation

#endif /* INCLUDED_haxe_ui_styles_animation_KeyFrame */ 
