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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <hxinc/haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <hxinc/haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <hxinc/haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <hxinc/haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <hxinc/haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <hxinc/haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <hxinc/haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <hxinc/haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <hxinc/haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <hxinc/haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <hxinc/haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <hxinc/haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Builder
#include <hxinc/haxe/ui/containers/_TableView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_SelectedIndicesBehaviour
#include <hxinc/haxe/ui/containers/_TableView/SelectedIndicesBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <hxinc/haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <hxinc/haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <hxinc/haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <hxinc/haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <hxinc/haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <hxinc/haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <hxinc/haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <hxinc/haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <hxinc/haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <hxinc/haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92d5b36e614fdbbf_591_new,"haxe.ui.containers._TableView.SelectedIndicesBehaviour","new",0xed0f42d3,"haxe.ui.containers._TableView.SelectedIndicesBehaviour.new","haxe/ui/containers/TableView.hx",591,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_92d5b36e614fdbbf_593_get,"haxe.ui.containers._TableView.SelectedIndicesBehaviour","get",0xed09f309,"haxe.ui.containers._TableView.SelectedIndicesBehaviour.get","haxe/ui/containers/TableView.hx",593,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_92d5b36e614fdbbf_596_validateData,"haxe.ui.containers._TableView.SelectedIndicesBehaviour","validateData",0x451d7d0d,"haxe.ui.containers._TableView.SelectedIndicesBehaviour.validateData","haxe/ui/containers/TableView.hx",596,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void SelectedIndicesBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_92d5b36e614fdbbf_591_new)
HXDLIN( 591)		super::__construct(component);
            	}

Dynamic SelectedIndicesBehaviour_obj::__CreateEmpty() { return new SelectedIndicesBehaviour_obj; }

void *SelectedIndicesBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedIndicesBehaviour_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SelectedIndicesBehaviour_obj > _hx_result = new SelectedIndicesBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndicesBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3a374360) {
		if (inClassId<=(int)0x207cf043) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x207cf043;
		} else {
			return inClassId==(int)0x3a374360;
		}
	} else {
		return inClassId==(int)0x6c685ad5 || inClassId==(int)0x6c6873cd;
	}
}

 ::haxe::ui::util::VariantType SelectedIndicesBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_92d5b36e614fdbbf_593_get)
HXDLIN( 593)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value)) {
HXDLIN( 593)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(::cpp::VirtualArray_obj::__new(0));
            		}
            		else {
HXDLIN( 593)			return this->_value;
            		}
HXDLIN( 593)		return null();
            	}


void SelectedIndicesBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_92d5b36e614fdbbf_596_validateData)
HXLINE( 597)		 ::haxe::ui::containers::TableView tableView = hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 598)		::Array< int > selectedIndices = tableView->get_selectedIndices();
HXLINE( 599)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 600)		 ::haxe::ui::core::ItemRenderer itemToEnsure = null();
HXLINE( 601)		 ::haxe::ui::containers::_TableView::Builder builder = hx::TCast<  ::haxe::ui::containers::_TableView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 603)		{
HXLINE( 603)			int _g = 0;
HXDLIN( 603)			::Array< ::Dynamic> _g1;
HXDLIN( 603)			if (hx::IsNull( contents->_children )) {
HXLINE( 603)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 603)				_g1 = contents->_children;
            			}
HXDLIN( 603)			while((_g < _g1->length)){
HXLINE( 603)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 603)				_g = (_g + 1);
HXLINE( 604)				if ((selectedIndices->indexOf(hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child)->itemIndex,null()) != -1)) {
HXLINE( 605)					itemToEnsure = hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child);
HXLINE( 606)					builder->addItemRendererClass(child,HX_(":selected",95,f4,1e,7c),null());
            				}
            				else {
HXLINE( 608)					builder->addItemRendererClass(child,HX_(":selected",95,f4,1e,7c),false);
            				}
            			}
            		}
HXLINE( 612)		bool _hx_tmp;
HXDLIN( 612)		if (hx::IsNotNull( itemToEnsure )) {
HXLINE( 612)			_hx_tmp = (tableView->get_virtual() == false);
            		}
            		else {
HXLINE( 612)			_hx_tmp = false;
            		}
HXDLIN( 612)		if (_hx_tmp) {
HXLINE( 613)			 ::haxe::ui::components::VerticalScroll vscroll = tableView->findComponent(null(),hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 614)			if (hx::IsNotNull( vscroll )) {
HXLINE( 615)				Float vpos = vscroll->get_pos();
HXLINE( 616)				 ::haxe::ui::core::Component contents1 = tableView->findComponent(HX_("tableview-contents",74,2a,d3,78),null(),null(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 617)				 ::Dynamic _hx_tmp1 = itemToEnsure->get_top();
HXDLIN( 617)				Float _hx_tmp2 = (_hx_tmp1 + itemToEnsure->get_height());
HXDLIN( 617)				if ((_hx_tmp2 > (vpos + contents1->get_componentClipRect()->height))) {
HXLINE( 618)					 ::Dynamic _hx_tmp3 = itemToEnsure->get_top();
HXDLIN( 618)					Float _hx_tmp4 = (_hx_tmp3 + itemToEnsure->get_height());
HXDLIN( 618)					vscroll->set_pos((_hx_tmp4 - contents1->get_componentClipRect()->height));
            				}
            				else {
HXLINE( 619)					if (hx::IsLess( itemToEnsure->get_top(),vpos )) {
HXLINE( 620)						vscroll->set_pos(( (Float)(itemToEnsure->get_top()) ));
            					}
            				}
            			}
            		}
HXLINE( 625)		bool _hx_tmp5;
HXDLIN( 625)		if ((tableView->get_selectedIndex() != -1)) {
HXLINE( 625)			_hx_tmp5 = (tableView->get_selectedIndices()->length != 0);
            		}
            		else {
HXLINE( 625)			_hx_tmp5 = false;
            		}
HXDLIN( 625)		if (_hx_tmp5) {
HXLINE( 626)			 ::haxe::ui::core::Component _hx_tmp6 = this->_component;
HXDLIN( 626)			_hx_tmp6->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}



hx::ObjectPtr< SelectedIndicesBehaviour_obj > SelectedIndicesBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	hx::ObjectPtr< SelectedIndicesBehaviour_obj > __this = new SelectedIndicesBehaviour_obj();
	__this->__construct(component);
	return __this;
}

hx::ObjectPtr< SelectedIndicesBehaviour_obj > SelectedIndicesBehaviour_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndicesBehaviour_obj *__this = (SelectedIndicesBehaviour_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndicesBehaviour_obj), true, "haxe.ui.containers._TableView.SelectedIndicesBehaviour"));
	*(void **)__this = SelectedIndicesBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndicesBehaviour_obj::SelectedIndicesBehaviour_obj()
{
}

hx::Val SelectedIndicesBehaviour_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SelectedIndicesBehaviour_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SelectedIndicesBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndicesBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

hx::Class SelectedIndicesBehaviour_obj::__mClass;

void SelectedIndicesBehaviour_obj::__register()
{
	SelectedIndicesBehaviour_obj _hx_dummy;
	SelectedIndicesBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.SelectedIndicesBehaviour",61,dd,42,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SelectedIndicesBehaviour_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SelectedIndicesBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndicesBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndicesBehaviour_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
