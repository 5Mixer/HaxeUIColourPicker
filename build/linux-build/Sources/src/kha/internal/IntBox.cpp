// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_kha_internal_IntBox
#include <hxinc/kha/internal/IntBox.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a1a0def2e47a64ba_7_new,"kha.internal.IntBox","new",0x78d2d3b5,"kha.internal.IntBox.new","kha/internal/IntBox.hx",7,0xba67657b)
namespace kha{
namespace internal{

void IntBox_obj::__construct(int value){
            	HX_STACKFRAME(&_hx_pos_a1a0def2e47a64ba_7_new)
HXDLIN(   7)		this->value = value;
            	}

Dynamic IntBox_obj::__CreateEmpty() { return new IntBox_obj; }

void *IntBox_obj::_hx_vtable = 0;

Dynamic IntBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IntBox_obj > _hx_result = new IntBox_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IntBox_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42e3a35d;
}


IntBox_obj::IntBox_obj()
{
}

hx::Val IntBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IntBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo IntBox_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntBox_obj,value),HX_("value",71,7f,b8,31)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IntBox_obj_sStaticStorageInfo = 0;
#endif

static ::String IntBox_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	::String(null()) };

hx::Class IntBox_obj::__mClass;

void IntBox_obj::__register()
{
	IntBox_obj _hx_dummy;
	IntBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.internal.IntBox",43,d5,2f,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IntBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace internal
