// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_haxe_ui_CallLater
#include <hxinc/haxe/ui/CallLater.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <hxinc/haxe/ui/backend/CallLaterImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <hxinc/haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <hxinc/haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <hxinc/haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <hxinc/haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <hxinc/haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_Actuator
#include <hxinc/haxe/ui/styles/animation/util/Actuator.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions
#include <hxinc/haxe/ui/styles/animation/util/ActuatorOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails
#include <hxinc/haxe/ui/styles/animation/util/ColorPropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_PropertyDetails
#include <hxinc/haxe/ui/styles/animation/util/PropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease
#include <hxinc/haxe/ui/styles/animation/util/_Actuator/Ease.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <hxinc/haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StyleUtil
#include <hxinc/haxe/ui/util/StyleUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <hxinc/haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <hxinc/haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <hxinc/kha/Scheduler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01a0595adc97b707_18_new,"haxe.ui.styles.animation.util.Actuator","new",0x3f4e5213,"haxe.ui.styles.animation.util.Actuator.new","haxe/ui/styles/animation/util/Actuator.hx",18,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_70_stop,"haxe.ui.styles.animation.util.Actuator","stop",0x2892eaef,"haxe.ui.styles.animation.util.Actuator.stop","haxe/ui/styles/animation/util/Actuator.hx",70,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_76_run,"haxe.ui.styles.animation.util.Actuator","run",0x3f5168fe,"haxe.ui.styles.animation.util.Actuator.run","haxe/ui/styles/animation/util/Actuator.hx",76,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_107__initialize,"haxe.ui.styles.animation.util.Actuator","_initialize",0xacf4eb22,"haxe.ui.styles.animation.util.Actuator._initialize","haxe/ui/styles/animation/util/Actuator.hx",107,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_168__nextFrame,"haxe.ui.styles.animation.util.Actuator","_nextFrame",0x677878a8,"haxe.ui.styles.animation.util.Actuator._nextFrame","haxe/ui/styles/animation/util/Actuator.hx",168,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_196__apply,"haxe.ui.styles.animation.util.Actuator","_apply",0xb4401cdc,"haxe.ui.styles.animation.util.Actuator._apply","haxe/ui/styles/animation/util/Actuator.hx",196,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_213__finish,"haxe.ui.styles.animation.util.Actuator","_finish",0xfa7f2925,"haxe.ui.styles.animation.util.Actuator._finish","haxe/ui/styles/animation/util/Actuator.hx",213,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_22_tween,"haxe.ui.styles.animation.util.Actuator","tween",0xed553ede,"haxe.ui.styles.animation.util.Actuator.tween","haxe/ui/styles/animation/util/Actuator.hx",22,0xdc64e2fe)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void Actuator_obj::__construct( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_18_new)
HXLINE(  50)		this->delay = ((Float)0);
HXLINE(  44)		this->duration = ((Float)0);
HXLINE(  53)		this->_hx_set_target(HX_CTX, target);
HXLINE(  54)		this->_hx_set_properties(HX_CTX, properties);
HXLINE(  55)		this->duration = duration;
HXLINE(  57)		if (hx::IsNotNull( options )) {
HXLINE(  58)			 ::haxe::ui::styles::EasingFunction _hx_tmp;
HXDLIN(  58)			if (hx::IsNotNull( options->easingFunction )) {
HXLINE(  58)				_hx_tmp = options->easingFunction;
            			}
            			else {
HXLINE(  58)				_hx_tmp = ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
            			}
HXDLIN(  58)			this->_hx_set__easeFunc(HX_CTX, ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::get(_hx_tmp));
HXLINE(  60)			if (hx::IsNotNull( options->delay )) {
HXLINE(  60)				this->delay = ( (Float)(options->delay) );
            			}
HXLINE(  61)			if (hx::IsNotNull( options->onComplete )) {
HXLINE(  61)				this->_hx_set__onComplete(HX_CTX, options->onComplete);
            			}
HXLINE(  62)			if (hx::IsNotNull( options->onUpdate )) {
HXLINE(  62)				this->_hx_set__onUpdate(HX_CTX, options->onUpdate);
            			}
            		}
            	}

