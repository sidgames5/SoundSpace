// Generated by Haxe 4.0.5
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#define INCLUDED_flixel_tweens_motion_CubicMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,motion,CubicMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES CubicMotion_obj : public  ::flixel::tweens::motion::Motion_obj
{
	public:
		typedef  ::flixel::tweens::motion::Motion_obj super;
		typedef CubicMotion_obj OBJ_;
		CubicMotion_obj();

	public:
		enum { _hx_ClassId = 0x06e61a46 };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.CubicMotion")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.tweens.motion.CubicMotion"); }
		static hx::ObjectPtr< CubicMotion_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static hx::ObjectPtr< CubicMotion_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubicMotion_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CubicMotion",00,c3,18,e7); }

		Float _fromX;
		Float _fromY;
		Float _toX;
		Float _toY;
		Float _aX;
		Float _aY;
		Float _bX;
		Float _bY;
		Float _ttt;
		Float _tt;
		 ::flixel::tweens::motion::CubicMotion setMotion(Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration);
		::Dynamic setMotion_dyn();

		void update(Float elapsed);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_CubicMotion */ 
