// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <hxinc/StringBuf.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <hxinc/haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <hxinc/haxe/StackItem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2592a2f6ae05faa6_94_callStack,"haxe.CallStack","callStack",0xfa9165be,"haxe.CallStack.callStack","/home/mixer/tools/Kha/Tools/haxe/std/haxe/CallStack.hx",94,0xba9083e2)
HX_LOCAL_STACK_FRAME(_hx_pos_2592a2f6ae05faa6_259_toString,"haxe.CallStack","toString",0xd59be738,"haxe.CallStack.toString","/home/mixer/tools/Kha/Tools/haxe/std/haxe/CallStack.hx",259,0xba9083e2)
static const ::String _hx_array_data_6d544b62_3[] = {
	HX_("\nCalled from ",bd,26,6b,81),
};
HX_LOCAL_STACK_FRAME(_hx_pos_2592a2f6ae05faa6_269_itemToString,"haxe.CallStack","itemToString",0xc121696b,"haxe.CallStack.itemToString","/home/mixer/tools/Kha/Tools/haxe/std/haxe/CallStack.hx",269,0xba9083e2)
static const ::String _hx_array_data_6d544b62_5[] = {
	HX_("a C function",f4,1b,53,cb),
};
static const ::String _hx_array_data_6d544b62_6[] = {
	HX_("module ",f4,e1,fa,f7),
};
static const ::String _hx_array_data_6d544b62_7[] = {
	HX_(" (",08,1c,00,00),
};
static const ::String _hx_array_data_6d544b62_8[] = {
	HX_(" line ",8c,69,6d,40),
};
static const ::String _hx_array_data_6d544b62_9[] = {
	HX_(" column ",6a,f0,a7,19),
};
static const ::String _hx_array_data_6d544b62_10[] = {
	HX_(")",29,00,00,00),
};
static const ::String _hx_array_data_6d544b62_11[] = {
	HX_(".",2e,00,00,00),
};
static const ::String _hx_array_data_6d544b62_12[] = {
	HX_("local function #",b0,cd,97,ff),
};
namespace haxe{

void CallStack_obj::__construct() { }

Dynamic CallStack_obj::__CreateEmpty() { return new CallStack_obj; }

void *CallStack_obj::_hx_vtable = 0;

Dynamic CallStack_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallStack_obj > _hx_result = new CallStack_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallStack_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6207a884;
}

::Array< ::Dynamic> CallStack_obj::callStack(){
            	HX_STACKFRAME(&_hx_pos_2592a2f6ae05faa6_94_callStack)
HXLINE( 104)		::Array< ::String > s =  ::__hxcpp_get_call_stack(true);
HXLINE( 105)		return ::haxe::CallStack_obj::makeStack(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,callStack,return )

::Array< ::Dynamic> CallStack_obj::exceptionStack(){
	::Array< ::String > s =  ::__hxcpp_get_exception_stack();
	return ::haxe::CallStack_obj::makeStack(s);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_obj,exceptionStack,return )

::String CallStack_obj::toString(::Array< ::Dynamic> stack){
            	HX_GC_STACKFRAME(&_hx_pos_2592a2f6ae05faa6_259_toString)
HXLINE( 260)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 261)		{
HXLINE( 261)			int _g = 0;
HXDLIN( 261)			while((_g < stack->length)){
HXLINE( 261)				 ::haxe::StackItem s = stack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN( 261)				_g = (_g + 1);
HXLINE( 262)				{
HXLINE( 262)					if (hx::IsNotNull( b->charBuf )) {
HXLINE( 262)						b->flush();
            					}
HXDLIN( 262)					if (hx::IsNull( b->b )) {
HXLINE( 262)						b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_3,1));
            					}
            					else {
HXLINE( 262)						b->b->push(HX_("\nCalled from ",bd,26,6b,81));
            					}
            				}
HXLINE( 263)				::haxe::CallStack_obj::itemToString(b,s);
            			}
            		}
HXLINE( 265)		return b->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,toString,return )

void CallStack_obj::itemToString( ::StringBuf b, ::haxe::StackItem s){
            	HX_GC_STACKFRAME(&_hx_pos_2592a2f6ae05faa6_269_itemToString)
HXDLIN( 269)		switch((int)(s->_hx_getIndex())){
            			case (int)0: {
HXLINE( 271)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 271)					b->flush();
            				}
HXDLIN( 271)				if (hx::IsNull( b->b )) {
HXLINE( 271)					b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_5,1));
            				}
            				else {
HXLINE( 271)					b->b->push(HX_("a C function",f4,1b,53,cb));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 272)				::String m = s->_hx_getString(0);
HXDLIN( 272)				{
HXLINE( 273)					{
HXLINE( 273)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 273)							b->flush();
            						}
HXDLIN( 273)						if (hx::IsNull( b->b )) {
HXLINE( 273)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_6,1));
            						}
            						else {
HXLINE( 273)							b->b->push(HX_("module ",f4,e1,fa,f7));
            						}
            					}
HXLINE( 274)					{
HXLINE( 274)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 274)							b->flush();
            						}
HXDLIN( 274)						if (hx::IsNull( b->b )) {
HXLINE( 274)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(m)));
            						}
            						else {
HXLINE( 274)							::Array< ::String > b1 = b->b;
HXDLIN( 274)							b1->push(::Std_obj::string(m));
            						}
            					}
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 275)				 ::Dynamic col = s->_hx_getObject(3);
HXDLIN( 275)				int line = s->_hx_getInt(2);
HXDLIN( 275)				::String file = s->_hx_getString(1);
HXDLIN( 275)				 ::haxe::StackItem s1 = s->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 275)				{
HXLINE( 276)					if (hx::IsNotNull( s1 )) {
HXLINE( 277)						::haxe::CallStack_obj::itemToString(b,s1);
HXLINE( 278)						{
HXLINE( 278)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 278)								b->flush();
            							}
HXDLIN( 278)							if (hx::IsNull( b->b )) {
HXLINE( 278)								b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_7,1));
            							}
            							else {
HXLINE( 278)								b->b->push(HX_(" (",08,1c,00,00));
            							}
            						}
            					}
HXLINE( 280)					{
HXLINE( 280)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 280)							b->flush();
            						}
HXDLIN( 280)						if (hx::IsNull( b->b )) {
HXLINE( 280)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(file)));
            						}
            						else {
HXLINE( 280)							::Array< ::String > b2 = b->b;
HXDLIN( 280)							b2->push(::Std_obj::string(file));
            						}
            					}
HXLINE( 281)					{
HXLINE( 281)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 281)							b->flush();
            						}
HXDLIN( 281)						if (hx::IsNull( b->b )) {
HXLINE( 281)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_8,1));
            						}
            						else {
HXLINE( 281)							b->b->push(HX_(" line ",8c,69,6d,40));
            						}
            					}
HXLINE( 282)					{
HXLINE( 282)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 282)							b->flush();
            						}
HXDLIN( 282)						if (hx::IsNull( b->b )) {
HXLINE( 282)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(line)));
            						}
            						else {
HXLINE( 282)							::Array< ::String > b3 = b->b;
HXDLIN( 282)							b3->push(::Std_obj::string(line));
            						}
            					}
HXLINE( 283)					if (hx::IsNotNull( col )) {
HXLINE( 284)						{
HXLINE( 284)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 284)								b->flush();
            							}
HXDLIN( 284)							if (hx::IsNull( b->b )) {
HXLINE( 284)								b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_9,1));
            							}
            							else {
HXLINE( 284)								b->b->push(HX_(" column ",6a,f0,a7,19));
            							}
            						}
HXLINE( 285)						{
HXLINE( 285)							if (hx::IsNotNull( b->charBuf )) {
HXLINE( 285)								b->flush();
            							}
HXDLIN( 285)							if (hx::IsNull( b->b )) {
HXLINE( 285)								b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(col)));
            							}
            							else {
HXLINE( 285)								::Array< ::String > b4 = b->b;
HXDLIN( 285)								b4->push(::Std_obj::string(col));
            							}
            						}
            					}
HXLINE( 287)					if (hx::IsNotNull( s1 )) {
HXLINE( 288)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 288)							b->flush();
            						}
HXDLIN( 288)						if (hx::IsNull( b->b )) {
HXLINE( 288)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_10,1));
            						}
            						else {
HXLINE( 288)							b->b->push(HX_(")",29,00,00,00));
            						}
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE( 289)				::String meth = s->_hx_getString(1);
HXDLIN( 289)				::String cname = s->_hx_getString(0);
HXDLIN( 289)				{
HXLINE( 290)					{
HXLINE( 290)						::String x;
HXDLIN( 290)						if (hx::IsNull( cname )) {
HXLINE( 290)							x = HX_("<unknown>",b0,91,d8,da);
            						}
            						else {
HXLINE( 290)							x = cname;
            						}
HXDLIN( 290)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 290)							b->flush();
            						}
HXDLIN( 290)						if (hx::IsNull( b->b )) {
HXLINE( 290)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x)));
            						}
            						else {
HXLINE( 290)							::Array< ::String > b5 = b->b;
HXDLIN( 290)							b5->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 291)					{
HXLINE( 291)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 291)							b->flush();
            						}
HXDLIN( 291)						if (hx::IsNull( b->b )) {
HXLINE( 291)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_11,1));
            						}
            						else {
HXLINE( 291)							b->b->push(HX_(".",2e,00,00,00));
            						}
            					}
HXLINE( 292)					{
HXLINE( 292)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 292)							b->flush();
            						}
HXDLIN( 292)						if (hx::IsNull( b->b )) {
HXLINE( 292)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(meth)));
            						}
            						else {
HXLINE( 292)							::Array< ::String > b6 = b->b;
HXDLIN( 292)							b6->push(::Std_obj::string(meth));
            						}
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 293)				 ::Dynamic n = s->_hx_getObject(0);
HXDLIN( 293)				{
HXLINE( 294)					{
HXLINE( 294)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 294)							b->flush();
            						}
HXDLIN( 294)						if (hx::IsNull( b->b )) {
HXLINE( 294)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::fromData( _hx_array_data_6d544b62_12,1));
            						}
            						else {
HXLINE( 294)							b->b->push(HX_("local function #",b0,cd,97,ff));
            						}
            					}
HXLINE( 295)					{
HXLINE( 295)						if (hx::IsNotNull( b->charBuf )) {
HXLINE( 295)							b->flush();
            						}
HXDLIN( 295)						if (hx::IsNull( b->b )) {
HXLINE( 295)							b->_hx_set_b(HX_CTX, ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(n)));
            						}
            						else {
HXLINE( 295)							::Array< ::String > b7 = b->b;
HXDLIN( 295)							b7->push(::Std_obj::string(n));
            						}
            					}
            				}
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CallStack_obj,itemToString,(void))

::Array< ::Dynamic> CallStack_obj::makeStack( ::Dynamic s){
	::Array< ::String > stack = ( (::Array< ::String >)(s) );
	::Array< ::Dynamic> m = ::Array_obj< ::Dynamic>::__new();
	{
		int _g = 0;
		while((_g < stack->length)){
			::String func = stack->__get(_g);
			_g = (_g + 1);
			::Array< ::String > words = func.split(HX_("::",c0,32,00,00));
			if ((words->length == 0)) {
				m->push(::haxe::StackItem_obj::CFunction_dyn());
			}
			else {
				if ((words->length == 2)) {
					m->push(::haxe::StackItem_obj::Method(words->__get(0),words->__get(1)));
				}
				else {
					if ((words->length == 4)) {
						 ::haxe::StackItem _hx_tmp = ::haxe::StackItem_obj::Method(words->__get(0),words->__get(1));
						::String words1 = words->__get(2);
						m->push(::haxe::StackItem_obj::FilePos(_hx_tmp,words1,::Std_obj::parseInt(words->__get(3)),null()));
					}
				}
			}
		}
	}
	return m;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CallStack_obj,makeStack,return )


CallStack_obj::CallStack_obj()
{
}

bool CallStack_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeStack") ) { outValue = makeStack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemToString") ) { outValue = itemToString_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { outValue = exceptionStack_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CallStack_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CallStack_obj_sStaticStorageInfo = 0;
#endif

hx::Class CallStack_obj::__mClass;

static ::String CallStack_obj_sStaticFields[] = {
	HX_("callStack",ca,c1,4a,10),
	HX_("exceptionStack",79,48,56,0b),
	HX_("toString",ac,d0,6e,38),
	HX_("itemToString",df,1c,98,1c),
	HX_("makeStack",7a,de,a3,57),
	::String(null())
};

void CallStack_obj::__register()
{
	CallStack_obj _hx_dummy;
	CallStack_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.CallStack",62,4b,54,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CallStack_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallStack_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStack_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
