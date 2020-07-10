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
#ifndef INCLUDED_haxe_ui_components_HGrid
#include <hxinc/haxe/ui/components/HGrid.h>
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
#ifndef INCLUDED_haxe_ui_layouts_HorizontalGridLayout
#include <hxinc/haxe/ui/layouts/HorizontalGridLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_db58dea73dec8eac_8_new,"haxe.ui.components.HGrid","new",0x18d035da,"haxe.ui.components.HGrid.new","haxe/ui/components/HGrid.hx",8,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_db58dea73dec8eac_17_createDefaults,"haxe.ui.components.HGrid","createDefaults",0xde524874,"haxe.ui.components.HGrid.createDefaults","haxe/ui/components/HGrid.hx",17,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_db58dea73dec8eac_28_get_rows,"haxe.ui.components.HGrid","get_rows",0x446930e8,"haxe.ui.components.HGrid.get_rows","haxe/ui/components/HGrid.hx",28,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_db58dea73dec8eac_31_set_rows,"haxe.ui.components.HGrid","set_rows",0xf2c68a5c,"haxe.ui.components.HGrid.set_rows","haxe/ui/components/HGrid.hx",31,0x7ba79937)
HX_LOCAL_STACK_FRAME(_hx_pos_ea9545f03c93eaa3_315_registerBehaviours,"haxe.ui.components.HGrid","registerBehaviours",0xf4987b9f,"haxe.ui.components.HGrid.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_50b293668005eed4_521_cloneComponent,"haxe.ui.components.HGrid","cloneComponent",0x02d4e266,"haxe.ui.components.HGrid.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_ea9545f03c93eaa3_302_self,"haxe.ui.components.HGrid","self",0xa0acf0d2,"haxe.ui.components.HGrid.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void HGrid_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_db58dea73dec8eac_8_new)
HXLINE(   9)		super::__construct();
HXLINE(  11)		this->set_rows(1);
            	}

Dynamic HGrid_obj::__CreateEmpty() { return new HGrid_obj; }

void *HGrid_obj::_hx_vtable = 0;

Dynamic HGrid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HGrid_obj > _hx_result = new HGrid_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HGrid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4eb0678b) {
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
			if (inClassId<=(int)0x4a06d0bc) {
				return inClassId==(int)0x324697fd || inClassId==(int)0x4a06d0bc;
			} else {
				return inClassId==(int)0x4eb0678b;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				return inClassId==(int)0x5d0a197a || inClassId==(int)0x7140e8dc;
			} else {
				return inClassId==(int)0x7ee2d869;
			}
		} else {
			return inClassId==(int)0x7f63f3f1 || inClassId==(int)0x7ff0cb0e;
		}
	}
}

void HGrid_obj::createDefaults(){
            	HX_GC_STACKFRAME(&_hx_pos_db58dea73dec8eac_17_createDefaults)
HXLINE(  18)		this->super::createDefaults();
HXLINE(  19)		this->_hx_set__defaultLayoutClass(HX_CTX, hx::ClassOf< ::haxe::ui::layouts::HorizontalGridLayout >());
            	}


int HGrid_obj::get_rows(){
            	HX_STACKFRAME(&_hx_pos_db58dea73dec8eac_28_get_rows)
HXDLIN(  28)		return this->_rows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HGrid_obj,get_rows,return )

int HGrid_obj::set_rows(int value){
            	HX_STACKFRAME(&_hx_pos_db58dea73dec8eac_31_set_rows)
HXLINE(  32)		if ((this->_rows != value)) {
HXLINE(  34)			this->_rows = value;
HXLINE(  36)			hx::TCast<  ::haxe::ui::layouts::HorizontalGridLayout >::cast(this->get_layout())->set_rows(value);
HXLINE(  37)			bool _hx_tmp;
HXDLIN(  37)			if (hx::IsNotNull( this->_layout )) {
HXLINE(  37)				_hx_tmp = (this->_layoutLocked == true);
            			}
            			else {
HXLINE(  37)				_hx_tmp = true;
            			}
HXDLIN(  37)			if (!(_hx_tmp)) {
HXLINE(  37)				this->invalidateComponent(HX_("layout",aa,ae,b8,58));
            			}
            		}
HXLINE(  39)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HGrid_obj,set_rows,return )

void HGrid_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_ea9545f03c93eaa3_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer HGrid_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_50b293668005eed4_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::components::HGrid c = ( ( ::haxe::ui::components::HGrid)(this->super::cloneComponent()) );
HXLINE( 281)		c->set_rows(this->get_rows());
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


 ::haxe::ui::core::ComponentContainer HGrid_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_ea9545f03c93eaa3_302_self)
HXDLIN( 302)		return  ::haxe::ui::components::HGrid_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< HGrid_obj > HGrid_obj::__new() {
	hx::ObjectPtr< HGrid_obj > __this = new HGrid_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< HGrid_obj > HGrid_obj::__alloc(hx::Ctx *_hx_ctx) {
	HGrid_obj *__this = (HGrid_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HGrid_obj), true, "haxe.ui.components.HGrid"));
	*(void **)__this = HGrid_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HGrid_obj::HGrid_obj()
{
}

hx::Val HGrid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_rows() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return hx::Val( _rows ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return hx::Val( get_rows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rows") ) { return hx::Val( set_rows_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HGrid_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rows(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HGrid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_rows",f8,10,c0,fe));
	outFields->push(HX_("rows",19,f5,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo HGrid_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HGrid_obj,_rows),HX_("_rows",f8,10,c0,fe)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HGrid_obj_sStaticStorageInfo = 0;
#endif

static ::String HGrid_obj_sMemberFields[] = {
	HX_("createDefaults",ae,4f,d4,01),
	HX_("_rows",f8,10,c0,fe),
	HX_("get_rows",a2,b0,69,cb),
	HX_("set_rows",16,0a,c7,79),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class HGrid_obj::__mClass;

void HGrid_obj::__register()
{
	HGrid_obj _hx_dummy;
	HGrid_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.HGrid",e8,00,1e,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HGrid_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HGrid_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HGrid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HGrid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
