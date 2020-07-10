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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <hxinc/haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <hxinc/haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <hxinc/haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedIndex
#include <hxinc/haxe/ui/components/_TabBar/SelectedIndex.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <hxinc/haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <hxinc/haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <hxinc/haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <hxinc/haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <hxinc/haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <hxinc/haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f99aa70c34f9f5cd_78_new,"haxe.ui.components._TabBar.SelectedIndex","new",0xf132e952,"haxe.ui.components._TabBar.SelectedIndex.new","haxe/ui/components/TabBar.hx",78,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_f99aa70c34f9f5cd_79_validateData,"haxe.ui.components._TabBar.SelectedIndex","validateData",0xd3468eae,"haxe.ui.components._TabBar.SelectedIndex.validateData","haxe/ui/components/TabBar.hx",79,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void SelectedIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f99aa70c34f9f5cd_78_new)
HXDLIN(  78)		super::__construct(component);
            	}

Dynamic SelectedIndex_obj::__CreateEmpty() { return new SelectedIndex_obj; }

void *SelectedIndex_obj::_hx_vtable = 0;

Dynamic SelectedIndex_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SelectedIndex_obj > _hx_result = new SelectedIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x4f79086e || inClassId==(int)0x6c6873cd;
	}
}

void SelectedIndex_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_f99aa70c34f9f5cd_79_validateData)
HXLINE(  80)		 ::haxe::ui::components::_TabBar::Builder builder = hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE(  81)		if (hx::IsNull( builder->_container )) {
HXLINE(  82)			return;
            		}
HXLINE(  84)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN(  84)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(0) )))) {
HXLINE(  85)			return;
            		}
HXLINE(  87)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN(  87)		 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN(  87)		::Array< ::Dynamic> _hx_tmp2;
HXDLIN(  87)		if (hx::IsNull( _this->_children )) {
HXLINE(  87)			_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  87)			_hx_tmp2 = _this->_children;
            		}
HXDLIN(  87)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)((_hx_tmp2->length - 1)) )))) {
HXLINE(  88)			 ::haxe::ui::containers::HBox _this1 = builder->_container;
HXDLIN(  88)			::Array< ::Dynamic> _hx_tmp3;
HXDLIN(  88)			if (hx::IsNull( _this1->_children )) {
HXLINE(  88)				_hx_tmp3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  88)				_hx_tmp3 = _this1->_children;
            			}
HXDLIN(  88)			this->_hx_set__value(HX_CTX, ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)((_hx_tmp3->length - 1)) )));
HXLINE(  89)			return;
            		}
HXLINE(  92)		 ::haxe::ui::containers::HBox builder1 = builder->_container;
HXDLIN(  92)		 ::haxe::ui::core::Component tab = builder1->getComponentAt(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
HXLINE(  93)		if (hx::IsNotNull( tab )) {
HXLINE(  94)			 ::haxe::ui::core::Component selectedTab = hx::TCast<  ::haxe::ui::components::TabBar >::cast(this->_component)->get_selectedTab();
HXLINE(  95)			if (hx::IsNotNull( selectedTab )) {
HXLINE(  96)				selectedTab->removeClass(HX_("tabbar-button-selected",67,00,aa,e0),null(),null());
            			}
HXLINE(  98)			tab->addClass(HX_("tabbar-button-selected",67,00,aa,e0),null(),null());
HXLINE( 100)			Float rangeMin = ::Math_obj::abs(( (Float)(builder->_container->get_left()) ));
HXLINE( 101)			Float rangeMax = (rangeMin + this->_component->get_width());
HXLINE( 103)			 ::haxe::ui::components::Button left = this->_component->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 104)			 ::haxe::ui::components::Button right = this->_component->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 105)			bool _hx_tmp4;
HXDLIN( 105)			if (hx::IsNotNull( left )) {
HXLINE( 105)				_hx_tmp4 = (left->get_hidden() == false);
            			}
            			else {
HXLINE( 105)				_hx_tmp4 = false;
            			}
HXDLIN( 105)			if (_hx_tmp4) {
HXLINE( 106)				rangeMax = (rangeMax - ( (Float)(left->get_width()) ));
HXLINE( 107)				rangeMax = (rangeMax - this->_component->get_layout()->get_horizontalSpacing());
            			}
