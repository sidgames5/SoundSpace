// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TILES;

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TRIANGLES;

bool FlxDrawItemType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TILES",65,35,23,8e)) { outValue = FlxDrawItemType_obj::TILES; return true; }
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) { outValue = FlxDrawItemType_obj::TRIANGLES; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxDrawItemType_obj)

int FlxDrawItemType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TILES",65,35,23,8e)) return 0;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return 1;
	return super::__FindIndex(inName);
}

int FlxDrawItemType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TILES",65,35,23,8e)) return 0;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxDrawItemType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TILES",65,35,23,8e)) return TILES;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return TRIANGLES;
	return super::__Field(inName,inCallProp);
}

static ::String FlxDrawItemType_obj_sStaticFields[] = {
	HX_("TILES",65,35,23,8e),
	HX_("TRIANGLES",8b,a0,99,7a),
	::String(null())
};

hx::Class FlxDrawItemType_obj::__mClass;

Dynamic __Create_FlxDrawItemType_obj() { return new FlxDrawItemType_obj; }

void FlxDrawItemType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("flixel.graphics.tile.FlxDrawItemType",b4,aa,75,d0), hx::TCanCast< FlxDrawItemType_obj >,FlxDrawItemType_obj_sStaticFields,0,
	&__Create_FlxDrawItemType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDrawItemType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxDrawItemType_obj::__GetStatic;
}

void FlxDrawItemType_obj::__boot()
{
TILES = hx::CreateConstEnum< FlxDrawItemType_obj >(HX_("TILES",65,35,23,8e),0);
TRIANGLES = hx::CreateConstEnum< FlxDrawItemType_obj >(HX_("TRIANGLES",8b,a0,99,7a),1);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace tile
