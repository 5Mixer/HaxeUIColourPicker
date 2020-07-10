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
#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <hxinc/haxe/ui/backend/DialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <hxinc/haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <hxinc/haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <hxinc/haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <hxinc/haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <hxinc/haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <hxinc/haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <hxinc/haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <hxinc/haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogEvent
#include <hxinc/haxe/ui/containers/dialogs/DialogEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs__Dialog_DialogButton_Impl_
#include <hxinc/haxe/ui/containers/dialogs/_Dialog/DialogButton_Impl_.h>
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
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <hxinc/haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <hxinc/haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_91925abb266f8d9c_70_new,"haxe.ui.backend.DialogBase","new",0x4cac0237,"haxe.ui.backend.DialogBase.new","haxe/ui/backend/DialogBase.hx",70,0xb35e49d8)
HX_DEFINE_STACK_FRAME(_hx_pos_91925abb266f8d9c_11_new,"haxe.ui.backend.DialogBase","new",0x4cac0237,"haxe.ui.backend.DialogBase.new","haxe/ui/backend/DialogBase.hx",11,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_74_showDialog,"haxe.ui.backend.DialogBase","showDialog",0x3a8570ae,"haxe.ui.backend.DialogBase.showDialog","haxe/ui/backend/DialogBase.hx",74,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_79_show,"haxe.ui.backend.DialogBase","show",0xcd263f46,"haxe.ui.backend.DialogBase.show","haxe/ui/backend/DialogBase.hx",79,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_101_createButtons,"haxe.ui.backend.DialogBase","createButtons",0xaa63af3c,"haxe.ui.backend.DialogBase.createButtons","haxe/ui/backend/DialogBase.hx",101,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_119_get_closable,"haxe.ui.backend.DialogBase","get_closable",0x5fe87b79,"haxe.ui.backend.DialogBase.get_closable","haxe/ui/backend/DialogBase.hx",119,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_121_set_closable,"haxe.ui.backend.DialogBase","set_closable",0x74e19eed,"haxe.ui.backend.DialogBase.set_closable","haxe/ui/backend/DialogBase.hx",121,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_131_validateDialog,"haxe.ui.backend.DialogBase","validateDialog",0xc3635d87,"haxe.ui.backend.DialogBase.validateDialog","haxe/ui/backend/DialogBase.hx",131,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_136_hide,"haxe.ui.backend.DialogBase","hide",0xc5e19f0b,"haxe.ui.backend.DialogBase.hide","haxe/ui/backend/DialogBase.hx",136,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_134_hide,"haxe.ui.backend.DialogBase","hide",0xc5e19f0b,"haxe.ui.backend.DialogBase.hide","haxe/ui/backend/DialogBase.hx",134,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_149_hideDialog,"haxe.ui.backend.DialogBase","hideDialog",0x68967233,"haxe.ui.backend.DialogBase.hideDialog","haxe/ui/backend/DialogBase.hx",149,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_156_get_title,"haxe.ui.backend.DialogBase","get_title",0xfa7e1f06,"haxe.ui.backend.DialogBase.get_title","haxe/ui/backend/DialogBase.hx",156,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_158_set_title,"haxe.ui.backend.DialogBase","set_title",0xddcf0b12,"haxe.ui.backend.DialogBase.set_title","haxe/ui/backend/DialogBase.hx",158,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_163_addComponent,"haxe.ui.backend.DialogBase","addComponent",0x36cc6da5,"haxe.ui.backend.DialogBase.addComponent","haxe/ui/backend/DialogBase.hx",163,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_170_validateComponentLayout,"haxe.ui.backend.DialogBase","validateComponentLayout",0x6821d6a8,"haxe.ui.backend.DialogBase.validateComponentLayout","haxe/ui/backend/DialogBase.hx",170,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_179_addFooterComponent,"haxe.ui.backend.DialogBase","addFooterComponent",0x1f1e818a,"haxe.ui.backend.DialogBase.addFooterComponent","haxe/ui/backend/DialogBase.hx",179,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_184_centerDialogComponent,"haxe.ui.backend.DialogBase","centerDialogComponent",0x00ea2017,"haxe.ui.backend.DialogBase.centerDialogComponent","haxe/ui/backend/DialogBase.hx",184,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_91925abb266f8d9c_192_onFooterButtonClick,"haxe.ui.backend.DialogBase","onFooterButtonClick",0x7c8971d3,"haxe.ui.backend.DialogBase.onFooterButtonClick","haxe/ui/backend/DialogBase.hx",192,0xb35e49d8)
HX_LOCAL_STACK_FRAME(_hx_pos_64427e1b82b06708_315_registerBehaviours,"haxe.ui.backend.DialogBase","registerBehaviours",0x0c611fe2,"haxe.ui.backend.DialogBase.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_f89cc772a460cfe3_521_cloneComponent,"haxe.ui.backend.DialogBase","cloneComponent",0xe4bf6929,"haxe.ui.backend.DialogBase.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_64427e1b82b06708_302_self,"haxe.ui.backend.DialogBase","self",0xcd23f5d5,"haxe.ui.backend.DialogBase.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace backend{

void DialogBase_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::DialogBase,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_91925abb266f8d9c_70_new)
HXLINE(  70)			_gthis->hideDialog(HX_("Cancel",9a,61,c8,ec));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_91925abb266f8d9c_11_new)
HXLINE( 100)		this->_buttonsCreated = false;
HXLINE(  16)		this->_hx_set_button(HX_CTX, null());
HXLINE(  15)		this->centerDialog = true;
HXLINE(  14)		this->draggable = false;
HXLINE(  13)		this->_hx_set_buttons(HX_CTX, null());
HXLINE(  12)		this->modal = true;
HXLINE(  28)		 ::haxe::ui::backend::DialogBase _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  29)		super::__construct();
HXLINE(  31)		this->_hx_set_dialogContainer(HX_CTX,  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX ));
HXLINE(  32)		this->dialogContainer->set_id(HX_("dialog-container",3c,56,ee,02));
HXLINE(  33)		this->dialogContainer->set_styleNames(HX_("dialog-container",3c,56,ee,02));
HXLINE(  34)		this->addComponent(this->dialogContainer);
HXLINE(  36)		this->_hx_set_dialogTitle(HX_CTX,  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX ));
HXLINE(  37)		this->dialogTitle->set_id(HX_("dialog-title",13,1d,5d,fa));
HXLINE(  38)		this->dialogTitle->set_styleNames(HX_("dialog-title",13,1d,5d,fa));
HXLINE(  39)		this->dialogContainer->addComponent(this->dialogTitle);
HXLINE(  41)		this->_hx_set_dialogTitleLabel(HX_CTX,  ::haxe::ui::components::Label_obj::__alloc( HX_CTX ));
HXLINE(  42)		this->dialogTitleLabel->set_id(HX_("dialog-title-label",fa,f7,66,10));
HXLINE(  43)		this->dialogTitleLabel->set_styleNames(HX_("dialog-title-label",fa,f7,66,10));
HXLINE(  44)		this->dialogTitleLabel->set_text(HX_("HaxeUI",1a,c8,2e,f3));
HXLINE(  45)		this->dialogTitle->addComponent(this->dialogTitleLabel);
HXLINE(  47)		this->_hx_set_dialogCloseButton(HX_CTX,  ::haxe::ui::components::Image_obj::__alloc( HX_CTX ));
HXLINE(  48)		this->dialogCloseButton->set_id(HX_("dialog-close-button",0c,bf,1f,02));
HXLINE(  49)		this->dialogCloseButton->set_styleNames(HX_("dialog-close-button",0c,bf,1f,02));
HXLINE(  50)		this->dialogTitle->addComponent(this->dialogCloseButton);
HXLINE(  52)		this->_hx_set_dialogContent(HX_CTX,  ::haxe::ui::containers::VBox_obj::__alloc( HX_CTX ));
HXLINE(  53)		this->dialogContent->set_id(HX_("dialog-content",74,a9,c6,55));
HXLINE(  54)		this->dialogContent->set_styleNames(HX_("dialog-content",74,a9,c6,55));
HXLINE(  55)		this->dialogContainer->addComponent(this->dialogContent);
HXLINE(  57)		this->_hx_set_dialogFooterContainer(HX_CTX,  ::haxe::ui::containers::Box_obj::__alloc( HX_CTX ));
HXLINE(  58)		this->dialogFooterContainer->set_percentWidth(100);
HXLINE(  59)		this->dialogFooterContainer->set_id(HX_("dialog-footer-container",34,3a,de,92));
HXLINE(  60)		this->dialogFooterContainer->set_styleNames(HX_("dialog-footer-container",34,3a,de,92));
HXLINE(  61)		this->dialogContainer->addComponent(this->dialogFooterContainer);
HXLINE(  63)		this->_hx_set_dialogFooter(HX_CTX,  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX ));
HXLINE(  64)		this->dialogFooter->set_id(HX_("dialog-footer",c0,c2,3c,ef));
HXLINE(  65)		this->dialogFooter->set_styleNames(HX_("dialog-footer",c0,c2,3c,ef));
HXLINE(  66)		this->dialogFooterContainer->addComponent(this->dialogFooter);
HXLINE(  68)		this->dialogFooterContainer->hide();
HXLINE(  69)		this->dialogCloseButton->set_onClick( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic DialogBase_obj::__CreateEmpty() { return new DialogBase_obj; }

void *DialogBase_obj::_hx_vtable = 0;

Dynamic DialogBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DialogBase_obj > _hx_result = new DialogBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DialogBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
		if (inClassId<=(int)0x23af8dfd) {
			if (inClassId<=(int)0x0fddceef) {
				if (inClassId<=(int)0x052624b3) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x052624b3;
				} else {
					return inClassId==(int)0x0fddceef;
				}
			} else {
				return inClassId==(int)0x23af8dfd;
			}
		} else {
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x2a04b446 || inClassId==(int)0x324697fd;
			} else {
				return inClassId==(int)0x41081cbb;
			}
		}
	} else {
		if (inClassId<=(int)0x7ee2d869) {
			if (inClassId<=(int)0x7140e8dc) {
				if (inClassId<=(int)0x4eb0678b) {
					return inClassId==(int)0x4a06d0bc || inClassId==(int)0x4eb0678b;
				} else {
					return inClassId==(int)0x7140e8dc;
				}
			} else {
				return inClassId==(int)0x7ee2d869;
			}
		} else {
			return inClassId==(int)0x7f63f3f1 || inClassId==(int)0x7ff0cb0e;
		}
	}
}

