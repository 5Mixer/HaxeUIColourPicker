// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_vr_VrInterface
#define INCLUDED_kha_vr_VrInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,math,FastMatrix4)
HX_DECLARE_CLASS2(kha,vr,SensorState)
HX_DECLARE_CLASS2(kha,vr,TimeWarpParms)
HX_DECLARE_CLASS2(kha,vr,VrInterface)

namespace kha{
namespace vr{


class HXCPP_CLASS_ATTRIBUTES VrInterface_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VrInterface_obj OBJ_;
		VrInterface_obj();

	public:
		enum { _hx_ClassId = 0x7519f3dd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.vr.VrInterface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.vr.VrInterface"); }
		static hx::ObjectPtr< VrInterface_obj > __new();
		static hx::ObjectPtr< VrInterface_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VrInterface_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VrInterface",bd,7a,8e,c7); }

		static  ::kha::vr::VrInterface instance;
		virtual  ::kha::vr::SensorState GetSensorState();
		::Dynamic GetSensorState_dyn();

		virtual  ::kha::vr::SensorState GetPredictedSensorState(Float time);
		::Dynamic GetPredictedSensorState_dyn();

		virtual void WarpSwapBlack();
		::Dynamic WarpSwapBlack_dyn();

		virtual void WarpSwapLoadingIcon();
		::Dynamic WarpSwapLoadingIcon_dyn();

		virtual void WarpSwap( ::kha::vr::TimeWarpParms parms);
		::Dynamic WarpSwap_dyn();

		bool IsPresenting();
		::Dynamic IsPresenting_dyn();

		bool IsVrEnabled();
		::Dynamic IsVrEnabled_dyn();

		virtual Float GetTimeInSeconds();
		::Dynamic GetTimeInSeconds_dyn();

		 ::kha::math::FastMatrix4 GetProjectionMatrix(int eye);
		::Dynamic GetProjectionMatrix_dyn();

		 ::kha::math::FastMatrix4 GetViewMatrix(int eye);
		::Dynamic GetViewMatrix_dyn();

		void onVRRequestPresent();
		::Dynamic onVRRequestPresent_dyn();

		void onVRExitPresent();
		::Dynamic onVRExitPresent_dyn();

		void onResetPose();
		::Dynamic onResetPose_dyn();

};

} // end namespace kha
} // end namespace vr

#endif /* INCLUDED_kha_vr_VrInterface */ 
