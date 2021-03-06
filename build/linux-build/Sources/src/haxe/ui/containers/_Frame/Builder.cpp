// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <hxinc/haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <hxinc/haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <hxinc/haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Frame
#include <hxinc/haxe/ui/containers/Frame.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__Frame_Builder
#include <hxinc/haxe/ui/containers/_Frame/Builder.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b544dc02a32ede0e_37_new,"haxe.ui.containers._Frame.Builder","new",0x592cf4d7,"haxe.ui.containers._Frame.Builder.new","haxe/ui/containers/Frame.hx",37,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_b544dc02a32ede0e_42_create,"haxe.ui.containers._Frame.Builder","create",0x8b2d26e5,"haxe.ui.containers._Frame.Builder.create","haxe/ui/containers/Frame.hx",42,0x566bdf3c)
HX_LOCAL_STACK_FRAME(_hx_pos_b544dc02a32ede0e_68_addComponent,"haxe.ui.containers._Frame.Builder","addComponent",0x2e282705,"haxe.ui.containers._Frame.Builder.addComponent","haxe/ui/containers/Frame.hx",68,0x566bdf3c)
namespace haxe{
namespace ui{
namespace containers{
namespace _Frame{

void Builder_obj::__construct( ::haxe::ui::containers::Frame frame){
            	HX_GC_STACKFRAME(&_hx_pos_b544dc02a32ede0e_37_new)
HXLINE(  38)		super::__construct(frame);
HXLINE(  39)		this->_hx_set__frame(HX_CTX, frame);
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
	if (inClassId<=(int)0x6162bdfd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6162bdfd;
	} else {
		return inClassId==(int)0x6fc7eb95;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b544dc02a32ede0e_42_create)
HXLINE(  43)		this->_hx_set__contents(HX_CTX,  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX ));
HXLINE(  44)		this->_contents->set_id(HX_("frame-contents",7a,14,f8,89));
HXLINE(  45)		this->_contents->addClass(HX_("frame-contents",7a,14,f8,89),null(),null());
HXLINE(  46)		this->_frame->addComponent(this->_contents);
HXLINE(  48)		this->_hx_set__label(HX_CTX,  ::haxe::ui::components::Label_obj::__alloc( HX_CTX ));
HXLINE(  49)		this->_label->set_text(HX_("My Frame",79,e8,ed,40));
HXLINE(  50)		this->_label->set_id(HX_("frame-title",38,aa,fd,b7));
HXLINE(  51)		this->_label->addClass(HX_("frame-title",38,aa,fd,b7),null(),null());
HXLINE(  52)		this->_label->set_includeInLayout(false);
HXLINE(  53)		this->_frame->addComponent(this->_label);
HXLINE(  55)		 ::haxe::ui::core::Component line =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  56)		line->set_id(HX_("frame-left-line",da,15,27,d1));
HXLINE(  57)		line->addClass(HX_("frame-left-line",da,15,27,d1),null(),null());
HXLINE(  58)		line->set_includeInLayout(false);
HXLINE(  59)		this->_frame->addComponent(line);
HXLINE(  61)		 ::haxe::ui::core::Component line1 =  ::haxe::ui::core::Component_obj::__alloc( HX_CTX );
HXLINE(  62)		line1->set_id(HX_("frame-right-line",a5,50,d1,63));
HXLINE(  63)		line1->addClass(HX_("frame-right-line",a5,50,d1,63),null(),null());
HXLINE(  64)		line1->set_includeInLayout(false);
HXLINE(  65)		this->_frame->addComponent(line1);
            	}


 ::haxe::ui::core::Component Builder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_b544dc02a32ede0e_68_addComponent)
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		bool _hx_tmp1;
HXDLIN(  69)		bool _hx_tmp2;
HXDLIN(  69)		if ((child->get_id() != HX_("frame-contents",7a,14,f8,89))) {
HXLINE(  69)			_hx_tmp2 = (child->get_id() != HX_("frame-title",38,aa,fd,b7));
            		}
            		else {
HXLINE(  69)			_hx_tmp2 = false;
            		}
HXDLIN(  69)		if (_hx_tmp2) {
HXLINE(  69)			_hx_tmp1 = (child->get_id() != HX_("frame-left-line",da,15,27,d1));
            		}
            		else {
HXLINE(  69)			_hx_tmp1 = false;
            		}
HXDLIN(  69)		if (_hx_tmp1) {
HXLINE(  69)			_hx_tmp = (child->get_id() != HX_("frame-right-line",a5,50,d1,63));
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			return this->_contents->addComponent(child);
            		}
HXLINE(  72)		return this->super::addComponent(child);
            	}



hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::containers::Frame frame) {
	hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(frame);
	return __this;
}

hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::containers::Frame frame) {
	Builder_obj *__this = (Builder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.containers._Frame.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(frame);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_contents,"_contents");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_contents,"_contents");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Builder_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_frame") ) { return hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"_label") ) { return hx::Val( _label ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { return hx::Val( _contents ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Builder_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_frame") ) { _hx_set__frame(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::Frame >()); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _hx_set__label(HX_CTX_GET,inValue.Cast<  ::haxe::ui::components::Label >()); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_contents") ) { _hx_set__contents(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::Box >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_frame",6e,bf,6a,02));
	outFields->push(HX_("_contents",79,fc,b9,76));
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::containers::Frame */ ,(int)offsetof(Builder_obj,_frame),HX_("_frame",6e,bf,6a,02)},
	{hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(Builder_obj,_contents),HX_("_contents",79,fc,b9,76)},
	{hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(Builder_obj,_label),HX_("_label",35,55,96,6b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_frame",6e,bf,6a,02),
	HX_("_contents",79,fc,b9,76),
	HX_("_label",35,55,96,6b),
	HX_("create",fc,66,0f,7c),
	HX_("addComponent",5c,12,a8,0e),
	::String(null()) };

hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._Frame.Builder",65,3d,96,9e);
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
} // end namespace _Frame