void DialogBase_obj::showDialog(hx::Null< bool >  __o_modal){
            		bool modal = __o_modal.Default(true);
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_74_showDialog)
HXLINE(  75)		this->modal = modal;
HXLINE(  76)		this->show();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,showDialog,(void))

void DialogBase_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_91925abb266f8d9c_79_show)
HXLINE(  80)		if (this->modal) {
HXLINE(  81)			this->_hx_set__overlay(HX_CTX,  ::haxe::ui::core::Component_obj::__alloc( HX_CTX ));
HXLINE(  82)			this->_overlay->set_id(HX_("modal-background",4e,93,38,6c));
HXLINE(  83)			this->_overlay->addClass(HX_("modal-background",4e,93,38,6c),null(),null());
HXLINE(  84)			 ::haxe::ui::core::Component _hx_tmp = this->_overlay;
HXDLIN(  84)			_hx_tmp->set_percentWidth(this->_overlay->set_percentHeight(100));
HXLINE(  85)			::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_overlay);
            		}
HXLINE(  87)		this->createButtons();
HXLINE(  89)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(hx::ObjectPtr<OBJ_>(this));
HXLINE(  90)		this->syncComponentValidation(null());
HXLINE(  91)		if ((this->get_autoHeight() == false)) {
HXLINE(  92)			this->dialogContainer->set_percentHeight(100);
HXLINE(  93)			this->dialogContent->set_percentHeight(100);
            		}
HXLINE(  95)		if (this->centerDialog) {
HXLINE(  96)			this->centerDialogComponent(hx::TCast<  ::haxe::ui::containers::dialogs::Dialog >::cast(hx::ObjectPtr<OBJ_>(this)));
            		}
            	}


void DialogBase_obj::createButtons(){
            	HX_GC_STACKFRAME(&_hx_pos_91925abb266f8d9c_101_createButtons)
HXLINE( 102)		if ((this->_buttonsCreated == true)) {
HXLINE( 103)			return;
            		}
HXLINE( 105)		if (hx::IsNotNull( this->buttons )) {
HXLINE( 106)			{
HXLINE( 106)				int _g = 0;
HXDLIN( 106)				::Array< ::String > _g1 = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toArray(this->buttons);
HXDLIN( 106)				while((_g < _g1->length)){
HXLINE( 106)					::String button = _g1->__get(_g);
HXDLIN( 106)					_g = (_g + 1);
HXLINE( 107)					 ::haxe::ui::components::Button buttonComponent =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 108)					buttonComponent->set_text(::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(button));
HXLINE( 109)					buttonComponent->_hx_set_userData(HX_CTX, button);
HXLINE( 110)					buttonComponent->registerEvent(HX_("click",48,7c,5e,48),this->onFooterButtonClick_dyn(),null());
HXLINE( 111)					this->addFooterComponent(buttonComponent);
            				}
            			}
HXLINE( 113)			this->_buttonsCreated = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogBase_obj,createButtons,(void))

bool DialogBase_obj::get_closable(){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_119_get_closable)
HXDLIN( 119)		return !(this->dialogCloseButton->get_hidden());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogBase_obj,get_closable,return )

bool DialogBase_obj::set_closable(bool value){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_121_set_closable)
HXLINE( 122)		if ((value == true)) {
HXLINE( 123)			this->dialogCloseButton->show();
            		}
            		else {
HXLINE( 125)			this->dialogCloseButton->hide();
            		}
HXLINE( 127)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,set_closable,return )

void DialogBase_obj::validateDialog(::String button, ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_131_validateDialog)
HXDLIN( 131)		fn(true);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DialogBase_obj,validateDialog,(void))

void DialogBase_obj::hide(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::backend::DialogBase,_gthis) HXARGC(1)
            		void _hx_run(bool result){
            			HX_GC_STACKFRAME(&_hx_pos_91925abb266f8d9c_136_hide)
HXLINE( 136)			if ((result == true)) {
HXLINE( 137)				bool _hx_tmp;
HXDLIN( 137)				if (_gthis->modal) {
HXLINE( 137)					_hx_tmp = hx::IsNotNull( _gthis->_overlay );
            				}
            				else {
HXLINE( 137)					_hx_tmp = false;
            				}
HXDLIN( 137)				if (_hx_tmp) {
HXLINE( 138)					::haxe::ui::core::Screen_obj::get_instance()->removeComponent(_gthis->_overlay);
            				}
HXLINE( 140)				::haxe::ui::core::Screen_obj::get_instance()->removeComponent(_gthis);
HXLINE( 142)				 ::haxe::ui::containers::dialogs::DialogEvent event =  ::haxe::ui::containers::dialogs::DialogEvent_obj::__alloc( HX_CTX ,HX_("dialogClosed",94,e8,f8,2e),null(),null());
HXLINE( 143)				event->_hx_set_button(HX_CTX, _gthis->button);
HXLINE( 144)				_gthis->dispatch(event);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_134_hide)
HXDLIN( 134)		 ::haxe::ui::backend::DialogBase _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 135)		this->validateDialog(this->button, ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


void DialogBase_obj::hideDialog(::String button){
            	HX_GC_STACKFRAME(&_hx_pos_91925abb266f8d9c_149_hideDialog)
HXLINE( 150)		this->_hx_set_button(HX_CTX, button);
HXLINE( 151)		this->hide();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,hideDialog,(void))

::String DialogBase_obj::get_title(){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_156_get_title)
HXDLIN( 156)		return this->dialogTitleLabel->get_text();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogBase_obj,get_title,return )

::String DialogBase_obj::set_title(::String value){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_158_set_title)
HXLINE( 159)		this->dialogTitleLabel->set_text(value);
HXLINE( 160)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,set_title,return )

 ::haxe::ui::core::Component DialogBase_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_163_addComponent)
HXLINE( 164)		if (child->hasClass(HX_("dialog-container",3c,56,ee,02))) {
HXLINE( 165)			return this->super::addComponent(child);
            		}
HXLINE( 167)		return this->dialogContent->addComponent(child);
            	}


bool DialogBase_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_170_validateComponentLayout)
HXLINE( 171)		bool b = this->super::validateComponentLayout();
HXLINE( 172)		 ::haxe::ui::containers::HBox _hx_tmp = this->dialogTitle;
HXDLIN( 172)		_hx_tmp->set_width(this->get_layout()->get_innerWidth());
HXLINE( 173)		if ((this->get_autoWidth() == false)) {
HXLINE( 174)			 ::haxe::ui::containers::VBox _hx_tmp1 = this->dialogContent;
HXDLIN( 174)			_hx_tmp1->set_width(this->get_layout()->get_innerWidth());
            		}
HXLINE( 176)		return b;
            	}


void DialogBase_obj::addFooterComponent( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_179_addFooterComponent)
HXLINE( 180)		this->dialogFooterContainer->show();
HXLINE( 181)		this->dialogFooter->addComponent(c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,addFooterComponent,(void))

void DialogBase_obj::centerDialogComponent( ::haxe::ui::containers::dialogs::Dialog dialog){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_184_centerDialogComponent)
HXLINE( 185)		dialog->syncComponentValidation(null());
HXLINE( 186)		Float x = (::haxe::ui::core::Screen_obj::get_instance()->get_width() / ( (Float)(2) ));
HXDLIN( 186)		Float x1 = (x - (( (Float)(dialog->get_componentWidth()) ) / ( (Float)(2) )));
HXLINE( 187)		Float y = (::haxe::ui::core::Screen_obj::get_instance()->get_height() / ( (Float)(2) ));
HXDLIN( 187)		Float y1 = (y - (( (Float)(dialog->get_componentHeight()) ) / ( (Float)(2) )));
HXLINE( 188)		dialog->moveComponent(x1,y1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,centerDialogComponent,(void))

void DialogBase_obj::onFooterButtonClick( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_91925abb266f8d9c_192_onFooterButtonClick)
HXDLIN( 192)		this->hideDialog(( (::String)(event->target->userData) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogBase_obj,onFooterButtonClick,(void))

void DialogBase_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_64427e1b82b06708_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer DialogBase_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_f89cc772a460cfe3_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::backend::DialogBase c = ( ( ::haxe::ui::backend::DialogBase)(this->super::cloneComponent()) );
HXLINE( 287)		::Array< ::Dynamic> _hx_tmp;
HXDLIN( 287)		if (hx::IsNull( this->_children )) {
HXLINE( 287)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 287)			_hx_tmp = this->_children;
            		}
HXDLIN( 287)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 287)		if (hx::IsNull( c->_children )) {
HXLINE( 287)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 287)			_hx_tmp1 = c->_children;
            		}
HXDLIN( 287)		if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 288)			int _g = 0;
HXDLIN( 288)			::Array< ::Dynamic> _g1;
HXDLIN( 288)			if (hx::IsNull( this->_children )) {
HXLINE( 288)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 288)				_g1 = this->_children;
            			}
HXDLIN( 288)			while((_g < _g1->length)){
HXLINE( 288)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 288)				_g = (_g + 1);
HXLINE( 289)				c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            			}
            		}
HXLINE( 293)		return c;
            	}


 ::haxe::ui::core::ComponentContainer DialogBase_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_64427e1b82b06708_302_self)
HXDLIN( 302)		return  ::haxe::ui::backend::DialogBase_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< DialogBase_obj > DialogBase_obj::__new() {
	hx::ObjectPtr< DialogBase_obj > __this = new DialogBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DialogBase_obj > DialogBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	DialogBase_obj *__this = (DialogBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DialogBase_obj), true, "haxe.ui.backend.DialogBase"));
	*(void **)__this = DialogBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DialogBase_obj::DialogBase_obj()
{
}

void DialogBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogBase);
	HX_MARK_MEMBER_NAME(modal,"modal");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(draggable,"draggable");
	HX_MARK_MEMBER_NAME(centerDialog,"centerDialog");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(_overlay,"_overlay");
	HX_MARK_MEMBER_NAME(dialogContainer,"dialogContainer");
	HX_MARK_MEMBER_NAME(dialogTitle,"dialogTitle");
	HX_MARK_MEMBER_NAME(dialogTitleLabel,"dialogTitleLabel");
	HX_MARK_MEMBER_NAME(dialogCloseButton,"dialogCloseButton");
	HX_MARK_MEMBER_NAME(dialogContent,"dialogContent");
	HX_MARK_MEMBER_NAME(dialogFooterContainer,"dialogFooterContainer");
	HX_MARK_MEMBER_NAME(dialogFooter,"dialogFooter");
	HX_MARK_MEMBER_NAME(_buttonsCreated,"_buttonsCreated");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(modal,"modal");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(draggable,"draggable");
	HX_VISIT_MEMBER_NAME(centerDialog,"centerDialog");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(_overlay,"_overlay");
	HX_VISIT_MEMBER_NAME(dialogContainer,"dialogContainer");
	HX_VISIT_MEMBER_NAME(dialogTitle,"dialogTitle");
	HX_VISIT_MEMBER_NAME(dialogTitleLabel,"dialogTitleLabel");
	HX_VISIT_MEMBER_NAME(dialogCloseButton,"dialogCloseButton");
	HX_VISIT_MEMBER_NAME(dialogContent,"dialogContent");
	HX_VISIT_MEMBER_NAME(dialogFooterContainer,"dialogFooterContainer");
	HX_VISIT_MEMBER_NAME(dialogFooter,"dialogFooter");
	HX_VISIT_MEMBER_NAME(_buttonsCreated,"_buttonsCreated");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DialogBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return hx::Val( show_dyn() ); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hx::Val( hide_dyn() ); }
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"modal") ) { return hx::Val( modal ); }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_title() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return hx::Val( buttons ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { return hx::Val( _overlay ); }
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_closable() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draggable") ) { return hx::Val( draggable ); }
		if (HX_FIELD_EQ(inName,"get_title") ) { return hx::Val( get_title_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return hx::Val( set_title_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showDialog") ) { return hx::Val( showDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideDialog") ) { return hx::Val( hideDialog_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dialogTitle") ) { return hx::Val( dialogTitle ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"centerDialog") ) { return hx::Val( centerDialog ); }
		if (HX_FIELD_EQ(inName,"dialogFooter") ) { return hx::Val( dialogFooter ); }
		if (HX_FIELD_EQ(inName,"get_closable") ) { return hx::Val( get_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_closable") ) { return hx::Val( set_closable_dyn() ); }
		if (HX_FIELD_EQ(inName,"addComponent") ) { return hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogContent") ) { return hx::Val( dialogContent ); }
		if (HX_FIELD_EQ(inName,"createButtons") ) { return hx::Val( createButtons_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"validateDialog") ) { return hx::Val( validateDialog_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogContainer") ) { return hx::Val( dialogContainer ); }
		if (HX_FIELD_EQ(inName,"_buttonsCreated") ) { return hx::Val( _buttonsCreated ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dialogTitleLabel") ) { return hx::Val( dialogTitleLabel ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dialogCloseButton") ) { return hx::Val( dialogCloseButton ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addFooterComponent") ) { return hx::Val( addFooterComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onFooterButtonClick") ) { return hx::Val( onFooterButtonClick_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dialogFooterContainer") ) { return hx::Val( dialogFooterContainer ); }
		if (HX_FIELD_EQ(inName,"centerDialogComponent") ) { return hx::Val( centerDialogComponent_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DialogBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"modal") ) { modal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_title(inValue.Cast< ::String >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { _hx_set_button(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { _hx_set_buttons(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { _hx_set__overlay(HX_CTX_GET,inValue.Cast<  ::haxe::ui::core::Component >()); return inValue; }
		if (HX_FIELD_EQ(inName,"closable") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_closable(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"draggable") ) { draggable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dialogTitle") ) { _hx_set_dialogTitle(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::HBox >()); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"centerDialog") ) { centerDialog=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogFooter") ) { _hx_set_dialogFooter(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::HBox >()); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dialogContent") ) { _hx_set_dialogContent(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::VBox >()); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogContainer") ) { _hx_set_dialogContainer(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::VBox >()); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonsCreated") ) { _buttonsCreated=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dialogTitleLabel") ) { _hx_set_dialogTitleLabel(HX_CTX_GET,inValue.Cast<  ::haxe::ui::components::Label >()); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dialogCloseButton") ) { _hx_set_dialogCloseButton(HX_CTX_GET,inValue.Cast<  ::haxe::ui::components::Image >()); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"dialogFooterContainer") ) { _hx_set_dialogFooterContainer(HX_CTX_GET,inValue.Cast<  ::haxe::ui::containers::Box >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("modal",2d,20,58,0c));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("draggable",0d,2d,d6,5d));
	outFields->push(HX_("centerDialog",7d,2c,68,75));
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("_overlay",11,9d,c8,e2));
	outFields->push(HX_("dialogContainer",59,77,c0,d5));
	outFields->push(HX_("dialogTitle",b0,2b,27,1e));
	outFields->push(HX_("dialogTitleLabel",24,f4,a8,ee));
	outFields->push(HX_("dialogCloseButton",e2,3f,54,99));
	outFields->push(HX_("dialogContent",51,59,27,8b));
	outFields->push(HX_("dialogFooterContainer",3e,8f,ca,07));
	outFields->push(HX_("dialogFooter",83,7d,3f,1c));
	outFields->push(HX_("_buttonsCreated",46,0e,a4,74));
	outFields->push(HX_("closable",27,6c,aa,82));
	outFields->push(HX_("title",98,15,3b,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo DialogBase_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DialogBase_obj,modal),HX_("modal",2d,20,58,0c)},
	{hx::fsString,(int)offsetof(DialogBase_obj,buttons),HX_("buttons",41,52,75,ca)},
	{hx::fsBool,(int)offsetof(DialogBase_obj,draggable),HX_("draggable",0d,2d,d6,5d)},
	{hx::fsBool,(int)offsetof(DialogBase_obj,centerDialog),HX_("centerDialog",7d,2c,68,75)},
	{hx::fsString,(int)offsetof(DialogBase_obj,button),HX_("button",f2,61,e0,d9)},
	{hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(DialogBase_obj,_overlay),HX_("_overlay",11,9d,c8,e2)},
	{hx::fsObject /*  ::haxe::ui::containers::VBox */ ,(int)offsetof(DialogBase_obj,dialogContainer),HX_("dialogContainer",59,77,c0,d5)},
	{hx::fsObject /*  ::haxe::ui::containers::HBox */ ,(int)offsetof(DialogBase_obj,dialogTitle),HX_("dialogTitle",b0,2b,27,1e)},
	{hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(DialogBase_obj,dialogTitleLabel),HX_("dialogTitleLabel",24,f4,a8,ee)},
	{hx::fsObject /*  ::haxe::ui::components::Image */ ,(int)offsetof(DialogBase_obj,dialogCloseButton),HX_("dialogCloseButton",e2,3f,54,99)},
	{hx::fsObject /*  ::haxe::ui::containers::VBox */ ,(int)offsetof(DialogBase_obj,dialogContent),HX_("dialogContent",51,59,27,8b)},
	{hx::fsObject /*  ::haxe::ui::containers::Box */ ,(int)offsetof(DialogBase_obj,dialogFooterContainer),HX_("dialogFooterContainer",3e,8f,ca,07)},
	{hx::fsObject /*  ::haxe::ui::containers::HBox */ ,(int)offsetof(DialogBase_obj,dialogFooter),HX_("dialogFooter",83,7d,3f,1c)},
	{hx::fsBool,(int)offsetof(DialogBase_obj,_buttonsCreated),HX_("_buttonsCreated",46,0e,a4,74)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DialogBase_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogBase_obj_sMemberFields[] = {
	HX_("modal",2d,20,58,0c),
	HX_("buttons",41,52,75,ca),
	HX_("draggable",0d,2d,d6,5d),
	HX_("centerDialog",7d,2c,68,75),
	HX_("button",f2,61,e0,d9),
	HX_("_overlay",11,9d,c8,e2),
	HX_("dialogContainer",59,77,c0,d5),
	HX_("dialogTitle",b0,2b,27,1e),
	HX_("dialogTitleLabel",24,f4,a8,ee),
	HX_("dialogCloseButton",e2,3f,54,99),
	HX_("dialogContent",51,59,27,8b),
	HX_("dialogFooterContainer",3e,8f,ca,07),
	HX_("dialogFooter",83,7d,3f,1c),
	HX_("showDialog",a5,a9,a7,1a),
	HX_("show",fd,d4,52,4c),
	HX_("_buttonsCreated",46,0e,a4,74),
	HX_("createButtons",a5,2a,b8,b2),
	HX_("get_closable",30,20,c4,37),
	HX_("set_closable",a4,43,bd,4c),
	HX_("validateDialog",fe,dd,fa,04),
	HX_("hide",c2,34,0e,45),
	HX_("hideDialog",2a,ab,b8,48),
	HX_("get_title",ef,71,e4,53),
	HX_("set_title",fb,5d,35,37),
	HX_("addComponent",5c,12,a8,0e),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("addFooterComponent",81,09,25,47),
	HX_("centerDialogComponent",80,ac,b5,ff),
	HX_("onFooterButtonClick",fc,e1,39,5a),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class DialogBase_obj::__mClass;

void DialogBase_obj::__register()
{
	DialogBase_obj _hx_dummy;
	DialogBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.DialogBase",c5,1a,6b,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DialogBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DialogBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend