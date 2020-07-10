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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <hxinc/haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <hxinc/haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <hxinc/haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <hxinc/haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <hxinc/haxe/ui/layouts/LayoutFactory.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_13_new,"haxe.ui.containers.Box","new",0xf4b94f93,"haxe.ui.containers.Box.new","haxe/ui/containers/Box.hx",13,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_28_get_layoutName,"haxe.ui.containers.Box","get_layoutName",0x35d42a0b,"haxe.ui.containers.Box.get_layoutName","haxe/ui/containers/Box.hx",28,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_30_set_layoutName,"haxe.ui.containers.Box","set_layoutName",0x55f4127f,"haxe.ui.containers.Box.set_layoutName","haxe/ui/containers/Box.hx",30,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_21ed7b4c8d6f8b61_43_createDefaults,"haxe.ui.containers.Box","createDefaults",0xde14075b,"haxe.ui.containers.Box.createDefaults","haxe/ui/containers/Box.hx",43,0x1532cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_72_registerComposite,"haxe.ui.containers.Box","registerComposite",0x7c067797,"haxe.ui.containers.Box.registerComposite","haxe/ui/macros/Macros.hx",72,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_314_registerBehaviours,"haxe.ui.containers.Box","registerBehaviours",0x8ca13a06,"haxe.ui.containers.Box.registerBehaviours","haxe/ui/macros/Macros.hx",314,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_331_get_icon,"haxe.ui.containers.Box","get_icon",0x79ef2aef,"haxe.ui.containers.Box.get_icon","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_357_set_icon,"haxe.ui.containers.Box","set_icon",0x284c8463,"haxe.ui.containers.Box.set_icon","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_96fe4c9de6174193_521_cloneComponent,"haxe.ui.containers.Box","cloneComponent",0x0296a14d,"haxe.ui.containers.Box.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_8a16a98353e79089_302_self,"haxe.ui.containers.Box","self",0x30ba58f9,"haxe.ui.containers.Box.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace containers{

void Box_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic Box_obj::__CreateEmpty() { return new Box_obj; }

void *Box_obj::_hx_vtable = 0;

Dynamic Box_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Box_obj > _hx_result = new Box_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Box_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x2a04b446) {
			if (inClassId<=(int)0x23af8dfd) {
				if (inClassId<=(int)0x0fddceef) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0fddceef;
				} else {
					return inClassId==(int)0x23af8dfd;
				}
			} else {
				return inClassId==(int)0x2a04b446;
			}
		} else {
			if (inClassId<=(int)0x41081cbb) {
				return inClassId==(int)0x324697fd || inClassId==(int)0x41081cbb;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				return inClassId==(int)0x4eb0678b || inClassId==(int)0x7140e8dc;
			} else {
				return inClassId==(int)0x7ee2d869;
			}
		} else {
			return inClassId==(int)0x7f63f3f1 || inClassId==(int)0x7ff0cb0e;
		}
	}
}

::String Box_obj::get_layoutName(){
            	HX_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_28_get_layoutName)
HXDLIN(  28)		return this->_layoutName;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_layoutName,return )

::String Box_obj::set_layoutName(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_30_set_layoutName)
HXLINE(  31)		if ((this->_layoutName == value)) {
HXLINE(  32)			return value;
            		}
HXLINE(  35)		this->_hx_set__layoutName(HX_CTX, value);
HXLINE(  36)		this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(this->get_layoutName()));
HXLINE(  37)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_layoutName,return )

void Box_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_21ed7b4c8d6f8b61_43_createDefaults)
HXLINE(  44)		this->super::createDefaults();
HXLINE(  45)		if (hx::IsNull( this->_defaultLayoutClass )) {
HXLINE(  46)			this->_hx_set__defaultLayoutClass(HX_CTX, hx::ClassOf< ::haxe::ui::layouts::DefaultLayout >());
            		}
            	}


void Box_obj::registerComposite(){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_72_registerComposite)
HXLINE(  73)		this->super::registerComposite();
HXLINE(  89)		this->_hx_set__defaultLayoutClass(HX_CTX, hx::ClassOf< ::haxe::ui::layouts::DefaultLayout >());
            	}


void Box_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_314_registerBehaviours)
HXLINE( 315)		this->super::registerBehaviours();
HXLINE( 372)		this->behaviours->_hx_register(HX_("icon",79,e7,b2,45),hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


::String Box_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_331_get_icon)
HXDLIN( 331)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("icon",79,e7,b2,45)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,get_icon,return )

::String Box_obj::set_icon(::String value){
            	HX_STACKFRAME(&_hx_pos_8a16a98353e79089_357_set_icon)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("icon",79,e7,b2,45),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("icon",79,e7,b2,45));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_icon,return )

 ::haxe::ui::core::ComponentContainer Box_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_96fe4c9de6174193_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::containers::Box c = ( ( ::haxe::ui::containers::Box)(this->super::cloneComponent()) );
HXLINE( 277)		if (hx::IsNotNull( this->get_layoutName() )) {
HXLINE( 277)			c->set_layoutName(this->get_layoutName());
            		}
HXDLIN( 277)		if (hx::IsNotNull( this->get_icon() )) {
HXLINE( 277)			c->set_icon(this->get_icon());
            		}
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


 ::haxe::ui::core::ComponentContainer Box_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8a16a98353e79089_302_self)
HXDLIN( 302)		return  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< Box_obj > Box_obj::__new() {
	hx::ObjectPtr< Box_obj > __this = new Box_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Box_obj > Box_obj::__alloc(hx::Ctx *_hx_ctx) {
	Box_obj *__this = (Box_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Box_obj), true, "haxe.ui.containers.Box"));
	*(void **)__this = Box_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Box_obj::Box_obj()
{
}

void Box_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Box);
	HX_MARK_MEMBER_NAME(_layoutName,"_layoutName");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Box_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layoutName,"_layoutName");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Box_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_icon() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_icon") ) { return hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return hx::Val( set_icon_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_layoutName() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { return hx::Val( _layoutName ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_layoutName") ) { return hx::Val( get_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layoutName") ) { return hx::Val( set_layoutName_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Box_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"layoutName") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_layoutName(inValue.Cast< ::String >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layoutName") ) { _hx_set__layoutName(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Box_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_layoutName",34,b7,28,b6));
	outFields->push(HX_("layoutName",15,ea,9e,e3));
	outFields->push(HX_("icon",79,e7,b2,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Box_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Box_obj,_layoutName),HX_("_layoutName",34,b7,28,b6)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Box_obj_sStaticStorageInfo = 0;
#endif

static ::String Box_obj_sMemberFields[] = {
	HX_("_layoutName",34,b7,28,b6),
	HX_("get_layoutName",5e,72,94,59),
	HX_("set_layoutName",d2,5a,b4,79),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class Box_obj::__mClass;

void Box_obj::__register()
{
	Box_obj _hx_dummy;
	Box_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.Box",21,8a,37,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Box_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Box_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Box_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Box_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers