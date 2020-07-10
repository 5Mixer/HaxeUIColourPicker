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
#ifndef INCLUDED_haxe_ui_components_Image
#include <hxinc/haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuItem_ExpandableBehaviour
#include <hxinc/haxe/ui/containers/menus/_MenuItem/ExpandableBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <hxinc/haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_496de811a6a1176f_60_new,"haxe.ui.containers.menus._MenuItem.ExpandableBehaviour","new",0xb49a349a,"haxe.ui.containers.menus._MenuItem.ExpandableBehaviour.new","haxe/ui/containers/menus/MenuItem.hx",60,0x19b927e6)
HX_LOCAL_STACK_FRAME(_hx_pos_496de811a6a1176f_61_validateData,"haxe.ui.containers.menus._MenuItem.ExpandableBehaviour","validateData",0xd10f9a66,"haxe.ui.containers.menus._MenuItem.ExpandableBehaviour.validateData","haxe/ui/containers/menus/MenuItem.hx",61,0x19b927e6)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuItem{

void ExpandableBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_496de811a6a1176f_60_new)
HXDLIN(  60)		super::__construct(component);
            	}

Dynamic ExpandableBehaviour_obj::__CreateEmpty() { return new ExpandableBehaviour_obj; }

void *ExpandableBehaviour_obj::_hx_vtable = 0;

Dynamic ExpandableBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ExpandableBehaviour_obj > _hx_result = new ExpandableBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ExpandableBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x672febc0 || inClassId==(int)0x6c6873cd;
	}
}

void ExpandableBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_496de811a6a1176f_61_validateData)
HXLINE(  62)		 ::haxe::ui::components::Image image = this->_component->findComponent(HX_("menuitem-expandable",6f,ce,0a,88),null(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if (hx::IsNull( image )) {
HXLINE(  63)			 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN(  63)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  64)			image =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  65)			image->set_id(HX_("menuitem-expandable",6f,ce,0a,88));
HXLINE(  66)			image->set_styleNames(HX_("menuitem-expandable",6f,ce,0a,88));
HXLINE(  67)			image->scriptAccess = false;
HXLINE(  68)			this->_component->addComponent(image);
HXLINE(  69)			{
HXLINE(  69)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  69)				_this->invalidateComponent(HX_("style",31,a5,1d,84));
HXDLIN(  69)				_this->_hx_set__style(HX_CTX, null());
            			}
            		}
            		else {
HXLINE(  70)			 ::haxe::ui::util::VariantType _hx_tmp2 = this->_value;
HXDLIN(  70)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(_hx_tmp2,::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false))) {
HXLINE(  71)				this->_component->removeComponent(image,null(),null());
            			}
            		}
            	}



hx::ObjectPtr< ExpandableBehaviour_obj > ExpandableBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ExpandableBehaviour_obj > __this = new ExpandableBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ExpandableBehaviour_obj > ExpandableBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ExpandableBehaviour_obj *__this = (ExpandableBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ExpandableBehaviour_obj), true, "haxe.ui.containers.menus._MenuItem.ExpandableBehaviour"));
	*(void **)__this = ExpandableBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ExpandableBehaviour_obj::ExpandableBehaviour_obj()
{
}

hx::Val ExpandableBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ExpandableBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ExpandableBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ExpandableBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class ExpandableBehaviour_obj::__mClass;

void ExpandableBehaviour_obj::__register()
{
	ExpandableBehaviour_obj _hx_dummy;
	ExpandableBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuItem.ExpandableBehaviour",a8,9f,d1,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ExpandableBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpandableBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpandableBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpandableBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuItem
