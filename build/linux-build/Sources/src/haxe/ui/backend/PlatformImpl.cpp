// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <hxinc/haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <hxinc/haxe/ui/backend/PlatformImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd6becf6ec623f70_3_new,"haxe.ui.backend.PlatformImpl","new",0xbfd74871,"haxe.ui.backend.PlatformImpl.new","haxe/ui/backend/PlatformImpl.hx",3,0x6a0d169e)
namespace haxe{
namespace ui{
namespace backend{

void PlatformImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd6becf6ec623f70_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic PlatformImpl_obj::__CreateEmpty() { return new PlatformImpl_obj; }

void *PlatformImpl_obj::_hx_vtable = 0;

Dynamic PlatformImpl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PlatformImpl_obj > _hx_result = new PlatformImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PlatformImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f3979e6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7f3979e6;
	} else {
		return inClassId==(int)0x7fb42909;
	}
}


PlatformImpl_obj::PlatformImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *PlatformImpl_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PlatformImpl_obj_sStaticStorageInfo = 0;
#endif

hx::Class PlatformImpl_obj::__mClass;

void PlatformImpl_obj::__register()
{
	PlatformImpl_obj _hx_dummy;
	PlatformImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.PlatformImpl",ff,3b,b4,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PlatformImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlatformImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlatformImpl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
