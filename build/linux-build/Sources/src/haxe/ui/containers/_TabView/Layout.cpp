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
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <hxinc/haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TabView_Layout
#include <hxinc/haxe/ui/containers/_TabView/Layout.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd613d61eeb5a225_35_new,"haxe.ui.containers._TabView.Layout","new",0x170921c5,"haxe.ui.containers._TabView.Layout.new","haxe/ui/containers/TabView.hx",35,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_dd613d61eeb5a225_36_repositionChildren,"haxe.ui.containers._TabView.Layout","repositionChildren",0x2cb508f6,"haxe.ui.containers._TabView.Layout.repositionChildren","haxe/ui/containers/TabView.hx",36,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_dd613d61eeb5a225_62_resizeChildren,"haxe.ui.containers._TabView.Layout","resizeChildren",0x6ed0d20e,"haxe.ui.containers._TabView.Layout.resizeChildren","haxe/ui/containers/TabView.hx",62,0xfd8842ef)
HX_LOCAL_STACK_FRAME(_hx_pos_dd613d61eeb5a225_81_get_usableSize,"haxe.ui.containers._TabView.Layout","get_usableSize",0xec961add,"haxe.ui.containers._TabView.Layout.get_usableSize","haxe/ui/containers/TabView.hx",81,0xfd8842ef)
namespace haxe{
namespace ui{
namespace containers{
namespace _TabView{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dd613d61eeb5a225_35_new)
HXDLIN(  35)		super::__construct();
            	}

Dynamic Layout_obj::__CreateEmpty() { return new Layout_obj; }

void *Layout_obj::_hx_vtable = 0;

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Layout_obj > _hx_result = new Layout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Layout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x0f9a0511) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f9a0511;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void Layout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_dd613d61eeb5a225_36_repositionChildren)
HXLINE(  37)		 ::haxe::ui::components::TabBar tabs = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE(  38)		 ::haxe::ui::containers::Box content = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::containers::Box >(),false,null()).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if (hx::IsNotNull( tabs )) {
HXLINE(  39)			_hx_tmp = hx::IsNull( content );
            		}
            		else {
HXLINE(  39)			_hx_tmp = true;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  40)			return;
            		}
HXLINE(  43)		if (this->get_component()->hasClass(HX_(":bottom",a5,ce,55,d1))) {
HXLINE(  44)			content->set_left(this->get_paddingLeft());
HXLINE(  45)			content->set_top(this->get_paddingTop());
HXLINE(  47)			tabs->set_left(this->get_paddingLeft());
HXLINE(  48)			if (hx::IsNotEq( tabs->get_height(),0 )) {
HXLINE(  49)				 ::Dynamic _hx_tmp1 = this->get_component()->get_height();
HXDLIN(  49)				Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - ( (Float)(tabs->get_height()) ));
HXDLIN(  49)				Float _hx_tmp3 = (_hx_tmp2 - this->get_paddingBottom());
HXDLIN(  49)				tabs->set_top((_hx_tmp3 + this->marginTop(tabs)));
            			}
            		}
            		else {
HXLINE(  52)			tabs->set_left(this->get_paddingLeft());
HXLINE(  53)			Float _hx_tmp4 = this->get_paddingTop();
HXDLIN(  53)			tabs->set_top((_hx_tmp4 + this->marginTop(tabs)));
HXLINE(  55)			content->set_left(this->get_paddingLeft());
HXLINE(  56)			if (hx::IsNotEq( tabs->get_height(),0 )) {
HXLINE(  57)				 ::Dynamic _hx_tmp5 = tabs->get_top();
HXDLIN(  57)				Float _hx_tmp6 = (_hx_tmp5 + tabs->get_height());
HXDLIN(  57)				content->set_top((_hx_tmp6 - this->marginTop(tabs)));
            			}
            		}
            	}


void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_dd613d61eeb5a225_62_resizeChildren)
HXLINE(  63)		 ::haxe::ui::components::TabBar tabs = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE(  64)		 ::haxe::ui::containers::Box content = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::containers::Box >(),false,null()).StaticCast<  ::haxe::ui::containers::Box >();
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if (hx::IsNotNull( tabs )) {
HXLINE(  65)			_hx_tmp = hx::IsNull( content );
            		}
            		else {
HXLINE(  65)			_hx_tmp = true;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  66)			return;
            		}
HXLINE(  69)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  70)		tabs->set_width(usableSize->width);
HXLINE(  72)		if ((this->get_component()->get_autoHeight() == false)) {
HXLINE(  73)			content->set_height((usableSize->height + 1));
            		}
HXLINE(  76)		if ((this->get_component()->get_autoWidth() == false)) {
HXLINE(  77)			content->set_width(this->get_component()->get_width());
            		}
            	}


 ::haxe::ui::geom::Size Layout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_dd613d61eeb5a225_81_get_usableSize)
HXLINE(  82)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  83)		 ::haxe::ui::components::TabBar tabs = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::TabBar >(),false,null()).StaticCast<  ::haxe::ui::components::TabBar >();
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if (hx::IsNotNull( tabs )) {
HXLINE(  84)			_hx_tmp = hx::IsNotNull( tabs->get_componentHeight() );
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  85)			Float size2 = size1->height;
HXDLIN(  85)			size1->height = (size2 - ( (Float)(tabs->get_componentHeight()) ));
            		}
HXLINE(  87)		return size;
            	}



hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.containers._TabView.Layout"));
	*(void **)__this = Layout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Layout_obj::Layout_obj()
{
}

hx::Val Layout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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
static hx::StorageInfo *Layout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Layout_obj_sStaticStorageInfo = 0;
#endif

static ::String Layout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TabView.Layout",53,db,81,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Layout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Layout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TabView
