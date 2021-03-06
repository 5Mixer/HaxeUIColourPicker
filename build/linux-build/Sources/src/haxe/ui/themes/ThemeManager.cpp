// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <hxinc/haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <hxinc/haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <hxinc/haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <hxinc/haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <hxinc/haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <hxinc/haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#include <hxinc/haxe/ui/styles/CompositeStyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_Theme
#include <hxinc/haxe/ui/themes/Theme.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <hxinc/haxe/ui/themes/ThemeManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_22_new,"haxe.ui.themes.ThemeManager","new",0x36faac48,"haxe.ui.themes.ThemeManager.new","haxe/ui/themes/ThemeManager.hx",22,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_25_getTheme,"haxe.ui.themes.ThemeManager","getTheme",0x49c888ab,"haxe.ui.themes.ThemeManager.getTheme","haxe/ui/themes/ThemeManager.hx",25,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_35_addStyleResource,"haxe.ui.themes.ThemeManager","addStyleResource",0x1a808756,"haxe.ui.themes.ThemeManager.addStyleResource","haxe/ui/themes/ThemeManager.hx",35,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_47_applyTheme,"haxe.ui.themes.ThemeManager","applyTheme",0x4249ead3,"haxe.ui.themes.ThemeManager.applyTheme","haxe/ui/themes/ThemeManager.hx",47,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_41_applyTheme,"haxe.ui.themes.ThemeManager","applyTheme",0x4249ead3,"haxe.ui.themes.ThemeManager.applyTheme","haxe/ui/themes/ThemeManager.hx",41,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_58_applyResource,"haxe.ui.themes.ThemeManager","applyResource",0xa44d8a44,"haxe.ui.themes.ThemeManager.applyResource","haxe/ui/themes/ThemeManager.hx",58,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_70_addStyleString,"haxe.ui.themes.ThemeManager","addStyleString",0x15fb2159,"haxe.ui.themes.ThemeManager.addStyleString","haxe/ui/themes/ThemeManager.hx",70,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_73_buildThemeEntries,"haxe.ui.themes.ThemeManager","buildThemeEntries",0xaba4b07d,"haxe.ui.themes.ThemeManager.buildThemeEntries","haxe/ui/themes/ThemeManager.hx",73,0xab3ecbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_c9111ab9de1a91f9_9_get_instance,"haxe.ui.themes.ThemeManager","get_instance",0xcb9d3ab6,"haxe.ui.themes.ThemeManager.get_instance","haxe/ui/themes/ThemeManager.hx",9,0xab3ecbe7)
namespace haxe{
namespace ui{
namespace themes{

void ThemeManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_22_new)
HXDLIN(  22)		this->_hx_set__themes(HX_CTX,  ::haxe::ds::StringMap_obj::__alloc( HX_CTX ));
            	}

Dynamic ThemeManager_obj::__CreateEmpty() { return new ThemeManager_obj; }

void *ThemeManager_obj::_hx_vtable = 0;

Dynamic ThemeManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ThemeManager_obj > _hx_result = new ThemeManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ThemeManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7debac88;
}

 ::haxe::ui::themes::Theme ThemeManager_obj::getTheme(::String themeName){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_25_getTheme)
HXLINE(  26)		 ::haxe::ui::themes::Theme theme = ( ( ::haxe::ui::themes::Theme)(this->_themes->get(themeName)) );
HXLINE(  27)		if (hx::IsNull( theme )) {
HXLINE(  28)			theme =  ::haxe::ui::themes::Theme_obj::__alloc( HX_CTX );
HXLINE(  29)			this->_themes->set(themeName,theme);
            		}
HXLINE(  31)		return theme;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,getTheme,return )

void ThemeManager_obj::addStyleResource(::String themeName,::String resourceId,hx::Null< Float >  __o_priority){
            		Float priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_35_addStyleResource)
HXDLIN(  35)		this->getTheme(themeName)->styles->push( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("priority",64,7b,3e,bb),priority)
            			->setFixed(1,HX_("resourceId",49,ec,0b,41),resourceId)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ThemeManager_obj,addStyleResource,(void))

void ThemeManager_obj::applyTheme(::String themeName){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::Dynamic a, ::Dynamic b){
            			HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_47_applyTheme)
HXLINE(  48)			if (hx::IsLess( a->__Field(HX_("priority",64,7b,3e,bb),hx::paccDynamic),b->__Field(HX_("priority",64,7b,3e,bb),hx::paccDynamic) )) {
HXLINE(  48)				return -1;
            			}
            			else {
HXLINE(  49)				if (hx::IsGreater( a->__Field(HX_("priority",64,7b,3e,bb),hx::paccDynamic),b->__Field(HX_("priority",64,7b,3e,bb),hx::paccDynamic) )) {
HXLINE(  49)					return 1;
            				}
            			}
HXLINE(  50)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_41_applyTheme)
HXLINE(  42)		::haxe::ui::Toolkit_obj::styleSheet->clear(HX_("default",c1,d8,c3,9b));
HXLINE(  43)		::Array< ::Dynamic> entries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  44)		this->buildThemeEntries(HX_("global",63,31,b2,a7),entries);
HXLINE(  45)		this->buildThemeEntries(themeName,entries);
HXLINE(  47)		::haxe::ds::ArraySort_obj::sort(entries, ::Dynamic(new _hx_Closure_0()));
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			while((_g < entries->length)){
HXLINE(  53)				 ::Dynamic e = entries->__get(_g);
HXDLIN(  53)				_g = (_g + 1);
HXLINE(  54)				this->applyResource(( (::String)(e->__Field(HX_("resourceId",49,ec,0b,41),hx::paccDynamic)) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,applyTheme,(void))

void ThemeManager_obj::applyResource(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_58_applyResource)
HXLINE(  59)		::String style = ::haxe::ui::Toolkit_obj::get_assets()->getText(resourceId);
HXLINE(  60)		if (hx::IsNotNull( style )) {
HXLINE(  61)			this->addStyleString(style);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,applyResource,(void))

void ThemeManager_obj::addStyleString(::String style){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_70_addStyleString)
HXDLIN(  70)		::haxe::ui::Toolkit_obj::styleSheet->parse(style,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ThemeManager_obj,addStyleString,(void))

void ThemeManager_obj::buildThemeEntries(::String themeName,::Array< ::Dynamic> arr){
            	HX_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_73_buildThemeEntries)
HXLINE(  74)		 ::haxe::ui::themes::Theme theme = ( ( ::haxe::ui::themes::Theme)(this->_themes->get(themeName)) );
HXLINE(  75)		if (hx::IsNull( theme )) {
HXLINE(  76)			return;
            		}
HXLINE(  78)		if (hx::IsNotNull( theme->parent )) {
HXLINE(  79)			this->buildThemeEntries(theme->parent,arr);
            		}
HXLINE(  82)		{
HXLINE(  82)			int _g = 0;
HXDLIN(  82)			::Array< ::Dynamic> _g1 = theme->styles;
HXDLIN(  82)			while((_g < _g1->length)){
HXLINE(  82)				 ::Dynamic s = _g1->__get(_g);
HXDLIN(  82)				_g = (_g + 1);
HXLINE(  83)				arr->push(s);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ThemeManager_obj,buildThemeEntries,(void))

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::_instance;

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::instance;

 ::haxe::ui::themes::ThemeManager ThemeManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_c9111ab9de1a91f9_9_get_instance)
HXLINE(  10)		if (hx::IsNull( ::haxe::ui::themes::ThemeManager_obj::_instance )) {
HXLINE(  11)			::haxe::ui::themes::ThemeManager_obj::_instance =  ::haxe::ui::themes::ThemeManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  13)		return ::haxe::ui::themes::ThemeManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ThemeManager_obj,get_instance,return )


hx::ObjectPtr< ThemeManager_obj > ThemeManager_obj::__new() {
	hx::ObjectPtr< ThemeManager_obj > __this = new ThemeManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ThemeManager_obj > ThemeManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	ThemeManager_obj *__this = (ThemeManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ThemeManager_obj), true, "haxe.ui.themes.ThemeManager"));
	*(void **)__this = ThemeManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ThemeManager_obj::ThemeManager_obj()
{
}

void ThemeManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThemeManager);
	HX_MARK_MEMBER_NAME(_themes,"_themes");
	HX_MARK_END_CLASS();
}

void ThemeManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_themes,"_themes");
}

hx::Val ThemeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_themes") ) { return hx::Val( _themes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTheme") ) { return hx::Val( getTheme_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyTheme") ) { return hx::Val( applyTheme_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyResource") ) { return hx::Val( applyResource_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addStyleString") ) { return hx::Val( addStyleString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addStyleResource") ) { return hx::Val( addStyleResource_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildThemeEntries") ) { return hx::Val( buildThemeEntries_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ThemeManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

hx::Val ThemeManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_themes") ) { _hx_set__themes(HX_CTX_GET,inValue.Cast<  ::haxe::ds::StringMap >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ThemeManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::themes::ThemeManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::themes::ThemeManager >(); return true; }
	}
	return false;
}

void ThemeManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_themes",e9,db,9e,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ThemeManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ThemeManager_obj,_themes),HX_("_themes",e9,db,9e,f4)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ThemeManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::themes::ThemeManager */ ,(void *) &ThemeManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{hx::fsObject /*  ::haxe::ui::themes::ThemeManager */ ,(void *) &ThemeManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ThemeManager_obj_sMemberFields[] = {
	HX_("_themes",e9,db,9e,f4),
	HX_("getTheme",93,8d,5d,6f),
	HX_("addStyleResource",3e,b4,80,4d),
	HX_("applyTheme",bb,f9,d7,ba),
	HX_("applyResource",5c,bc,d5,52),
	HX_("addStyleString",41,c4,9e,1e),
	HX_("buildThemeEntries",95,ce,cb,18),
	::String(null()) };

static void ThemeManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThemeManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ThemeManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThemeManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ThemeManager_obj::instance,"instance");
};

#endif

hx::Class ThemeManager_obj::__mClass;

static ::String ThemeManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ThemeManager_obj::__register()
{
	ThemeManager_obj _hx_dummy;
	ThemeManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.themes.ThemeManager",56,28,15,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ThemeManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ThemeManager_obj::__SetStatic;
	__mClass->mMarkFunc = ThemeManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ThemeManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ThemeManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ThemeManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThemeManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThemeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThemeManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace themes
