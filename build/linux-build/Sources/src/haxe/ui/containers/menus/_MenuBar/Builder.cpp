// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <hxinc/haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <hxinc/haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <hxinc/haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_Menu
#include <hxinc/haxe/ui/containers/menus/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#include <hxinc/haxe/ui/containers/menus/MenuBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuBar_Builder
#include <hxinc/haxe/ui/containers/menus/_MenuBar/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_775f8a0de575e1a5_205_new,"haxe.ui.containers.menus._MenuBar.Builder","new",0x58564998,"haxe.ui.containers.menus._MenuBar.Builder.new","haxe/ui/containers/menus/MenuBar.hx",205,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_216_create,"haxe.ui.containers.menus._MenuBar.Builder","create",0xb12280c4,"haxe.ui.containers.menus._MenuBar.Builder.create","haxe/ui/containers/menus/MenuBar.hx",216,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_219_destroy,"haxe.ui.containers.menus._MenuBar.Builder","destroy",0x6029a232,"haxe.ui.containers.menus._MenuBar.Builder.destroy","haxe/ui/containers/menus/MenuBar.hx",219,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_222_addComponent,"haxe.ui.containers.menus._MenuBar.Builder","addComponent",0xe958b224,"haxe.ui.containers.menus._MenuBar.Builder.addComponent","haxe/ui/containers/menus/MenuBar.hx",222,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_242_addComponentAt,"haxe.ui.containers.menus._MenuBar.Builder","addComponentAt",0x7684bc37,"haxe.ui.containers.menus._MenuBar.Builder.addComponentAt","haxe/ui/containers/menus/MenuBar.hx",242,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_246_removeComponent,"haxe.ui.containers.menus._MenuBar.Builder","removeComponent",0xe0e1f911,"haxe.ui.containers.menus._MenuBar.Builder.removeComponent","haxe/ui/containers/menus/MenuBar.hx",246,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_250_getComponentIndex,"haxe.ui.containers.menus._MenuBar.Builder","getComponentIndex",0x9c9e2783,"haxe.ui.containers.menus._MenuBar.Builder.getComponentIndex","haxe/ui/containers/menus/MenuBar.hx",250,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_254_setComponentIndex,"haxe.ui.containers.menus._MenuBar.Builder","setComponentIndex",0xc00bff8f,"haxe.ui.containers.menus._MenuBar.Builder.setComponentIndex","haxe/ui/containers/menus/MenuBar.hx",254,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_258_getComponentAt,"haxe.ui.containers.menus._MenuBar.Builder","getComponentAt",0x684c07e2,"haxe.ui.containers.menus._MenuBar.Builder.getComponentAt","haxe/ui/containers/menus/MenuBar.hx",258,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_775f8a0de575e1a5_261_findComponent,"haxe.ui.containers.menus._MenuBar.Builder","findComponent",0x6fe0e07c,"haxe.ui.containers.menus._MenuBar.Builder.findComponent","haxe/ui/containers/menus/MenuBar.hx",261,0x144ebed0)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuBar{

void Builder_obj::__construct( ::haxe::ui::containers::menus::MenuBar menubar){
            	HX_GC_STACKFRAME(&_hx_pos_775f8a0de575e1a5_205_new)
HXLINE( 209)		this->_hx_set__menus(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE( 208)		this->_hx_set__buttons(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE( 212)		super::__construct(menubar);
HXLINE( 213)		this->_hx_set__menubar(HX_CTX, menubar);
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6ef41a5e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6ef41a5e;
	} else {
		return inClassId==(int)0x6fc7eb95;
	}
}

void Builder_obj::create(){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_216_create)
            	}


void Builder_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_219_destroy)
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_GC_STACKFRAME(&_hx_pos_775f8a0de575e1a5_222_addComponent)
HXLINE( 223)		if (::Std_obj::is(child,hx::ClassOf< ::haxe::ui::containers::menus::Menu >())) {
HXLINE( 224)			 ::haxe::ui::containers::menus::Menu menu = hx::TCast<  ::haxe::ui::containers::menus::Menu >::cast(child);
HXLINE( 225)			 ::haxe::ui::components::Button button =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 226)			button->set_styleNames(HX_("menubar-button",cb,e2,3d,ba));
HXLINE( 227)			button->set_text(menu->get_text());
HXLINE( 228)			button->set_icon(menu->get_icon());
HXLINE( 229)			button->set_toggle(true);
HXLINE( 230)			this->_buttons->push(button);
HXLINE( 231)			this->_menubar->addComponent(button);
HXLINE( 232)			this->_menubar->registerInternalEvents(null(),true);
HXLINE( 234)			this->_menus->push(child);
HXLINE( 236)			return child;
            		}
