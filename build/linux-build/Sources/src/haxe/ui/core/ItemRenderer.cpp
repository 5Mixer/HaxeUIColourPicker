// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <hxinc/ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <hxinc/haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <hxinc/haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <hxinc/haxe/ui/components/Button.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <hxinc/haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ItemEvent
#include <hxinc/haxe/ui/events/ItemEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <hxinc/haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_TypeConverter
#include <hxinc/haxe/ui/util/TypeConverter.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9089dc793ca35ae_10_new,"haxe.ui.core.ItemRenderer","new",0x7561ad25,"haxe.ui.core.ItemRenderer.new","haxe/ui/core/ItemRenderer.hx",10,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_18__onItemMouseOver,"haxe.ui.core.ItemRenderer","_onItemMouseOver",0x92442083,"haxe.ui.core.ItemRenderer._onItemMouseOver","haxe/ui/core/ItemRenderer.hx",18,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_22__onItemMouseOut,"haxe.ui.core.ItemRenderer","_onItemMouseOut",0x691f4c3f,"haxe.ui.core.ItemRenderer._onItemMouseOut","haxe/ui/core/ItemRenderer.hx",22,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_28_get_allowHover,"haxe.ui.core.ItemRenderer","get_allowHover",0x22bd2817,"haxe.ui.core.ItemRenderer.get_allowHover","haxe/ui/core/ItemRenderer.hx",28,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_30_set_allowHover,"haxe.ui.core.ItemRenderer","set_allowHover",0x42dd108b,"haxe.ui.core.ItemRenderer.set_allowHover","haxe/ui/core/ItemRenderer.hx",30,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_48_get_data,"haxe.ui.core.ItemRenderer","get_data",0x25a0cace,"haxe.ui.core.ItemRenderer.get_data","haxe/ui/core/ItemRenderer.hx",48,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_50_set_data,"haxe.ui.core.ItemRenderer","set_data",0xd3fe2442,"haxe.ui.core.ItemRenderer.set_data","haxe/ui/core/ItemRenderer.hx",50,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_63_validateComponentData,"haxe.ui.core.ItemRenderer","validateComponentData",0x5342e116,"haxe.ui.core.ItemRenderer.validateComponentData","haxe/ui/core/ItemRenderer.hx",63,0x40996daa)
static const ::String _hx_array_data_221936b3_10[] = {
	HX_("text",ad,cc,f9,4c),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_97_onItemChange,"haxe.ui.core.ItemRenderer","onItemChange",0x7768df7d,"haxe.ui.core.ItemRenderer.onItemChange","haxe/ui/core/ItemRenderer.hx",97,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_110_onItemClick,"haxe.ui.core.ItemRenderer","onItemClick",0xfe9c6edb,"haxe.ui.core.ItemRenderer.onItemClick","haxe/ui/core/ItemRenderer.hx",110,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_119_updateValues,"haxe.ui.core.ItemRenderer","updateValues",0x491f8d66,"haxe.ui.core.ItemRenderer.updateValues","haxe/ui/core/ItemRenderer.hx",119,0x40996daa)
HX_LOCAL_STACK_FRAME(_hx_pos_a11f04ad81e36a66_315_registerBehaviours,"haxe.ui.core.ItemRenderer","registerBehaviours",0x2160f0b4,"haxe.ui.core.ItemRenderer.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f5f102a918a50d65_521_cloneComponent,"haxe.ui.core.ItemRenderer","cloneComponent",0x7cede8fb,"haxe.ui.core.ItemRenderer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_a11f04ad81e36a66_302_self,"haxe.ui.core.ItemRenderer","self",0x4363db27,"haxe.ui.core.ItemRenderer.self","haxe/ui/macros/Macros.hx",302,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b9089dc793ca35ae_10_boot,"haxe.ui.core.ItemRenderer","boot",0x382ed3cd,"haxe.ui.core.ItemRenderer.boot","haxe/ui/core/ItemRenderer.hx",10,0x40996daa)
namespace haxe{
namespace ui{
namespace core{

void ItemRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_10_new)
HXLINE(  62)		this->_hx_set__fieldList(HX_CTX, null());
HXLINE(  60)		this->itemIndex = -1;
HXLINE(  25)		this->_allowHover = true;
HXLINE(  12)		super::__construct();
HXLINE(  13)		this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn(),null());
HXLINE(  14)		this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn(),null());
            	}