HXLINE( 109)			bool _hx_tmp5;
HXDLIN( 109)			if (hx::IsNotNull( right )) {
HXLINE( 109)				_hx_tmp5 = (right->get_hidden() == false);
            			}
            			else {
HXLINE( 109)				_hx_tmp5 = false;
            			}
HXDLIN( 109)			if (_hx_tmp5) {
HXLINE( 110)				rangeMax = (rangeMax - ( (Float)(right->get_width()) ));
            			}
HXLINE( 113)			bool _hx_tmp6;
HXDLIN( 113)			if (!(hx::IsLess( tab->get_left(),rangeMin ))) {
HXLINE( 113)				 ::Dynamic _hx_tmp7 = tab->get_left();
HXDLIN( 113)				_hx_tmp6 = ((_hx_tmp7 + tab->get_width()) > rangeMax);
            			}
            			else {
HXLINE( 113)				_hx_tmp6 = true;
            			}
HXDLIN( 113)			if (_hx_tmp6) {
HXLINE( 114)				 ::Dynamic max = builder->_container->get_width();
HXDLIN( 114)				Float max1 = -((( (Float)(max) ) - ( (Float)(this->_component->get_width()) )));
HXLINE( 115)				Float x = -(tab->get_left());
HXDLIN( 115)				Float x1 = (x + this->_component->get_layout()->get_paddingLeft());
HXLINE( 116)				bool _hx_tmp8;
HXDLIN( 116)				if (hx::IsNotNull( left )) {
HXLINE( 116)					_hx_tmp8 = (left->get_hidden() == false);
            				}
            				else {
HXLINE( 116)					_hx_tmp8 = false;
            				}
HXDLIN( 116)				if (_hx_tmp8) {
HXLINE( 117)					max1 = (max1 - ( (Float)(left->get_width()) ));
HXLINE( 118)					max1 = (max1 - this->_component->get_layout()->get_horizontalSpacing());
            				}
HXLINE( 120)				bool _hx_tmp9;
HXDLIN( 120)				if (hx::IsNotNull( right )) {
HXLINE( 120)					_hx_tmp9 = (right->get_hidden() == false);
            				}
            				else {
HXLINE( 120)					_hx_tmp9 = false;
            				}
HXDLIN( 120)				if (_hx_tmp9) {
HXLINE( 121)					max1 = (max1 - ( (Float)(right->get_width()) ));
            				}
HXLINE( 124)				if ((x1 < max1)) {
HXLINE( 125)					x1 = max1;
            				}
HXLINE( 128)				builder->_hx_set__containerPosition(HX_CTX, x1);
HXLINE( 129)				builder->_container->set_left(x1);
            			}
HXLINE( 132)			{
HXLINE( 132)				 ::haxe::ui::core::Component _this2 = this->_component;
HXDLIN( 132)				bool _hx_tmp10;
HXDLIN( 132)				if (hx::IsNotNull( _this2->_layout )) {
HXLINE( 132)					_hx_tmp10 = (_this2->_layoutLocked == true);
            				}
            				else {
HXLINE( 132)					_hx_tmp10 = true;
            				}
HXDLIN( 132)				if (!(_hx_tmp10)) {
HXLINE( 132)					_this2->invalidateComponent(HX_("layout",aa,ae,b8,58));
            				}
            			}
HXLINE( 133)			 ::haxe::ui::core::Component _hx_tmp11 = this->_component;
HXDLIN( 133)			_hx_tmp11->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}



hx::ObjectPtr< SelectedIndex_obj > SelectedIndex_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< SelectedIndex_obj > __this = new SelectedIndex_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< SelectedIndex_obj > SelectedIndex_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndex_obj *__this = (SelectedIndex_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndex_obj), true, "haxe.ui.components._TabBar.SelectedIndex"));
	*(void **)__this = SelectedIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndex_obj::SelectedIndex_obj()
{
}

hx::Val SelectedIndex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SelectedIndex_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SelectedIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndex_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class SelectedIndex_obj::__mClass;

void SelectedIndex_obj::__register()
{
	SelectedIndex_obj _hx_dummy;
	SelectedIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.SelectedIndex",60,98,53,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SelectedIndex_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SelectedIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndex_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar