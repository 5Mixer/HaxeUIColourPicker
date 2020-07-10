// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_parsers_ui_ComponentInfo
#define INCLUDED_haxe_ui_parsers_ui_ComponentInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,ComponentInfo)
HX_DECLARE_CLASS4(haxe,ui,parsers,ui,LayoutInfo)

namespace haxe{
namespace ui{
namespace parsers{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES ComponentInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ComponentInfo_obj OBJ_;
		ComponentInfo_obj();

	public:
		enum { _hx_ClassId = 0x0438721d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.parsers.ui.ComponentInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.parsers.ui.ComponentInfo"); }
		static hx::ObjectPtr< ComponentInfo_obj > __new();
		static hx::ObjectPtr< ComponentInfo_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentInfo",ab,47,4c,2b); }

		::String type;
		inline ::String _hx_set_type(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return type=_hx_v; }
		::String id;
		inline ::String _hx_set_id(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return id=_hx_v; }
		 ::Dynamic left;
		inline  ::Dynamic _hx_set_left(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return left=_hx_v; }
		 ::Dynamic top;
		inline  ::Dynamic _hx_set_top(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return top=_hx_v; }
		 ::Dynamic width;
		inline  ::Dynamic _hx_set_width(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return width=_hx_v; }
		 ::Dynamic height;
		inline  ::Dynamic _hx_set_height(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return height=_hx_v; }
		 ::Dynamic percentWidth;
		inline  ::Dynamic _hx_set_percentWidth(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return percentWidth=_hx_v; }
		 ::Dynamic percentHeight;
		inline  ::Dynamic _hx_set_percentHeight(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return percentHeight=_hx_v; }
		 ::Dynamic contentWidth;
		inline  ::Dynamic _hx_set_contentWidth(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return contentWidth=_hx_v; }
		 ::Dynamic contentHeight;
		inline  ::Dynamic _hx_set_contentHeight(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return contentHeight=_hx_v; }
		 ::Dynamic percentContentWidth;
		inline  ::Dynamic _hx_set_percentContentWidth(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return percentContentWidth=_hx_v; }
		 ::Dynamic percentContentHeight;
		inline  ::Dynamic _hx_set_percentContentHeight(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return percentContentHeight=_hx_v; }
		::String text;
		inline ::String _hx_set_text(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return text=_hx_v; }
		::String style;
		inline ::String _hx_set_style(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return style=_hx_v; }
		::String styleNames;
		inline ::String _hx_set_styleNames(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return styleNames=_hx_v; }
		 ::Dynamic composite;
		inline  ::Dynamic _hx_set_composite(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return composite=_hx_v; }
		::String layoutName;
		inline ::String _hx_set_layoutName(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return layoutName=_hx_v; }
		::String direction;
		inline ::String _hx_set_direction(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return direction=_hx_v; }
		 ::haxe::ds::StringMap properties;
		inline  ::haxe::ds::StringMap _hx_set_properties(hx::StackContext *_hx_ctx, ::haxe::ds::StringMap _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return properties=_hx_v; }
		 ::haxe::ui::parsers::ui::ComponentInfo parent;
		inline  ::haxe::ui::parsers::ui::ComponentInfo _hx_set_parent(hx::StackContext *_hx_ctx, ::haxe::ui::parsers::ui::ComponentInfo _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return parent=_hx_v; }
		::Array< ::Dynamic> children;
		inline ::Array< ::Dynamic> _hx_set_children(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return children=_hx_v; }
		 ::haxe::ui::parsers::ui::LayoutInfo layout;
		inline  ::haxe::ui::parsers::ui::LayoutInfo _hx_set_layout(hx::StackContext *_hx_ctx, ::haxe::ui::parsers::ui::LayoutInfo _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return layout=_hx_v; }
		::Array< ::String > scriptlets;
		inline ::Array< ::String > _hx_set_scriptlets(hx::StackContext *_hx_ctx,::Array< ::String > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return scriptlets=_hx_v; }
		::Array< ::String > styles;
		inline ::Array< ::String > _hx_set_styles(hx::StackContext *_hx_ctx,::Array< ::String > _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return styles=_hx_v; }
		::String data;
		inline ::String _hx_set_data(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return data=_hx_v; }
		::String condition;
		inline ::String _hx_set_condition(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return condition=_hx_v; }
		::String get_styleString();
		::Dynamic get_styleString_dyn();

		::String get_dataString();
		::Dynamic get_dataString_dyn();

		 ::haxe::ui::parsers::ui::ComponentInfo findRootComponent();
		::Dynamic findRootComponent_dyn();

		void validate();
		::Dynamic validate_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace ui

#endif /* INCLUDED_haxe_ui_parsers_ui_ComponentInfo */ 