Dynamic ItemRenderer_obj::__CreateEmpty() { return new ItemRenderer_obj; }

void *ItemRenderer_obj::_hx_vtable = 0;

Dynamic ItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ItemRenderer_obj > _hx_result = new ItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
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
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x3200b6b7 || inClassId==(int)0x324697fd;
			} else {
				return inClassId==(int)0x41081cbb;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				if (inClassId<=(int)0x4eb0678b) {
					return inClassId==(int)0x4a06d0bc || inClassId==(int)0x4eb0678b;
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

void ItemRenderer_obj::_onItemMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_18__onItemMouseOver)
HXDLIN(  18)		this->addClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOver,(void))

void ItemRenderer_obj::_onItemMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_22__onItemMouseOut)
HXDLIN(  22)		this->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onItemMouseOut,(void))

bool ItemRenderer_obj::get_allowHover(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_28_get_allowHover)
HXDLIN(  28)		return this->_allowHover;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_allowHover,return )

bool ItemRenderer_obj::set_allowHover(bool value){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_30_set_allowHover)
HXLINE(  31)		if ((this->_allowHover == value)) {
HXLINE(  32)			return value;
            		}
HXLINE(  34)		this->_allowHover = value;
HXLINE(  35)		if ((this->_allowHover == true)) {
HXLINE(  36)			this->registerEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn(),null());
HXLINE(  37)			this->registerEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn(),null());
            		}
            		else {
HXLINE(  39)			this->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->_onItemMouseOver_dyn());
HXLINE(  40)			this->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->_onItemMouseOut_dyn());
            		}
HXLINE(  42)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_allowHover,return )

 ::Dynamic ItemRenderer_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_48_get_data)
HXDLIN(  48)		return this->_data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_data,return )

 ::Dynamic ItemRenderer_obj::set_data( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_50_set_data)
HXLINE(  51)		if (hx::IsEq( value,this->_data )) {
HXLINE(  52)			return value;
            		}
HXLINE(  55)		this->_hx_set__data(HX_CTX, value);
HXLINE(  56)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE(  57)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_data,return )

void ItemRenderer_obj::validateComponentData(){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_63_validateComponentData)
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if (hx::IsNotNull( this->_fieldList )) {
HXLINE(  64)			_hx_tmp = (this->_fieldList->length == 0);
            		}
            		else {
HXLINE(  64)			_hx_tmp = true;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  65)			if (hx::IsEq( ::Type_obj::_hx_typeof(this->_data),::ValueType_obj::TObject_dyn() )) {
HXLINE(  66)				::Array< ::String > fieldList = ::Reflect_obj::fields(this->_data);
HXLINE(  67)				if (hx::IsNotNull( ::Type_obj::getClass(this->_data) )) {
HXLINE(  68)					::Array< ::String > instanceFields = ::Type_obj::getInstanceFields(::Type_obj::getClass(this->_data));
HXLINE(  69)					{
HXLINE(  69)						int _g = 0;
HXDLIN(  69)						while((_g < instanceFields->length)){
HXLINE(  69)							::String i = instanceFields->__get(_g);
HXDLIN(  69)							_g = (_g + 1);
HXLINE(  70)							bool _hx_tmp1;
HXDLIN(  70)							if ((::Reflect_obj::isFunction(::Reflect_obj::getProperty(this->_data,i)) == false)) {
HXLINE(  70)								_hx_tmp1 = (fieldList->indexOf(i,null()) == -1);
            							}
            							else {
HXLINE(  70)								_hx_tmp1 = false;
            							}
HXDLIN(  70)							if (_hx_tmp1) {
HXLINE(  71)								fieldList->push(i);
            							}
            						}
            					}
HXLINE(  74)					this->_hx_set__fieldList(HX_CTX, fieldList);
            				}
            			}
            			else {
HXLINE(  77)				this->_hx_set__fieldList(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_221936b3_10,1));
            			}
            		}
