// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <hxinc/haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <hxinc/haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <hxinc/haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Range
#include <hxinc/haxe/ui/components/Range.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalSliderLayout
#include <hxinc/haxe/ui/components/VerticalSliderLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <hxinc/haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <hxinc/haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <hxinc/haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <hxinc/haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <hxinc/haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <hxinc/haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <hxinc/haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <hxinc/haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <hxinc/haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <hxinc/haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <hxinc/haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_043bbaf23c6c259b_15_new,"haxe.ui.components.VerticalSliderLayout","new",0x360e6d59,"haxe.ui.components.VerticalSliderLayout.new","haxe/ui/components/VerticalSlider.hx",15,0x79dcaa00)
HX_LOCAL_STACK_FRAME(_hx_pos_043bbaf23c6c259b_16_repositionChildren,"haxe.ui.components.VerticalSliderLayout","repositionChildren",0xff33e3e2,"haxe.ui.components.VerticalSliderLayout.repositionChildren","haxe/ui/components/VerticalSlider.hx",16,0x79dcaa00)
namespace haxe{
namespace ui{
namespace components{

void VerticalSliderLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_043bbaf23c6c259b_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic VerticalSliderLayout_obj::__CreateEmpty() { return new VerticalSliderLayout_obj; }

void *VerticalSliderLayout_obj::_hx_vtable = 0;

Dynamic VerticalSliderLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VerticalSliderLayout_obj > _hx_result = new VerticalSliderLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalSliderLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x4bb13331) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x4bb13331;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void VerticalSliderLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_043bbaf23c6c259b_16_repositionChildren)
HXLINE(  17)		this->super::repositionChildren();
HXLINE(  19)		 ::haxe::ui::components::Range range = ( ( ::haxe::ui::components::Range)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Range >(),null(),null())) );
HXLINE(  20)		 ::haxe::ui::core::Component rangeValue = range->findComponent(HX_("range-value",a1,cd,09,7e),null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  21)		 ::haxe::ui::components::Button startThumb = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("start-thumb",ab,c8,f3,50),null(),null(),null())) );
HXLINE(  22)		 ::haxe::ui::components::Button endThumb = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("end-thumb",e4,b8,ef,18),null(),null(),null())) );
HXLINE(  24)		if (hx::IsNotNull( startThumb )) {
HXLINE(  25)			 ::Dynamic _hx_tmp = range->get_top();
HXDLIN(  25)			Float _hx_tmp1 = (_hx_tmp + rangeValue->get_top());
HXDLIN(  25)			Float _hx_tmp2 = (_hx_tmp1 + rangeValue->get_height());
HXDLIN(  25)			startThumb->set_top((_hx_tmp2 - (( (Float)(startThumb->get_height()) ) / ( (Float)(2) ))));
            		}
HXLINE(  28)		 ::Dynamic _hx_tmp3 = range->get_top();
HXDLIN(  28)		Float _hx_tmp4 = (_hx_tmp3 + rangeValue->get_top());
HXDLIN(  28)		endThumb->set_top((_hx_tmp4 - (( (Float)(endThumb->get_height()) ) / ( (Float)(2) ))));
            	}



hx::ObjectPtr< VerticalSliderLayout_obj > VerticalSliderLayout_obj::__new() {
	hx::ObjectPtr< VerticalSliderLayout_obj > __this = new VerticalSliderLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VerticalSliderLayout_obj > VerticalSliderLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	VerticalSliderLayout_obj *__this = (VerticalSliderLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VerticalSliderLayout_obj), true, "haxe.ui.components.VerticalSliderLayout"));
	*(void **)__this = VerticalSliderLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalSliderLayout_obj::VerticalSliderLayout_obj()
{
}

hx::Val VerticalSliderLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *VerticalSliderLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VerticalSliderLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalSliderLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	::String(null()) };

hx::Class VerticalSliderLayout_obj::__mClass;

void VerticalSliderLayout_obj::__register()
{
	VerticalSliderLayout_obj _hx_dummy;
	VerticalSliderLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.VerticalSliderLayout",e7,cc,6c,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VerticalSliderLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VerticalSliderLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalSliderLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalSliderLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components