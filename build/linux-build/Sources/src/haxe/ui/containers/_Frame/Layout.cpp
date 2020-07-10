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
#ifndef INCLUDED_haxe_ui_components_Label
#include <hxinc/haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Frame_Layout
#include <hxinc/haxe/ui/containers/_Frame/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_91ccd4c47f0428da_79_new,"haxe.ui.containers._Frame.Layout","new",0x12599492,"haxe.ui.containers._Frame.Layout.new","haxe/ui/containers/Frame.hx",79,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_91ccd4c47f0428da_80_resizeChildren,"haxe.ui.containers._Frame.Layout","resizeChildren",0x7a9c6861,"haxe.ui.containers._Frame.Layout.resizeChildren","haxe/ui/containers/Frame.hx",80,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_91ccd4c47f0428da_100_repositionChildren,"haxe.ui.containers._Frame.Layout","repositionChildren",0x5f45c4c9,"haxe.ui.containers._Frame.Layout.repositionChildren","haxe/ui/containers/Frame.hx",100,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_91ccd4c47f0428da_117_calcAutoSize,"haxe.ui.containers._Frame.Layout","calcAutoSize",0x94eca713,"haxe.ui.containers._Frame.Layout.calcAutoSize","haxe/ui/containers/Frame.hx",117,0x566bdf3c)
namespace haxe{
namespace ui{
namespace containers{
namespace _Frame{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_91ccd4c47f0428da_79_new)
HXDLIN(  79)		super::__construct();
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
		if (inClassId<=(int)0x3254506c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3254506c;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_91ccd4c47f0428da_80_resizeChildren)
HXLINE(  81)		 ::haxe::ui::containers::Box contents = ( ( ::haxe::ui::containers::Box)(this->findComponent(HX_("frame-contents",7a,14,f8,89),hx::ClassOf< ::haxe::ui::containers::Box >(),false,null())) );
HXLINE(  82)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(HX_("frame-title",38,aa,fd,b7),hx::ClassOf< ::haxe::ui::components::Label >(),false,null())) );
HXLINE(  83)		 ::haxe::ui::core::Component line1 = ( ( ::haxe::ui::core::Component)(this->findComponent(HX_("frame-left-line",da,15,27,d1),hx::ClassOf< ::haxe::ui::core::Component >(),false,null())) );
HXLINE(  84)		 ::haxe::ui::core::Component line2 = ( ( ::haxe::ui::core::Component)(this->findComponent(HX_("frame-right-line",a5,50,d1,63),hx::ClassOf< ::haxe::ui::core::Component >(),false,null())) );
HXLINE(  86)		if ((this->_component->get_autoWidth() == false)) {
HXLINE(  87)			contents->set_width(this->_component->get_width());
            		}
HXLINE(  89)		if ((this->_component->get_autoHeight() == false)) {
HXLINE(  90)			 ::Dynamic _hx_tmp = this->_component->get_height();
HXDLIN(  90)			contents->set_height((( (Float)(_hx_tmp) ) - (( (Float)(label->get_height()) ) / ( (Float)(2) ))));
            		}
HXLINE(  92)		int offset = 2;
HXLINE(  96)		line1->set_width((this->get_paddingLeft() - ( (Float)(offset) )));
HXLINE(  97)		 ::Dynamic _hx_tmp1 = this->_component->get_width();
HXDLIN(  97)		Float _hx_tmp2 = this->get_paddingLeft();
HXDLIN(  97)		line2->set_width(((( (Float)(_hx_tmp1) ) - (_hx_tmp2 + label->get_width())) - ( (Float)(offset) )));
            	}


void Layout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_91ccd4c47f0428da_100_repositionChildren)
HXLINE( 101)		 ::haxe::ui::containers::Box contents = ( ( ::haxe::ui::containers::Box)(this->findComponent(HX_("frame-contents",7a,14,f8,89),hx::ClassOf< ::haxe::ui::containers::Box >(),false,null())) );
HXLINE( 102)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(HX_("frame-title",38,aa,fd,b7),hx::ClassOf< ::haxe::ui::components::Label >(),false,null())) );
HXLINE( 103)		 ::haxe::ui::core::Component line1 = ( ( ::haxe::ui::core::Component)(this->findComponent(HX_("frame-left-line",da,15,27,d1),hx::ClassOf< ::haxe::ui::core::Component >(),false,null())) );
HXLINE( 104)		 ::haxe::ui::core::Component line2 = ( ( ::haxe::ui::core::Component)(this->findComponent(HX_("frame-right-line",a5,50,d1,63),hx::ClassOf< ::haxe::ui::core::Component >(),false,null())) );
HXLINE( 106)		 ::Dynamic _hx_tmp = this->_component->get_height();
HXDLIN( 106)		contents->set_top((( (Float)(_hx_tmp) ) - ( (Float)(contents->get_height()) )));
HXLINE( 107)		int offset = 2;
HXLINE( 111)		label->set_left(this->get_paddingLeft());
HXLINE( 112)		line1->set_top(contents->get_top());
HXLINE( 113)		Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN( 113)		line2->set_left(((_hx_tmp1 + label->get_width()) + offset));
HXLINE( 114)		line2->set_top(contents->get_top());
            	}


 ::haxe::ui::geom::Size Layout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_91ccd4c47f0428da_117_calcAutoSize)
HXLINE( 118)		 ::haxe::ui::components::Label label = ( ( ::haxe::ui::components::Label)(this->findComponent(HX_("frame-title",38,aa,fd,b7),hx::ClassOf< ::haxe::ui::components::Label >(),false,null())) );
HXLINE( 119)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 120)		 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 120)		Float size2 = size1->height;
HXDLIN( 120)		size1->height = (size2 + (( (Float)(label->get_height()) ) / ( (Float)(2) )));
HXLINE( 121)		 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 121)		Float size4 = size3->width;
HXDLIN( 121)		size3->width = (size4 - this->get_paddingLeft());
HXLINE( 122)		return size;
            	}



hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.containers._Frame.Layout"));
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
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
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
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	::String(null()) };

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._Frame.Layout",a0,a3,73,4d);
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
} // end namespace _Frame