HXLINE(  81)		this->updateValues(this->_data,this->_fieldList);
HXLINE(  83)		::Array< ::Dynamic> components = this->findComponents(null(),hx::ClassOf< ::haxe::ui::core::InteractiveComponent >(),null());
HXLINE(  84)		{
HXLINE(  84)			int _g1 = 0;
HXDLIN(  84)			while((_g1 < components->length)){
HXLINE(  84)				 ::haxe::ui::core::InteractiveComponent c = components->__get(_g1).StaticCast<  ::haxe::ui::core::InteractiveComponent >();
HXDLIN(  84)				_g1 = (_g1 + 1);
HXLINE(  85)				if (::Std_obj::is(c,hx::ClassOf< ::haxe::ui::components::Button >())) {
HXLINE(  86)					if ((c->hasEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn()) == false)) {
HXLINE(  87)						c->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn(),null());
            					}
            				}
            				else {
HXLINE(  90)					if ((c->hasEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn()) == false)) {
HXLINE(  91)						c->registerEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn(),null());
            					}
            				}
            			}
            		}
            	}


void ItemRenderer_obj::onItemChange( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_97_onItemChange)
HXLINE(  98)		 ::Dynamic v = event->target->get_value();
HXLINE(  99)		if (hx::IsNotNull( this->_data )) {
HXLINE( 100)			 ::Dynamic _hx_tmp = this->_data;
HXDLIN( 100)			::Reflect_obj::setProperty(_hx_tmp,event->target->get_id(),v);
            		}
HXLINE( 102)		 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,HX_("itemComponentEvent",90,6e,bc,55),null(),null());
HXLINE( 103)		e->bubble = true;
HXLINE( 104)		e->_hx_set_source(HX_CTX, event->target);
HXLINE( 105)		e->_hx_set_sourceEvent(HX_CTX, event);
HXLINE( 106)		e->_hx_set_data(HX_CTX, this->_data);
HXLINE( 107)		this->dispatch(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onItemChange,(void))

void ItemRenderer_obj::onItemClick( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_b9089dc793ca35ae_110_onItemClick)
HXLINE( 111)		 ::haxe::ui::events::ItemEvent e =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,HX_("itemComponentEvent",90,6e,bc,55),null(),null());
HXLINE( 112)		e->bubble = true;
HXLINE( 113)		e->_hx_set_source(HX_CTX, event->target);
HXLINE( 114)		e->_hx_set_sourceEvent(HX_CTX, event);
HXLINE( 115)		e->_hx_set_data(HX_CTX, this->_data);
HXLINE( 116)		this->dispatch(e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,onItemClick,(void))

void ItemRenderer_obj::updateValues( ::Dynamic value,::Array< ::String > fieldList){
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_119_updateValues)
HXLINE( 120)		if (hx::IsNull( fieldList )) {
HXLINE( 121)			fieldList = ::Reflect_obj::fields(value);
            		}
HXLINE( 124)		 ::Dynamic valueObject = null();
HXLINE( 125)		if (hx::IsEq( ::Type_obj::_hx_typeof(value),::ValueType_obj::TObject_dyn() )) {
HXLINE( 126)			valueObject = value;
            		}
            		else {
HXLINE( 128)			valueObject =  ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("text",ad,cc,f9,4c),value));
            		}
HXLINE( 131)		{
HXLINE( 131)			int _g = 0;
HXDLIN( 131)			while((_g < fieldList->length)){
HXLINE( 131)				::String f = fieldList->__get(_g);
HXDLIN( 131)				_g = (_g + 1);
HXLINE( 132)				 ::Dynamic v = ::Reflect_obj::getProperty(valueObject,f);
HXLINE( 133)				if (hx::IsEq( ::Type_obj::_hx_typeof(v),::ValueType_obj::TObject_dyn() )) {
HXLINE( 134)					this->updateValues(v,null());
            				}
            				else {
HXLINE( 136)					 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->findComponent(f,null(),true,null())) );
HXLINE( 137)					bool _hx_tmp;
HXDLIN( 137)					if (hx::IsNotNull( c )) {
HXLINE( 137)						_hx_tmp = hx::IsNotNull( v );
            					}
            					else {
HXLINE( 137)						_hx_tmp = false;
            					}
HXDLIN( 137)					if (_hx_tmp) {
HXLINE( 138)						 ::Dynamic propValue = ::haxe::ui::util::TypeConverter_obj::convert(v);
HXLINE( 139)						c->set_value(propValue);
HXLINE( 141)						if ((c->hasEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn()) == false)) {
HXLINE( 142)							c->registerEvent(HX_("change",70,91,72,b7),this->onItemChange_dyn(),null());
            						}
HXLINE( 144)						if ((c->hasEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn()) == false)) {
HXLINE( 145)							c->registerEvent(HX_("click",48,7c,5e,48),this->onItemClick_dyn(),null());
            						}
