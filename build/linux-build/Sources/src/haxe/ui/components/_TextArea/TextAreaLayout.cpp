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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <hxinc/haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <hxinc/haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <hxinc/haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <hxinc/haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <hxinc/haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextArea_TextAreaLayout
#include <hxinc/haxe/ui/components/_TextArea/TextAreaLayout.h>
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
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <hxinc/haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <hxinc/haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <hxinc/haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d386925230049eab_68_new,"haxe.ui.components._TextArea.TextAreaLayout","new",0x043312b1,"haxe.ui.components._TextArea.TextAreaLayout.new","haxe/ui/components/TextArea.hx",68,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d386925230049eab_69_repositionChildren,"haxe.ui.components._TextArea.TextAreaLayout","repositionChildren",0x3c9f018a,"haxe.ui.components._TextArea.TextAreaLayout.repositionChildren","haxe/ui/components/TextArea.hx",69,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d386925230049eab_92_resizeChildren,"haxe.ui.components._TextArea.TextAreaLayout","resizeChildren",0x4385f0a2,"haxe.ui.components._TextArea.TextAreaLayout.resizeChildren","haxe/ui/components/TextArea.hx",92,0xfe441d7d)
HX_LOCAL_STACK_FRAME(_hx_pos_d386925230049eab_117_get_usableSize,"haxe.ui.components._TextArea.TextAreaLayout","get_usableSize",0xc14b3971,"haxe.ui.components._TextArea.TextAreaLayout.get_usableSize","haxe/ui/components/TextArea.hx",117,0xfe441d7d)
namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{

void TextAreaLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d386925230049eab_68_new)
HXDLIN(  68)		super::__construct();
            	}

Dynamic TextAreaLayout_obj::__CreateEmpty() { return new TextAreaLayout_obj; }

void *TextAreaLayout_obj::_hx_vtable = 0;

Dynamic TextAreaLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextAreaLayout_obj > _hx_result = new TextAreaLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextAreaLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x548a03f5) {
		if (inClassId<=(int)0x053a0d19) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x053a0d19;
		} else {
			return inClassId==(int)0x548a03f5;
		}
	} else {
		return inClassId==(int)0x652c3c60;
	}
}

void TextAreaLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_d386925230049eab_69_repositionChildren)
HXLINE(  70)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  71)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  73)		Float ucx = this->get_innerWidth();
HXLINE(  74)		Float ucy = this->get_innerHeight();
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if (hx::IsNotNull( hscroll )) {
HXLINE(  76)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			hscroll->set_left(this->get_paddingLeft());
HXLINE(  78)			Float _hx_tmp1 = (ucy - ( (Float)(hscroll->get_componentHeight()) ));
HXDLIN(  78)			hscroll->set_top((_hx_tmp1 + this->get_paddingBottom()));
            		}
HXLINE(  81)		bool _hx_tmp2;
HXDLIN(  81)		if (hx::IsNotNull( vscroll )) {
HXLINE(  81)			_hx_tmp2 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  81)			_hx_tmp2 = false;
            		}
HXDLIN(  81)		if (_hx_tmp2) {
HXLINE(  82)			Float _hx_tmp3 = (ucx - ( (Float)(vscroll->get_componentWidth()) ));
HXDLIN(  82)			vscroll->set_left((_hx_tmp3 + this->get_paddingRight()));
HXLINE(  83)			vscroll->set_top(this->get_paddingTop());
            		}
HXLINE(  86)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE(  87)			 ::haxe::ui::core::TextInput _hx_tmp4 = this->get_component()->getTextInput();
HXDLIN(  87)			_hx_tmp4->set_left(this->get_paddingLeft());
HXLINE(  88)			 ::haxe::ui::core::TextInput _hx_tmp5 = this->get_component()->getTextInput();
HXDLIN(  88)			_hx_tmp5->set_top(this->get_paddingTop());
            		}
            	}


void TextAreaLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_d386925230049eab_92_resizeChildren)
HXLINE(  93)		this->super::resizeChildren();
HXLINE(  95)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  96)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  98)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if (hx::IsNotNull( hscroll )) {
HXLINE(  99)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  99)			_hx_tmp = false;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			hscroll->set_width(usableSize->width);
            		}
HXLINE( 103)		bool _hx_tmp1;
HXDLIN( 103)		if (hx::IsNotNull( vscroll )) {
HXLINE( 103)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 103)			_hx_tmp1 = false;
            		}
HXDLIN( 103)		if (_hx_tmp1) {
HXLINE( 104)			vscroll->set_height(usableSize->height);
            		}
HXLINE( 107)		if ((this->get_component()->hasTextInput() == true)) {
HXLINE( 108)			 ::haxe::ui::geom::Size size = usableSize;
HXLINE( 110)			 ::haxe::ui::core::TextInput _hx_tmp2 = this->get_component()->getTextInput();
HXDLIN( 110)			_hx_tmp2->set_width((size->width - ( (Float)(1) )));
HXLINE( 111)			 ::haxe::ui::core::TextInput _hx_tmp3 = this->get_component()->getTextInput();
HXDLIN( 111)			_hx_tmp3->set_height((size->height - ( (Float)(1) )));
            		}
            	}


 ::haxe::ui::geom::Size TextAreaLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_d386925230049eab_117_get_usableSize)
HXLINE( 118)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE( 119)		 ::haxe::ui::core::Component hscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 120)		 ::haxe::ui::core::Component vscroll = this->get_component()->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		if (hx::IsNotNull( hscroll )) {
HXLINE( 121)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE( 121)			_hx_tmp = false;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 122)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 122)			Float size2 = size1->height;
HXDLIN( 122)			size1->height = (size2 - ( (Float)(hscroll->get_componentHeight()) ));
            		}
HXLINE( 124)		bool _hx_tmp1;
HXDLIN( 124)		if (hx::IsNotNull( vscroll )) {
HXLINE( 124)			_hx_tmp1 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE( 124)			_hx_tmp1 = false;
            		}
HXDLIN( 124)		if (_hx_tmp1) {
HXLINE( 125)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 125)			Float size4 = size3->width;
HXDLIN( 125)			size3->width = (size4 - ( (Float)(vscroll->get_componentWidth()) ));
            		}
HXLINE( 128)		return size;
            	}



hx::ObjectPtr< TextAreaLayout_obj > TextAreaLayout_obj::__new() {
	hx::ObjectPtr< TextAreaLayout_obj > __this = new TextAreaLayout_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextAreaLayout_obj > TextAreaLayout_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextAreaLayout_obj *__this = (TextAreaLayout_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextAreaLayout_obj), true, "haxe.ui.components._TextArea.TextAreaLayout"));
	*(void **)__this = TextAreaLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextAreaLayout_obj::TextAreaLayout_obj()
{
}

hx::Val TextAreaLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *TextAreaLayout_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextAreaLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String TextAreaLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

hx::Class TextAreaLayout_obj::__mClass;

void TextAreaLayout_obj::__register()
{
	TextAreaLayout_obj _hx_dummy;
	TextAreaLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextArea.TextAreaLayout",3f,e6,4d,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextAreaLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextAreaLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextAreaLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextAreaLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea