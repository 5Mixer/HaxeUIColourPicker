// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_core_LayoutClassMap
#define INCLUDED_haxe_ui_core_LayoutClassMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,core,LayoutClassMap)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES LayoutClassMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LayoutClassMap_obj OBJ_;
		LayoutClassMap_obj();

	public:
		enum { _hx_ClassId = 0x24c67857 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.LayoutClassMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.core.LayoutClassMap"); }
		static hx::ObjectPtr< LayoutClassMap_obj > __new();
		static hx::ObjectPtr< LayoutClassMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LayoutClassMap_obj();

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
		::String __ToString() const { return HX_("LayoutClassMap",2e,f6,ee,73); }

		static  ::haxe::ui::core::LayoutClassMap _instance;
		static  ::haxe::ui::core::LayoutClassMap get_instance();
		static ::Dynamic get_instance_dyn();

		static ::String get(::String alias);
		static ::Dynamic get_dyn();

		static void _hx_register(::String alias,::String className);
		static ::Dynamic _hx_register_dyn();

		static  ::Dynamic list();
		static ::Dynamic list_dyn();

		 ::haxe::ds::StringMap _map;
		inline  ::haxe::ds::StringMap _hx_set__map(hx::StackContext *_hx_ctx, ::haxe::ds::StringMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _map=_hx_v; }
		::String getClassName(::String alias);
		::Dynamic getClassName_dyn();

		void registerClassName(::String alias,::String className);
		::Dynamic registerClassName_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_LayoutClassMap */ 
