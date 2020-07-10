// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_data_DataSource
#define INCLUDED_haxe_ui_data_DataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,data,transformation,IItemTransformer)

namespace haxe{
namespace ui{
namespace data{


class HXCPP_CLASS_ATTRIBUTES DataSource_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DataSource_obj OBJ_;
		DataSource_obj();

	public:
		enum { _hx_ClassId = 0x2511dc29 };

		void __construct(::Dynamic transformer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.data.DataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ui.data.DataSource"); }
		static hx::ObjectPtr< DataSource_obj > __new(::Dynamic transformer);
		static hx::ObjectPtr< DataSource_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic transformer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataSource_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataSource",c5,7a,84,14); }

		static  ::haxe::ui::data::DataSource fromString(::String data,hx::Class type);
		static ::Dynamic fromString_dyn();

		 ::Dynamic onChange;
		inline  ::Dynamic _hx_set_onChange(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onChange=_hx_v; }
		Dynamic onChange_dyn() { return onChange;}
		::Dynamic transformer;
		inline ::Dynamic _hx_set_transformer(hx::StackContext *_hx_ctx,::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return transformer=_hx_v; }
		bool _changed;
		 ::Dynamic onAdd;
		inline  ::Dynamic _hx_set_onAdd(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onAdd=_hx_v; }
		Dynamic onAdd_dyn() { return onAdd;}
		 ::Dynamic onInsert;
		inline  ::Dynamic _hx_set_onInsert(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onInsert=_hx_v; }
		Dynamic onInsert_dyn() { return onInsert;}
		 ::Dynamic onUpdate;
		inline  ::Dynamic _hx_set_onUpdate(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onUpdate=_hx_v; }
		Dynamic onUpdate_dyn() { return onUpdate;}
		 ::Dynamic onRemove;
		inline  ::Dynamic _hx_set_onRemove(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onRemove=_hx_v; }
		Dynamic onRemove_dyn() { return onRemove;}
		 ::Dynamic onClear;
		inline  ::Dynamic _hx_set_onClear(hx::StackContext *_hx_ctx, ::Dynamic _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return onClear=_hx_v; }
		Dynamic onClear_dyn() { return onClear;}
		bool _allowCallbacks;
		bool get_allowCallbacks();
		::Dynamic get_allowCallbacks_dyn();

		bool set_allowCallbacks(bool value);
		::Dynamic set_allowCallbacks_dyn();

		int size;
		int get_size();
		::Dynamic get_size_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		int indexOf( ::Dynamic item);
		::Dynamic indexOf_dyn();

		 ::Dynamic add( ::Dynamic item);
		::Dynamic add_dyn();

		 ::Dynamic insert(int index, ::Dynamic item);
		::Dynamic insert_dyn();

		 ::Dynamic remove( ::Dynamic item);
		::Dynamic remove_dyn();

		 ::Dynamic update(int index, ::Dynamic item);
		::Dynamic update_dyn();

		void clear();
		::Dynamic clear_dyn();

		void handleChanged();
		::Dynamic handleChanged_dyn();

		virtual int handleGetSize();
		::Dynamic handleGetSize_dyn();

		virtual  ::Dynamic handleGetItem(int index);
		::Dynamic handleGetItem_dyn();

		virtual int handleIndexOf( ::Dynamic item);
		::Dynamic handleIndexOf_dyn();

		virtual  ::Dynamic handleAddItem( ::Dynamic item);
		::Dynamic handleAddItem_dyn();

		virtual  ::Dynamic handleInsert(int index, ::Dynamic item);
		::Dynamic handleInsert_dyn();

		virtual  ::Dynamic handleRemoveItem( ::Dynamic item);
		::Dynamic handleRemoveItem_dyn();

		virtual void handleClear();
		::Dynamic handleClear_dyn();

		virtual  ::Dynamic handleUpdateItem(int index, ::Dynamic item);
		::Dynamic handleUpdateItem_dyn();

		virtual  ::haxe::ui::data::DataSource clone();
		::Dynamic clone_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace data

#endif /* INCLUDED_haxe_ui_data_DataSource */ 