Dynamic Actuator_obj::__CreateEmpty() { return new Actuator_obj; }

void *Actuator_obj::_hx_vtable = 0;

Dynamic Actuator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Actuator_obj > _hx_result = new Actuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Actuator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4004783b;
}

void Actuator_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_70_stop)
HXDLIN(  70)		this->_stopped = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,stop,(void))

void Actuator_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_76_run)
HXLINE(  77)		this->_initialize();
HXLINE(  79)		this->_stopped = false;
HXLINE(  81)		if ((this->duration == 0)) {
HXLINE(  82)			this->_apply(( (Float)(1) ));
HXLINE(  83)			this->_finish();
            		}
            		else {
HXLINE(  85)			this->_currentTime = ::kha::Scheduler_obj::realTime();
HXLINE(  87)			if ((this->delay > 0)) {
HXLINE(  88)				::haxe::ui::util::Timer_obj::delay(this->_nextFrame_dyn(),::Std_obj::_hx_int((this->delay * ( (Float)(1000) ))));
            			}
            			else {
HXLINE(  90)				 ::haxe::ui::CallLater_obj::__alloc( HX_CTX ,this->_nextFrame_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,run,(void))

void Actuator_obj::_initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_107__initialize)
HXLINE( 108)		this->_hx_set__propertyDetails(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE( 109)		this->_hx_set__colorPropertyDetails(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
HXLINE( 111)		{
HXLINE( 111)			int _g = 0;
HXDLIN( 111)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN( 111)			while((_g < _g1->length)){
HXLINE( 111)				::String p = _g1->__get(_g);
HXDLIN( 111)				_g = (_g + 1);
HXLINE( 112)				::String componentProperty = ::haxe::ui::util::StyleUtil_obj::styleProperty2ComponentProperty(p);
HXLINE( 114)				 ::Dynamic end = ::Reflect_obj::getProperty(this->properties,p);
HXLINE( 115)				if ((end.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 3)) {
HXLINE( 116)					 ::haxe::ui::styles::Dimension _g2 = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 116)					if ((_g2->_hx_getIndex() == 0)) {
HXLINE( 116)						Float v = _g2->_hx_getFloat(0);
HXLINE( 117)						componentProperty = (HX_("percent",c5,aa,da,78) + ::haxe::ui::util::StringUtil_obj::capitalizeFirstLetter(componentProperty));
            					}
            				}
HXLINE( 121)				 ::Dynamic start = ::Reflect_obj::getProperty(this->target,componentProperty);
HXLINE( 122)				if (hx::IsNull( start )) {
HXLINE( 123)					switch((int)(end.StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            						case (int)1: {
HXLINE( 124)							Float v1 = end.StaticCast< ::hx::EnumBase >()->_hx_getFloat(0);
HXLINE( 125)							start = 0;
            						}
            						break;
            						case (int)3: {
HXLINE( 124)							 ::haxe::ui::styles::Dimension _g3 = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 124)							if ((_g3->_hx_getIndex() == 0)) {
HXLINE( 124)								Float v2 = _g3->_hx_getFloat(0);
HXLINE( 125)								start = 0;
            							}
            						}
            						break;
            						default:{
            						}
            					}
            				}
HXLINE( 130)				bool _hx_tmp;
HXDLIN( 130)				if (hx::IsNotNull( start )) {
HXLINE( 130)					_hx_tmp = hx::IsNull( end );
            				}
            				else {
HXLINE( 130)					_hx_tmp = true;
            				}
HXDLIN( 130)				if (_hx_tmp) {
HXLINE( 131)					continue;
            				}
HXLINE( 133)				switch((int)(end.StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)3: {
HXLINE( 149)						 ::haxe::ui::styles::Dimension _g21 = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 149)						if ((_g21->_hx_getIndex() == 0)) {
HXLINE( 149)							Float v3 = _g21->_hx_getFloat(0);
HXDLIN( 149)							{
HXLINE( 150)								 ::Dynamic val = v3;
HXLINE( 151)								if (hx::IsNotNull( val )) {
HXLINE( 152)									 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 153)									this->_propertyDetails->push(details);
            								}
            							}
            						}
            						else {
HXLINE( 156)							 ::Dynamic val1 = ::haxe::ui::styles::ValueTools_obj::calcDimension(end);
HXLINE( 157)							if (hx::IsNotNull( val1 )) {
HXLINE( 158)								 ::haxe::ui::styles::animation::util::PropertyDetails details1 =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val1) ) - ( (Float)(start) )));
HXLINE( 159)								this->_propertyDetails->push(details1);
            							}
            							else {
HXLINE( 161)								 ::haxe::ui::styles::animation::util::PropertyDetails details2 =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(end) ) - ( (Float)(start) )));
HXLINE( 162)								this->_propertyDetails->push(details2);
            							}
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 134)						int v4 = end.StaticCast< ::hx::EnumBase >()->_hx_getInt(0);
HXDLIN( 134)						{
HXLINE( 135)							int startColor = hx::TCast< int >::cast(start);
HXLINE( 136)							int endColor = v4;
HXLINE( 137)							 ::haxe::ui::styles::animation::util::ColorPropertyDetails details3 =  ::haxe::ui::styles::animation::util::ColorPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startColor,(((endColor >> 16) & 255) - ((startColor >> 16) & 255)),(((endColor >> 8) & 255) - ((startColor >> 8) & 255)),((endColor & 255) - (startColor & 255)),(((endColor >> 24) & 255) - ((startColor >> 24) & 255)));
HXLINE( 145)							if (hx::IsNull( this->_colorPropertyDetails )) {
HXLINE( 146)								this->_hx_set__colorPropertyDetails(HX_CTX, ::Array_obj< ::Dynamic>::__new(0));
            							}
