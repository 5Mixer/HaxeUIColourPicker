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
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <hxinc/haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <hxinc/haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <hxinc/haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedIndexBehaviour
#include <hxinc/haxe/ui/containers/_ListView/SelectedIndexBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <hxinc/haxe/ui/core/IDataComponent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7ca8e167e43cbc75_405_new,"haxe.ui.containers._ListView.SelectedIndexBehaviour","new",0x2c336f2e,"haxe.ui.containers._ListView.SelectedIndexBehaviour.new","haxe/ui/containers/ListView.hx",405,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca8e167e43cbc75_406_get,"haxe.ui.containers._ListView.SelectedIndexBehaviour","get",0x2c2e1f64,"haxe.ui.containers._ListView.SelectedIndexBehaviour.get","haxe/ui/containers/ListView.hx",406,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca8e167e43cbc75_412_set,"haxe.ui.containers._ListView.SelectedIndexBehaviour","set",0x2c373a70,"haxe.ui.containers._ListView.SelectedIndexBehaviour.set","haxe/ui/containers/ListView.hx",412,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{

void SelectedIndexBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7ca8e167e43cbc75_405_new)
HXDLIN( 405)		super::__construct(component);
            	}

Dynamic SelectedIndexBehaviour_obj::__CreateEmpty() { return new SelectedIndexBehaviour_obj; }

void *SelectedIndexBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedIndexBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SelectedIndexBehaviour_obj > _hx_result = new SelectedIndexBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndexBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x426ea57c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x426ea57c;
	} else {
		return inClassId==(int)0x6c6873cd;
	}
}

 ::haxe::ui::util::VariantType SelectedIndexBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_7ca8e167e43cbc75_406_get)
HXLINE( 407)		 ::haxe::ui::containers::ListView listView = hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 408)		::Array< int > selectedIndices = listView->get_selectedIndices();
HXLINE( 409)		bool _hx_tmp;
HXDLIN( 409)		if (hx::IsNotNull( selectedIndices )) {
HXLINE( 409)			_hx_tmp = (selectedIndices->length > 0);
            		}
            		else {
HXLINE( 409)			_hx_tmp = false;
            		}
HXDLIN( 409)		if (_hx_tmp) {
HXLINE( 409)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(selectedIndices->__get((selectedIndices->length - 1))) ));
            		}
            		else {
HXLINE( 409)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(-1) ));
            		}
HXDLIN( 409)		return null();
            	}


void SelectedIndexBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_7ca8e167e43cbc75_412_set)
HXLINE( 413)		 ::haxe::ui::containers::ListView listView = hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 414)		::Array< int > _hx_tmp;
HXDLIN( 414)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::neq(value,::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(-1) )))) {
HXLINE( 414)			_hx_tmp = ::Array_obj< int >::__new(1)->init(0,::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(value));
            		}
            		else {
HXLINE( 414)			_hx_tmp = null();
            		}
HXDLIN( 414)		listView->set_selectedIndices(_hx_tmp);
            	}



hx::ObjectPtr< SelectedIndexBehaviour_obj > SelectedIndexBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< SelectedIndexBehaviour_obj > __this = new SelectedIndexBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< SelectedIndexBehaviour_obj > SelectedIndexBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndexBehaviour_obj *__this = (SelectedIndexBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndexBehaviour_obj), true, "haxe.ui.containers._ListView.SelectedIndexBehaviour"));
	*(void **)__this = SelectedIndexBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndexBehaviour_obj::SelectedIndexBehaviour_obj()
{
}

hx::Val SelectedIndexBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SelectedIndexBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SelectedIndexBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndexBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

hx::Class SelectedIndexBehaviour_obj::__mClass;

void SelectedIndexBehaviour_obj::__register()
{
	SelectedIndexBehaviour_obj _hx_dummy;
	SelectedIndexBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ListView.SelectedIndexBehaviour",3c,00,ed,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SelectedIndexBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SelectedIndexBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndexBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndexBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ListView
