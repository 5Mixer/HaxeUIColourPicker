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
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_CompoundItemRenderer
#include <hxinc/haxe/ui/containers/_TableView/CompoundItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <hxinc/haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <hxinc/haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <hxinc/haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#include <hxinc/haxe/ui/layouts/LayoutFactory.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2aa8e0a49ec1465_97_new,"haxe.ui.containers._TableView.CompoundItemRenderer","new",0xba884dc3,"haxe.ui.containers._TableView.CompoundItemRenderer.new","haxe/ui/containers/TableView.hx",97,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_c4cb2daf9c552525_315_registerBehaviours,"haxe.ui.containers._TableView.CompoundItemRenderer","registerBehaviours",0xa067b1d6,"haxe.ui.containers._TableView.CompoundItemRenderer.registerBehaviours","haxe/ui/macros/Macros.hx",315,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d5795adfe51f835f_521_cloneComponent,"haxe.ui.containers._TableView.CompoundItemRenderer","cloneComponent",0xd630f11d,"haxe.ui.containers._TableView.CompoundItemRenderer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",521,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_c4cb2daf9c552525_302_self,"haxe.ui.containers._TableView.CompoundItemRenderer","self",0x8009c4c9,"haxe.ui.containers._TableView.CompoundItemRenderer.self","haxe/ui/macros/Macros.hx",302,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void CompoundItemRenderer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d2aa8e0a49ec1465_97_new)
HXLINE(  98)		super::__construct();
HXLINE(  99)		this->set_layout(::haxe::ui::layouts::LayoutFactory_obj::createFromName(HX_("horizontal",e4,fc,c3,15)));
HXLINE( 100)		this->set_styleString(HX_("spacing: 2px;",aa,c5,06,dd));
HXLINE( 101)		this->removeClass(HX_("itemrenderer",56,55,53,bd),null(),null());
            	}

Dynamic CompoundItemRenderer_obj::__CreateEmpty() { return new CompoundItemRenderer_obj; }

void *CompoundItemRenderer_obj::_hx_vtable = 0;

Dynamic CompoundItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CompoundItemRenderer_obj > _hx_result = new CompoundItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompoundItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41081cbb) {
		if (inClassId<=(int)0x2a04b446) {
			if (inClassId<=(int)0x23af8dfd) {
				if (inClassId<=(int)0x0fddceef) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0fddceef;
				} else {
					return inClassId==(int)0x23af8dfd;
				}
			} else {
				return inClassId==(int)0x2a02df29 || inClassId==(int)0x2a04b446;
			}
		} else {
			if (inClassId<=(int)0x324697fd) {
				return inClassId==(int)0x3200b6b7 || inClassId==(int)0x324697fd;
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

void CompoundItemRenderer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_c4cb2daf9c552525_315_registerBehaviours)
HXDLIN( 315)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer CompoundItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d5795adfe51f835f_521_cloneComponent)
HXLINE( 267)		 ::haxe::ui::containers::_TableView::CompoundItemRenderer c = ( ( ::haxe::ui::containers::_TableView::CompoundItemRenderer)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer CompoundItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_c4cb2daf9c552525_302_self)
HXDLIN( 302)		return  ::haxe::ui::containers::_TableView::CompoundItemRenderer_obj::__alloc( HX_CTX );
            	}



hx::ObjectPtr< CompoundItemRenderer_obj > CompoundItemRenderer_obj::__new() {
	hx::ObjectPtr< CompoundItemRenderer_obj > __this = new CompoundItemRenderer_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CompoundItemRenderer_obj > CompoundItemRenderer_obj::__alloc(hx::Ctx *_hx_ctx) {
	CompoundItemRenderer_obj *__this = (CompoundItemRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CompoundItemRenderer_obj), true, "haxe.ui.containers._TableView.CompoundItemRenderer"));
	*(void **)__this = CompoundItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CompoundItemRenderer_obj::CompoundItemRenderer_obj()
{
}

hx::Val CompoundItemRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CompoundItemRenderer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CompoundItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CompoundItemRenderer_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

hx::Class CompoundItemRenderer_obj::__mClass;

void CompoundItemRenderer_obj::__register()
{
	CompoundItemRenderer_obj _hx_dummy;
	CompoundItemRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.CompoundItemRenderer",51,b0,bf,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CompoundItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompoundItemRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompoundItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompoundItemRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