HXLINE( 148)							this->_colorPropertyDetails->push(details3);
            						}
            					}
            					break;
            					default:{
HXLINE( 156)						 ::Dynamic val2 = ::haxe::ui::styles::ValueTools_obj::calcDimension(end);
HXLINE( 157)						if (hx::IsNotNull( val2 )) {
HXLINE( 158)							 ::haxe::ui::styles::animation::util::PropertyDetails details4 =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val2) ) - ( (Float)(start) )));
HXLINE( 159)							this->_propertyDetails->push(details4);
            						}
            						else {
HXLINE( 161)							 ::haxe::ui::styles::animation::util::PropertyDetails details5 =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(end) ) - ( (Float)(start) )));
HXLINE( 162)							this->_propertyDetails->push(details5);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_initialize,(void))

void Actuator_obj::_nextFrame(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_168__nextFrame)
HXLINE( 169)		if ((this->_stopped == true)) {
HXLINE( 170)			return;
            		}
HXLINE( 173)		Float currentTime = ::kha::Scheduler_obj::realTime();
HXLINE( 174)		Float delta = (currentTime - this->_currentTime);
HXLINE( 175)		if ((this->delay < 0)) {
HXLINE( 176)			delta = (delta + -(this->delay));
            		}
HXLINE( 178)		Float tweenPosition = (delta / this->duration);
HXLINE( 179)		if ((tweenPosition > 1)) {
HXLINE( 180)			tweenPosition = ( (Float)(1) );
            		}
HXLINE( 183)		this->_apply(tweenPosition);
HXLINE( 185)		if (hx::IsNotNull( this->_onUpdate )) {
HXLINE( 186)			this->_onUpdate(currentTime);
            		}
