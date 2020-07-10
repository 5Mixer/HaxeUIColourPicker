// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <hxinc/StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <hxinc/haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <hxinc/haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_kha_TextField
#include <hxinc/haxe/ui/backend/kha/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <hxinc/haxe/ui/core/TextDisplayData.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInputData
#include <hxinc/haxe/ui/core/TextInputData.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <hxinc/haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_kha_Kravur
#include <hxinc/kha/Kravur.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Color_Color_Impl_
#include <hxinc/kha/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ea6bad8e3979189_8_new,"haxe.ui.backend.TextInputImpl","new",0xf95d98c3,"haxe.ui.backend.TextInputImpl.new","haxe/ui/backend/TextInputImpl.hx",8,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_24_focus,"haxe.ui.backend.TextInputImpl","focus",0xa9e046fb,"haxe.ui.backend.TextInputImpl.focus","haxe/ui/backend/TextInputImpl.hx",24,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_28_blur,"haxe.ui.backend.TextInputImpl","blur",0x309ed0e4,"haxe.ui.backend.TextInputImpl.blur","haxe/ui/backend/TextInputImpl.hx",28,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_31_onTextChanged,"haxe.ui.backend.TextInputImpl","onTextChanged",0xa34e0b0b,"haxe.ui.backend.TextInputImpl.onTextChanged","haxe/ui/backend/TextInputImpl.hx",31,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_38_onCaretMoved,"haxe.ui.backend.TextInputImpl","onCaretMoved",0xac3a1cec,"haxe.ui.backend.TextInputImpl.onCaretMoved","haxe/ui/backend/TextInputImpl.hx",38,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_46_validateData,"haxe.ui.backend.TextInputImpl","validateData",0x3eace91d,"haxe.ui.backend.TextInputImpl.validateData","haxe/ui/backend/TextInputImpl.hx",46,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_55_validateStyle,"haxe.ui.backend.TextInputImpl","validateStyle",0x4834a6de,"haxe.ui.backend.TextInputImpl.validateStyle","haxe/ui/backend/TextInputImpl.hx",55,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_89_validateDisplay,"haxe.ui.backend.TextInputImpl","validateDisplay",0xf466b12f,"haxe.ui.backend.TextInputImpl.validateDisplay","haxe/ui/backend/TextInputImpl.hx",89,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_98_renderTo,"haxe.ui.backend.TextInputImpl","renderTo",0x4eb1a72e,"haxe.ui.backend.TextInputImpl.renderTo","haxe/ui/backend/TextInputImpl.hx",98,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_104_measureText,"haxe.ui.backend.TextInputImpl","measureText",0x27ee5e8e,"haxe.ui.backend.TextInputImpl.measureText","haxe/ui/backend/TextInputImpl.hx",104,0x120cd8ae)
HX_LOCAL_STACK_FRAME(_hx_pos_4ea6bad8e3979189_136_normalizeText,"haxe.ui.backend.TextInputImpl","normalizeText",0x9972bcfd,"haxe.ui.backend.TextInputImpl.normalizeText","haxe/ui/backend/TextInputImpl.hx",136,0x120cd8ae)
namespace haxe{
namespace ui{
namespace backend{

void TextInputImpl_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4ea6bad8e3979189_8_new)
HXLINE(  13)		this->_fontSize = ((Float)14);
HXLINE(  18)		super::__construct();
HXLINE(  19)		this->_hx_set__tf(HX_CTX,  ::haxe::ui::backend::kha::TextField_obj::__alloc( HX_CTX ));
HXLINE(  20)		this->_tf->notify(this->onTextChanged_dyn(),this->onCaretMoved_dyn());
            	}

Dynamic TextInputImpl_obj::__CreateEmpty() { return new TextInputImpl_obj; }

void *TextInputImpl_obj::_hx_vtable = 0;

Dynamic TextInputImpl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextInputImpl_obj > _hx_result = new TextInputImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInputImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x66c0ea87) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x66c0ea87;
	} else {
		return inClassId==(int)0x6d6dcab4;
	}
}

void TextInputImpl_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_24_focus)
HXDLIN(  24)		this->_tf->focus();
            	}


void TextInputImpl_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_28_blur)
HXDLIN(  28)		this->_tf->blur();
            	}


void TextInputImpl_obj::onTextChanged(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_4ea6bad8e3979189_31_onTextChanged)
HXLINE(  32)		this->_hx_set__text(HX_CTX, text);
HXLINE(  33)		if (hx::IsNotNull( this->_inputData->onChangedCallback )) {
HXLINE(  34)			this->_inputData->onChangedCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInputImpl_obj,onTextChanged,(void))

void TextInputImpl_obj::onCaretMoved( ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_38_onCaretMoved)
HXLINE(  39)		this->_inputData->hscrollPos = this->_tf->scrollLeft;
HXLINE(  40)		this->_inputData->vscrollPos = ( (Float)(this->_tf->scrollTop) );
HXLINE(  41)		if (hx::IsNotNull( this->_inputData->onScrollCallback )) {
HXLINE(  42)			this->_inputData->onScrollCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInputImpl_obj,onCaretMoved,(void))

void TextInputImpl_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_46_validateData)
HXLINE(  47)		if (hx::IsNotNull( this->_text )) {
HXLINE(  48)			 ::haxe::ui::backend::kha::TextField _hx_tmp = this->_tf;
HXDLIN(  48)			_hx_tmp->set_text(this->normalizeText(this->_text));
            		}
HXLINE(  51)		this->_tf->scrollLeft = this->_inputData->hscrollPos;
HXLINE(  52)		this->_tf->scrollTop = ::Std_obj::_hx_int(this->_inputData->vscrollPos);
            	}


bool TextInputImpl_obj::validateStyle(){
            	HX_GC_STACKFRAME(&_hx_pos_4ea6bad8e3979189_55_validateStyle)
HXLINE(  56)		bool measureTextRequired = false;
HXLINE(  58)		if (hx::IsNotNull( this->_textStyle )) {
HXLINE(  59)			this->_tf->set_multiline(this->_displayData->multiline);
HXLINE(  60)			this->_tf->set_wordWrap(this->_displayData->wordWrap);
HXLINE(  61)			this->_tf->set_password(this->_inputData->password);
HXLINE(  63)			if ((this->_textAlign != this->_textStyle->textAlign)) {
HXLINE(  64)				this->_hx_set__textAlign(HX_CTX, this->_textStyle->textAlign);
            			}
HXLINE(  67)			bool _hx_tmp;
HXDLIN(  67)			if (hx::IsNotNull( this->_textStyle->fontSize )) {
HXLINE(  67)				_hx_tmp = hx::IsNotEq( this->_fontSize,this->_textStyle->fontSize );
            			}
            			else {
HXLINE(  67)				_hx_tmp = false;
            			}
HXDLIN(  67)			if (_hx_tmp) {
HXLINE(  68)				this->_fontSize = ( (Float)(this->_textStyle->fontSize) );
HXLINE(  69)				 ::haxe::ui::backend::kha::TextField _hx_tmp1 = this->_tf;
HXDLIN(  69)				_hx_tmp1->set_fontSize(::Std_obj::_hx_int(this->_fontSize));
HXLINE(  70)				measureTextRequired = true;
            			}
HXLINE(  73)			bool _hx_tmp2;
HXDLIN(  73)			if ((this->_fontName != this->_textStyle->fontName)) {
HXLINE(  73)				_hx_tmp2 = hx::IsNotNull( this->_fontInfo );
            			}
            			else {
HXLINE(  73)				_hx_tmp2 = false;
            			}
HXDLIN(  73)			if (_hx_tmp2) {
HXLINE(  74)				this->_hx_set__fontName(HX_CTX, this->_textStyle->fontName);
HXLINE(  75)				this->_hx_set__font(HX_CTX, ( ( ::kha::Kravur)(this->_fontInfo->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) ));
HXLINE(  76)				this->_tf->set_font(this->_font);
HXLINE(  77)				measureTextRequired = true;
            			}
HXLINE(  80)			if (hx::IsNotEq( this->_color,this->_textStyle->color )) {
HXLINE(  81)				this->_color = ( (int)(this->_textStyle->color) );
HXLINE(  82)				int _hx_tmp3 = ::kha::_Color::Color_Impl__obj::_new((( (int)(this->_textStyle->color) ) | -16777216));
HXDLIN(  82)				this->_tf->textColor = _hx_tmp3;
            			}
            		}
HXLINE(  86)		return measureTextRequired;
            	}


void TextInputImpl_obj::validateDisplay(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_89_validateDisplay)
HXLINE(  90)		if ((this->_width > 0)) {
HXLINE(  91)			this->_tf->set_width(this->_width);
            		}
HXLINE(  93)		if ((this->_height > 0)) {
HXLINE(  94)			this->_tf->set_height(this->_height);
            		}
            	}


void TextInputImpl_obj::renderTo( ::kha::graphics2::Graphics g,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_98_renderTo)
HXLINE(  99)		this->_tf->left = (x + this->_left);
HXLINE( 100)		this->_tf->top = (y + this->_top);
HXLINE( 101)		this->_tf->render(g);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextInputImpl_obj,renderTo,(void))

void TextInputImpl_obj::measureText(){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_104_measureText)
HXLINE( 105)		if (hx::IsNull( this->_font )) {
HXLINE( 106)			return;
            		}
HXLINE( 109)		bool _hx_tmp;
HXDLIN( 109)		bool _hx_tmp1;
HXDLIN( 109)		if (hx::IsNotNull( this->_text )) {
HXLINE( 109)			_hx_tmp1 = (this->_text.length == 0);
            		}
            		else {
HXLINE( 109)			_hx_tmp1 = true;
            		}
HXDLIN( 109)		if (!(_hx_tmp1)) {
HXLINE( 109)			_hx_tmp = hx::IsNull( this->_font );
            		}
            		else {
HXLINE( 109)			_hx_tmp = true;
            		}
HXDLIN( 109)		if (_hx_tmp) {
HXLINE( 110)			this->_textWidth = ( (Float)(0) );
HXLINE( 111)			 ::kha::Kravur _hx_tmp2 = this->_font;
HXDLIN( 111)			this->_textHeight = _hx_tmp2->height(::Std_obj::_hx_int(this->_fontSize));
HXLINE( 112)			return;
            		}
HXLINE( 115)		if ((this->_width <= 0)) {
HXLINE( 116)			 ::kha::Kravur _hx_tmp3 = this->_font;
HXDLIN( 116)			int _hx_tmp4 = ::Std_obj::_hx_int(this->_fontSize);
HXDLIN( 116)			this->_textWidth = _hx_tmp3->width(_hx_tmp4,this->_text);
HXLINE( 117)			 ::kha::Kravur _hx_tmp5 = this->_font;
HXDLIN( 117)			this->_textHeight = _hx_tmp5->height(::Std_obj::_hx_int(this->_fontSize));
HXLINE( 118)			return;
            		}
HXLINE( 121)		this->_tf->set_width(this->_width);
HXLINE( 122)		this->_textWidth = this->_tf->get_requiredWidth();
HXLINE( 123)		this->_textHeight = this->_tf->get_requiredHeight();
HXLINE( 125)		if ((this->_textHeight <= 0)) {
HXLINE( 126)			 ::kha::Kravur _hx_tmp6 = this->_font;
HXDLIN( 126)			this->_textHeight = _hx_tmp6->height(::Std_obj::_hx_int(this->_fontSize));
            		}
HXLINE( 129)		Float _hx_tmp7 = this->_tf->get_requiredWidth();
HXDLIN( 129)		Float _hx_tmp8 = this->_tf->get_width();
HXDLIN( 129)		this->_inputData->hscrollMax = (_hx_tmp7 - _hx_tmp8);
HXLINE( 130)		Float _hx_tmp9 = this->_tf->get_width();
HXDLIN( 130)		Float _hx_tmp10 = (_hx_tmp9 * this->_inputData->hscrollMax);
HXDLIN( 130)		Float _hx_tmp11 = this->_tf->get_requiredWidth();
HXDLIN( 130)		this->_inputData->hscrollPageSize = (_hx_tmp10 / _hx_tmp11);
HXLINE( 132)		int _hx_tmp12 = this->_tf->_lines->length;
HXDLIN( 132)		 ::haxe::ui::backend::kha::TextField _this = this->_tf;
HXDLIN( 132)		Float _hx_tmp13 = _this->get_height();
HXDLIN( 132)		 ::kha::Kravur _hx_tmp14 = _this->get_font();
HXDLIN( 132)		int _hx_tmp15 = ::Math_obj::round((_hx_tmp13 / _hx_tmp14->height(_this->get_fontSize())));
HXDLIN( 132)		this->_inputData->vscrollMax = ( (Float)((_hx_tmp12 - _hx_tmp15)) );
HXLINE( 133)		 ::haxe::ui::backend::kha::TextField _this1 = this->_tf;
HXDLIN( 133)		Float _hx_tmp16 = _this1->get_height();
HXDLIN( 133)		 ::kha::Kravur _hx_tmp17 = _this1->get_font();
HXDLIN( 133)		int _hx_tmp18 = ::Math_obj::round((_hx_tmp16 / _hx_tmp17->height(_this1->get_fontSize())));
HXDLIN( 133)		this->_inputData->vscrollPageSize = ((( (Float)(_hx_tmp18) ) * this->_inputData->vscrollMax) / ( (Float)(this->_tf->_lines->length) ));
            	}


::String TextInputImpl_obj::normalizeText(::String text){
            	HX_STACKFRAME(&_hx_pos_4ea6bad8e3979189_136_normalizeText)
HXLINE( 137)		text = ::StringTools_obj::replace(text,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00));
HXLINE( 138)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInputImpl_obj,normalizeText,return )


hx::ObjectPtr< TextInputImpl_obj > TextInputImpl_obj::__new() {
	hx::ObjectPtr< TextInputImpl_obj > __this = new TextInputImpl_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< TextInputImpl_obj > TextInputImpl_obj::__alloc(hx::Ctx *_hx_ctx) {
	TextInputImpl_obj *__this = (TextInputImpl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextInputImpl_obj), true, "haxe.ui.backend.TextInputImpl"));
	*(void **)__this = TextInputImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextInputImpl_obj::TextInputImpl_obj()
{
}

void TextInputImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInputImpl);
	HX_MARK_MEMBER_NAME(_tf,"_tf");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_textAlign,"_textAlign");
	HX_MARK_MEMBER_NAME(_fontSize,"_fontSize");
	HX_MARK_MEMBER_NAME(_fontName,"_fontName");
	HX_MARK_MEMBER_NAME(_color,"_color");
	 ::haxe::ui::backend::TextBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextInputImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tf,"_tf");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_textAlign,"_textAlign");
	HX_VISIT_MEMBER_NAME(_fontSize,"_fontSize");
	HX_VISIT_MEMBER_NAME(_fontName,"_fontName");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	 ::haxe::ui::backend::TextBase_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextInputImpl_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { return hx::Val( _tf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { return hx::Val( blur_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return hx::Val( _font ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return hx::Val( focus_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return hx::Val( _color ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { return hx::Val( renderTo_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fontSize") ) { return hx::Val( _fontSize ); }
		if (HX_FIELD_EQ(inName,"_fontName") ) { return hx::Val( _fontName ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textAlign") ) { return hx::Val( _textAlign ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { return hx::Val( measureText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onCaretMoved") ) { return hx::Val( onCaretMoved_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onTextChanged") ) { return hx::Val( onTextChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateStyle") ) { return hx::Val( validateStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalizeText") ) { return hx::Val( normalizeText_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return hx::Val( validateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextInputImpl_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { _hx_set__tf(HX_CTX_GET,inValue.Cast<  ::haxe::ui::backend::kha::TextField >()); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _hx_set__font(HX_CTX_GET,inValue.Cast<  ::kha::Kravur >()); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fontSize") ) { _fontSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontName") ) { _hx_set__fontName(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textAlign") ) { _hx_set__textAlign(HX_CTX_GET,inValue.Cast< ::String >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInputImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tf",91,7b,48,00));
	outFields->push(HX_("_font",ae,79,d1,f6));
	outFields->push(HX_("_textAlign",99,62,21,16));
	outFields->push(HX_("_fontSize",8f,b5,67,16));
	outFields->push(HX_("_fontName",19,87,13,13));
	outFields->push(HX_("_color",a4,b8,43,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TextInputImpl_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::backend::kha::TextField */ ,(int)offsetof(TextInputImpl_obj,_tf),HX_("_tf",91,7b,48,00)},
	{hx::fsObject /*  ::kha::Kravur */ ,(int)offsetof(TextInputImpl_obj,_font),HX_("_font",ae,79,d1,f6)},
	{hx::fsString,(int)offsetof(TextInputImpl_obj,_textAlign),HX_("_textAlign",99,62,21,16)},
	{hx::fsFloat,(int)offsetof(TextInputImpl_obj,_fontSize),HX_("_fontSize",8f,b5,67,16)},
	{hx::fsString,(int)offsetof(TextInputImpl_obj,_fontName),HX_("_fontName",19,87,13,13)},
	{hx::fsInt,(int)offsetof(TextInputImpl_obj,_color),HX_("_color",a4,b8,43,46)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextInputImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String TextInputImpl_obj_sMemberFields[] = {
	HX_("_tf",91,7b,48,00),
	HX_("_font",ae,79,d1,f6),
	HX_("_textAlign",99,62,21,16),
	HX_("_fontSize",8f,b5,67,16),
	HX_("_fontName",19,87,13,13),
	HX_("_color",a4,b8,43,46),
	HX_("focus",d8,5f,89,04),
	HX_("blur",a7,42,19,41),
	HX_("onTextChanged",e8,c8,36,0b),
	HX_("onCaretMoved",af,89,f0,03),
	HX_("validateData",e0,55,63,96),
	HX_("validateStyle",bb,64,1d,b0),
	HX_("validateDisplay",4c,60,60,b6),
	HX_("renderTo",71,b6,db,b2),
	HX_("measureText",2b,fb,80,50),
	HX_("normalizeText",da,7a,5b,01),
	::String(null()) };

hx::Class TextInputImpl_obj::__mClass;

void TextInputImpl_obj::__register()
{
	TextInputImpl_obj _hx_dummy;
	TextInputImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TextInputImpl",51,7b,53,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextInputImpl_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextInputImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInputImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInputImpl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend