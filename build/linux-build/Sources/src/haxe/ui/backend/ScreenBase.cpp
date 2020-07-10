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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <hxinc/haxe/ui/backend/ScreenBase.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f99d968e31f22fe_6_new,"haxe.ui.backend.ScreenBase","new",0x2ba37cdb,"haxe.ui.backend.ScreenBase.new","haxe/ui/backend/ScreenBase.hx",6,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_12_get_focus,"haxe.ui.backend.ScreenBase","get_focus",0xbf5b76ea,"haxe.ui.backend.ScreenBase.get_focus","haxe/ui/backend/ScreenBase.hx",12,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_14_set_focus,"haxe.ui.backend.ScreenBase","set_focus",0xa2ac62f6,"haxe.ui.backend.ScreenBase.set_focus","haxe/ui/backend/ScreenBase.hx",14,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_22_get_options,"haxe.ui.backend.ScreenBase","get_options",0x84d1b2f0,"haxe.ui.backend.ScreenBase.get_options","haxe/ui/backend/ScreenBase.hx",22,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_24_set_options,"haxe.ui.backend.ScreenBase","set_options",0x8f3eb9fc,"haxe.ui.backend.ScreenBase.set_options","haxe/ui/backend/ScreenBase.hx",24,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_31_get_dpi,"haxe.ui.backend.ScreenBase","get_dpi",0x63a011ef,"haxe.ui.backend.ScreenBase.get_dpi","haxe/ui/backend/ScreenBase.hx",31,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_36_get_title,"haxe.ui.backend.ScreenBase","get_title",0xcb0d2caa,"haxe.ui.backend.ScreenBase.get_title","haxe/ui/backend/ScreenBase.hx",36,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_39_set_title,"haxe.ui.backend.ScreenBase","set_title",0xae5e18b6,"haxe.ui.backend.ScreenBase.set_title","haxe/ui/backend/ScreenBase.hx",39,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_44_get_width,"haxe.ui.backend.ScreenBase","get_width",0x8534cd18,"haxe.ui.backend.ScreenBase.get_width","haxe/ui/backend/ScreenBase.hx",44,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_49_get_height,"haxe.ui.backend.ScreenBase","get_height",0xbf4e2095,"haxe.ui.backend.ScreenBase.get_height","haxe/ui/backend/ScreenBase.hx",49,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_54_get_isRetina,"haxe.ui.backend.ScreenBase","get_isRetina",0xf5ca41d3,"haxe.ui.backend.ScreenBase.get_isRetina","haxe/ui/backend/ScreenBase.hx",54,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_58_addComponent,"haxe.ui.backend.ScreenBase","addComponent",0xedca7e81,"haxe.ui.backend.ScreenBase.addComponent","haxe/ui/backend/ScreenBase.hx",58,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_62_removeComponent,"haxe.ui.backend.ScreenBase","removeComponent",0x8e1084d4,"haxe.ui.backend.ScreenBase.removeComponent","haxe/ui/backend/ScreenBase.hx",62,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_65_handleSetComponentIndex,"haxe.ui.backend.ScreenBase","handleSetComponentIndex",0x47be5f8a,"haxe.ui.backend.ScreenBase.handleSetComponentIndex","haxe/ui/backend/ScreenBase.hx",65,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_68_resizeComponent,"haxe.ui.backend.ScreenBase","resizeComponent",0xa9909124,"haxe.ui.backend.ScreenBase.resizeComponent","haxe/ui/backend/ScreenBase.hx",68,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_81_supportsEvent,"haxe.ui.backend.ScreenBase","supportsEvent",0x0daeec31,"haxe.ui.backend.ScreenBase.supportsEvent","haxe/ui/backend/ScreenBase.hx",81,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_84_mapEvent,"haxe.ui.backend.ScreenBase","mapEvent",0xf34d6d83,"haxe.ui.backend.ScreenBase.mapEvent","haxe/ui/backend/ScreenBase.hx",84,0xded7efb4)
HX_LOCAL_STACK_FRAME(_hx_pos_6f99d968e31f22fe_87_unmapEvent,"haxe.ui.backend.ScreenBase","unmapEvent",0x3f45c81c,"haxe.ui.backend.ScreenBase.unmapEvent","haxe/ui/backend/ScreenBase.hx",87,0xded7efb4)
namespace haxe{
namespace ui{
namespace backend{

void ScreenBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_6f99d968e31f22fe_6_new)
HXLINE(   9)		this->_hx_set__focus(HX_CTX, null());
HXLINE(   7)		this->_hx_set__topLevelComponents(HX_CTX, ::Array_obj< ::Dynamic>::__new());
            	}

Dynamic ScreenBase_obj::__CreateEmpty() { return new ScreenBase_obj; }

void *ScreenBase_obj::_hx_vtable = 0;

Dynamic ScreenBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScreenBase_obj > _hx_result = new ScreenBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScreenBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x095a7d57;
}

 ::haxe::ui::core::Component ScreenBase_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_12_get_focus)
