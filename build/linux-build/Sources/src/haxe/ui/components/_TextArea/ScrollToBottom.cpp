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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <hxinc/haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <hxinc/haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextArea_ScrollToBottom
#include <hxinc/haxe/ui/components/_TextArea/ScrollToBottom.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <hxinc/haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentBase
#include <hxinc/haxe/ui/core/IComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <hxinc/haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <hxinc/haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b42e19636eed0715_190_new,"haxe.ui.components._TextArea.ScrollToBottom","new",0x6131fd00,"haxe.ui.components._TextArea.ScrollToBottom.new","haxe/ui/components/TextArea.hx",190,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_b42e19636eed0715_191_call,"haxe.ui.components._TextArea.ScrollToBottom","call",0xa342f7fe,"haxe.ui.components._TextArea.ScrollToBottom.call","haxe/ui/components/TextArea.hx",191,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{

void ScrollToBottom_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_b42e19636eed0715_190_new)
HXDLIN( 190)		super::__construct(component);
            	}

Dynamic ScrollToBottom_obj::__CreateEmpty() { return new ScrollToBottom_obj; }

void *ScrollToBottom_obj::_hx_vtable = 0;

Dynamic ScrollToBottom_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScrollToBottom_obj > _hx_result = new ScrollToBottom_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollToBottom_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c75e35c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1c75e35c;
	} else {
		return inClassId==(int)0x6c6873cd;
	}
}

 ::haxe::ui::util::VariantType ScrollToBottom_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_b42e19636eed0715_191_call)
HXLINE( 192)		 ::haxe::ui::components::VerticalScroll vscroll = this->_component->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 193)		if (hx::IsNotNull( vscroll )) {
HXLINE( 194)			vscroll->set_pos(vscroll->get_max());
            		}
HXLINE( 196)		return null();
            	}



hx::ObjectPtr< ScrollToBottom_obj > ScrollToBottom_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< ScrollToBottom_obj > __this = new ScrollToBottom_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< ScrollToBottom_obj > ScrollToBottom_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollToBottom_obj *__this = (ScrollToBottom_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScrollToBottom_obj), true, "haxe.ui.components._TextArea.ScrollToBottom"));
	*(void **)__this = ScrollToBottom_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollToBottom_obj::ScrollToBottom_obj()
{
}

hx::Val ScrollToBottom_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ScrollToBottom_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ScrollToBottom_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollToBottom_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

hx::Class ScrollToBottom_obj::__mClass;

void ScrollToBottom_obj::__register()
{
	ScrollToBottom_obj _hx_dummy;
	ScrollToBottom_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextArea.ScrollToBottom",0e,bd,b7,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScrollToBottom_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollToBottom_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollToBottom_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollToBottom_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea
