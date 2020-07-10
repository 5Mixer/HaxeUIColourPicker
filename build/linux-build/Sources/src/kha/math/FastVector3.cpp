// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_kha_math_FastVector3
#include <hxinc/kha/math/FastVector3.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <hxinc/kha/math/Vector3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a713b736ef3c662c_5_new,"kha.math.FastVector3","new",0x15ff578a,"kha.math.FastVector3.new","kha/math/FastVector3.hx",5,0x34dfab86)
HX_LOCAL_STACK_FRAME(_hx_pos_a713b736ef3c662c_27_get_length,"kha.math.FastVector3","get_length",0x51b916c5,"kha.math.FastVector3.get_length","kha/math/FastVector3.hx",27,0x34dfab86)
HX_LOCAL_STACK_FRAME(_hx_pos_a713b736ef3c662c_30_set_length,"kha.math.FastVector3","set_length",0x5536b539,"kha.math.FastVector3.set_length","kha/math/FastVector3.hx",30,0x34dfab86)
HX_LOCAL_STACK_FRAME(_hx_pos_a713b736ef3c662c_75_toString,"kha.math.FastVector3","toString",0xaf971142,"kha.math.FastVector3.toString","kha/math/FastVector3.hx",75,0x34dfab86)
HX_LOCAL_STACK_FRAME(_hx_pos_a713b736ef3c662c_12_fromVector3,"kha.math.FastVector3","fromVector3",0x95831ef0,"kha.math.FastVector3.fromVector3","kha/math/FastVector3.hx",12,0x34dfab86)
namespace kha{
namespace math{

void FastVector3_obj::__construct(hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z){
            		float x = __o_x.Default(0);
            		float y = __o_y.Default(0);
            		float z = __o_z.Default(0);
            	HX_STACKFRAME(&_hx_pos_a713b736ef3c662c_5_new)
HXLINE(   6)		this->x = x;
HXLINE(   7)		this->y = y;
HXLINE(   8)		this->z = z;
            	}

Dynamic FastVector3_obj::__CreateEmpty() { return new FastVector3_obj; }

void *FastVector3_obj::_hx_vtable = 0;

Dynamic FastVector3_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FastVector3_obj > _hx_result = new FastVector3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FastVector3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06595af4;
}

float FastVector3_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_a713b736ef3c662c_27_get_length)
HXDLIN(  27)		return ( (float)(::Math_obj::sqrt(( (Float)((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z))) ))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FastVector3_obj,get_length,return )

float FastVector3_obj::set_length(float length){
            	HX_STACKFRAME(&_hx_pos_a713b736ef3c662c_30_set_length)
HXLINE(  31)		float currentLength = ( (float)(::Math_obj::sqrt(( (Float)((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z))) ))) );
HXLINE(  32)		if ((currentLength == 0)) {
HXLINE(  32)			return ( (float)(0) );
            		}
HXLINE(  33)		Float mul = (( (Float)(length) ) / ( (Float)(currentLength) ));
HXLINE(  34)		 ::kha::math::FastVector3 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  34)		_hx_tmp->x = (_hx_tmp->x * ( (float)(mul) ));
HXLINE(  35)		 ::kha::math::FastVector3 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  35)		_hx_tmp1->y = (_hx_tmp1->y * ( (float)(mul) ));
HXLINE(  36)		 ::kha::math::FastVector3 _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  36)		_hx_tmp2->z = (_hx_tmp2->z * ( (float)(mul) ));
HXLINE(  37)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FastVector3_obj,set_length,return )

::String FastVector3_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_a713b736ef3c662c_75_toString)
HXDLIN(  75)		::String _hx_tmp = ((HX_("FastVector3(",f4,9a,e5,0d) + ::Std_obj::string(this->x)) + HX_(", ",74,26,00,00));
HXDLIN(  75)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->y)) + HX_(", ",74,26,00,00));
HXDLIN(  75)		return ((_hx_tmp1 + ::Std_obj::string(this->z)) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FastVector3_obj,toString,return )

 ::kha::math::FastVector3 FastVector3_obj::fromVector3( ::kha::math::Vector3 v){
            	HX_GC_STACKFRAME(&_hx_pos_a713b736ef3c662c_12_fromVector3)
HXDLIN(  12)		return  ::kha::math::FastVector3_obj::__alloc( HX_CTX ,v->x,v->y,v->z);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FastVector3_obj,fromVector3,return )


hx::ObjectPtr< FastVector3_obj > FastVector3_obj::__new(hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z) {
	hx::ObjectPtr< FastVector3_obj > __this = new FastVector3_obj();
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

hx::ObjectPtr< FastVector3_obj > FastVector3_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< float >  __o_x,hx::Null< float >  __o_y,hx::Null< float >  __o_z) {
	FastVector3_obj *__this = (FastVector3_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FastVector3_obj), false, "kha.math.FastVector3"));
	*(void **)__this = FastVector3_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

FastVector3_obj::FastVector3_obj()
{
}

hx::Val FastVector3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return hx::Val( z ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FastVector3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"fromVector3") ) { outValue = fromVector3_dyn(); return true; }
	}
	return false;
}

hx::Val FastVector3_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastVector3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo FastVector3_obj_sMemberStorageInfo[] = {
	{hx::fsUnknown /* float */ ,(int)offsetof(FastVector3_obj,x),HX_("x",78,00,00,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastVector3_obj,y),HX_("y",79,00,00,00)},
	{hx::fsUnknown /* float */ ,(int)offsetof(FastVector3_obj,z),HX_("z",7a,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FastVector3_obj_sStaticStorageInfo = 0;
#endif

static ::String FastVector3_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class FastVector3_obj::__mClass;

static ::String FastVector3_obj_sStaticFields[] = {
	HX_("fromVector3",c6,5d,dd,72),
	::String(null())
};

void FastVector3_obj::__register()
{
	FastVector3_obj _hx_dummy;
	FastVector3_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.math.FastVector3",98,8a,4e,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FastVector3_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FastVector3_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FastVector3_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FastVector3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FastVector3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FastVector3_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace math
