// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_containers__TableView_Layout
#define INCLUDED_haxe_ui_containers__TableView_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_VerticalVirtualLayout
#include <hxinc/haxe/ui/layouts/VerticalVirtualLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,containers,_TableView,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ScrollViewLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VerticalVirtualLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,VirtualLayout)

namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{


class HXCPP_CLASS_ATTRIBUTES Layout_obj : public  ::haxe::ui::layouts::VerticalVirtualLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::VerticalVirtualLayout_obj super;
		typedef Layout_obj OBJ_;
		Layout_obj();

	public:
		enum { _hx_ClassId = 0x2adc76b6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TableView.Layout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TableView.Layout"); }
		static hx::ObjectPtr< Layout_obj > __new();
		static hx::ObjectPtr< Layout_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Layout",ca,22,4d,8d); }

		hx::Class itemClass(int index, ::Dynamic data);

		void repositionChildren();

		void resizeChildren();

		Float verticalConstraintModifier();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView

#endif /* INCLUDED_haxe_ui_containers__TableView_Layout */ 
