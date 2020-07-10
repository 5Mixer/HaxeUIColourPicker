// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <hxinc/haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <hxinc/haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <hxinc/haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <hxinc/haxe/ui/backend/AssetsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_kha_StyleHelper
#include <hxinc/haxe/ui/backend/kha/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_DropShadow
#include <hxinc/haxe/ui/filters/DropShadow.h>
#endif
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <hxinc/haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <hxinc/haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Slice9
#include <hxinc/haxe/ui/geom/Slice9.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <hxinc/haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ColorUtil
#include <hxinc/haxe/ui/util/ColorUtil.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <hxinc/kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <hxinc/kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <hxinc/kha/graphics2/Graphics.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6646902f5b66bdf8_15_paintStyle,"haxe.ui.backend.kha.StyleHelper","paintStyle",0x8bb88818,"haxe.ui.backend.kha.StyleHelper.paintStyle","haxe/ui/backend/kha/StyleHelper.hx",15,0x3cfc2817)
HX_LOCAL_STACK_FRAME(_hx_pos_6646902f5b66bdf8_78_paintStyle,"haxe.ui.backend.kha.StyleHelper","paintStyle",0x8bb88818,"haxe.ui.backend.kha.StyleHelper.paintStyle","haxe/ui/backend/kha/StyleHelper.hx",78,0x3cfc2817)
HX_LOCAL_STACK_FRAME(_hx_pos_6646902f5b66bdf8_180_drawCircle,"haxe.ui.backend.kha.StyleHelper","drawCircle",0x48e17499,"haxe.ui.backend.kha.StyleHelper.drawCircle","haxe/ui/backend/kha/StyleHelper.hx",180,0x3cfc2817)
HX_LOCAL_STACK_FRAME(_hx_pos_6646902f5b66bdf8_198_drawShadow,"haxe.ui.backend.kha.StyleHelper","drawShadow",0x0ff4ca69,"haxe.ui.backend.kha.StyleHelper.drawShadow","haxe/ui/backend/kha/StyleHelper.hx",198,0x3cfc2817)
namespace haxe{
namespace ui{
namespace backend{
namespace kha{

void StyleHelper_obj::__construct() { }

Dynamic StyleHelper_obj::__CreateEmpty() { return new StyleHelper_obj; }

void *StyleHelper_obj::_hx_vtable = 0;

Dynamic StyleHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StyleHelper_obj > _hx_result = new StyleHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d419531;
}

void StyleHelper_obj::paintStyle( ::kha::graphics2::Graphics g, ::haxe::ui::styles::Style style,Float x,Float y,Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_6646902f5b66bdf8_15_paintStyle)
HXLINE(  16)		x = ::Math_obj::ffloor(x);
HXLINE(  17)		y = ::Math_obj::ffloor(y);
HXLINE(  18)		w = ::Math_obj::fceil(w);
HXLINE(  19)		h = ::Math_obj::fceil(h);
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (!((w <= 0))) {
HXLINE(  21)			_hx_tmp = (h <= 0);
            		}
            		else {
HXLINE(  21)			_hx_tmp = true;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  22)			return;
            		}
HXLINE(  32)		Float x1 = ::haxe::ui::Toolkit_obj::get_scaleX();
HXDLIN(  32)		x = (x * x1);
HXLINE(  33)		Float y1 = ::haxe::ui::Toolkit_obj::get_scaleY();
HXDLIN(  33)		y = (y * y1);
HXLINE(  34)		Float w1 = ::haxe::ui::Toolkit_obj::get_scaleX();
HXDLIN(  34)		w = (w * w1);
HXLINE(  35)		Float h1 = ::haxe::ui::Toolkit_obj::get_scaleY();
HXDLIN(  35)		h = (h * h1);
HXLINE(  37)		Float orgX = x;
HXLINE(  38)		Float orgY = y;
HXLINE(  39)		Float orgW = w;
HXLINE(  40)		Float orgH = h;
HXLINE(  43)		int alpha = -16777216;
HXLINE(  44)		if (hx::IsNotNull( style->backgroundColor )) {
HXLINE(  45)			bool _hx_tmp1;
HXDLIN(  45)			if (hx::IsNotNull( style->backgroundColorEnd )) {
HXLINE(  45)				_hx_tmp1 = hx::IsNotEq( style->backgroundColor,style->backgroundColorEnd );
            			}
            			else {
HXLINE(  45)				_hx_tmp1 = false;
            			}
HXDLIN(  45)			if (_hx_tmp1) {
HXLINE(  46)				::String gradientType = HX_("vertical",76,bc,15,6a);
HXLINE(  47)				if (hx::IsNotNull( style->backgroundGradientStyle )) {
HXLINE(  48)					gradientType = style->backgroundGradientStyle;
            				}
HXLINE(  51)				::Array< int > arr = null();
HXLINE(  52)				int n = 0;
HXLINE(  53)				if ((gradientType == HX_("vertical",76,bc,15,6a))) {
HXLINE(  54)					 ::Dynamic style1 = style->backgroundColor;
HXDLIN(  54)					 ::Dynamic style2 = style->backgroundColorEnd;
HXDLIN(  54)					arr = ::haxe::ui::util::ColorUtil_obj::buildColorArray(( (int)(style1) ),( (int)(style2) ),( (Float)(::Std_obj::_hx_int(h)) ));
HXLINE(  55)					{
HXLINE(  55)						int _g = 0;
HXDLIN(  55)						while((_g < arr->length)){
HXLINE(  55)							int c = arr->__get(_g);
HXDLIN(  55)							_g = (_g + 1);
HXLINE(  56)							g->set_color((c | alpha));
HXLINE(  57)							g->fillRect(x,(y + n),w,( (Float)(1) ));
HXLINE(  58)							g->set_color(-1);
HXLINE(  59)							n = (n + 1);
            						}
            					}
            				}
            				else {
HXLINE(  61)					if ((gradientType == HX_("horizontal",e4,fc,c3,15))) {
HXLINE(  62)						 ::Dynamic style3 = style->backgroundColor;
HXDLIN(  62)						 ::Dynamic style4 = style->backgroundColorEnd;
HXDLIN(  62)						arr = ::haxe::ui::util::ColorUtil_obj::buildColorArray(( (int)(style3) ),( (int)(style4) ),( (Float)(::Std_obj::_hx_int(w)) ));
HXLINE(  63)						{
HXLINE(  63)							int _g1 = 0;
HXDLIN(  63)							while((_g1 < arr->length)){
HXLINE(  63)								int c1 = arr->__get(_g1);
HXDLIN(  63)								_g1 = (_g1 + 1);
HXLINE(  64)								g->set_color((c1 | alpha));
HXLINE(  65)								g->fillRect((x + n),y,( (Float)(1) ),h);
HXLINE(  66)								g->set_color(-1);
HXLINE(  67)								n = (n + 1);
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE(  71)				g->set_color((( (int)(style->backgroundColor) ) | alpha));
HXLINE(  72)				g->fillRect(x,y,w,h);
HXLINE(  73)				g->set_color(-1);
            			}
            		}
HXLINE(  77)		if (hx::IsNotNull( style->backgroundImage )) {
            			HX_BEGIN_LOCAL_FUNC_S6(hx::LocalFunc,_hx_Closure_0, ::haxe::ui::styles::Style,style,Float,h,Float,y,Float,w,Float,x, ::kha::graphics2::Graphics,g) HXARGC(1)
            			void _hx_run( ::Dynamic imageInfo){
            				HX_GC_STACKFRAME(&_hx_pos_6646902f5b66bdf8_78_paintStyle)
HXLINE(  79)				if (hx::IsNull( imageInfo )) {
HXLINE(  80)					return;
            				}
HXLINE(  82)				 ::haxe::ui::geom::Rectangle trc =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,imageInfo->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic),imageInfo->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic));
HXLINE(  83)				bool _hx_tmp2;
HXDLIN(  83)				bool _hx_tmp3;
HXDLIN(  83)				bool _hx_tmp4;
HXDLIN(  83)				if (hx::IsNotNull( style->backgroundImageClipTop )) {
HXLINE(  83)					_hx_tmp4 = hx::IsNotNull( style->backgroundImageClipLeft );
            				}
            				else {
HXLINE(  83)					_hx_tmp4 = false;
            				}
HXDLIN(  83)				if (_hx_tmp4) {
HXLINE(  83)					_hx_tmp3 = hx::IsNotNull( style->backgroundImageClipBottom );
            				}
            				else {
HXLINE(  83)					_hx_tmp3 = false;
            				}
HXDLIN(  83)				if (_hx_tmp3) {
HXLINE(  83)					_hx_tmp2 = hx::IsNotNull( style->backgroundImageClipRight );
            				}
            				else {
HXLINE(  83)					_hx_tmp2 = false;
            				}
HXDLIN(  83)				if (_hx_tmp2) {
HXLINE(  87)					trc =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,style->backgroundImageClipLeft,style->backgroundImageClipTop,(( (Float)(style->backgroundImageClipRight) ) - ( (Float)(style->backgroundImageClipLeft) )),(( (Float)(style->backgroundImageClipBottom) ) - ( (Float)(style->backgroundImageClipTop) )));
            				}
HXLINE(  93)				 ::haxe::ui::geom::Rectangle slice = null();
HXLINE(  94)				bool _hx_tmp5;
HXDLIN(  94)				bool _hx_tmp6;
HXDLIN(  94)				bool _hx_tmp7;
HXDLIN(  94)				if (hx::IsNotNull( style->backgroundImageSliceTop )) {
HXLINE(  94)					_hx_tmp7 = hx::IsNotNull( style->backgroundImageSliceLeft );
            				}
            				else {
HXLINE(  94)					_hx_tmp7 = false;
            				}
HXDLIN(  94)				if (_hx_tmp7) {
HXLINE(  94)					_hx_tmp6 = hx::IsNotNull( style->backgroundImageSliceBottom );
            				}
            				else {
HXLINE(  94)					_hx_tmp6 = false;
            				}
HXDLIN(  94)				if (_hx_tmp6) {
HXLINE(  94)					_hx_tmp5 = hx::IsNotNull( style->backgroundImageSliceRight );
            				}
            				else {
HXLINE(  94)					_hx_tmp5 = false;
            				}
HXDLIN(  94)				if (_hx_tmp5) {
HXLINE(  98)					slice =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,style->backgroundImageSliceLeft,style->backgroundImageSliceTop,(( (Float)(style->backgroundImageSliceRight) ) - ( (Float)(style->backgroundImageSliceLeft) )),(( (Float)(style->backgroundImageSliceBottom) ) - ( (Float)(style->backgroundImageSliceTop) )));
            				}
HXLINE( 104)				if (hx::IsNull( slice )) {
HXLINE( 105)					if (hx::IsNull( style->backgroundImageRepeat )) {
HXLINE( 106)						g->drawSubImage(( ( ::kha::Image)(imageInfo->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) ),( (float)(x) ),( (float)(y) ),( (float)(0) ),( (float)(0) ),( (float)(trc->width) ),( (float)(trc->height) ));
            					}
            				}
            				else {
HXLINE( 109)					 ::Dynamic rects = ::haxe::ui::geom::Slice9_obj::buildRects(w,h,trc->width,trc->height,slice);
HXLINE( 110)					::Array< ::Dynamic> srcRects = ( (::Array< ::Dynamic>)(rects->__Field(HX_("src",e4,a6,57,00),hx::paccDynamic)) );
HXLINE( 111)					::Array< ::Dynamic> dstRects = ( (::Array< ::Dynamic>)(rects->__Field(HX_("dst",05,46,4c,00),hx::paccDynamic)) );
HXLINE( 112)					{
HXLINE( 112)						int _g2 = 0;
HXDLIN( 112)						int _g11 = srcRects->length;
HXDLIN( 112)						while((_g2 < _g11)){
HXLINE( 112)							_g2 = (_g2 + 1);
HXDLIN( 112)							int i = (_g2 - 1);
HXLINE( 113)							 ::haxe::ui::geom::Rectangle srcRect =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,(srcRects->__get(i).StaticCast<  ::haxe::ui::geom::Rectangle >()->left + trc->left),(srcRects->__get(i).StaticCast<  ::haxe::ui::geom::Rectangle >()->top + trc->top),srcRects->__get(i).StaticCast<  ::haxe::ui::geom::Rectangle >()->width,srcRects->__get(i).StaticCast<  ::haxe::ui::geom::Rectangle >()->height);
HXLINE( 117)							 ::haxe::ui::geom::Rectangle dstRect = dstRects->__get(i).StaticCast<  ::haxe::ui::geom::Rectangle >();
HXLINE( 118)							g->drawScaledSubImage(( ( ::kha::Image)(imageInfo->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) ),( (float)(srcRect->left) ),( (float)(srcRect->top) ),( (float)(srcRect->width) ),( (float)(srcRect->height) ),( (float)((x + dstRect->left)) ),( (float)((y + dstRect->top)) ),( (float)(dstRect->width) ),( (float)(dstRect->height) ));
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  78)			::haxe::ui::Toolkit_obj::get_assets()->getImage(style->backgroundImage, ::Dynamic(new _hx_Closure_0(style,h,y,w,x,g)),null());
            		}
HXLINE( 125)		bool _hx_tmp8;
HXDLIN( 125)		bool _hx_tmp9;
HXDLIN( 125)		bool _hx_tmp10;
HXDLIN( 125)		if (hx::IsNotNull( style->borderLeftColor )) {
HXLINE( 125)			_hx_tmp10 = hx::IsEq( style->borderLeftColor,style->borderRightColor );
            		}
            		else {
HXLINE( 125)			_hx_tmp10 = false;
            		}
HXDLIN( 125)		if (_hx_tmp10) {
HXLINE( 125)			_hx_tmp9 = hx::IsEq( style->borderLeftColor,style->borderBottomColor );
            		}
            		else {
HXLINE( 125)			_hx_tmp9 = false;
            		}
HXDLIN( 125)		if (_hx_tmp9) {
HXLINE( 125)			_hx_tmp8 = hx::IsEq( style->borderLeftColor,style->borderTopColor );
            		}
            		else {
HXLINE( 125)			_hx_tmp8 = false;
            		}
HXDLIN( 125)		if (_hx_tmp8) {
HXLINE( 130)			 ::Dynamic style5 = style->borderLeftSize;
HXDLIN( 130)			int borderSize = ::Std_obj::_hx_int((( (Float)(style5) ) * ::haxe::ui::Toolkit_obj::get_scale()));
HXLINE( 131)			g->set_color((( (int)(style->borderLeftColor) ) | alpha));
HXLINE( 132)			g->fillRect(x,y,w,( (Float)(borderSize) ));
HXLINE( 133)			g->fillRect(x,((y + h) - ( (Float)(borderSize) )),w,( (Float)(borderSize) ));
HXLINE( 134)			g->fillRect(x,y,( (Float)(borderSize) ),h);
HXLINE( 135)			g->fillRect(((x + w) - ( (Float)(borderSize) )),y,( (Float)(borderSize) ),h);
HXLINE( 136)			g->set_color(-1);
            		}
            		else {
HXLINE( 138)			bool _hx_tmp11;
HXDLIN( 138)			if (hx::IsNotNull( style->borderTopSize )) {
HXLINE( 138)				_hx_tmp11 = hx::IsGreater( style->borderTopSize,0 );
            			}
            			else {
HXLINE( 138)				_hx_tmp11 = false;
            			}
HXDLIN( 138)			if (_hx_tmp11) {
HXLINE( 139)				g->set_color((( (int)(style->borderTopColor) ) | alpha));
HXLINE( 140)				 ::Dynamic style6 = style->borderTopSize;
HXDLIN( 140)				Float _hx_tmp12 = (( (Float)(style6) ) * ::haxe::ui::Toolkit_obj::get_scale());
HXDLIN( 140)				g->fillRect(x,y,w,_hx_tmp12);
HXLINE( 141)				g->set_color(-1);
            			}
HXLINE( 144)			bool _hx_tmp13;
HXDLIN( 144)			if (hx::IsNotNull( style->borderBottomSize )) {
HXLINE( 144)				_hx_tmp13 = hx::IsGreater( style->borderBottomSize,0 );
            			}
            			else {
HXLINE( 144)				_hx_tmp13 = false;
            			}
HXDLIN( 144)			if (_hx_tmp13) {
HXLINE( 145)				g->set_color((( (int)(style->borderBottomColor) ) | alpha));
HXLINE( 146)				Float _hx_tmp14 = (y + h);
HXDLIN( 146)				 ::Dynamic style7 = style->borderBottomSize;
HXDLIN( 146)				Float _hx_tmp15 = (_hx_tmp14 - (( (Float)(style7) ) * ::haxe::ui::Toolkit_obj::get_scale()));
HXDLIN( 146)				 ::Dynamic style8 = style->borderBottomSize;
HXDLIN( 146)				Float _hx_tmp16 = (( (Float)(style8) ) * ::haxe::ui::Toolkit_obj::get_scale());
HXDLIN( 146)				g->fillRect(x,_hx_tmp15,w,_hx_tmp16);
HXLINE( 147)				g->set_color(-1);
            			}
HXLINE( 150)			bool _hx_tmp17;
HXDLIN( 150)			if (hx::IsNotNull( style->borderLeftSize )) {
HXLINE( 150)				_hx_tmp17 = hx::IsGreater( style->borderLeftSize,0 );
            			}
            			else {
HXLINE( 150)				_hx_tmp17 = false;
            			}
HXDLIN( 150)			if (_hx_tmp17) {
HXLINE( 151)				g->set_color((( (int)(style->borderLeftColor) ) | alpha));
HXLINE( 152)				 ::Dynamic style9 = style->borderLeftSize;
HXDLIN( 152)				Float _hx_tmp18 = (( (Float)(style9) ) * ::haxe::ui::Toolkit_obj::get_scale());
HXDLIN( 152)				g->fillRect(x,y,_hx_tmp18,h);
HXLINE( 153)				g->set_color(-1);
            			}
HXLINE( 156)			bool _hx_tmp19;
HXDLIN( 156)			if (hx::IsNotNull( style->borderRightSize )) {
HXLINE( 156)				_hx_tmp19 = hx::IsGreater( style->borderRightSize,0 );
            			}
            			else {
HXLINE( 156)				_hx_tmp19 = false;
            			}
HXDLIN( 156)			if (_hx_tmp19) {
HXLINE( 157)				g->set_color((( (int)(style->borderRightColor) ) | alpha));
HXLINE( 158)				Float _hx_tmp20 = (x + w);
HXDLIN( 158)				 ::Dynamic style10 = style->borderRightSize;
HXDLIN( 158)				Float _hx_tmp21 = (_hx_tmp20 - (( (Float)(style10) ) * ::haxe::ui::Toolkit_obj::get_scale()));
HXDLIN( 158)				 ::Dynamic style11 = style->borderRightSize;
HXDLIN( 158)				Float _hx_tmp22 = (( (Float)(style11) ) * ::haxe::ui::Toolkit_obj::get_scale());
HXDLIN( 158)				g->fillRect(_hx_tmp21,y,_hx_tmp22,h);
HXLINE( 159)				g->set_color(-1);
            			}
            		}
HXLINE( 163)		if (hx::IsNotNull( style->filter )) {
HXLINE( 164)			 ::haxe::ui::filters::Filter f = style->filter->__get(0).StaticCast<  ::haxe::ui::filters::Filter >();
HXLINE( 165)			if (::Std_obj::is(f,hx::ClassOf< ::haxe::ui::filters::DropShadow >())) {
HXLINE( 166)				 ::haxe::ui::filters::DropShadow dropShadow = hx::TCast<  ::haxe::ui::filters::DropShadow >::cast(f);
HXLINE( 167)				if ((dropShadow->inner == true)) {
HXLINE( 168)					int dropShadow1 = dropShadow->color;
HXDLIN( 168)					int _hx_tmp23 = ::Std_obj::_hx_int(dropShadow->distance);
HXDLIN( 168)					::haxe::ui::backend::kha::StyleHelper_obj::drawShadow(g,dropShadow1,x,y,w,h,_hx_tmp23,dropShadow->inner);
            				}
            				else {
HXLINE( 170)					int dropShadow2 = dropShadow->color;
HXDLIN( 170)					int _hx_tmp24 = ::Std_obj::_hx_int(dropShadow->distance);
HXDLIN( 170)					::haxe::ui::backend::kha::StyleHelper_obj::drawShadow(g,dropShadow2,(orgX - ( (Float)(1) )),(orgY - ( (Float)(1) )),orgW,orgH,_hx_tmp24,dropShadow->inner);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(StyleHelper_obj,paintStyle,(void))

void StyleHelper_obj::drawCircle( ::kha::graphics2::Graphics g,Float xm,Float ym,Float r){
            	HX_STACKFRAME(&_hx_pos_6646902f5b66bdf8_180_drawCircle)
HXLINE( 181)		Float x = -(r);
HXLINE( 182)		int y = 0;
HXLINE( 183)		Float err = (( (Float)(2) ) - (( (Float)(2) ) * r));
HXLINE( 184)		while(true){
HXLINE( 185)			Float _hx_tmp = (::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) ));
HXDLIN( 185)			g->drawRect((xm - x),(ym + y),_hx_tmp,(::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) )),null());
HXLINE( 186)			Float _hx_tmp1 = (::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) ));
HXDLIN( 186)			g->drawRect((xm - ( (Float)(y) )),(ym - x),_hx_tmp1,(::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) )),null());
HXLINE( 187)			Float _hx_tmp2 = (::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) ));
HXDLIN( 187)			g->drawRect((xm + x),(ym - ( (Float)(y) )),_hx_tmp2,(::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) )),null());
HXLINE( 188)			Float _hx_tmp3 = (::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) ));
HXDLIN( 188)			g->drawRect((xm + y),(ym + x),_hx_tmp3,(::haxe::ui::Toolkit_obj::get_scale() - ( (Float)(1) )),null());
HXLINE( 191)			r = err;
HXLINE( 192)			if ((r <= y)) {
HXLINE( 192)				y = (y + 1);
HXDLIN( 192)				err = (err + ((y * 2) + 1));
            			}
HXLINE( 193)			bool _hx_tmp4;
HXDLIN( 193)			if (!((r > x))) {
HXLINE( 193)				_hx_tmp4 = (err > y);
            			}
            			else {
HXLINE( 193)				_hx_tmp4 = true;
            			}
HXDLIN( 193)			if (_hx_tmp4) {
HXLINE( 193)				x = (x + 1);
HXDLIN( 193)				err = (err + ((x * ( (Float)(2) )) + 1));
            			}
HXLINE( 184)			if (!((x < 0))) {
HXLINE( 184)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(StyleHelper_obj,drawCircle,(void))

void StyleHelper_obj::drawShadow( ::kha::graphics2::Graphics g,int color,Float x,Float y,Float w,Float h,int size,hx::Null< bool >  __o_inset){
            		bool inset = __o_inset.Default(false);
            	HX_STACKFRAME(&_hx_pos_6646902f5b66bdf8_198_drawShadow)
HXDLIN( 198)		return;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(StyleHelper_obj,drawShadow,(void))


StyleHelper_obj::StyleHelper_obj()
{
}

bool StyleHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"paintStyle") ) { outValue = paintStyle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { outValue = drawCircle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"drawShadow") ) { outValue = drawShadow_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StyleHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StyleHelper_obj_sStaticStorageInfo = 0;
#endif

hx::Class StyleHelper_obj::__mClass;

static ::String StyleHelper_obj_sStaticFields[] = {
	HX_("paintStyle",b3,00,a8,da),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawShadow",04,43,e4,5e),
	::String(null())
};

void StyleHelper_obj::__register()
{
	StyleHelper_obj _hx_dummy;
	StyleHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.kha.StyleHelper",e9,04,d8,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StyleHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StyleHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace kha