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
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <hxinc/haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <hxinc/haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <hxinc/haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyGrid
#include <hxinc/haxe/ui/containers/properties/PropertyGrid.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Builder
#include <hxinc/haxe/ui/containers/properties/_PropertyGrid/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties__PropertyGrid_Events
#include <hxinc/haxe/ui/containers/properties/_PropertyGrid/Events.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <hxinc/haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_16350cdb84993548_9_new,"haxe.ui.containers.properties.PropertyGrid","new",0x85efb55e,"haxe.ui.containers.properties.PropertyGrid.new","haxe/ui/containers/properties/PropertyGrid.hx",9,0xa23bcb92)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_314_registerBehaviours,"haxe.ui.containers.properties.PropertyGrid","registerBehaviours",0xbb95109b,"haxe.ui.containers.properties.PropertyGrid.registerBehaviours","haxe/ui/macros/Macros.hx",314,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_331_get_popupStyleNames,"haxe.ui.containers.properties.PropertyGrid","get_popupStyleNames",0xe204f638,"haxe.ui.containers.properties.PropertyGrid.get_popupStyleNames","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_357_set_popupStyleNames,"haxe.ui.containers.properties.PropertyGrid","set_popupStyleNames",0x1ea1e944,"haxe.ui.containers.properties.PropertyGrid.set_popupStyleNames","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8067355f8c7edd2a_521_cloneComponent,"haxe.ui.containers.properties.PropertyGrid","cloneComponent",0xda2c4962,"haxe.ui.containers.properties.PropertyGrid.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_302_self,"haxe.ui.containers.properties.PropertyGrid","self",0xaf1d04ce,"haxe.ui.containers.properties.PropertyGrid.self","haxe/ui/macros/Macros.hx",302,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19d410d7a2baa776_72_registerComposite,"haxe.ui.containers.properties.PropertyGrid","registerComposite",0xe94b4aa2,"haxe.ui.containers.properties.PropertyGrid.registerComposite","haxe/ui/macros/Macros.hx",72,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{

void PropertyGrid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_16350cdb84993548_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic PropertyGrid_obj::__CreateEmpty() { return new PropertyGrid_obj; }

void *PropertyGrid_obj::_hx_vtable = 0;

Dynamic PropertyGrid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PropertyGrid_obj > _hx_result = new PropertyGrid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PropertyGrid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4a06d0bc) {
		if (inClassId<=(int)0x23af8dfd) {
			if (inClassId<=(int)0x1c7b87fe) {
				if (inClassId<=(int)0x0fddceef) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0fddceef;
				} else {
					return inClassId==(int)0x1c7b87fe;
				}
			} else {
				return inClassId==(int)0x23af8dfd;
			}
		} else {
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x2a04b446 || inClassId==(int)0x324697fd;
			} else {
				return inClassId==(int)0x4a06d0bc;
			}
		}
	} else {
		if (inClassId<=(int)0x7f63f3f1) {
			if (inClassId<=(int)0x7ee2d869) {
				if (inClassId<=(int)0x7140e8dc) {
					return inClassId==(int)0x4eb0678b || inClassId==(int)0x7140e8dc;
				} else {
					return inClassId==(int)0x7ee2d869;
				}
			} else {
				return inClassId==(int)0x7f63f3f1;
			}
		} else {
			return inClassId==(int)0x7f77fc8e || inClassId==(int)0x7ff0cb0e;
		}
	}
}

void PropertyGrid_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_19d410d7a2baa776_314_registerBehaviours)
HXLINE( 315)		this->super::registerBehaviours();
HXLINE( 372)		this->behaviours->_hx_register(HX_("popupStyleNames",23,e6,6b,96),hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


::String PropertyGrid_obj::get_popupStyleNames(){
            	HX_STACKFRAME(&_hx_pos_19d410d7a2baa776_331_get_popupStyleNames)
HXDLIN( 331)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("popupStyleNames",23,e6,6b,96)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyGrid_obj,get_popupStyleNames,return )

::String PropertyGrid_obj::set_popupStyleNames(::String value){
            	HX_STACKFRAME(&_hx_pos_19d410d7a2baa776_357_set_popupStyleNames)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("popupStyleNames",23,e6,6b,96),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("popupStyleNames",23,e6,6b,96));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PropertyGrid_obj,set_popupStyleNames,return )

 ::haxe::ui::core::ComponentContainer PropertyGrid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8067355f8c7edd2a_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::containers::properties::PropertyGrid c = ( ( ::haxe::ui::containers::properties::PropertyGrid)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer PropertyGrid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_19d410d7a2baa776_302_self)
HXDLIN( 302)		return  ::haxe::ui::containers::properties::PropertyGrid_obj::__alloc( HX_CTX );
            	}


void PropertyGrid_obj::registerComposite(){
            	HX_GC_STACKFRAME(&_hx_pos_19d410d7a2baa776_72_registerComposite)
HXLINE(  73)		this->super::registerComposite();
HXLINE(  81)		this->_hx_set__internalEventsClass(HX_CTX, hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGrid::Events >());
HXLINE(  85)		this->_hx_set__compositeBuilderClass(HX_CTX, hx::ClassOf< ::haxe::ui::containers::properties::_PropertyGrid::Builder >());
            	}



hx::ObjectPtr< PropertyGrid_obj > PropertyGrid_obj::__new() {
	hx::ObjectPtr< PropertyGrid_obj > __this = new PropertyGrid_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< PropertyGrid_obj > PropertyGrid_obj::__alloc(hx::Ctx *_hx_ctx) {
	PropertyGrid_obj *__this = (PropertyGrid_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PropertyGrid_obj), true, "haxe.ui.containers.properties.PropertyGrid"));
	*(void **)__this = PropertyGrid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PropertyGrid_obj::PropertyGrid_obj()
{
}

hx::Val PropertyGrid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"popupStyleNames") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_popupStyleNames() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_popupStyleNames") ) { return hx::Val( get_popupStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_popupStyleNames") ) { return hx::Val( set_popupStyleNames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PropertyGrid_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"popupStyleNames") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_popupStyleNames(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("popupStyleNames",23,e6,6b,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *PropertyGrid_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PropertyGrid_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyGrid_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_popupStyleNames",3a,b5,76,21),
	HX_("set_popupStyleNames",46,a8,13,5e),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	HX_("registerComposite",24,e5,7f,fe),
	::String(null()) };

hx::Class PropertyGrid_obj::__mClass;

void PropertyGrid_obj::__register()
{
	PropertyGrid_obj _hx_dummy;
	PropertyGrid_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties.PropertyGrid",6c,6e,1e,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PropertyGrid_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PropertyGrid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyGrid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyGrid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
