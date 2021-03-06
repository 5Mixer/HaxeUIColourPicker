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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ScrollModeBehaviour
#include <hxinc/haxe/ui/containers/_ScrollView/ScrollModeBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30a9fa94d6fa2336_391_new,"haxe.ui.containers._ScrollView.ScrollModeBehaviour","new",0x3c23f078,"haxe.ui.containers._ScrollView.ScrollModeBehaviour.new","haxe/ui/containers/ScrollView.hx",391,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_30a9fa94d6fa2336_393_validateData,"haxe.ui.containers._ScrollView.ScrollModeBehaviour","validateData",0xb68a72c8,"haxe.ui.containers._ScrollView.ScrollModeBehaviour.validateData","haxe/ui/containers/ScrollView.hx",393,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void ScrollModeBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_30a9fa94d6fa2336_391_new)
HXDLIN( 391)		super::__construct(component);
            	}

Dynamic ScrollModeBehaviour_obj::__CreateEmpty() { return new ScrollModeBehaviour_obj; }

void *ScrollModeBehaviour_obj::_hx_vtable = 0;

Dynamic ScrollModeBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollModeBehaviour_obj > _hx_result = new ScrollModeBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollModeBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x207cf043) {
		if (inClassId<=(int)0x0bc59d08) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0bc59d08;
		} else {
			return inClassId==(int)0x207cf043;
		}
	} else {
		return inClassId==(int)0x3a374360 || inClassId==(int)0x6c6873cd;
	}
}

void ScrollModeBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_30a9fa94d6fa2336_393_validateData)
HXDLIN( 393)		this->_component->registerInternalEvents(null(),true);
            	}



hx::ObjectPtr< ScrollModeBehaviour_obj > ScrollModeBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ScrollModeBehaviour_obj > __this = new ScrollModeBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ScrollModeBehaviour_obj > ScrollModeBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollModeBehaviour_obj *__this = (ScrollModeBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollModeBehaviour_obj), true, "haxe.ui.containers._ScrollView.ScrollModeBehaviour"));
	*(void **)__this = ScrollModeBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollModeBehaviour_obj::ScrollModeBehaviour_obj()
{
}

hx::Val ScrollModeBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ScrollModeBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ScrollModeBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollModeBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class ScrollModeBehaviour_obj::__mClass;

void ScrollModeBehaviour_obj::__register()
{
	ScrollModeBehaviour_obj _hx_dummy;
	ScrollModeBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.ScrollModeBehaviour",86,94,dc,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollModeBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollModeBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollModeBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollModeBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
