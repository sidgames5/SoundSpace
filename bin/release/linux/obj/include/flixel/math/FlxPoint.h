// Generated by Haxe 4.0.5
#ifndef INCLUDED_flixel_math_FlxPoint
#define INCLUDED_flixel_math_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_math_FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxPoint_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();

	public:
		enum { _hx_ClassId = 0x40ef3a42 };

		void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.math.FlxPoint"); }
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static hx::ObjectPtr< FlxPoint_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxPoint",9e,be,69,83); }

		static void __boot();
		static  ::flixel::util::FlxPool_flixel_math_FlxPoint _pool;
		static  ::flixel::math::FlxPoint get(hx::Null< Float >  X,hx::Null< Float >  Y);
		static ::Dynamic get_dyn();

		static  ::flixel::math::FlxPoint weak(hx::Null< Float >  X,hx::Null< Float >  Y);
		static ::Dynamic weak_dyn();

		static ::Dynamic get_pool();
		static ::Dynamic get_pool_dyn();

		Float x;
		Float y;
		bool _weak;
		bool _inPool;
		virtual void put();
		::Dynamic put_dyn();

		void putWeak();
		::Dynamic putWeak_dyn();

		virtual  ::flixel::math::FlxPoint set(hx::Null< Float >  X,hx::Null< Float >  Y);
		::Dynamic set_dyn();

		 ::flixel::math::FlxPoint add(hx::Null< Float >  X,hx::Null< Float >  Y);
		::Dynamic add_dyn();

		 ::flixel::math::FlxPoint addPoint( ::flixel::math::FlxPoint point);
		::Dynamic addPoint_dyn();

		 ::flixel::math::FlxPoint addPointWeak( ::flixel::math::FlxPoint point);
		::Dynamic addPointWeak_dyn();

		 ::flixel::math::FlxPoint subtract(hx::Null< Float >  X,hx::Null< Float >  Y);
		::Dynamic subtract_dyn();

		 ::flixel::math::FlxPoint subtractPoint( ::flixel::math::FlxPoint point);
		::Dynamic subtractPoint_dyn();

		 ::flixel::math::FlxPoint subtractPointWeak( ::flixel::math::FlxPoint point);
		::Dynamic subtractPointWeak_dyn();

		 ::flixel::math::FlxPoint scale(Float k);
		::Dynamic scale_dyn();

		 ::flixel::math::FlxPoint copyFrom( ::flixel::math::FlxPoint point);
		::Dynamic copyFrom_dyn();

		 ::flixel::math::FlxPoint copyTo( ::flixel::math::FlxPoint point);
		::Dynamic copyTo_dyn();

		 ::flixel::math::FlxPoint copyFromFlash( ::openfl::geom::Point FlashPoint);
		::Dynamic copyFromFlash_dyn();

		 ::openfl::geom::Point copyToFlash( ::openfl::geom::Point FlashPoint);
		::Dynamic copyToFlash_dyn();

		 ::openfl::geom::Point addToFlash( ::openfl::geom::Point FlashPoint);
		::Dynamic addToFlash_dyn();

		 ::openfl::geom::Point subtractFromFlash( ::openfl::geom::Point FlashPoint);
		::Dynamic subtractFromFlash_dyn();

		bool inCoords(Float RectX,Float RectY,Float RectWidth,Float RectHeight);
		::Dynamic inCoords_dyn();

		bool inRect( ::flixel::math::FlxRect Rect);
		::Dynamic inRect_dyn();

		Float distanceTo( ::flixel::math::FlxPoint point);
		::Dynamic distanceTo_dyn();

		 ::flixel::math::FlxPoint floor();
		::Dynamic floor_dyn();

		 ::flixel::math::FlxPoint ceil();
		::Dynamic ceil_dyn();

		 ::flixel::math::FlxPoint round();
		::Dynamic round_dyn();

		 ::flixel::math::FlxPoint rotate( ::flixel::math::FlxPoint Pivot,Float Angle);
		::Dynamic rotate_dyn();

		Float angleBetween( ::flixel::math::FlxPoint point);
		::Dynamic angleBetween_dyn();

		 ::flixel::math::FlxPoint toVector();
		::Dynamic toVector_dyn();

		bool equals( ::flixel::math::FlxPoint point);
		::Dynamic equals_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::math::FlxPoint transform( ::openfl::geom::Matrix matrix);
		::Dynamic transform_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		virtual Float set_x(Float Value);
		::Dynamic set_x_dyn();

		virtual Float set_y(Float Value);
		::Dynamic set_y_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxPoint */ 
