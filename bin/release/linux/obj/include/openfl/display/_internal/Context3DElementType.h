// Generated by Haxe 4.0.5
#ifndef INCLUDED_openfl_display__internal_Context3DElementType
#define INCLUDED_openfl_display__internal_Context3DElementType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_internal,Context3DElementType)
namespace openfl{
namespace display{
namespace _internal{


class Context3DElementType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Context3DElementType_obj OBJ_;

	public:
		Context3DElementType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("openfl.display._internal.Context3DElementType",12,f8,d9,53); }
		::String __ToString() const { return HX_("Context3DElementType.",38,30,f0,03) + _hx_tag; }

		static ::openfl::display::_internal::Context3DElementType QUADS;
		static inline ::openfl::display::_internal::Context3DElementType QUADS_dyn() { return QUADS; }
		static ::openfl::display::_internal::Context3DElementType TRIANGLES;
		static inline ::openfl::display::_internal::Context3DElementType TRIANGLES_dyn() { return TRIANGLES; }
		static ::openfl::display::_internal::Context3DElementType TRIANGLE_INDICES;
		static inline ::openfl::display::_internal::Context3DElementType TRIANGLE_INDICES_dyn() { return TRIANGLE_INDICES; }
};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DElementType */ 
