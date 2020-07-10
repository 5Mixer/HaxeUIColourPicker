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
#ifndef INCLUDED_haxe_ui_components_CheckBoxValue
#include <hxinc/haxe/ui/components/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <hxinc/haxe/ui/components/Image.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_06d8b660a0799600_29_new,"haxe.ui.components.CheckBoxValue","new",0xe85b4eda,"haxe.ui.components.CheckBoxValue.new","haxe/ui/components/CheckBox.hx",29,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_36_onReady,"haxe.ui.components.CheckBoxValue","onReady",0x3079823e,"haxe.ui.components.CheckBoxValue.onReady","haxe/ui/components/CheckBox.hx",36,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_39_applyStyle,"haxe.ui.components.CheckBoxValue","applyStyle",0x7c7dc5a9,"haxe.ui.components.CheckBoxValue.applyStyle","haxe/ui/components/CheckBox.hx",39,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_06d8b660a0799600_47_createIcon,"haxe.ui.components.CheckBoxValue","createIcon",0xa54f4d5b,"haxe.ui.components.CheckBoxValue.createIcon","haxe/ui/components/CheckBox.hx",47,0xaeb3e5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_4bd59a09dfe70b4f_315_registerBehaviours,"haxe.ui.components.CheckBoxValue","registerBehaviours",0x0d71829f,"haxe.ui.components.CheckBoxValue.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_3c92488a26823be7_521_cloneComponent,"haxe.ui.components.CheckBoxValue","cloneComponent",0xcade6966,"haxe.ui.components.CheckBoxValue.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_4bd59a09dfe70b4f_302_self,"haxe.ui.components.CheckBoxValue","self",0x6ad7b7d2,"haxe.ui.components.CheckBoxValue.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void CheckBoxValue_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_29_new)
HXDLIN(  29)		super::__construct();
            	}

Dynamic CheckBoxValue_obj::__CreateEmpty() { return new CheckBoxValue_obj; }

void *CheckBoxValue_obj::_hx_vtable = 0;

Dynamic CheckBoxValue_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CheckBoxValue_obj > _hx_result = new CheckBoxValue_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CheckBoxValue_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x2851da96) {
			if (inClassId<=(int)0x23af8dfd) {
				if (inClassId<=(int)0x0fddceef) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0fddceef;
				} else {
					return inClassId==(int)0x23af8dfd;
				}
			} else {
				return inClassId==(int)0x2851da96;
			}
		} else {
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x2a04b446 || inClassId==(int)0x324697fd;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				if (inClassId<=(int)0x5f23eff4) {
					return inClassId==(int)0x4eb0678b || inClassId==(int)0x5f23eff4;
				} else {
					return inClassId==(int)0x7140e8dc;
				}
			} else {
				return inClassId==(int)0x7ee2d869;
			}
		} else {
			return inClassId==(int)0x7f63f3f1 || inClassId==(int)0x7ff0cb0e;
		}
	}
}

void CheckBoxValue_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_36_onReady)
HXDLIN(  36)		this->createIcon();
            	}


void CheckBoxValue_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_06d8b660a0799600_39_applyStyle)
HXLINE(  40)		this->super::applyStyle(style);
HXLINE(  41)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE(  42)		if (hx::IsNotNull( icon )) {
HXLINE(  43)			icon->set_resource(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(style->icon));
            		}
            	}


void CheckBoxValue_obj::createIcon(){
            	HX_GC_STACKFRAME(&_hx_pos_06d8b660a0799600_47_createIcon)
HXLINE(  48)		 ::haxe::ui::components::Image icon = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (hx::IsNull( icon )) {
HXLINE(  49)			_hx_tmp = hx::IsNotNull( this->parentComponent );
            		}
            		else {
HXLINE(  49)			_hx_tmp = false;
            		}
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  51)			icon->set_id(((HX_("",00,00,00,00) + this->parentComponent->get_cssName()) + HX_("-icon",26,02,bb,2e)));
HXLINE(  52)			icon->addClass(((HX_("",00,00,00,00) + this->parentComponent->get_cssName()) + HX_("-icon",26,02,bb,2e)),null(),null());
HXLINE(  53)			bool _hx_tmp1;
HXDLIN(  53)			if (hx::IsNotNull( this->get_style() )) {
HXLINE(  53)				_hx_tmp1 = hx::IsNotNull( this->get_style()->icon );
            			}
            			else {
HXLINE(  53)				_hx_tmp1 = false;
            			}
HXDLIN(  53)			if (_hx_tmp1) {
HXLINE(  54)				icon->set_resource(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(this->get_style()->icon));
            			}
HXLINE(  56)			this->addComponent(icon);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CheckBoxValue_obj,createIcon,(void))

void CheckBoxValue_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_4bd59a09dfe70b4f_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer CheckBoxValue_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_3c92488a26823be7_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::components::CheckBoxValue c = ( ( ::haxe::ui::components::CheckBoxValue)(this->super::cloneComponent()) );
HXLINE( 287)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 287)		if (hx::IsNull( this->_children )) {
HXLINE( 287)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 287)			_hx_tmp = this->_children;
            		}
HXDLIN( 287)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 287)		if (hx::IsNull( c->_children )) {
HXLINE( 287)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 287)			_hx_tmp1 = c->_children;
            		}
HXDLIN( 287)		if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 288)			int _g = 0;
HXDLIN( 288)			::Array< ::Dynamic> _g1;
HXDLIN( 288)			if (hx::IsNull( this->_children )) {
HXLINE( 288)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 288)				_g1 = this->_children;
            			}
HXDLIN( 288)			while((_g < _g1->length)){
HXLINE( 288)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 288)				_g = (_g + 1);
HXLINE( 289)				c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            			}
            		}
HXLINE( 293)		return c;
            	}


 ::haxe::ui::core::ComponentContainer CheckBoxValue_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_4bd59a09dfe70b4f_302_self)
HXDLIN( 302)		return  ::haxe::ui::components::CheckBoxValue_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__new() {
	hx::ObjectPtr< CheckBoxValue_obj > __this = new CheckBoxValue_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__alloc(hx::Ctx *_hx_ctx) {
	CheckBoxValue_obj *__this = (CheckBoxValue_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CheckBoxValue_obj), true, "haxe.ui.components.CheckBoxValue"));
	*(void **)__this = CheckBoxValue_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CheckBoxValue_obj::CheckBoxValue_obj()
{
}

hx::Val CheckBoxValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReady") ) { return hx::Val( onReady_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return hx::Val( applyStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"createIcon") ) { return hx::Val( createIcon_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CheckBoxValue_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CheckBoxValue_obj_sStaticStorageInfo = 0;
#endif

static ::String CheckBoxValue_obj_sMemberFields[] = {
	HX_("onReady",c4,3e,f8,7c),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("createIcon",95,a8,40,58),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class CheckBoxValue_obj::__mClass;

void CheckBoxValue_obj::__register()
{
	CheckBoxValue_obj _hx_dummy;
	CheckBoxValue_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.CheckBoxValue",e8,99,e8,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CheckBoxValue_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBoxValue_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CheckBoxValue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CheckBoxValue_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