HXLINE( 238)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::addComponentAt( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_242_addComponentAt)
HXDLIN( 242)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::removeComponent( ::haxe::ui::core::Component child,hx::Null< bool >  __o_dispose,hx::Null< bool >  __o_invalidate){
            		bool dispose = __o_dispose.Default(true);
            		bool invalidate = __o_invalidate.Default(true);
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_246_removeComponent)
HXDLIN( 246)		return null();
            	}


int Builder_obj::getComponentIndex( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_250_getComponentIndex)
HXDLIN( 250)		return -1;
            	}


 ::haxe::ui::core::Component Builder_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_254_setComponentIndex)
HXDLIN( 254)		return null();
            	}


 ::haxe::ui::core::Component Builder_obj::getComponentAt(int index){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_258_getComponentAt)
HXDLIN( 258)		return null();
            	}


 ::Dynamic Builder_obj::findComponent(::String criteria,hx::Class type, ::Dynamic recursive,::String searchType){
            	HX_STACKFRAME(&_hx_pos_775f8a0de575e1a5_261_findComponent)
HXLINE( 262)		 ::Dynamic match = this->super::findComponent(criteria,type,recursive,searchType);
HXLINE( 263)		if (hx::IsNull( match )) {
HXLINE( 264)			int _g = 0;
HXDLIN( 264)			::Array< ::Dynamic> _g1 = this->_menus;
HXDLIN( 264)			while((_g < _g1->length)){
HXLINE( 264)				 ::haxe::ui::containers::menus::Menu menu = _g1->__get(_g).StaticCast<  ::haxe::ui::containers::menus::Menu >();
HXDLIN( 264)				_g = (_g + 1);
HXLINE( 265)				match = menu->findComponent(criteria,type,recursive,searchType);
HXLINE( 266)				if (menu->matchesSearch(criteria,type,searchType)) {
HXLINE( 267)					return menu;
            				}
            				else {
HXLINE( 269)					match = menu->findComponent(criteria,type,recursive,searchType);
            				}
HXLINE( 272)				if (hx::IsNotNull( match )) {
HXLINE( 273)					goto _hx_goto_9;
            				}
            			}
            			_hx_goto_9:;
            		}
HXLINE( 277)		return match;
            	}



hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::menus::MenuBar menubar) {
	hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(menubar);
	return __this;
}

hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::containers::menus::MenuBar menubar) {
	Builder_obj *__this = (Builder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers.menus._MenuBar.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(menubar);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_menubar,"_menubar");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_menus,"_menus");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menubar,"_menubar");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_menus,"_menus");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Builder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_menus") ) { return hx::Val( _menus ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_menubar") ) { return hx::Val( _menubar ); }
		if (HX_FIELD_EQ(inName,"_buttons") ) { return hx::Val( _buttons ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findComponent") ) { return hx::Val( findComponent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addComponentAt") ) { return hx::Val( addComponentAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getComponentAt") ) { return hx::Val( getComponentAt_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return hx::Val( removeComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getComponentIndex") ) { return hx::Val( getComponentIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return hx::Val( setComponentIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Builder_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_menus") ) { _hx_set__menus(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_menubar") ) { _hx_set__menubar(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::menus::MenuBar >()); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttons") ) { _hx_set__buttons(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_menubar",15,d3,1b,f4));
	outFields->push(HX_("_buttons",c2,ab,2d,04));
	outFields->push(HX_("_menus",35,ed,aa,01));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::containers::menus::MenuBar */ ,(int)offsetof(Builder_obj,_menubar),HX_("_menubar",15,d3,1b,f4)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Builder_obj,_buttons),HX_("_buttons",c2,ab,2d,04)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Builder_obj,_menus),HX_("_menus",35,ed,aa,01)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_menubar",15,d3,1b,f4),
	HX_("_buttons",c2,ab,2d,04),
	HX_("_menus",35,ed,aa,01),
	HX_("create",fc,66,0f,7c),
	HX_("destroy",fa,2c,86,24),
	HX_("addComponent",5c,12,a8,0e),
	HX_("addComponentAt",6f,9a,96,16),
	HX_("removeComponent",d9,8b,72,50),
	HX_("getComponentIndex",4b,fc,8e,7f),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("getComponentAt",1a,e6,5d,08),
	HX_("findComponent",44,b1,05,f0),
	::String(null()) };

hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus._MenuBar.Builder",a6,dd,63,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuBar
