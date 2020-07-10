// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <hxinc/haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_HorizontalScrollLayout
#include <hxinc/haxe/ui/components/_HorizontalScroll/HorizontalScrollLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_87_new,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","new",0x5ba67ed1,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.new","haxe/ui/components/HorizontalScroll.hx",87,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_88_resizeChildren,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","resizeChildren",0x851fb882,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.resizeChildren","haxe/ui/components/HorizontalScroll.hx",88,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_108_repositionChildren,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","repositionChildren",0x75ea396a,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.repositionChildren","haxe/ui/components/HorizontalScroll.hx",108,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6e4ec80e41eabd_134_get_usableWidth,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout","get_usableWidth",0xd305d376,"haxe.ui.components._HorizontalScroll.HorizontalScrollLayout.get_usableWidth","haxe/ui/components/HorizontalScroll.hx",134,0xfa934da6)
namespace haxe{
namespace ui{
namespace components{
namespace _HorizontalScroll{

void HorizontalScrollLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_87_new)
HXDLIN(  87)		super::__construct();
            	}

Dynamic HorizontalScrollLayout_obj::__CreateEmpty() { return new HorizontalScrollLayout_obj; }

void *HorizontalScrollLayout_obj::_hx_vtable = 0;

Dynamic HorizontalScrollLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HorizontalScrollLayout_obj > _hx_result = new HorizontalScrollLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalScrollLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x652c3c60) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x652c3c60;
		}
	} else {
		return inClassId==(int)0x77af0fab;
	}
}

void HorizontalScrollLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_88_resizeChildren)
HXLINE(  89)		this->super::resizeChildren();
HXLINE(  91)		 ::haxe::ui::components::Scroll scroll = hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE(  92)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  93)		if (hx::IsNotNull( thumb )) {
HXLINE(  94)			Float m = scroll->get_max();
HXDLIN(  94)			Float m1 = (m - scroll->get_min());
HXLINE(  95)			Float ucx = this->get_usableWidth();
HXLINE(  96)			Float thumbWidth = ((scroll->get_pageSize() / m1) * ucx);
HXLINE(  97)			if ((thumbWidth < this->get_innerHeight())) {
HXLINE(  98)				thumbWidth = this->get_innerHeight();
            			}
            			else {
HXLINE(  99)				if ((thumbWidth > ucx)) {
HXLINE( 100)					thumbWidth = ucx;
            				}
            			}
HXLINE( 102)			bool _hx_tmp;
HXDLIN( 102)			if ((thumbWidth > 0)) {
HXLINE( 102)				_hx_tmp = (::Math_obj::isNaN(thumbWidth) == false);
            			}
            			else {
HXLINE( 102)				_hx_tmp = false;
            			}
HXDLIN( 102)			if (_hx_tmp) {
HXLINE( 103)				thumb->set_width(thumbWidth);
            			}
            		}
            	}


void HorizontalScrollLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_108_repositionChildren)
HXLINE( 109)		this->super::repositionChildren();
HXLINE( 111)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 112)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (hx::IsNotNull( inc )) {
HXLINE( 113)			_hx_tmp = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			 ::Dynamic _hx_tmp1 = this->get_component()->get_width();
HXDLIN( 114)			Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - ( (Float)(inc->get_width()) ));
HXDLIN( 114)			inc->set_left((_hx_tmp2 - this->get_paddingRight()));
            		}
HXLINE( 117)		 ::haxe::ui::components::Scroll scroll = hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->get_component());
HXLINE( 118)		 ::haxe::ui::components::Button thumb = this->get_component()->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 119)		if (hx::IsNotNull( thumb )) {
HXLINE( 120)			Float m = scroll->get_max();
HXDLIN( 120)			Float m1 = (m - scroll->get_min());
HXLINE( 121)			Float u = this->get_usableWidth();
HXLINE( 122)			u = (u - ( (Float)(thumb->get_componentWidth()) ));
HXLINE( 123)			Float x = scroll->get_pos();
HXDLIN( 123)			Float x1 = (((x - scroll->get_min()) / m1) * u);
HXLINE( 124)			x1 = (x1 + this->get_paddingLeft());
HXLINE( 125)			bool _hx_tmp3;
HXDLIN( 125)			if (hx::IsNotNull( deinc )) {
HXLINE( 125)				_hx_tmp3 = (this->hidden(deinc) == false);
            			}
            			else {
HXLINE( 125)				_hx_tmp3 = false;
            			}
HXDLIN( 125)			if (_hx_tmp3) {
HXLINE( 126)				 ::Dynamic x2 = deinc->get_width();
HXDLIN( 126)				x1 = (x1 + (x2 + this->get_horizontalSpacing()));
            			}
HXLINE( 128)			thumb->set_left(x1);
HXLINE( 129)			thumb->set_top(::Math_obj::fround(( (Float)(thumb->get_top()) )));
            		}
            	}


Float HorizontalScrollLayout_obj::get_usableWidth(){
            	HX_STACKFRAME(&_hx_pos_fa6e4ec80e41eabd_134_get_usableWidth)
HXLINE( 135)		Float ucx = this->get_innerWidth();
HXLINE( 136)		 ::haxe::ui::components::Button deinc = this->get_component()->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 137)		 ::haxe::ui::components::Button inc = this->get_component()->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 138)		bool _hx_tmp;
HXDLIN( 138)		if (hx::IsNotNull( deinc )) {
HXLINE( 138)			_hx_tmp = (this->hidden(deinc) == false);
            		}
            		else {
HXLINE( 138)			_hx_tmp = false;
            		}
HXDLIN( 138)		if (_hx_tmp) {
HXLINE( 139)			 ::Dynamic ucx1 = deinc->get_width();
HXDLIN( 139)			ucx = (ucx - (ucx1 + this->get_horizontalSpacing()));
            		}
HXLINE( 141)		bool _hx_tmp1;
HXDLIN( 141)		if (hx::IsNotNull( inc )) {
HXLINE( 141)			_hx_tmp1 = (this->hidden(inc) == false);
            		}
            		else {
HXLINE( 141)			_hx_tmp1 = false;
            		}
HXDLIN( 141)		if (_hx_tmp1) {
HXLINE( 142)			 ::Dynamic ucx2 = inc->get_width();
HXDLIN( 142)			ucx = (ucx - (ucx2 + this->get_horizontalSpacing()));
            		}
HXLINE( 144)		return ucx;
            	}



hx::ObjectPtr< HorizontalScrollLayout_obj > HorizontalScrollLayout_obj::__new() {
	hx::ObjectPtr< HorizontalScrollLayout_obj > __this = new HorizontalScrollLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HorizontalScrollLayout_obj > HorizontalScrollLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	HorizontalScrollLayout_obj *__this = (HorizontalScrollLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalScrollLayout_obj), true, "haxe.ui.components._HorizontalScroll.HorizontalScrollLayout"));
	*(void **)__this = HorizontalScrollLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalScrollLayout_obj::HorizontalScrollLayout_obj()
{
}

hx::Val HorizontalScrollLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return hx::Val( get_usableWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *HorizontalScrollLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HorizontalScrollLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalScrollLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableWidth",85,bf,6e,25),
	::String(null()) };

hx::Class HorizontalScrollLayout_obj::__mClass;

void HorizontalScrollLayout_obj::__register()
{
	HorizontalScrollLayout_obj _hx_dummy;
	HorizontalScrollLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._HorizontalScroll.HorizontalScrollLayout",5f,c2,50,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HorizontalScrollLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalScrollLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalScrollLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalScrollLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _HorizontalScroll
