// Generated by Haxe 4.0.5
#ifndef INCLUDED_kha_graphics4_Graphics
#define INCLUDED_kha_graphics4_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Video)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,arrays,Int32ArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)
HX_DECLARE_CLASS2(kha,math,FastVector2)
HX_DECLARE_CLASS2(kha,math,FastVector3)
HX_DECLARE_CLASS2(kha,math,FastVector4)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_begin)(::Array< ::Dynamic> additionalRenderTargets); 
		static inline void begin( ::Dynamic _hx_,::Array< ::Dynamic> additionalRenderTargets) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_begin)(additionalRenderTargets);
		}
		void (hx::Object :: *_hx_beginFace)(int face); 
		static inline void beginFace( ::Dynamic _hx_,int face) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_beginFace)(face);
		}
		void (hx::Object :: *_hx_beginEye)(int eye); 
		static inline void beginEye( ::Dynamic _hx_,int eye) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_beginEye)(eye);
		}
		void (hx::Object :: *_hx_end)(); 
		static inline void end( ::Dynamic _hx_) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_end)();
		}
		bool (hx::Object :: *_hx_vsynced)(); 
		static inline bool vsynced( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_vsynced)();
		}
		int (hx::Object :: *_hx_refreshRate)(); 
		static inline int refreshRate( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_refreshRate)();
		}
		void (hx::Object :: *_hx_clear)( ::Dynamic color, ::Dynamic depth, ::Dynamic stencil); 
		static inline void clear( ::Dynamic _hx_, ::Dynamic color, ::Dynamic depth, ::Dynamic stencil) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_clear)(color,depth,stencil);
		}
		void (hx::Object :: *_hx_viewport)(int x,int y,int width,int height); 
		static inline void viewport( ::Dynamic _hx_,int x,int y,int width,int height) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_viewport)(x,y,width,height);
		}
		void (hx::Object :: *_hx_scissor)(int x,int y,int width,int height); 
		static inline void scissor( ::Dynamic _hx_,int x,int y,int width,int height) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_scissor)(x,y,width,height);
		}
		void (hx::Object :: *_hx_disableScissor)(); 
		static inline void disableScissor( ::Dynamic _hx_) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_disableScissor)();
		}
		void (hx::Object :: *_hx_setVertexBuffer)( ::kha::graphics4::VertexBuffer vertexBuffer); 
		static inline void setVertexBuffer( ::Dynamic _hx_, ::kha::graphics4::VertexBuffer vertexBuffer) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setVertexBuffer)(vertexBuffer);
		}
		void (hx::Object :: *_hx_setVertexBuffers)(::Array< ::Dynamic> vertexBuffers); 
		static inline void setVertexBuffers( ::Dynamic _hx_,::Array< ::Dynamic> vertexBuffers) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setVertexBuffers)(vertexBuffers);
		}
		void (hx::Object :: *_hx_setIndexBuffer)( ::kha::graphics4::IndexBuffer indexBuffer); 
		static inline void setIndexBuffer( ::Dynamic _hx_, ::kha::graphics4::IndexBuffer indexBuffer) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setIndexBuffer)(indexBuffer);
		}
		void (hx::Object :: *_hx_setTexture)(::Dynamic unit, ::kha::Image texture); 
		static inline void setTexture( ::Dynamic _hx_,::Dynamic unit, ::kha::Image texture) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setTexture)(unit,texture);
		}
		void (hx::Object :: *_hx_setTextureDepth)(::Dynamic unit, ::kha::Image texture); 
		static inline void setTextureDepth( ::Dynamic _hx_,::Dynamic unit, ::kha::Image texture) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setTextureDepth)(unit,texture);
		}
		void (hx::Object :: *_hx_setTextureArray)(::Dynamic unit, ::kha::Image texture); 
		static inline void setTextureArray( ::Dynamic _hx_,::Dynamic unit, ::kha::Image texture) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setTextureArray)(unit,texture);
		}
		void (hx::Object :: *_hx_setVideoTexture)(::Dynamic unit, ::kha::Video texture); 
		static inline void setVideoTexture( ::Dynamic _hx_,::Dynamic unit, ::kha::Video texture) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setVideoTexture)(unit,texture);
		}
		void (hx::Object :: *_hx_setImageTexture)(::Dynamic unit, ::kha::Image texture); 
		static inline void setImageTexture( ::Dynamic _hx_,::Dynamic unit, ::kha::Image texture) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setImageTexture)(unit,texture);
		}
		void (hx::Object :: *_hx_setTextureParameters)(::Dynamic texunit,int uAddressing,int vAddressing,int minificationFilter,int magnificationFilter,int mipmapFilter); 
		static inline void setTextureParameters( ::Dynamic _hx_,::Dynamic texunit,int uAddressing,int vAddressing,int minificationFilter,int magnificationFilter,int mipmapFilter) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setTextureParameters)(texunit,uAddressing,vAddressing,minificationFilter,magnificationFilter,mipmapFilter);
		}
		void (hx::Object :: *_hx_setTexture3DParameters)(::Dynamic texunit,int uAddressing,int vAddressing,int wAddressing,int minificationFilter,int magnificationFilter,int mipmapFilter); 
		static inline void setTexture3DParameters( ::Dynamic _hx_,::Dynamic texunit,int uAddressing,int vAddressing,int wAddressing,int minificationFilter,int magnificationFilter,int mipmapFilter) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setTexture3DParameters)(texunit,uAddressing,vAddressing,wAddressing,minificationFilter,magnificationFilter,mipmapFilter);
		}
		void (hx::Object :: *_hx_setTextureCompareMode)(::Dynamic texunit,bool enabled); 
		static inline void setTextureCompareMode( ::Dynamic _hx_,::Dynamic texunit,bool enabled) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setTextureCompareMode)(texunit,enabled);
		}
		void (hx::Object :: *_hx_setCubeMapCompareMode)(::Dynamic texunit,bool enabled); 
		static inline void setCubeMapCompareMode( ::Dynamic _hx_,::Dynamic texunit,bool enabled) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setCubeMapCompareMode)(texunit,enabled);
		}
		void (hx::Object :: *_hx_setCubeMap)(::Dynamic unit, ::kha::graphics4::CubeMap cubeMap); 
		static inline void setCubeMap( ::Dynamic _hx_,::Dynamic unit, ::kha::graphics4::CubeMap cubeMap) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setCubeMap)(unit,cubeMap);
		}
		void (hx::Object :: *_hx_setCubeMapDepth)(::Dynamic unit, ::kha::graphics4::CubeMap cubeMap); 
		static inline void setCubeMapDepth( ::Dynamic _hx_,::Dynamic unit, ::kha::graphics4::CubeMap cubeMap) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setCubeMapDepth)(unit,cubeMap);
		}
		int (hx::Object :: *_hx_maxBoundTextures)(); 
		static inline int maxBoundTextures( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_maxBoundTextures)();
		}
		void (hx::Object :: *_hx_setStencilReferenceValue)(int value); 
		static inline void setStencilReferenceValue( ::Dynamic _hx_,int value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setStencilReferenceValue)(value);
		}
		bool (hx::Object :: *_hx_instancedRenderingAvailable)(); 
		static inline bool instancedRenderingAvailable( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_instancedRenderingAvailable)();
		}
		void (hx::Object :: *_hx_setPipeline)( ::kha::graphics4::PipelineState pipeline); 
		static inline void setPipeline( ::Dynamic _hx_, ::kha::graphics4::PipelineState pipeline) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setPipeline)(pipeline);
		}
		void (hx::Object :: *_hx_setBool)(::Dynamic location,bool value); 
		static inline void setBool( ::Dynamic _hx_,::Dynamic location,bool value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setBool)(location,value);
		}
		void (hx::Object :: *_hx_setInt)(::Dynamic location,int value); 
		static inline void setInt( ::Dynamic _hx_,::Dynamic location,int value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setInt)(location,value);
		}
		void (hx::Object :: *_hx_setInt2)(::Dynamic location,int value1,int value2); 
		static inline void setInt2( ::Dynamic _hx_,::Dynamic location,int value1,int value2) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setInt2)(location,value1,value2);
		}
		void (hx::Object :: *_hx_setInt3)(::Dynamic location,int value1,int value2,int value3); 
		static inline void setInt3( ::Dynamic _hx_,::Dynamic location,int value1,int value2,int value3) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setInt3)(location,value1,value2,value3);
		}
		void (hx::Object :: *_hx_setInt4)(::Dynamic location,int value1,int value2,int value3,int value4); 
		static inline void setInt4( ::Dynamic _hx_,::Dynamic location,int value1,int value2,int value3,int value4) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setInt4)(location,value1,value2,value3,value4);
		}
		void (hx::Object :: *_hx_setInts)(::Dynamic location, ::kha::arrays::Int32ArrayPrivate ints); 
		static inline void setInts( ::Dynamic _hx_,::Dynamic location, ::kha::arrays::Int32ArrayPrivate ints) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setInts)(location,ints);
		}
		void (hx::Object :: *_hx_setFloat)(::Dynamic location,float value); 
		static inline void setFloat( ::Dynamic _hx_,::Dynamic location,float value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setFloat)(location,value);
		}
		void (hx::Object :: *_hx_setFloat2)(::Dynamic location,float value1,float value2); 
		static inline void setFloat2( ::Dynamic _hx_,::Dynamic location,float value1,float value2) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setFloat2)(location,value1,value2);
		}
		void (hx::Object :: *_hx_setFloat3)(::Dynamic location,float value1,float value2,float value3); 
		static inline void setFloat3( ::Dynamic _hx_,::Dynamic location,float value1,float value2,float value3) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setFloat3)(location,value1,value2,value3);
		}
		void (hx::Object :: *_hx_setFloat4)(::Dynamic location,float value1,float value2,float value3,float value4); 
		static inline void setFloat4( ::Dynamic _hx_,::Dynamic location,float value1,float value2,float value3,float value4) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setFloat4)(location,value1,value2,value3,value4);
		}
		void (hx::Object :: *_hx_setFloats)(::Dynamic location, ::kha::arrays::Float32ArrayPrivate floats); 
		static inline void setFloats( ::Dynamic _hx_,::Dynamic location, ::kha::arrays::Float32ArrayPrivate floats) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setFloats)(location,floats);
		}
		void (hx::Object :: *_hx_setVector2)(::Dynamic location, ::kha::math::FastVector2 value); 
		static inline void setVector2( ::Dynamic _hx_,::Dynamic location, ::kha::math::FastVector2 value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setVector2)(location,value);
		}
		void (hx::Object :: *_hx_setVector3)(::Dynamic location, ::kha::math::FastVector3 value); 
		static inline void setVector3( ::Dynamic _hx_,::Dynamic location, ::kha::math::FastVector3 value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setVector3)(location,value);
		}
		void (hx::Object :: *_hx_setVector4)(::Dynamic location, ::kha::math::FastVector4 value); 
		static inline void setVector4( ::Dynamic _hx_,::Dynamic location, ::kha::math::FastVector4 value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setVector4)(location,value);
		}
		void (hx::Object :: *_hx_setMatrix)(::Dynamic location, ::kha::math::FastMatrix4 value); 
		static inline void setMatrix( ::Dynamic _hx_,::Dynamic location, ::kha::math::FastMatrix4 value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setMatrix)(location,value);
		}
		void (hx::Object :: *_hx_setMatrix3)(::Dynamic location, ::kha::math::FastMatrix3 value); 
		static inline void setMatrix3( ::Dynamic _hx_,::Dynamic location, ::kha::math::FastMatrix3 value) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_setMatrix3)(location,value);
		}
		void (hx::Object :: *_hx_drawIndexedVertices)(hx::Null< int >  start,hx::Null< int >  count); 
		static inline void drawIndexedVertices( ::Dynamic _hx_,hx::Null< int >  start,hx::Null< int >  count) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_drawIndexedVertices)(start,count);
		}
		void (hx::Object :: *_hx_drawIndexedVerticesInstanced)(int instanceCount,hx::Null< int >  start,hx::Null< int >  count); 
		static inline void drawIndexedVerticesInstanced( ::Dynamic _hx_,int instanceCount,hx::Null< int >  start,hx::Null< int >  count) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_drawIndexedVerticesInstanced)(instanceCount,start,count);
		}
		void (hx::Object :: *_hx_flush)(); 
		static inline void flush( ::Dynamic _hx_) {
			(_hx_.mPtr->*( hx::interface_cast< ::kha::graphics4::Graphics_obj *>(_hx_.mPtr->_hx_getInterface(0xba2f5490)))->_hx_flush)();
		}
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_Graphics */ 
