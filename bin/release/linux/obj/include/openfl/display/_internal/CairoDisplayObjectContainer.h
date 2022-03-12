// Generated by Haxe 4.0.5
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObjectContainer
#define INCLUDED_openfl_display__internal_CairoDisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,display,_internal,CairoDisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CairoDisplayObjectContainer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CairoDisplayObjectContainer_obj OBJ_;
		CairoDisplayObjectContainer_obj();

	public:
		enum { _hx_ClassId = 0x1c2d24be };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CairoDisplayObjectContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CairoDisplayObjectContainer"); }

		inline static hx::ObjectPtr< CairoDisplayObjectContainer_obj > __new() {
			hx::ObjectPtr< CairoDisplayObjectContainer_obj > __this = new CairoDisplayObjectContainer_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< CairoDisplayObjectContainer_obj > __alloc(hx::Ctx *_hx_ctx) {
			CairoDisplayObjectContainer_obj *__this = (CairoDisplayObjectContainer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoDisplayObjectContainer_obj), false, "openfl.display._internal.CairoDisplayObjectContainer"));
			*(void **)__this = CairoDisplayObjectContainer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoDisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoDisplayObjectContainer",e8,20,79,75); }

		static void renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CairoDisplayObjectContainer */ 