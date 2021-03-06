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
#ifndef INCLUDED_haxe_ui_components__TabBar_Layout
#include <hxinc/haxe/ui/components/_TabBar/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f72c470c66a51faa_33_new,"haxe.ui.components._TabBar.Layout","new",0x3bd11753,"haxe.ui.components._TabBar.Layout.new","haxe/ui/components/TabBar.hx",33,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_f72c470c66a51faa_34_repositionChildren,"haxe.ui.components._TabBar.Layout","repositionChildren",0x13df8328,"haxe.ui.components._TabBar.Layout.repositionChildren","haxe/ui/components/TabBar.hx",34,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f72c470c66a51faa_33_new)
HXDLIN(  33)		super::__construct();
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
	if (inClassId<=(int)0x642c8c13) {
		if (inClassId<=(int)0x548a03f5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x548a03f5;
		} else {
			return inClassId==(int)0x642c8c13;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void Layout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_f72c470c66a51faa_34_repositionChildren)
HXLINE(  35)		this->super::repositionChildren();
HXLINE(  37)		 ::haxe::ui::components::Button left = this->_component->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),null(),false,null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  38)		 ::haxe::ui::components::Button right = this->_component->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),null(),false,null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  39)		bool _hx_tmp;
HXDLIN(  39)		if (hx::IsNotNull( left )) {
HXLINE(  39)			_hx_tmp = (this->hidden(left) == false);
            		}
            		else {
HXLINE(  39)			_hx_tmp = false;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  40)			 ::Dynamic x = this->_component->get_width();
HXDLIN(  40)			Float x1 = (( (Float)(x) ) - ( (Float)(left->get_width()) ));
HXLINE(  41)			if (hx::IsNotNull( right )) {
HXLINE(  42)				x1 = (x1 - ( (Float)(right->get_width()) ));
            			}
HXLINE(  44)			left->set_left((x1 + 1));
HXLINE(  45)			Float _hx_tmp1 = (( (Float)(this->_component->get_height()) ) / ( (Float)(2) ));
HXDLIN(  45)			left->set_top((_hx_tmp1 - (( (Float)(left->get_height()) ) / ( (Float)(2) ))));
            		}
HXLINE(  48)		bool _hx_tmp2;
HXDLIN(  48)		if (hx::IsNotNull( right )) {
HXLINE(  48)			_hx_tmp2 = (this->hidden(right) == false);
            		}
            		else {
HXLINE(  48)			_hx_tmp2 = false;
            		}
HXDLIN(  48)		if (_hx_tmp2) {
HXLINE(  49)			 ::Dynamic _hx_tmp3 = this->_component->get_width();
HXDLIN(  49)			right->set_left((( (Float)(_hx_tmp3) ) - ( (Float)(right->get_width()) )));
HXLINE(  50)			Float _hx_tmp4 = (( (Float)(this->_component->get_height()) ) / ( (Float)(2) ));
HXDLIN(  50)			right->set_top((_hx_tmp4 - (( (Float)(right->get_height()) ) / ( (Float)(2) ))));
            		}
            	}



hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.components._TabBar.Layout"));
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
	::String(null()) };

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.Layout",e1,71,60,98);
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
} // end namespace components
} // end namespace _TabBar