HXDLIN(  12)		return this->_focus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_focus,return )

 ::haxe::ui::core::Component ScreenBase_obj::set_focus( ::haxe::ui::core::Component value){
            	HX_GC_STACKFRAME(&_hx_pos_6f99d968e31f22fe_14_set_focus)
HXLINE(  15)		this->_hx_set__focus(HX_CTX, value);
HXLINE(  16)		return this->_focus;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_focus,return )

 ::Dynamic ScreenBase_obj::get_options(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_22_get_options)
HXDLIN(  22)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_options,return )

 ::Dynamic ScreenBase_obj::set_options( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_6f99d968e31f22fe_24_set_options)
HXLINE(  25)		this->_hx_set__options(HX_CTX, value);
HXLINE(  26)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_options,return )

Float ScreenBase_obj::get_dpi(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_31_get_dpi)
HXDLIN(  31)		return ( (Float)(72) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_dpi,return )

::String ScreenBase_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_36_get_title)
HXDLIN(  36)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_title,return )

::String ScreenBase_obj::set_title(::String s){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_39_set_title)
HXDLIN(  39)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,set_title,return )

Float ScreenBase_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_44_get_width)
HXDLIN(  44)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_width,return )

Float ScreenBase_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_49_get_height)
HXDLIN(  49)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_height,return )

bool ScreenBase_obj::get_isRetina(){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_54_get_isRetina)
HXDLIN(  54)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,get_isRetina,return )

 ::haxe::ui::core::Component ScreenBase_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_58_addComponent)
HXDLIN(  58)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,addComponent,return )

 ::haxe::ui::core::Component ScreenBase_obj::removeComponent( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_62_removeComponent)
HXDLIN(  62)		return component;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,removeComponent,return )

void ScreenBase_obj::handleSetComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_65_handleSetComponentIndex)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,handleSetComponentIndex,(void))

void ScreenBase_obj::resizeComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_68_resizeComponent)
HXLINE(  69)		if (hx::IsGreater( c->get_percentWidth(),0 )) {
HXLINE(  70)			Float _hx_tmp = this->get_width();
HXDLIN(  70)			c->set_width(((_hx_tmp * ( (Float)(c->get_percentWidth()) )) / ( (Float)(100) )));
            		}
HXLINE(  72)		if (hx::IsGreater( c->get_percentHeight(),0 )) {
HXLINE(  73)			Float _hx_tmp1 = this->get_height();
HXDLIN(  73)			c->set_height(((_hx_tmp1 * ( (Float)(c->get_percentHeight()) )) / ( (Float)(100) )));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,resizeComponent,(void))

bool ScreenBase_obj::supportsEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_81_supportsEvent)
HXDLIN(  81)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,supportsEvent,return )

void ScreenBase_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_84_mapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,mapEvent,(void))

void ScreenBase_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_6f99d968e31f22fe_87_unmapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ScreenBase_obj,unmapEvent,(void))


hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__new() {
	hx::ObjectPtr< ScreenBase_obj > __this = new ScreenBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	ScreenBase_obj *__this = (ScreenBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScreenBase_obj), true, "haxe.ui.backend.ScreenBase"));
	*(void **)__this = ScreenBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScreenBase_obj::ScreenBase_obj()
{
}

void ScreenBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenBase);
	HX_MARK_MEMBER_NAME(_topLevelComponents,"_topLevelComponents");
	HX_MARK_MEMBER_NAME(_focus,"_focus");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(isRetina,"isRetina");
	HX_MARK_END_CLASS();
}

void ScreenBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_topLevelComponents,"_topLevelComponents");
	HX_VISIT_MEMBER_NAME(_focus,"_focus");
	HX_VISIT_MEMBER_NAME(_options,"_options");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(isRetina,"isRetina");
}

hx::Val ScreenBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return hx::Val( inCallProp == hx::paccAlways ? get_dpi() : dpi ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_focus() ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_title() ); }
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( inCallProp == hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { return hx::Val( _focus ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( inCallProp == hx::paccAlways ? get_height() : height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_options() ); }
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return hx::Val( get_dpi_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { return hx::Val( _options ); }
		if (HX_FIELD_EQ(inName,"isRetina") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isRetina() : isRetina ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return hx::Val( mapEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_focus") ) { return hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return hx::Val( set_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return hx::Val( set_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return hx::Val( unmapEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return hx::Val( get_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return hx::Val( set_options_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isRetina") ) { return hx::Val( get_isRetina_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"supportsEvent") ) { return hx::Val( supportsEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeComponent") ) { return hx::Val( resizeComponent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_topLevelComponents") ) { return hx::Val( _topLevelComponents ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"handleSetComponentIndex") ) { return hx::Val( handleSetComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ScreenBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_focus(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_title(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _hx_set__focus(HX_CTX_GET,inValue.Cast<  ::haxe::ui::core::Component >()); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_options(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_options") ) { _hx_set__options(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		if (HX_FIELD_EQ(inName,"isRetina") ) { isRetina=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_topLevelComponents") ) { _hx_set__topLevelComponents(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_topLevelComponents",c4,30,e7,f0));
	outFields->push(HX_("_focus",19,a7,70,00));
	outFields->push(HX_("focus",d8,5f,89,04));
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("dpi",5d,43,4c,00));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("isRetina",a5,21,8e,61));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ScreenBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ScreenBase_obj,_topLevelComponents),HX_("_topLevelComponents",c4,30,e7,f0)},
	{hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ScreenBase_obj,_focus),HX_("_focus",19,a7,70,00)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScreenBase_obj,_options),HX_("_options",df,8c,b6,19)},
	{hx::fsFloat,(int)offsetof(ScreenBase_obj,dpi),HX_("dpi",5d,43,4c,00)},
	{hx::fsFloat,(int)offsetof(ScreenBase_obj,width),HX_("width",06,b6,62,ca)},
	{hx::fsFloat,(int)offsetof(ScreenBase_obj,height),HX_("height",e7,07,4c,02)},
	{hx::fsBool,(int)offsetof(ScreenBase_obj,isRetina),HX_("isRetina",a5,21,8e,61)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ScreenBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenBase_obj_sMemberFields[] = {
	HX_("_topLevelComponents",c4,30,e7,f0),
	HX_("_focus",19,a7,70,00),
	HX_("get_focus",2f,bc,32,48),
	HX_("set_focus",3b,a8,83,2b),
	HX_("_options",df,8c,b6,19),
	HX_("get_options",75,93,f8,65),
	HX_("set_options",81,9a,65,70),
	HX_("dpi",5d,43,4c,00),
	HX_("get_dpi",f4,0b,c1,26),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("width",06,b6,62,ca),
	HX_("get_width",5d,12,0c,0e),
	HX_("height",e7,07,4c,02),
	HX_("get_height",b0,77,d3,f2),
	HX_("isRetina",a5,21,8e,61),
	HX_("get_isRetina",ae,d5,a7,16),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("handleSetComponentIndex",8f,73,b6,f4),
	HX_("resizeComponent",29,98,f2,6b),
	HX_("supportsEvent",f6,b7,b2,ae),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	::String(null()) };

hx::Class ScreenBase_obj::__mClass;

void ScreenBase_obj::__register()
{
	ScreenBase_obj _hx_dummy;
	ScreenBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ScreenBase",69,73,9f,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScreenBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScreenBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
