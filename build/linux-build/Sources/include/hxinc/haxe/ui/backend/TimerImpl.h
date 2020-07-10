// Generated by Haxe 4.0.5
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#define INCLUDED_haxe_ui_backend_TimerImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,TimerImpl)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TimerImpl_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TimerImpl_obj OBJ_;
		TimerImpl_obj();

	public:
		enum { _hx_ClassId = 0x02010d2f };

		void __construct(int delay, ::Dynamic callback);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.TimerImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.TimerImpl"); }
		static hx::ObjectPtr< TimerImpl_obj > __new(int delay, ::Dynamic callback);
		static hx::ObjectPtr< TimerImpl_obj > __alloc(hx::Ctx *_hx_ctx,int delay, ::Dynamic callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimerImpl_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TimerImpl",25,11,d8,97); }

		int _timerId;
		bool _stopped;
		virtual void stop();
		::Dynamic stop_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TimerImpl */ 
