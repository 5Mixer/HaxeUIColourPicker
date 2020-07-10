// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_containers__ScrollView_VScrollMax
#define INCLUDED_haxe_ui_containers__ScrollView_VScrollMax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,DataBehaviour)
HX_DECLARE_CLASS3(haxe,ui,behaviours,ValueBehaviour)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,containers,_ScrollView,VScrollMax)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{


class HXCPP_CLASS_ATTRIBUTES VScrollMax_obj : public  ::haxe::ui::behaviours::DataBehaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::DataBehaviour_obj super;
		typedef VScrollMax_obj OBJ_;
		VScrollMax_obj();

	public:
		enum { _hx_ClassId = 0x3194ada6 };

		void __construct( ::haxe::ui::containers::ScrollView scrollview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._ScrollView.VScrollMax")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._ScrollView.VScrollMax"); }
		static hx::ObjectPtr< VScrollMax_obj > __new( ::haxe::ui::containers::ScrollView scrollview);
		static hx::ObjectPtr< VScrollMax_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VScrollMax_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VScrollMax",61,d5,db,78); }

		 ::haxe::ui::containers::ScrollView _scrollview;
		inline  ::haxe::ui::containers::ScrollView _hx_set__scrollview(hx::StackContext *_hx_ctx, ::haxe::ui::containers::ScrollView _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return _scrollview=_hx_v; }
		 ::haxe::ui::util::VariantType get();

		void validateData();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView

#endif /* INCLUDED_haxe_ui_containers__ScrollView_VScrollMax */ 
