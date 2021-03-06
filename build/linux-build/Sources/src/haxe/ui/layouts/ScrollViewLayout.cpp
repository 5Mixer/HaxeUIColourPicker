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
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <hxinc/haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <hxinc/haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <hxinc/haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <hxinc/haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <hxinc/haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <hxinc/haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_Platform
#include <hxinc/haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <hxinc/haxe/ui/geom/Size.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <hxinc/haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c64222abbde4bc58_10_new,"haxe.ui.layouts.ScrollViewLayout","new",0xb5cf8485,"haxe.ui.layouts.ScrollViewLayout.new","haxe/ui/layouts/ScrollViewLayout.hx",10,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_11_repositionChildren,"haxe.ui.layouts.ScrollViewLayout","repositionChildren",0xf08bbe36,"haxe.ui.layouts.ScrollViewLayout.repositionChildren","haxe/ui/layouts/ScrollViewLayout.hx",11,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_34_resizeChildren,"haxe.ui.layouts.ScrollViewLayout","resizeChildren",0xf153e74e,"haxe.ui.layouts.ScrollViewLayout.resizeChildren","haxe/ui/layouts/ScrollViewLayout.hx",34,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_70_get_usableSize,"haxe.ui.layouts.ScrollViewLayout","get_usableSize",0x6f19301d,"haxe.ui.layouts.ScrollViewLayout.get_usableSize","haxe/ui/layouts/ScrollViewLayout.hx",70,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_97_calcAutoSize,"haxe.ui.layouts.ScrollViewLayout","calcAutoSize",0x6770a0c0,"haxe.ui.layouts.ScrollViewLayout.calcAutoSize","haxe/ui/layouts/ScrollViewLayout.hx",97,0x4379a48a)
namespace haxe{
namespace ui{
namespace layouts{

void ScrollViewLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic ScrollViewLayout_obj::__CreateEmpty() { return new ScrollViewLayout_obj; }

void *ScrollViewLayout_obj::_hx_vtable = 0;

Dynamic ScrollViewLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollViewLayout_obj > _hx_result = new ScrollViewLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollViewLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5cc4b84b) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x5cc4b84b;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void ScrollViewLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_11_repositionChildren)
HXLINE(  12)		 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  13)		if (hx::IsNull( contents )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  18)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (hx::IsNotNull( hscroll )) {
HXLINE(  20)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  20)			_hx_tmp = false;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN(  21)			 ::Dynamic _hx_tmp2 = this->get_component()->get_componentHeight();
HXDLIN(  21)			Float _hx_tmp3 = (( (Float)(_hx_tmp2) ) - ( (Float)(hscroll->get_componentHeight()) ));
HXDLIN(  21)			hscroll->moveComponent(_hx_tmp1,::Math_obj::fround((_hx_tmp3 - this->get_paddingBottom())));
            		}
HXLINE(  24)		bool _hx_tmp4;
HXDLIN(  24)		if (hx::IsNotNull( vscroll )) {
HXLINE(  24)			_hx_tmp4 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  24)			_hx_tmp4 = false;
            		}
HXDLIN(  24)		if (_hx_tmp4) {
HXLINE(  25)			 ::Dynamic _hx_tmp5 = this->get_component()->get_componentWidth();
HXDLIN(  25)			Float _hx_tmp6 = (( (Float)(_hx_tmp5) ) - ( (Float)(vscroll->get_componentWidth()) ));
HXDLIN(  25)			Float _hx_tmp7 = ::Math_obj::fround((_hx_tmp6 - this->get_paddingRight()));
HXDLIN(  25)			vscroll->moveComponent(_hx_tmp7,this->get_paddingTop());
            		}
HXLINE(  28)		 ::haxe::ui::core::Component contents1 = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  29)		if (hx::IsNotNull( contents1 )) {
HXLINE(  30)			Float _hx_tmp8 = this->get_paddingLeft();
HXDLIN(  30)			contents1->moveComponent(_hx_tmp8,this->get_paddingTop());
            		}
            	}


void ScrollViewLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_34_resizeChildren)
HXLINE(  35)		this->super::resizeChildren();
HXLINE(  37)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  38)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  40)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  41)		Float percentWidth = ( (Float)(100) );
HXLINE(  42)		Float percentHeight = ( (Float)(100) );
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  43)			::Array< ::Dynamic> _g1;
HXDLIN(  43)			if (hx::IsNull( _this->_children )) {
HXLINE(  43)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  43)				_g1 = _this->_children;
            			}
