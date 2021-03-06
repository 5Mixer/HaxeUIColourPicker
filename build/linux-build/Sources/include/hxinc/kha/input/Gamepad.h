// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_input_Gamepad
#define INCLUDED_kha_input_Gamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,input,Gamepad)

namespace kha{
namespace input{


class HXCPP_CLASS_ATTRIBUTES Gamepad_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Gamepad_obj OBJ_;
		Gamepad_obj();

	public:
		enum { _hx_ClassId = 0x7fd8550f };

		void __construct(hx::Null< int >  __o_index,::String __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.input.Gamepad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.input.Gamepad"); }
		static hx::ObjectPtr< Gamepad_obj > __new(hx::Null< int >  __o_index,::String __o_id);
		static hx::ObjectPtr< Gamepad_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_index,::String __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gamepad_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Gamepad",81,08,d7,56); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::kha::input::Gamepad get(hx::Null< int >  index);
		static ::Dynamic get_dyn();

		static void notifyOnConnect( ::Dynamic connectListener, ::Dynamic disconnectListener);
		static ::Dynamic notifyOnConnect_dyn();

		static void removeConnect( ::Dynamic connectListener, ::Dynamic disconnectListener);
		static ::Dynamic removeConnect_dyn();

		static ::Array< ::Dynamic> instances;
		static ::Array< ::Dynamic> connectListeners;
		static ::Array< ::Dynamic> disconnectListeners;
		static void sendConnectEvent(int index);
		static ::Dynamic sendConnectEvent_dyn();

		static void sendDisconnectEvent(int index);
		static ::Dynamic sendDisconnectEvent_dyn();

		int index;
		void notify( ::Dynamic axisListener, ::Dynamic buttonListener);
		::Dynamic notify_dyn();

		void remove( ::Dynamic axisListener, ::Dynamic buttonListener);
		::Dynamic remove_dyn();

		::Array< ::Dynamic> axisListeners;
		inline ::Array< ::Dynamic> _hx_set_axisListeners(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return axisListeners=_hx_v; }
		::Array< ::Dynamic> buttonListeners;
		inline ::Array< ::Dynamic> _hx_set_buttonListeners(hx::StackContext *_hx_ctx,::Array< ::Dynamic> _hx_v) { HX_OBJ_WB(this,_hx_v.mPtr) return buttonListeners=_hx_v; }
		::String id;
		inline ::String _hx_set_id(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return id=_hx_v; }
		::String vendor;
		inline ::String _hx_set_vendor(hx::StackContext *_hx_ctx,::String _hx_v) { HX_OBJ_WB(this,_hx_v.raw_ref()) return vendor=_hx_v; }
		bool connected;
		::String get_id();
		::Dynamic get_id_dyn();

		::String get_vendor();
		::Dynamic get_vendor_dyn();

		void sendAxisEvent(int axis,Float value);
		::Dynamic sendAxisEvent_dyn();

		void sendButtonEvent(int button,Float value);
		::Dynamic sendButtonEvent_dyn();

};

} // end namespace kha
} // end namespace input

#endif /* INCLUDED_kha_input_Gamepad */ 