HXLINE( 148)						c->show();
            					}
            					else {
HXLINE( 149)						if (hx::IsNotNull( c )) {
HXLINE( 150)							c->hide();
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,updateValues,(void))

void ItemRenderer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_a11f04ad81e36a66_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_f5f102a918a50d65_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::core::ItemRenderer c = ( ( ::haxe::ui::core::ItemRenderer)(this->super::cloneComponent()) );
HXLINE( 281)		c->set_allowHover(this->get_allowHover());
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


 ::haxe::ui::core::ComponentContainer ItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_a11f04ad81e36a66_302_self)
HXDLIN( 302)		return  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__new() {
	hx::ObjectPtr< ItemRenderer_obj > __this = new ItemRenderer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__alloc(hx::Ctx *_hx_ctx) {
	ItemRenderer_obj *__this = (ItemRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ItemRenderer_obj), true, "haxe.ui.core.ItemRenderer"));
	*(void **)__this = ItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ItemRenderer_obj::ItemRenderer_obj()
{
}

void ItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRenderer);
	HX_MARK_MEMBER_NAME(_allowHover,"_allowHover");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(itemIndex,"itemIndex");
	HX_MARK_MEMBER_NAME(_fieldList,"_fieldList");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowHover,"_allowHover");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(itemIndex,"itemIndex");
	HX_VISIT_MEMBER_NAME(_fieldList,"_fieldList");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_data() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return hx::Val( _data ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return hx::Val( set_data_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { return hx::Val( itemIndex ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_allowHover() ); }
		if (HX_FIELD_EQ(inName,"_fieldList") ) { return hx::Val( _fieldList ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { return hx::Val( _allowHover ); }
		if (HX_FIELD_EQ(inName,"onItemClick") ) { return hx::Val( onItemClick_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onItemChange") ) { return hx::Val( onItemChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateValues") ) { return hx::Val( updateValues_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_allowHover") ) { return hx::Val( get_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowHover") ) { return hx::Val( set_allowHover_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onItemMouseOut") ) { return hx::Val( _onItemMouseOut_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onItemMouseOver") ) { return hx::Val( _onItemMouseOver_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"validateComponentData") ) { return hx::Val( validateComponentData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ItemRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_data(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _hx_set__data(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { itemIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowHover") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_allowHover(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_fieldList") ) { _hx_set__fieldList(HX_CTX_GET,inValue.Cast< ::Array< ::String > >()); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowHover") ) { _allowHover=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_allowHover",92,6d,ba,28));
	outFields->push(HX_("allowHover",73,a0,30,56));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("itemIndex",ff,00,00,be));
	outFields->push(HX_("_fieldList",f9,3d,a4,3a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ItemRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ItemRenderer_obj,_allowHover),HX_("_allowHover",92,6d,ba,28)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ItemRenderer_obj,_data),HX_("_data",09,72,74,f5)},
	{hx::fsInt,(int)offsetof(ItemRenderer_obj,itemIndex),HX_("itemIndex",ff,00,00,be)},
	{hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ItemRenderer_obj,_fieldList),HX_("_fieldList",f9,3d,a4,3a)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String ItemRenderer_obj_sMemberFields[] = {
	HX_("_onItemMouseOver",68,54,6a,28),
	HX_("_onItemMouseOut",fa,db,96,fb),
	HX_("_allowHover",92,6d,ba,28),
	HX_("get_allowHover",bc,28,26,cc),
	HX_("set_allowHover",30,11,46,ec),
	HX_("_data",09,72,74,f5),
	HX_("get_data",b3,11,1e,c2),
	HX_("set_data",27,6b,7b,70),
	HX_("itemIndex",ff,00,00,be),
	HX_("_fieldList",f9,3d,a4,3a),
	HX_("validateComponentData",11,6f,7d,76),
	HX_("onItemChange",e2,fc,c3,7d),
	HX_("onItemClick",16,c5,8c,6a),
	HX_("updateValues",cb,aa,7a,4f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class ItemRenderer_obj::__mClass;

void ItemRenderer_obj::__register()
{
	ItemRenderer_obj _hx_dummy;
	ItemRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ItemRenderer",b3,36,19,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ItemRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemRenderer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b9089dc793ca35ae_10_boot)
HXDLIN(  10)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("allowHover",73,a0,30,56), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("clonable",a2,85,a9,a1),null()))))));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
