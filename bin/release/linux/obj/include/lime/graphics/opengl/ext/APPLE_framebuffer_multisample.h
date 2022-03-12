// Generated by Haxe 4.0.5
#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample
#define INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0dc663a6fc7d5e27_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,APPLE_framebuffer_multisample)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES APPLE_framebuffer_multisample_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef APPLE_framebuffer_multisample_obj OBJ_;
		APPLE_framebuffer_multisample_obj();

	public:
		enum { _hx_ClassId = 0x756f1b62 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.APPLE_framebuffer_multisample")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.APPLE_framebuffer_multisample"); }

		inline static hx::ObjectPtr< APPLE_framebuffer_multisample_obj > __new() {
			hx::ObjectPtr< APPLE_framebuffer_multisample_obj > __this = new APPLE_framebuffer_multisample_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< APPLE_framebuffer_multisample_obj > __alloc(hx::Ctx *_hx_ctx) {
			APPLE_framebuffer_multisample_obj *__this = (APPLE_framebuffer_multisample_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(APPLE_framebuffer_multisample_obj), false, "lime.graphics.opengl.ext.APPLE_framebuffer_multisample"));
			*(void **)__this = APPLE_framebuffer_multisample_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0dc663a6fc7d5e27_4_new)
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->READ_FRAMEBUFFER_BINDING_APPLE = 36010;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->DRAW_FRAMEBUFFER_BINDING_APPLE = 36006;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->DRAW_FRAMEBUFFER_APPLE = 36009;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->READ_FRAMEBUFFER_APPLE = 36008;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->MAX_SAMPLES_APPLE = 36183;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = 36182;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::APPLE_framebuffer_multisample)(__this) )->RENDERBUFFER_SAMPLES_APPLE = 36011;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~APPLE_framebuffer_multisample_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("APPLE_framebuffer_multisample",8c,c4,4f,00); }

		int RENDERBUFFER_SAMPLES_APPLE;
		int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE;
		int MAX_SAMPLES_APPLE;
		int READ_FRAMEBUFFER_APPLE;
		int DRAW_FRAMEBUFFER_APPLE;
		int DRAW_FRAMEBUFFER_BINDING_APPLE;
		int READ_FRAMEBUFFER_BINDING_APPLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample */ 
