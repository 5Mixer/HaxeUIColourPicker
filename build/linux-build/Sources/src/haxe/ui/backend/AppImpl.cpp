// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <hxinc/StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <hxinc/haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <hxinc/haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppImpl
#include <hxinc/haxe/ui/backend/AppImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <hxinc/haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <hxinc/haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <hxinc/haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Properties
#include <hxinc/haxe/ui/util/Properties.h>
#endif
#ifndef INCLUDED_kha_Assets
#include <hxinc/kha/Assets.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <hxinc/kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_FramebufferOptions
#include <hxinc/kha/FramebufferOptions.h>
#endif
#ifndef INCLUDED_kha_System
#include <hxinc/kha/System.h>
#endif
#ifndef INCLUDED_kha_SystemOptions
#include <hxinc/kha/SystemOptions.h>
#endif
#ifndef INCLUDED_kha_Window
#include <hxinc/kha/Window.h>
#endif
#ifndef INCLUDED_kha_WindowOptions
#include <hxinc/kha/WindowOptions.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_9_new,"haxe.ui.backend.AppImpl","new",0xd71fe647,"haxe.ui.backend.AppImpl.new","haxe/ui/backend/AppImpl.hx",9,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_16_init,"haxe.ui.backend.AppImpl","init",0x61824f49,"haxe.ui.backend.AppImpl.init","haxe/ui/backend/AppImpl.hx",16,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_37_initialized,"haxe.ui.backend.AppImpl","initialized",0xdf4ec9fb,"haxe.ui.backend.AppImpl.initialized","haxe/ui/backend/AppImpl.hx",37,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_40_assetsLoaded,"haxe.ui.backend.AppImpl","assetsLoaded",0x1ce43e21,"haxe.ui.backend.AppImpl.assetsLoaded","haxe/ui/backend/AppImpl.hx",40,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_45_render,"haxe.ui.backend.AppImpl","render",0xf008bfcf,"haxe.ui.backend.AppImpl.render","haxe/ui/backend/AppImpl.hx",45,0x396588ea)
namespace haxe{
namespace ui{
namespace backend{

void AppImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_9_new)
HXLINE(  11)		this->_backgroudColor = 0;
HXLINE(  13)		super::__construct();
            	}

Dynamic AppImpl_obj::__CreateEmpty() { return new AppImpl_obj; }

void *AppImpl_obj::_hx_vtable = 0;

Dynamic AppImpl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AppImpl_obj > _hx_result = new AppImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6371b558) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6371b558;
	} else {
		return inClassId==(int)0x681b4c27;
	}
}

void AppImpl_obj::init( ::Dynamic callback, ::Dynamic onEnd){
            	HX_GC_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_16_init)
HXLINE(  17)		this->_hx_set__callback(HX_CTX, callback);
HXLINE(  18)		::String title = ::haxe::ui::Toolkit_obj::get_backendProperties()->getProp(HX_("haxe.ui.kha.title",7c,c8,fd,eb),HX_("",00,00,00,00));
HXLINE(  19)		int width = ::haxe::ui::Toolkit_obj::get_backendProperties()->getPropInt(HX_("haxe.ui.kha.width",ea,68,25,a6),-1);
HXLINE(  20)		int height = ::haxe::ui::Toolkit_obj::get_backendProperties()->getPropInt(HX_("haxe.ui.kha.height",83,dc,e5,70),-1);
HXLINE(  32)		::String s = ::haxe::ui::Toolkit_obj::get_backendProperties()->getProp(HX_("haxe.ui.kha.background.color",7f,74,fd,04),HX_("0xFFFFFF",08,38,07,b1));
HXDLIN(  32)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE(  32)			s = s.substring(1,s.length);
            		}
            		else {
HXLINE(  32)			if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE(  32)				s = s.substring(2,s.length);
            			}
            		}
HXDLIN(  32)		this->_backgroudColor = ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s))) );
HXLINE(  33)		::kha::System_obj::start( ::kha::SystemOptions_obj::__alloc( HX_CTX ,title,width,height,null(),null()),this->initialized_dyn());
            	}


void AppImpl_obj::initialized( ::kha::Window _){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_37_initialized)
HXDLIN(  37)		::kha::Assets_obj::loadEverything(this->assetsLoaded_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,initialized,(void))

void AppImpl_obj::assetsLoaded(){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_40_assetsLoaded)
HXLINE(  41)		::kha::System_obj::notifyOnFrames(this->render_dyn());
HXLINE(  42)		this->_callback();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,assetsLoaded,(void))

void AppImpl_obj::render(::Array< ::Dynamic> framebuffers){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_45_render)
HXLINE(  46)		 ::kha::graphics2::Graphics g = framebuffers->__get(0).StaticCast<  ::kha::Framebuffer >()->get_g2();
HXLINE(  47)		g->begin(true,this->_backgroudColor);
HXLINE(  48)		::haxe::ui::core::Screen_obj::get_instance()->renderTo(g);
HXLINE(  49)		g->end();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,render,(void))


hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__new() {
	hx::ObjectPtr< AppImpl_obj > __this = new AppImpl_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__alloc(hx::Ctx *_hx_ctx) {
	AppImpl_obj *__this = (AppImpl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AppImpl_obj), true, "haxe.ui.backend.AppImpl"));
	*(void **)__this = AppImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppImpl_obj::AppImpl_obj()
{
}

void AppImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppImpl);
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_backgroudColor,"_backgroudColor");
	 ::haxe::ui::backend::AppBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_backgroudColor,"_backgroudColor");
	 ::haxe::ui::backend::AppBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val AppImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { return hx::Val( _callback ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return hx::Val( initialized_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assetsLoaded") ) { return hx::Val( assetsLoaded_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_backgroudColor") ) { return hx::Val( _backgroudColor ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AppImpl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _hx_set__callback(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_backgroudColor") ) { _backgroudColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_backgroudColor",b6,ae,87,7c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AppImpl_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AppImpl_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{hx::fsInt,(int)offsetof(AppImpl_obj,_backgroudColor),HX_("_backgroudColor",b6,ae,87,7c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AppImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String AppImpl_obj_sMemberFields[] = {
	HX_("_callback",24,91,9c,c6),
	HX_("_backgroudColor",b6,ae,87,7c),
	HX_("init",10,3b,bb,45),
	HX_("initialized",14,f5,0f,37),
	HX_("assetsLoaded",e8,c8,28,8e),
	HX_("render",56,6b,29,05),
	::String(null()) };

hx::Class AppImpl_obj::__mClass;

void AppImpl_obj::__register()
{
	AppImpl_obj _hx_dummy;
	AppImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AppImpl",d5,b6,f7,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AppImpl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AppImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppImpl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