HXDLIN(  43)			while((_g < _g1->length)){
HXLINE(  43)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  43)				_g = (_g + 1);
HXLINE(  44)				bool _hx_tmp;
HXDLIN(  44)				if (hx::IsNotEq( child,hscroll )) {
HXLINE(  44)					_hx_tmp = hx::IsNotEq( child,vscroll );
            				}
            				else {
HXLINE(  44)					_hx_tmp = false;
            				}
HXDLIN(  44)				if (_hx_tmp) {
HXLINE(  45)					continue;
            				}
HXLINE(  48)				 ::Dynamic cx = null();
HXLINE(  49)				 ::Dynamic cy = null();
HXLINE(  51)				if (hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  52)					Float usableSize1 = usableSize->width;
HXDLIN(  52)					Float cx1 = ((usableSize1 * ( (Float)(child->get_percentWidth()) )) / percentWidth);
HXDLIN(  52)					Float cx2 = (cx1 - this->marginLeft(child));
HXDLIN(  52)					cx = (cx2 - this->marginRight(child));
            				}
HXLINE(  54)				if (hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  55)					Float usableSize2 = usableSize->height;
HXDLIN(  55)					Float cy1 = ((usableSize2 * ( (Float)(child->get_percentHeight()) )) / percentHeight);
HXDLIN(  55)					Float cy2 = (cy1 - this->marginTop(child));
HXDLIN(  55)					cy = (cy2 - this->marginBottom(child));
            				}
HXLINE(  58)				bool _hx_tmp1;
HXDLIN(  58)				if (this->fixedMinWidth(child)) {
HXLINE(  58)					_hx_tmp1 = hx::IsNotNull( child->get_percentWidth() );
            				}
            				else {
HXLINE(  58)					_hx_tmp1 = false;
            				}
HXDLIN(  58)				if (_hx_tmp1) {
HXLINE(  59)					percentWidth = (percentWidth - ( (Float)(child->get_percentWidth()) ));
            				}
HXLINE(  61)				bool _hx_tmp2;
HXDLIN(  61)				if (this->fixedMinHeight(child)) {
HXLINE(  61)					_hx_tmp2 = hx::IsNotNull( child->get_percentHeight() );
            				}
            				else {
HXLINE(  61)					_hx_tmp2 = false;
            				}
HXDLIN(  61)				if (_hx_tmp2) {
HXLINE(  62)					percentHeight = (percentHeight - ( (Float)(child->get_percentHeight()) ));
            				}
HXLINE(  65)				child->resizeComponent(cx,cy);
            			}
            		}
            	}


 ::haxe::ui::geom::Size ScrollViewLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_70_get_usableSize)
HXLINE(  71)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  72)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  73)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		bool _hx_tmp1;
HXDLIN(  74)		if (hx::IsNotNull( hscroll )) {
HXLINE(  74)			_hx_tmp1 = (hscroll->get_includeInLayout() == true);
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = false;
            		}
HXDLIN(  74)		if (_hx_tmp1) {
HXLINE(  74)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  74)			_hx_tmp = false;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  75)			Float size2 = size1->height;
HXDLIN(  75)			size1->height = (size2 - ( (Float)(hscroll->get_componentHeight()) ));
            		}
HXLINE(  77)		bool _hx_tmp2;
HXDLIN(  77)		bool _hx_tmp3;
HXDLIN(  77)		if (hx::IsNotNull( vscroll )) {
HXLINE(  77)			_hx_tmp3 = (vscroll->get_includeInLayout() == true);
            		}
            		else {
HXLINE(  77)			_hx_tmp3 = false;
            		}
HXDLIN(  77)		if (_hx_tmp3) {
HXLINE(  77)			_hx_tmp2 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  77)			_hx_tmp2 = false;
            		}
HXDLIN(  77)		if (_hx_tmp2) {
HXLINE(  78)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN(  78)			Float size4 = size3->width;
HXDLIN(  78)			size3->width = (size4 - ( (Float)(vscroll->get_componentWidth()) ));
            		}
HXLINE(  81)		bool _hx_tmp4;
HXDLIN(  81)		if (hx::IsNotEq( this->get_component()->get_native(),true )) {
HXLINE(  81)			_hx_tmp4 = (this->_component->get_isNativeScroller() == true);
            		}
            		else {
HXLINE(  81)			_hx_tmp4 = true;
            		}
HXDLIN(  81)		if (_hx_tmp4) {
HXLINE(  82)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  83)			if (hx::IsNotNull( contents )) {
HXLINE(  84)				 ::Dynamic _hx_tmp5 = contents->get_componentWidth();
HXDLIN(  84)				if (hx::IsGreater( _hx_tmp5,size->width )) {
HXLINE(  85)					 ::haxe::ui::geom::Size size5 = size;
HXDLIN(  85)					Float size6 = size5->height;
HXDLIN(  85)					size5->height = (size6 - ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            				}
HXLINE(  87)				 ::Dynamic _hx_tmp6 = contents->get_componentHeight();
HXDLIN(  87)				if (hx::IsGreater( _hx_tmp6,size->height )) {
HXLINE(  88)					 ::haxe::ui::geom::Size size7 = size;
HXDLIN(  88)					Float size8 = size7->width;
HXDLIN(  88)					size7->width = (size8 - ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            				}
            			}
            		}
HXLINE(  93)		return size;
            	}


 ::haxe::ui::geom::Size ScrollViewLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_97_calcAutoSize)
HXLINE(  98)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  99)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 100)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(::Array_obj< ::Dynamic>::__new(2)->init(0,hscroll)->init(1,vscroll));
HXLINE( 101)		bool _hx_tmp;
HXDLIN( 101)		if (hx::IsNotNull( hscroll )) {
HXLINE( 101)			_hx_tmp = (hscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 101)			_hx_tmp = false;
            		}
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 102)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 102)			Float size2 = size1->height;
HXDLIN( 102)			size1->height = (size2 + hscroll->get_componentHeight());
            		}
HXLINE( 104)		bool _hx_tmp1;
HXDLIN( 104)		if (hx::IsNotNull( vscroll )) {
HXLINE( 104)			_hx_tmp1 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 104)			_hx_tmp1 = false;
            		}
HXDLIN( 104)		if (_hx_tmp1) {
HXLINE( 105)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 105)			Float size4 = size3->width;
HXDLIN( 105)			size3->width = (size4 + vscroll->get_componentWidth());
            		}
HXLINE( 108)		bool _hx_tmp2;
HXDLIN( 108)		if (hx::IsNotEq( this->get_component()->get_native(),true )) {
HXLINE( 108)			_hx_tmp2 = (this->_component->get_isNativeScroller() == true);
            		}
            		else {
HXLINE( 108)			_hx_tmp2 = true;
            		}
HXDLIN( 108)		if (_hx_tmp2) {
HXLINE( 109)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 110)			if (hx::IsNotNull( contents )) {
HXLINE( 111)				 ::Dynamic _hx_tmp3 = contents->get_width();
HXDLIN( 111)				if (hx::IsGreater( _hx_tmp3,this->get_component()->get_width() )) {
HXLINE( 112)					 ::haxe::ui::geom::Size size5 = size;
HXDLIN( 112)					Float size6 = size5->height;
HXDLIN( 112)					size5->height = (size6 + ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            				}
HXLINE( 114)				 ::Dynamic _hx_tmp4 = contents->get_height();
HXDLIN( 114)				if (hx::IsGreater( _hx_tmp4,this->get_component()->get_height() )) {
HXLINE( 115)					 ::haxe::ui::geom::Size size7 = size;
HXDLIN( 115)					Float size8 = size7->width;
HXDLIN( 115)					size7->width = (size8 + ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            				}
            			}
            		}
HXLINE( 120)		return size;
            	}



hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__new() {
	hx::ObjectPtr< ScrollViewLayout_obj > __this = new ScrollViewLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	ScrollViewLayout_obj *__this = (ScrollViewLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewLayout_obj), true, "haxe.ui.layouts.ScrollViewLayout"));
	*(void **)__this = ScrollViewLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollViewLayout_obj::ScrollViewLayout_obj()
{
}

hx::Val ScrollViewLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ScrollViewLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ScrollViewLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

hx::Class ScrollViewLayout_obj::__mClass;

void ScrollViewLayout_obj::__register()
{
	ScrollViewLayout_obj _hx_dummy;
	ScrollViewLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.ScrollViewLayout",13,de,2f,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollViewLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollViewLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
