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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <hxinc/haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <hxinc/haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <hxinc/haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Closable
#include <hxinc/haxe/ui/components/_TabBar/Closable.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Events
#include <hxinc/haxe/ui/components/_TabBar/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Layout
#include <hxinc/haxe/ui/components/_TabBar/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_RemoveTab
#include <hxinc/haxe/ui/components/_TabBar/RemoveTab.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedIndex
#include <hxinc/haxe/ui/components/_TabBar/SelectedIndex.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedTab
#include <hxinc/haxe/ui/components/_TabBar/SelectedTab.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabCount
#include <hxinc/haxe/ui/components/_TabBar/TabCount.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_TabPosition
#include <hxinc/haxe/ui/components/_TabBar/TabPosition.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <hxinc/haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5013957fd959d036_17_new,"haxe.ui.components.TabBar","new",0xee5b7296,"haxe.ui.components.TabBar.new","haxe/ui/components/TabBar.hx",17,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_385_removeTab,"haxe.ui.components.TabBar","removeTab",0xd2e7a727,"haxe.ui.components.TabBar.removeTab","haxe/ui/macros/Macros.hx",385,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_72_registerComposite,"haxe.ui.components.TabBar","registerComposite",0x72f2b9da,"haxe.ui.components.TabBar.registerComposite","haxe/ui/macros/Macros.hx",72,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_314_registerBehaviours,"haxe.ui.components.TabBar","registerBehaviours",0xa46ef263,"haxe.ui.components.TabBar.registerBehaviours","haxe/ui/macros/Macros.hx",314,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_331_get_selectedIndex,"haxe.ui.components.TabBar","get_selectedIndex",0x2f3956c4,"haxe.ui.components.TabBar.get_selectedIndex","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_357_set_selectedIndex,"haxe.ui.components.TabBar","set_selectedIndex",0x52a72ed0,"haxe.ui.components.TabBar.set_selectedIndex","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_331_get_selectedTab,"haxe.ui.components.TabBar","get_selectedTab",0xd37e6587,"haxe.ui.components.TabBar.get_selectedTab","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_357_set_selectedTab,"haxe.ui.components.TabBar","set_selectedTab",0xcf49e293,"haxe.ui.components.TabBar.set_selectedTab","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_331_get_tabPosition,"haxe.ui.components.TabBar","get_tabPosition",0x498566eb,"haxe.ui.components.TabBar.get_tabPosition","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_357_set_tabPosition,"haxe.ui.components.TabBar","set_tabPosition",0x4550e3f7,"haxe.ui.components.TabBar.set_tabPosition","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_331_get_tabCount,"haxe.ui.components.TabBar","get_tabCount",0xb6cae14d,"haxe.ui.components.TabBar.get_tabCount","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_357_set_tabCount,"haxe.ui.components.TabBar","set_tabCount",0xcbc404c1,"haxe.ui.components.TabBar.set_tabCount","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_331_get_closable,"haxe.ui.components.TabBar","get_closable",0x806d873a,"haxe.ui.components.TabBar.get_closable","haxe/ui/macros/Macros.hx",331,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_357_set_closable,"haxe.ui.components.TabBar","set_closable",0x9566aaae,"haxe.ui.components.TabBar.set_closable","haxe/ui/macros/Macros.hx",357,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_36e8987585bd609b_521_cloneComponent,"haxe.ui.components.TabBar","cloneComponent",0xf96fa72a,"haxe.ui.components.TabBar.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_19b6953fd9e1cfe2_302_self,"haxe.ui.components.TabBar","self",0xa4f6d896,"haxe.ui.components.TabBar.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void TabBar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5013957fd959d036_17_new)
HXDLIN(  17)		super::__construct();
            	}

Dynamic TabBar_obj::__CreateEmpty() { return new TabBar_obj; }

void *TabBar_obj::_hx_vtable = 0;

Dynamic TabBar_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TabBar_obj > _hx_result = new TabBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TabBar_obj::_hx_isInstanceOf(int inClassId) {
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
			if (inClassId<=(int)0x7673886e) {
				return inClassId==(int)0x7140e8dc || inClassId==(int)0x7673886e;
			} else {
				return inClassId==(int)0x7ee2d869;
			}
		} else {
			return inClassId==(int)0x7f63f3f1 || inClassId==(int)0x7ff0cb0e;
		}
	}
}

void TabBar_obj::removeTab(int index){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_385_removeTab)
HXDLIN( 385)		this->behaviours->call(HX_("removeTab",71,78,f3,ca),index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,removeTab,(void))

void TabBar_obj::registerComposite(){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_72_registerComposite)
HXLINE(  73)		this->super::registerComposite();
HXLINE(  85)		this->_hx_set__compositeBuilderClass(HX_CTX, hx::ClassOf< ::haxe::ui::components::_TabBar::Builder >());
HXLINE(  81)		this->_hx_set__internalEventsClass(HX_CTX, hx::ClassOf< ::haxe::ui::components::_TabBar::Events >());
HXLINE(  89)		this->_hx_set__defaultLayoutClass(HX_CTX, hx::ClassOf< ::haxe::ui::components::_TabBar::Layout >());
            	}


void TabBar_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_314_registerBehaviours)
HXLINE( 315)		this->super::registerBehaviours();
HXLINE( 376)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 376)		_hx_tmp->_hx_register(HX_("selectedIndex",b7,76,56,b4),hx::ClassOf< ::haxe::ui::components::_TabBar::SelectedIndex >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(-1) )));
HXLINE( 372)		this->behaviours->_hx_register(HX_("selectedTab",ba,92,0f,30),hx::ClassOf< ::haxe::ui::components::_TabBar::SelectedTab >(),null());
HXLINE( 376)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 376)		_hx_tmp1->_hx_register(HX_("tabPosition",1e,94,16,a6),hx::ClassOf< ::haxe::ui::components::_TabBar::TabPosition >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("top",95,66,58,00)));
HXLINE( 372)		this->behaviours->_hx_register(HX_("tabCount",3a,c6,07,b9),hx::ClassOf< ::haxe::ui::components::_TabBar::TabCount >(),null());
HXLINE( 376)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 376)		_hx_tmp2->_hx_register(HX_("closable",27,6c,aa,82),hx::ClassOf< ::haxe::ui::components::_TabBar::Closable >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false));
HXLINE( 395)		this->behaviours->_hx_register(HX_("removeTab",71,78,f3,ca),hx::ClassOf< ::haxe::ui::components::_TabBar::RemoveTab >(),null());
            	}


int TabBar_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_331_get_selectedIndex)
HXDLIN( 331)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("selectedIndex",b7,76,56,b4)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedIndex,return )

int TabBar_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_357_set_selectedIndex)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("selectedIndex",b7,76,56,b4),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("selectedIndex",b7,76,56,b4));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedIndex,return )

 ::haxe::ui::core::Component TabBar_obj::get_selectedTab(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_331_get_selectedTab)
HXDLIN( 331)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->behaviours->get(HX_("selectedTab",ba,92,0f,30)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedTab,return )

 ::haxe::ui::core::Component TabBar_obj::set_selectedTab( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_357_set_selectedTab)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("selectedTab",ba,92,0f,30),::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(value));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("selectedTab",ba,92,0f,30));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedTab,return )

::String TabBar_obj::get_tabPosition(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_331_get_tabPosition)
HXDLIN( 331)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("tabPosition",1e,94,16,a6)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_tabPosition,return )

::String TabBar_obj::set_tabPosition(::String value){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_357_set_tabPosition)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("tabPosition",1e,94,16,a6),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("tabPosition",1e,94,16,a6));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_tabPosition,return )

int TabBar_obj::get_tabCount(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_331_get_tabCount)
HXDLIN( 331)		return ( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->behaviours->get(HX_("tabCount",3a,c6,07,b9)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_tabCount,return )

int TabBar_obj::set_tabCount(int value){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_357_set_tabCount)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("tabCount",3a,c6,07,b9),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("tabCount",3a,c6,07,b9));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_tabCount,return )

bool TabBar_obj::get_closable(){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_331_get_closable)
HXDLIN( 331)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("closable",27,6c,aa,82)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_closable,return )

bool TabBar_obj::set_closable(bool value){
            	HX_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_357_set_closable)
HXLINE( 358)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 358)		_hx_tmp->set(HX_("closable",27,6c,aa,82),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 211)		::haxe::ui::binding::BindingManager_obj::get_instance()->componentPropChanged(( ( ::haxe::ui::core::Component)(hx::ObjectPtr<OBJ_>(this)) ),HX_("closable",27,6c,aa,82));
HXLINE( 359)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_closable,return )

 ::haxe::ui::core::ComponentContainer TabBar_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_36e8987585bd609b_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::components::TabBar c = ( ( ::haxe::ui::components::TabBar)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TabBar_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_19b6953fd9e1cfe2_302_self)
HXDLIN( 302)		return  ::haxe::ui::components::TabBar_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< TabBar_obj > TabBar_obj::__new() {
	hx::ObjectPtr< TabBar_obj > __this = new TabBar_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TabBar_obj > TabBar_obj::__alloc(hx::Ctx *_hx_ctx) {
	TabBar_obj *__this = (TabBar_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TabBar_obj), true, "haxe.ui.components.TabBar"));
	*(void **)__this = TabBar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TabBar_obj::TabBar_obj()
{
}

hx::Val TabBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabCount") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_tabCount() ); }
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_closable() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeTab") ) { return hx::Val( removeTab_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectedTab") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedTab() ); }
		if (HX_FIELD_EQ(inName,"tabPosition") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_tabPosition() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_tabCount") ) { return hx::Val( get_tabCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabCount") ) { return hx::Val( set_tabCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_closable") ) { return hx::Val( get_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_closable") ) { return hx::Val( set_closable_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_selectedTab") ) { return hx::Val( get_selectedTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedTab") ) { return hx::Val( set_selectedTab_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_tabPosition") ) { return hx::Val( get_tabPosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_tabPosition") ) { return hx::Val( set_tabPosition_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TabBar_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"tabCount") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_tabCount(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_closable(inValue.Cast< bool >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectedTab") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedTab(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"tabPosition") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_tabPosition(inValue.Cast< ::String >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("selectedTab",ba,92,0f,30));
	outFields->push(HX_("tabPosition",1e,94,16,a6));
	outFields->push(HX_("tabCount",3a,c6,07,b9));
	outFields->push(HX_("closable",27,6c,aa,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *TabBar_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TabBar_obj_sStaticStorageInfo = 0;
#endif

static ::String TabBar_obj_sMemberFields[] = {
	HX_("removeTab",71,78,f3,ca),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("get_selectedTab",51,4a,f1,f0),
	HX_("set_selectedTab",5d,c7,bc,ec),
	HX_("get_tabPosition",b5,4b,f8,66),
	HX_("set_tabPosition",c1,c8,c3,62),
	HX_("get_tabCount",43,7a,21,6e),
	HX_("set_tabCount",b7,9d,1a,83),
	HX_("get_closable",30,20,c4,37),
	HX_("set_closable",a4,43,bd,4c),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class TabBar_obj::__mClass;

void TabBar_obj::__register()
{
	TabBar_obj _hx_dummy;
	TabBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.TabBar",a4,2f,25,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TabBar_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabBar_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components