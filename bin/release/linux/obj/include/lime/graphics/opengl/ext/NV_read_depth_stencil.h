// Generated by Haxe 4.0.5
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_depth_stencil
#define INCLUDED_lime_graphics_opengl_ext_NV_read_depth_stencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_12fd9b206b598ca3_5_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_read_depth_stencil)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_read_depth_stencil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NV_read_depth_stencil_obj OBJ_;
		NV_read_depth_stencil_obj();

	public:
		enum { _hx_ClassId = 0x696e147c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_read_depth_stencil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_read_depth_stencil"); }

		inline static hx::ObjectPtr< NV_read_depth_stencil_obj > __new() {
			hx::ObjectPtr< NV_read_depth_stencil_obj > __this = new NV_read_depth_stencil_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< NV_read_depth_stencil_obj > __alloc(hx::Ctx *_hx_ctx) {
			NV_read_depth_stencil_obj *__this = (NV_read_depth_stencil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NV_read_depth_stencil_obj), false, "lime.graphics.opengl.ext.NV_read_depth_stencil"));
			*(void **)__this = NV_read_depth_stencil_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_12fd9b206b598ca3_5_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_read_depth_stencil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NV_read_depth_stencil",6e,76,04,4b); }

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_read_depth_stencil */ 