HXLINE( 189)		if ((delta >= this->duration)) {
HXLINE( 190)			this->_finish();
            		}
            		else {
HXLINE( 192)			 ::haxe::ui::CallLater_obj::__alloc( HX_CTX ,this->_nextFrame_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_nextFrame,(void))

void Actuator_obj::_apply(Float position){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_196__apply)
HXLINE( 197)		position = ( (Float)(this->_easeFunc(position)) );
HXLINE( 198)		{
HXLINE( 198)			int _g = 0;
HXDLIN( 198)			::Array< ::Dynamic> _g1 = this->_propertyDetails;
HXDLIN( 198)			while((_g < _g1->length)){
HXLINE( 198)				 ::haxe::ui::styles::animation::util::PropertyDetails details = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::animation::util::PropertyDetails >();
HXDLIN( 198)				_g = (_g + 1);
HXLINE( 199)				::Reflect_obj::setProperty(this->target,details->propertyName,(details->start + (details->change * position)));
            			}
            		}
HXLINE( 202)		{
HXLINE( 202)			int _g2 = 0;
HXDLIN( 202)			::Array< ::Dynamic> _g3 = this->_colorPropertyDetails;
HXDLIN( 202)			while((_g2 < _g3->length)){
HXLINE( 202)				 ::haxe::ui::styles::animation::util::ColorPropertyDetails details1 = _g3->__get(_g2).StaticCast<  ::haxe::ui::styles::animation::util::ColorPropertyDetails >();
HXDLIN( 202)				_g2 = (_g2 + 1);
HXLINE( 204)				int currentColor = ::Std_obj::_hx_int((((details1->start >> 16) & 255) + (( (Float)(details1->changeR) ) * position)));
HXLINE( 205)				int currentColor1 = ::Std_obj::_hx_int((((details1->start >> 8) & 255) + (( (Float)(details1->changeG) ) * position)));
HXLINE( 206)				int currentColor2 = ::Std_obj::_hx_int(((details1->start & 255) + (( (Float)(details1->changeB) ) * position)));
HXLINE( 203)				int currentColor3 = ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(currentColor,currentColor1,currentColor2,::Std_obj::_hx_int((((details1->start >> 24) & 255) + (( (Float)(details1->changeA) ) * position))));
HXLINE( 209)				::Reflect_obj::setProperty(details1->target,details1->propertyName,currentColor3);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,_apply,(void))

void Actuator_obj::_finish(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_213__finish)
HXLINE( 214)		this->_stopped = true;
HXLINE( 215)		if (hx::IsNotNull( this->_onComplete )) {
HXLINE( 216)			this->_onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_finish,(void))

 ::haxe::ui::styles::animation::util::Actuator Actuator_obj::tween( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_22_tween)
HXLINE(  23)		 ::haxe::ui::styles::animation::util::Actuator actuator =  ::haxe::ui::styles::animation::util::Actuator_obj::__alloc( HX_CTX ,target,properties,duration,options);
HXLINE(  24)		actuator->run();
HXLINE(  25)		return actuator;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuator_obj,tween,return )


hx::ObjectPtr< Actuator_obj > Actuator_obj::__new( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options) {
	hx::ObjectPtr< Actuator_obj > __this = new Actuator_obj();
	__this->__construct(target,properties,duration,options);
	return __this;
}

hx::ObjectPtr< Actuator_obj > Actuator_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options) {
	Actuator_obj *__this = (Actuator_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Actuator_obj), true, "haxe.ui.styles.animation.util.Actuator"));
	*(void **)__this = Actuator_obj::_hx_vtable;
	__this->__construct(target,properties,duration,options);
	return __this;
}

Actuator_obj::Actuator_obj()
{
}

void Actuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actuator);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(_easeFunc,"_easeFunc");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_stopped,"_stopped");
	HX_MARK_MEMBER_NAME(_propertyDetails,"_propertyDetails");
	HX_MARK_MEMBER_NAME(_colorPropertyDetails,"_colorPropertyDetails");
	HX_MARK_END_CLASS();
}

void Actuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(_easeFunc,"_easeFunc");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_stopped,"_stopped");
	HX_VISIT_MEMBER_NAME(_propertyDetails,"_propertyDetails");
	HX_VISIT_MEMBER_NAME(_colorPropertyDetails,"_colorPropertyDetails");
}

hx::Val Actuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"_apply") ) { return hx::Val( _apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_finish") ) { return hx::Val( _finish_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"_stopped") ) { return hx::Val( _stopped ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_easeFunc") ) { return hx::Val( _easeFunc ); }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return hx::Val( _onUpdate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"_nextFrame") ) { return hx::Val( _nextFrame_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return hx::Val( _onComplete ); }
		if (HX_FIELD_EQ(inName,"_initialize") ) { return hx::Val( _initialize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return hx::Val( _currentTime ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_propertyDetails") ) { return hx::Val( _propertyDetails ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorPropertyDetails") ) { return hx::Val( _colorPropertyDetails ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Actuator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true; }
	}
	return false;
}

hx::Val Actuator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { _hx_set_target(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stopped") ) { _stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_easeFunc") ) { _hx_set__easeFunc(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _hx_set__onUpdate(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { _hx_set_properties(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _hx_set__onComplete(HX_CTX_GET,inValue.Cast<  ::Dynamic >()); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_propertyDetails") ) { _hx_set__propertyDetails(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorPropertyDetails") ) { _hx_set__colorPropertyDetails(HX_CTX_GET,inValue.Cast< ::Array< ::Dynamic> >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("_currentTime",e7,52,98,eb));
	outFields->push(HX_("_stopped",8e,2b,1a,7d));
	outFields->push(HX_("_propertyDetails",6e,e3,27,5c));
	outFields->push(HX_("_colorPropertyDetails",a9,48,5a,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Actuator_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,target),HX_("target",51,f3,ec,86)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,properties),HX_("properties",f3,fb,0e,61)},
	{hx::fsFloat,(int)offsetof(Actuator_obj,duration),HX_("duration",54,0f,8e,14)},
	{hx::fsFloat,(int)offsetof(Actuator_obj,delay),HX_("delay",83,d7,26,d7)},
	{hx::fsFloat,(int)offsetof(Actuator_obj,_currentTime),HX_("_currentTime",e7,52,98,eb)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_easeFunc),HX_("_easeFunc",b1,29,40,eb)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_onUpdate),HX_("_onUpdate",e7,73,48,ae)},
	{hx::fsBool,(int)offsetof(Actuator_obj,_stopped),HX_("_stopped",8e,2b,1a,7d)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_propertyDetails),HX_("_propertyDetails",6e,e3,27,5c)},
	{hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_colorPropertyDetails),HX_("_colorPropertyDetails",a9,48,5a,47)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Actuator_obj_sStaticStorageInfo = 0;
#endif

static ::String Actuator_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("properties",f3,fb,0e,61),
	HX_("duration",54,0f,8e,14),
	HX_("delay",83,d7,26,d7),
	HX_("stop",02,f0,5b,4c),
	HX_("run",4b,e7,56,00),
	HX_("_currentTime",e7,52,98,eb),
	HX_("_easeFunc",b1,29,40,eb),
	HX_("_onComplete",17,a2,08,30),
	HX_("_onUpdate",e7,73,48,ae),
	HX_("_stopped",8e,2b,1a,7d),
	HX_("_propertyDetails",6e,e3,27,5c),
	HX_("_colorPropertyDetails",a9,48,5a,47),
	HX_("_initialize",6f,fe,44,bf),
	HX_("_nextFrame",fb,0d,6b,09),
	HX_("_apply",af,cc,22,20),
	HX_("_finish",f2,51,f6,f4),
	::String(null()) };

hx::Class Actuator_obj::__mClass;

static ::String Actuator_obj_sStaticFields[] = {
	HX_("tween",6b,aa,70,19),
	::String(null())
};

void Actuator_obj::__register()
{
	Actuator_obj _hx_dummy;
	Actuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.Actuator",a1,4c,79,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Actuator_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Actuator_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Actuator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Actuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Actuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Actuator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
