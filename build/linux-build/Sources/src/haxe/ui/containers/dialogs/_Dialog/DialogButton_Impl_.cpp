// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <hxinc/StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs__Dialog_DialogButton_Impl_
#include <hxinc/haxe/ui/containers/dialogs/_Dialog/DialogButton_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_16_bitOr,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","bitOr",0xee0484f0,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.bitOr","haxe/ui/containers/dialogs/Dialog.hx",16,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_28_eq,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","eq",0xb17a1acc,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.eq","haxe/ui/containers/dialogs/Dialog.hx",28,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_33_toArray,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","toArray",0xe83d5bbe,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.toArray","haxe/ui/containers/dialogs/Dialog.hx",33,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_46_toString,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","toString",0xa6b29b0c,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.toString","haxe/ui/containers/dialogs/Dialog.hx",46,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_7_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",7,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_8_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",8,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_9_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",9,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_10_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",10,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_11_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",11,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_12_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",12,0x366f3767)
HX_LOCAL_STACK_FRAME(_hx_pos_aeb53a084dcdf837_13_boot,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_","boot",0x96529e92,"haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_.boot","haxe/ui/containers/dialogs/Dialog.hx",13,0x366f3767)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{
namespace _Dialog{

void DialogButton_Impl__obj::__construct() { }

Dynamic DialogButton_Impl__obj::__CreateEmpty() { return new DialogButton_Impl__obj; }

void *DialogButton_Impl__obj::_hx_vtable = 0;

Dynamic DialogButton_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DialogButton_Impl__obj > _hx_result = new DialogButton_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogButton_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60a7b0c6;
}

::String DialogButton_Impl__obj::SAVE;

::String DialogButton_Impl__obj::_hx_YES;

::String DialogButton_Impl__obj::_hx_NO;

::String DialogButton_Impl__obj::CLOSE;

::String DialogButton_Impl__obj::OK;

::String DialogButton_Impl__obj::CANCEL;

::String DialogButton_Impl__obj::APPLY;

::String DialogButton_Impl__obj::bitOr(::String lhs,::String rhs){
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_16_bitOr)
HXLINE(  17)		::Array< ::String > larr = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(lhs).split(HX_("|",7c,00,00,00));
HXLINE(  18)		::Array< ::String > rarr = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(rhs).split(HX_("|",7c,00,00,00));
HXLINE(  19)		{
HXLINE(  19)			int _g = 0;
HXDLIN(  19)			while((_g < rarr->length)){
HXLINE(  19)				::String r = rarr->__get(_g);
HXDLIN(  19)				_g = (_g + 1);
HXLINE(  20)				if ((larr->indexOf(r,null()) == -1)) {
HXLINE(  21)					larr->push(r);
            				}
            			}
            		}
HXLINE(  24)		return larr->join(HX_("|",7c,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DialogButton_Impl__obj,bitOr,return )

bool DialogButton_Impl__obj::eq(::String lhs,::String rhs){
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_28_eq)
HXLINE(  29)		::Array< ::String > larr = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(lhs).split(HX_("|",7c,00,00,00));
HXLINE(  30)		return (larr->indexOf(::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(rhs),null()) != -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DialogButton_Impl__obj,eq,return )

::Array< ::String > DialogButton_Impl__obj::toArray(::String this1){
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_33_toArray)
HXLINE(  34)		::Array< ::String > a = ::Array_obj< ::String >::__new(0);
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			::Array< ::String > _g1 = ::Std_obj::string(this1).split(HX_("|",7c,00,00,00));
HXDLIN(  35)			while((_g < _g1->length)){
HXLINE(  35)				::String i = _g1->__get(_g);
HXDLIN(  35)				_g = (_g + 1);
HXLINE(  36)				i = ::StringTools_obj::trim(i);
HXLINE(  37)				bool _hx_tmp;
HXDLIN(  37)				if ((i.length != 0)) {
HXLINE(  37)					_hx_tmp = (i == HX_("null",87,9e,0e,49));
            				}
            				else {
HXLINE(  37)					_hx_tmp = true;
            				}
HXDLIN(  37)				if (_hx_tmp) {
HXLINE(  38)					continue;
            				}
HXLINE(  40)				a->push(i);
            			}
            		}
HXLINE(  42)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogButton_Impl__obj,toArray,return )

