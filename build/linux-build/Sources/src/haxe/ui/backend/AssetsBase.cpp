// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <hxinc/haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e621796a8d98261_9_new,"haxe.ui.backend.AssetsBase","new",0x7c4ef8f2,"haxe.ui.backend.AssetsBase.new","haxe/ui/backend/AssetsBase.hx",9,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_14_getTextDelegate,"haxe.ui.backend.AssetsBase","getTextDelegate",0x9553865a,"haxe.ui.backend.AssetsBase.getTextDelegate","haxe/ui/backend/AssetsBase.hx",14,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_18_getImageInternal,"haxe.ui.backend.AssetsBase","getImageInternal",0xf13ea370,"haxe.ui.backend.AssetsBase.getImageInternal","haxe/ui/backend/AssetsBase.hx",18,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_22_getImageFromHaxeResource,"haxe.ui.backend.AssetsBase","getImageFromHaxeResource",0xd76c72d1,"haxe.ui.backend.AssetsBase.getImageFromHaxeResource","haxe/ui/backend/AssetsBase.hx",22,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_26_imageFromBytes,"haxe.ui.backend.AssetsBase","imageFromBytes",0x8899cc74,"haxe.ui.backend.AssetsBase.imageFromBytes","haxe/ui/backend/AssetsBase.hx",26,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_30_getFontInternal,"haxe.ui.backend.AssetsBase","getFontInternal",0x510a7974,"haxe.ui.backend.AssetsBase.getFontInternal","haxe/ui/backend/AssetsBase.hx",30,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_34_getFontFromHaxeResource,"haxe.ui.backend.AssetsBase","getFontFromHaxeResource",0x93c3ecd5,"haxe.ui.backend.AssetsBase.getFontFromHaxeResource","haxe/ui/backend/AssetsBase.hx",34,0x0e45c37d)
HX_LOCAL_STACK_FRAME(_hx_pos_4e621796a8d98261_38_imageInfoFromImageData,"haxe.ui.backend.AssetsBase","imageInfoFromImageData",0xc00077e0,"haxe.ui.backend.AssetsBase.imageInfoFromImageData","haxe/ui/backend/AssetsBase.hx",38,0x0e45c37d)
namespace haxe{
namespace ui{
namespace backend{

void AssetsBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_9_new)
            	}

Dynamic AssetsBase_obj::__CreateEmpty() { return new AssetsBase_obj; }

void *AssetsBase_obj::_hx_vtable = 0;

Dynamic AssetsBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetsBase_obj > _hx_result = new AssetsBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetsBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d657426;
}

::String AssetsBase_obj::getTextDelegate(::String resourceId){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_14_getTextDelegate)
HXDLIN(  14)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetsBase_obj,getTextDelegate,return )

void AssetsBase_obj::getImageInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_18_getImageInternal)
HXDLIN(  18)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getImageInternal,(void))

void AssetsBase_obj::getImageFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_22_getImageFromHaxeResource)
HXDLIN(  22)		callback(resourceId,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getImageFromHaxeResource,(void))

void AssetsBase_obj::imageFromBytes( ::haxe::io::Bytes bytes, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_26_imageFromBytes)
HXDLIN(  26)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,imageFromBytes,(void))

void AssetsBase_obj::getFontInternal(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_30_getFontInternal)
HXDLIN(  30)		callback(null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getFontInternal,(void))

void AssetsBase_obj::getFontFromHaxeResource(::String resourceId, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_34_getFontFromHaxeResource)
HXDLIN(  34)		callback(resourceId,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetsBase_obj,getFontFromHaxeResource,(void))

 ::Dynamic AssetsBase_obj::imageInfoFromImageData( ::kha::Image imageData){
            	HX_STACKFRAME(&_hx_pos_4e621796a8d98261_38_imageInfoFromImageData)
HXDLIN(  38)		return  ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("width",06,b6,62,ca),0)
            			->setFixed(1,HX_("height",e7,07,4c,02),0)
            			->setFixed(2,HX_("data",2a,56,63,42),imageData));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetsBase_obj,imageInfoFromImageData,return )


hx::ObjectPtr< AssetsBase_obj > AssetsBase_obj::__new() {
	hx::ObjectPtr< AssetsBase_obj > __this = new AssetsBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< AssetsBase_obj > AssetsBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	AssetsBase_obj *__this = (AssetsBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssetsBase_obj), false, "haxe.ui.backend.AssetsBase"));
	*(void **)__this = AssetsBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetsBase_obj::AssetsBase_obj()
{
}

hx::Val AssetsBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"imageFromBytes") ) { return hx::Val( imageFromBytes_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextDelegate") ) { return hx::Val( getTextDelegate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFontInternal") ) { return hx::Val( getFontInternal_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getImageInternal") ) { return hx::Val( getImageInternal_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"imageInfoFromImageData") ) { return hx::Val( imageInfoFromImageData_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFontFromHaxeResource") ) { return hx::Val( getFontFromHaxeResource_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getImageFromHaxeResource") ) { return hx::Val( getImageFromHaxeResource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetsBase_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AssetsBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetsBase_obj_sMemberFields[] = {
	HX_("getTextDelegate",c8,ca,74,b1),
	HX_("getImageInternal",42,3f,39,72),
	HX_("getImageFromHaxeResource",a3,30,02,17),
	HX_("imageFromBytes",c6,6f,67,40),
	HX_("getFontInternal",e2,bd,2b,6d),
	HX_("getFontFromHaxeResource",43,4f,84,fc),
	HX_("imageInfoFromImageData",32,bd,fc,d3),
	::String(null()) };

hx::Class AssetsBase_obj::__mClass;

void AssetsBase_obj::__register()
{
	AssetsBase_obj _hx_dummy;
	AssetsBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AssetsBase",00,58,07,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetsBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetsBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
