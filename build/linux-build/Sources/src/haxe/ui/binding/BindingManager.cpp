// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <hxinc/Std.h>
#endif
#ifndef INCLUDED_Type
#include <hxinc/Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <hxinc/ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <hxinc/haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <hxinc/haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <hxinc/haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <hxinc/haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <hxinc/haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <hxinc/haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingInfo
#include <hxinc/haxe/ui/binding/BindingInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_BindingManager
#include <hxinc/haxe/ui/binding/BindingManager.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_PropertyInfo
#include <hxinc/haxe/ui/binding/PropertyInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_binding_TargetInfo
#include <hxinc/haxe/ui/binding/TargetInfo.h>
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
#ifndef INCLUDED_haxe_ui_scripting_ScriptInterp
#include <hxinc/haxe/ui/scripting/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hxinc/hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hxinc/hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hxinc/hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hxinc/hscript/Parser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_176_new,"haxe.ui.binding.BindingManager","new",0x79f6a3d5,"haxe.ui.binding.BindingManager.new","haxe/ui/binding/BindingManager.hx",176,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_90_add,"haxe.ui.binding.BindingManager","add",0x79ecc596,"haxe.ui.binding.BindingManager.add","haxe/ui/binding/BindingManager.hx",90,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_123_componentPropChanged,"haxe.ui.binding.BindingManager","componentPropChanged",0x2fd92abf,"haxe.ui.binding.BindingManager.componentPropChanged","haxe/ui/binding/BindingManager.hx",123,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_146_handleProp,"haxe.ui.binding.BindingManager","handleProp",0xffc02096,"haxe.ui.binding.BindingManager.handleProp","haxe/ui/binding/BindingManager.hx",146,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_160_interpolate,"haxe.ui.binding.BindingManager","interpolate",0x6cb5a536,"haxe.ui.binding.BindingManager.interpolate","haxe/ui/binding/BindingManager.hx",160,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_177_exec,"haxe.ui.binding.BindingManager","exec",0x37f4267c,"haxe.ui.binding.BindingManager.exec","haxe/ui/binding/BindingManager.hx",177,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_194_findRoot,"haxe.ui.binding.BindingManager","findRoot",0x0e447f66,"haxe.ui.binding.BindingManager.findRoot","haxe/ui/binding/BindingManager.hx",194,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_210_extractFields,"haxe.ui.binding.BindingManager","extractFields",0xc5a6364f,"haxe.ui.binding.BindingManager.extractFields","haxe/ui/binding/BindingManager.hx",210,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_74_get_instance,"haxe.ui.binding.BindingManager","get_instance",0x93ee6989,"haxe.ui.binding.BindingManager.get_instance","haxe/ui/binding/BindingManager.hx",74,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_72_boot,"haxe.ui.binding.BindingManager","boot",0x35f1b71d,"haxe.ui.binding.BindingManager.boot","haxe/ui/binding/BindingManager.hx",72,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_84_boot,"haxe.ui.binding.BindingManager","boot",0x35f1b71d,"haxe.ui.binding.BindingManager.boot","haxe/ui/binding/BindingManager.hx",84,0xd9a5117a)
HX_LOCAL_STACK_FRAME(_hx_pos_e7708a0ade6b0fe7_85_boot,"haxe.ui.binding.BindingManager","boot",0x35f1b71d,"haxe.ui.binding.BindingManager.boot","haxe/ui/binding/BindingManager.hx",85,0xd9a5117a)
namespace haxe{
namespace ui{
namespace binding{

void BindingManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_176_new)
HXDLIN( 176)		this->_hx_set_interp(HX_CTX,  ::haxe::ui::scripting::ScriptInterp_obj::__alloc( HX_CTX ));
            	}

Dynamic BindingManager_obj::__CreateEmpty() { return new BindingManager_obj; }

void *BindingManager_obj::_hx_vtable = 0;

Dynamic BindingManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BindingManager_obj > _hx_result = new BindingManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BindingManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x715ebf93;
}

void BindingManager_obj::add( ::haxe::ui::core::Component c,::String prop,::String script){
            	HX_GC_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_90_add)
HXLINE(  91)		int n1 = script.indexOf(HX_("${",d7,1f,00,00),null());
HXLINE(  92)		while((n1 != -1)){
HXLINE(  93)			int n2 = script.indexOf(HX_("}",7d,00,00,00),n1);
HXLINE(  94)			::String scriptPart = script.substr((n1 + 2),((n2 - n1) - 2));
HXLINE(  96)			 ::hscript::Parser parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
HXLINE(  97)			 ::hscript::Expr expr = parser->parseString(scriptPart,null());
HXLINE(  99)			 ::haxe::ui::binding::BindingInfo info = ( ( ::haxe::ui::binding::BindingInfo)(::haxe::ui::binding::BindingManager_obj::bindingInfo->get(c)) );
HXLINE( 100)			if (hx::IsNull( info )) {
HXLINE( 101)				info =  ::haxe::ui::binding::BindingInfo_obj::__alloc( HX_CTX );
HXLINE( 102)				::haxe::ui::binding::BindingManager_obj::bindingInfo->set(c,info);
            			}
HXLINE( 105)			 ::haxe::ui::binding::PropertyInfo propInfo = info->addProp(prop,script);
HXLINE( 106)			this->extractFields(expr,propInfo);
HXLINE( 107)			{
HXLINE( 107)				 ::Dynamic objectId = propInfo->objects->keys();
HXDLIN( 107)				while(( (bool)(objectId->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 107)					::String objectId1 = ( (::String)(objectId->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 108)					int _g = 0;
HXDLIN( 108)					::Array< ::String > _g1 = ( (::Array< ::String >)(propInfo->objects->get(objectId1)) );
HXDLIN( 108)					while((_g < _g1->length)){
HXLINE( 108)						::String fieldId = _g1->__get(_g);
HXDLIN( 108)						_g = (_g + 1);
HXLINE( 109)						 ::haxe::ui::binding::TargetInfo targetInfo = ( ( ::haxe::ui::binding::TargetInfo)(::haxe::ui::binding::BindingManager_obj::targets->get(objectId1)) );
HXLINE( 110)						if (hx::IsNull( targetInfo )) {
HXLINE( 111)							targetInfo =  ::haxe::ui::binding::TargetInfo_obj::__alloc( HX_CTX );
HXLINE( 112)							::haxe::ui::binding::BindingManager_obj::targets->set(objectId1,targetInfo);
            						}
HXLINE( 114)						targetInfo->addBinding(fieldId,c,propInfo);
            					}
            				}
            			}
HXLINE( 117)			this->handleProp(c,propInfo);
HXLINE( 119)			n1 = script.indexOf(HX_("${",d7,1f,00,00),n2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(BindingManager_obj,add,(void))

void BindingManager_obj::componentPropChanged( ::haxe::ui::core::Component c,::String prop){
            	HX_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_123_componentPropChanged)
HXLINE( 124)		bool _hx_tmp;
HXDLIN( 124)		if (hx::IsNotNull( c )) {
HXLINE( 124)			_hx_tmp = hx::IsNull( c->get_id() );
            		}
            		else {
HXLINE( 124)			_hx_tmp = true;
            		}
HXDLIN( 124)		if (_hx_tmp) {
HXLINE( 125)			return;
            		}
HXLINE( 128)		::Dynamic this1 = ::haxe::ui::binding::BindingManager_obj::targets;
HXDLIN( 128)		 ::haxe::ui::binding::TargetInfo targetInfo = ( ( ::haxe::ui::binding::TargetInfo)(( ( ::haxe::ds::StringMap)(this1) )->get(c->get_id())) );
HXLINE( 129)		if (hx::IsNull( targetInfo )) {
HXLINE( 130)			return;
            		}
HXLINE( 133)		 ::haxe::ds::ObjectMap map = ( ( ::haxe::ds::ObjectMap)(targetInfo->props->get(prop)) );
HXLINE( 134)		if (hx::IsNull( map )) {
HXLINE( 135)			return;
            		}
HXLINE( 138)		{
HXLINE( 138)			 ::Dynamic t = map->keys();
HXDLIN( 138)			while(( (bool)(t->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 138)				 ::haxe::ui::core::Component t1 = ( ( ::haxe::ui::core::Component)(t->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 139)				::Array< ::Dynamic> array = ( (::Array< ::Dynamic>)(map->get(t1)) );
HXLINE( 140)				{
HXLINE( 140)					int _g = 0;
HXDLIN( 140)					while((_g < array->length)){
HXLINE( 140)						 ::haxe::ui::binding::PropertyInfo prop1 = array->__get(_g).StaticCast<  ::haxe::ui::binding::PropertyInfo >();
HXDLIN( 140)						_g = (_g + 1);
HXLINE( 141)						this->handleProp(t1,prop1);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(BindingManager_obj,componentPropChanged,(void))

void BindingManager_obj::handleProp( ::haxe::ui::core::Component t, ::haxe::ui::binding::PropertyInfo prop){
            	HX_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_146_handleProp)
HXLINE( 147)		 ::Dynamic result = this->interpolate(prop->script,prop,t);
HXLINE( 148)		 ::ValueType currentType = ::Type_obj::_hx_typeof(::Reflect_obj::getProperty(t,prop->name));
HXLINE( 149)		if (hx::IsEq( currentType,::ValueType_obj::TFloat_dyn() )) {
HXLINE( 150)			result = ::Std_obj::parseFloat(::Std_obj::string(result));
            		}
            		else {
HXLINE( 151)			if (hx::IsEq( currentType,::ValueType_obj::TInt_dyn() )) {
HXLINE( 152)				result = ::Std_obj::parseInt(::Std_obj::string(result));
            			}
            			else {
HXLINE( 153)				if (hx::IsEq( currentType,::ValueType_obj::TBool_dyn() )) {
HXLINE( 154)					result = (::Std_obj::string(result) == HX_("true",4e,a7,03,4d));
            				}
            			}
            		}
HXLINE( 157)		::Reflect_obj::setProperty(t,prop->name,result);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BindingManager_obj,handleProp,(void))

::String BindingManager_obj::interpolate(::String s, ::haxe::ui::binding::PropertyInfo prop, ::haxe::ui::core::Component t){
            	HX_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_160_interpolate)
HXLINE( 161)		::String copy = s;
HXLINE( 162)		int n1 = copy.indexOf(HX_("${",d7,1f,00,00),null());
HXLINE( 163)		while((n1 != -1)){
HXLINE( 164)			int n2 = copy.indexOf(HX_("}",7d,00,00,00),n1);
HXLINE( 165)			::String before = copy.substr(0,n1);
HXLINE( 166)			::String after = copy.substr((n2 + 1),copy.length);
HXLINE( 167)			::String script = copy.substr((n1 + 2),((n2 - n1) - 2));
HXLINE( 169)			::String result = this->exec(script,prop,t);
HXLINE( 170)			copy = ((before + result) + after);
HXLINE( 171)			n1 = copy.indexOf(HX_("${",d7,1f,00,00),null());
            		}
HXLINE( 173)		return copy;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BindingManager_obj,interpolate,return )

::String BindingManager_obj::exec(::String script, ::haxe::ui::binding::PropertyInfo prop, ::haxe::ui::core::Component t){
            	HX_GC_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_177_exec)
HXLINE( 178)		 ::hscript::Parser parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
HXLINE( 179)		 ::hscript::Expr expr = parser->parseString(script,null());
HXLINE( 181)		 ::haxe::ui::core::Component root = this->findRoot(t);
HXLINE( 182)		{
HXLINE( 182)			 ::Dynamic objectId = prop->objects->keys();
HXDLIN( 182)			while(( (bool)(objectId->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 182)				::String objectId1 = ( (::String)(objectId->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 183)				::Dynamic this1 = this->interp->variables;
HXDLIN( 183)				( ( ::haxe::ds::StringMap)(this1) )->set(objectId1,root->findComponent(objectId1,null(),null(),null()).StaticCast<  ::haxe::ui::core::Component >());
            			}
            		}
HXLINE( 185)		this->interp->variables->set(HX_("this",5e,06,fc,4c),t);
HXLINE( 187)		 ::Dynamic result = null();
HXLINE( 188)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 189)			result = this->interp->expr(expr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 191)		return ( (::String)(result) );
            	}


HX_DEFINE_DYNAMIC_FUNC3(BindingManager_obj,exec,return )

 ::haxe::ui::core::Component BindingManager_obj::findRoot( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_194_findRoot)
HXLINE( 195)		 ::haxe::ui::core::Component root = c;
HXLINE( 197)		 ::haxe::ui::core::Component ref = c;
HXLINE( 198)		while(hx::IsNotNull( ref )){
HXLINE( 199)			root = ref;
HXLINE( 200)			if (root->bindingRoot) {
HXLINE( 201)				goto _hx_goto_13;
            			}
HXLINE( 203)			ref = ref->parentComponent;
            		}
            		_hx_goto_13:;
HXLINE( 206)		return root;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BindingManager_obj,findRoot,return )

void BindingManager_obj::extractFields( ::hscript::Expr expr, ::haxe::ui::binding::PropertyInfo propInfo){
            	HX_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_210_extractFields)
HXDLIN( 210)		switch((int)(expr->_hx_getIndex())){
            			case (int)0: {
HXLINE( 230)				 ::hscript::Const _g5 = expr->_hx_getObject(0).StaticCast<  ::hscript::Const >();
            			}
            			break;
            			case (int)1: {
HXLINE( 219)				::String objectId = expr->_hx_getString(0);
HXLINE( 220)				propInfo->addObject(objectId,HX_("value",71,7f,b8,31));
            			}
            			break;
            			case (int)5: {
HXLINE( 217)				::String _g12 = expr->_hx_getString(1);
HXDLIN( 217)				 ::hscript::Expr _g11 = expr->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 217)				switch((int)(_g11->_hx_getIndex())){
            					case (int)1: {
HXLINE( 215)						::String fieldId = _g12;
HXDLIN( 215)						::String objectId1 = _g11->_hx_getString(0);
HXLINE( 216)						propInfo->addObject(objectId1,fieldId);
            					}
            					break;
            					case (int)5: {
HXLINE( 217)						 ::hscript::Expr _g14 = _g11->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXDLIN( 217)						if ((_g14->_hx_getIndex() == 1)) {
HXLINE( 217)							::String fieldId1 = _g11->_hx_getString(1);
HXDLIN( 217)							::String objectId2 = _g14->_hx_getString(0);
HXLINE( 218)							propInfo->addObject(objectId2,fieldId1);
            						}
            						else {
HXLINE( 232)							::haxe::Log_obj::trace(expr,hx::SourceInfo(HX_("haxe/ui/binding/BindingManager.hx",7a,11,a5,d9),232,HX_("haxe.ui.binding.BindingManager",63,15,e1,eb),HX_("extractFields",9a,9e,76,f5)));
            						}
            					}
            					break;
            					default:{
HXLINE( 232)						::haxe::Log_obj::trace(expr,hx::SourceInfo(HX_("haxe/ui/binding/BindingManager.hx",7a,11,a5,d9),232,HX_("haxe.ui.binding.BindingManager",63,15,e1,eb),HX_("extractFields",9a,9e,76,f5)));
            					}
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 221)				 ::hscript::Expr e2 = expr->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 221)				 ::hscript::Expr e1 = expr->_hx_getObject(1).StaticCast<  ::hscript::Expr >();
HXDLIN( 221)				::String op = expr->_hx_getString(0);
HXDLIN( 221)				{
HXLINE( 222)					this->extractFields(e1,propInfo);
HXLINE( 223)					this->extractFields(e2,propInfo);
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 224)				 ::hscript::Expr e = expr->_hx_getObject(2).StaticCast<  ::hscript::Expr >();
HXDLIN( 224)				bool prefix = expr->_hx_getBool(1);
HXDLIN( 224)				::String op1 = expr->_hx_getString(0);
HXLINE( 225)				this->extractFields(e,propInfo);
            			}
            			break;
            			case (int)8: {
HXLINE( 211)				::Array< ::Dynamic> params = expr->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 211)				 ::hscript::Expr e3 = expr->_hx_getObject(0).StaticCast<  ::hscript::Expr >();
HXLINE( 212)				{
HXLINE( 212)					int _g = 0;
HXDLIN( 212)					while((_g < params->length)){
HXLINE( 212)						 ::hscript::Expr p = params->__get(_g).StaticCast<  ::hscript::Expr >();
HXDLIN( 212)						_g = (_g + 1);
HXLINE( 213)						this->extractFields(p,propInfo);
            					}
            				}
            			}
            			break;
            			case (int)17: {
HXLINE( 226)				::Array< ::Dynamic> values = expr->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 227)				{
HXLINE( 227)					int _g1 = 0;
HXDLIN( 227)					while((_g1 < values->length)){
HXLINE( 227)						 ::hscript::Expr v = values->__get(_g1).StaticCast<  ::hscript::Expr >();
HXDLIN( 227)						_g1 = (_g1 + 1);
HXLINE( 228)						this->extractFields(v,propInfo);
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 232)				::haxe::Log_obj::trace(expr,hx::SourceInfo(HX_("haxe/ui/binding/BindingManager.hx",7a,11,a5,d9),232,HX_("haxe.ui.binding.BindingManager",63,15,e1,eb),HX_("extractFields",9a,9e,76,f5)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(BindingManager_obj,extractFields,(void))

 ::haxe::ui::binding::BindingManager BindingManager_obj::_instance;

 ::haxe::ui::binding::BindingManager BindingManager_obj::instance;

 ::haxe::ui::binding::BindingManager BindingManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_74_get_instance)
HXLINE(  75)		if (hx::IsNull( ::haxe::ui::binding::BindingManager_obj::_instance )) {
HXLINE(  76)			::haxe::ui::binding::BindingManager_obj::_instance =  ::haxe::ui::binding::BindingManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  78)		return ::haxe::ui::binding::BindingManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BindingManager_obj,get_instance,return )

 ::haxe::ds::ObjectMap BindingManager_obj::bindingInfo;

 ::haxe::ds::StringMap BindingManager_obj::targets;


hx::ObjectPtr< BindingManager_obj > BindingManager_obj::__new() {
	hx::ObjectPtr< BindingManager_obj > __this = new BindingManager_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BindingManager_obj > BindingManager_obj::__alloc(hx::Ctx *_hx_ctx) {
	BindingManager_obj *__this = (BindingManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BindingManager_obj), true, "haxe.ui.binding.BindingManager"));
	*(void **)__this = BindingManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BindingManager_obj::BindingManager_obj()
{
}

void BindingManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BindingManager);
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_END_CLASS();
}

void BindingManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(interp,"interp");
}

hx::Val BindingManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return hx::Val( exec_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { return hx::Val( interp ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"findRoot") ) { return hx::Val( findRoot_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handleProp") ) { return hx::Val( handleProp_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return hx::Val( interpolate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"extractFields") ) { return hx::Val( extractFields_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"componentPropChanged") ) { return hx::Val( componentPropChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BindingManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"targets") ) { outValue = ( targets ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingInfo") ) { outValue = ( bindingInfo ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

hx::Val BindingManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { _hx_set_interp(HX_CTX_GET,inValue.Cast<  ::haxe::ui::scripting::ScriptInterp >()); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BindingManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"targets") ) { targets=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::binding::BindingManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::binding::BindingManager >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingInfo") ) { bindingInfo=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void BindingManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("interp",d4,79,86,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo BindingManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::scripting::ScriptInterp */ ,(int)offsetof(BindingManager_obj,interp),HX_("interp",d4,79,86,9e)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo BindingManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ui::binding::BindingManager */ ,(void *) &BindingManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{hx::fsObject /*  ::haxe::ui::binding::BindingManager */ ,(void *) &BindingManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(void *) &BindingManager_obj::bindingInfo,HX_("bindingInfo",53,76,89,b7)},
	{hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &BindingManager_obj::targets,HX_("targets",02,f4,67,88)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String BindingManager_obj_sMemberFields[] = {
	HX_("add",21,f2,49,00),
	HX_("componentPropChanged",d4,31,2d,da),
	HX_("handleProp",6b,6b,04,69),
	HX_("interpolate",c1,d4,32,1f),
	HX_("interp",d4,79,86,9e),
	HX_("exec",91,f3,1d,43),
	HX_("findRoot",fb,fa,42,9e),
	HX_("extractFields",9a,9e,76,f5),
	::String(null()) };

static void BindingManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BindingManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(BindingManager_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(BindingManager_obj::bindingInfo,"bindingInfo");
	HX_MARK_MEMBER_NAME(BindingManager_obj::targets,"targets");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BindingManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BindingManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(BindingManager_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(BindingManager_obj::bindingInfo,"bindingInfo");
	HX_VISIT_MEMBER_NAME(BindingManager_obj::targets,"targets");
};

#endif

hx::Class BindingManager_obj::__mClass;

static ::String BindingManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	HX_("bindingInfo",53,76,89,b7),
	HX_("targets",02,f4,67,88),
	::String(null())
};

void BindingManager_obj::__register()
{
	BindingManager_obj _hx_dummy;
	BindingManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.binding.BindingManager",63,15,e1,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BindingManager_obj::__GetStatic;
	__mClass->mSetStaticField = &BindingManager_obj::__SetStatic;
	__mClass->mMarkFunc = BindingManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BindingManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BindingManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BindingManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BindingManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BindingManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BindingManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BindingManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_72_boot)
HXDLIN(  72)		_instance = null();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_84_boot)
HXDLIN(  84)		bindingInfo =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_e7708a0ade6b0fe7_85_boot)
HXDLIN(  85)		targets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace binding