::String DialogButton_Impl__obj::toString(::String this1){
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_46_toString)
HXDLIN(  46)		return ::Std_obj::string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DialogButton_Impl__obj,toString,return )


DialogButton_Impl__obj::DialogButton_Impl__obj()
{
}

bool DialogButton_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"eq") ) { outValue = eq_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bitOr") ) { outValue = bitOr_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { outValue = toArray_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *DialogButton_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo DialogButton_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &DialogButton_Impl__obj::SAVE,HX_("SAVE",3d,53,0e,37)},
	{hx::fsString,(void *) &DialogButton_Impl__obj::_hx_YES,HX_("YES",07,c5,43,00)},
	{hx::fsString,(void *) &DialogButton_Impl__obj::_hx_NO,HX_("NO",41,44,00,00)},
	{hx::fsString,(void *) &DialogButton_Impl__obj::CLOSE,HX_("CLOSE",98,4f,51,c6)},
	{hx::fsString,(void *) &DialogButton_Impl__obj::OK,HX_("OK",1c,45,00,00)},
	{hx::fsString,(void *) &DialogButton_Impl__obj::CANCEL,HX_("CANCEL",7a,99,b6,6a)},
	{hx::fsString,(void *) &DialogButton_Impl__obj::APPLY,HX_("APPLY",4e,bd,29,a2)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void DialogButton_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::SAVE,"SAVE");
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::_hx_YES,"YES");
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::_hx_NO,"NO");
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::OK,"OK");
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(DialogButton_Impl__obj::APPLY,"APPLY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DialogButton_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::SAVE,"SAVE");
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::_hx_YES,"YES");
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::_hx_NO,"NO");
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(DialogButton_Impl__obj::APPLY,"APPLY");
};

#endif

hx::Class DialogButton_Impl__obj::__mClass;

static ::String DialogButton_Impl__obj_sStaticFields[] = {
	HX_("SAVE",3d,53,0e,37),
	HX_("YES",07,c5,43,00),
	HX_("NO",41,44,00,00),
	HX_("CLOSE",98,4f,51,c6),
	HX_("OK",1c,45,00,00),
	HX_("CANCEL",7a,99,b6,6a),
	HX_("APPLY",4e,bd,29,a2),
	HX_("bitOr",50,8b,04,b3),
	HX_("eq",6c,58,00,00),
	HX_("toArray",1e,ba,13,f2),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void DialogButton_Impl__obj::__register()
{
	DialogButton_Impl__obj _hx_dummy;
	DialogButton_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.dialogs._Dialog.DialogButton_Impl_",0e,62,b3,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DialogButton_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DialogButton_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DialogButton_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DialogButton_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DialogButton_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogButton_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogButton_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DialogButton_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_7_boot)
HXDLIN(   7)		SAVE = HX_("Save",5d,b7,26,37);
            	}
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_8_boot)
HXDLIN(   8)		_hx_YES = HX_("Yes",07,e1,43,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_9_boot)
HXDLIN(   9)		_hx_NO = HX_("No",61,44,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_10_boot)
HXDLIN(  10)		CLOSE = HX_("Close",98,87,90,db);
            	}
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_11_boot)
HXDLIN(  11)		OK = HX_("OK",1c,45,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_12_boot)
HXDLIN(  12)		CANCEL = HX_("Cancel",9a,61,c8,ec);
            	}
{
            	HX_STACKFRAME(&_hx_pos_aeb53a084dcdf837_13_boot)
HXDLIN(  13)		APPLY = HX_("Apply",4e,f5,68,b7);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
} // end namespace _Dialog
