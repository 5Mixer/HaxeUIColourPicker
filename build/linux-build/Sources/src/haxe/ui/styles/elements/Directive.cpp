// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Value
#include <hxinc/haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <hxinc/haxe/ui/styles/elements/Directive.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f4dcecd74314a059_5_new,"haxe.ui.styles.elements.Directive","new",0xf0ac66a4,"haxe.ui.styles.elements.Directive.new","haxe/ui/styles/elements/Directive.hx",5,0xb9d8e7cc)
namespace haxe{
namespace ui{
namespace styles{
namespace elements{

void Directive_obj::__construct(::String directive, ::haxe::ui::styles::Value value,hx::Null< bool >  __o_defective){
            		bool defective = __o_defective.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_f4dcecd74314a059_5_new)
HXLINE(   8)		this->defective = false;
HXLINE(   7)		this->_hx_set_value(HX_CTX, null());
HXLINE(   6)		this->_hx_set_directive(HX_CTX, null());
HXLINE(  11)		this->_hx_set_directive(HX_CTX, directive);
HXLINE(  12)		this->_hx_set_value(HX_CTX, value);
HXLINE(  13)		this->defective = defective;
            	}

Dynamic Directive_obj::__CreateEmpty() { return new Directive_obj; }

void *Directive_obj::_hx_vtable = 0;

Dynamic Directive_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Directive_obj > _hx_result = new Directive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Directive_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b652658;
}


hx::ObjectPtr< Directive_obj > Directive_obj::__new(::String directive, ::haxe::ui::styles::Value value,hx::Null< bool >  __o_defective) {
	hx::ObjectPtr< Directive_obj > __this = new Directive_obj();
	__this->__construct(directive,value,__o_defective);
	return __this;
}

hx::ObjectPtr< Directive_obj > Directive_obj::__alloc(hx::Ctx *_hx_ctx,::String directive, ::haxe::ui::styles::Value value,hx::Null< bool >  __o_defective) {
	Directive_obj *__this = (Directive_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Directive_obj), true, "haxe.ui.styles.elements.Directive"));
	*(void **)__this = Directive_obj::_hx_vtable;
	__this->__construct(directive,value,__o_defective);
	return __this;
}

Directive_obj::Directive_obj()
{
}

void Directive_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Directive);
	HX_MARK_MEMBER_NAME(directive,"directive");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(defective,"defective");
	HX_MARK_END_CLASS();
}

void Directive_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(directive,"directive");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(defective,"defective");
}

hx::Val Directive_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directive") ) { return hx::Val( directive ); }
		if (HX_FIELD_EQ(inName,"defective") ) { return hx::Val( defective ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Directive_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { _hx_set_value(HX_CTX_GET,inValue.Cast<  ::haxe::ui::styles::Value >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directive") ) { _hx_set_directive(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		if (HX_FIELD_EQ(inName,"defective") ) { defective=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Directive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("directive",4f,68,40,10));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("defective",c7,0e,75,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Directive_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Directive_obj,directive),HX_("directive",4f,68,40,10)},
	{hx::fsObject /*  ::haxe::ui::styles::Value */ ,(int)offsetof(Directive_obj,value),HX_("value",71,7f,b8,31)},
	{hx::fsBool,(int)offsetof(Directive_obj,defective),HX_("defective",c7,0e,75,38)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Directive_obj_sStaticStorageInfo = 0;
#endif

static ::String Directive_obj_sMemberFields[] = {
	HX_("directive",4f,68,40,10),
	HX_("value",71,7f,b8,31),
	HX_("defective",c7,0e,75,38),
	::String(null()) };

hx::Class Directive_obj::__mClass;

void Directive_obj::__register()
{
	Directive_obj _hx_dummy;
	Directive_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.elements.Directive",b2,84,8b,ce);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Directive_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Directive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Directive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Directive_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements
