// Generated by Haxe 4.0.5
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#define INCLUDED_flixel_input_gamepad_FlxGamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadDeadZoneMode)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadModel)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxBaseGamepadList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadButtonList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadMotionValueList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadPointerValueList)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)

namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES FlxGamepad_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxGamepad_obj OBJ_;
		FlxGamepad_obj();

	public:
		enum { _hx_ClassId = 0x74532b62 };

		void __construct(int ID, ::flixel::input::gamepad::FlxGamepadManager Manager, ::flixel::input::gamepad::FlxGamepadModel Model, ::flixel::input::gamepad::FlxGamepadAttachment Attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.FlxGamepad"); }
		static hx::ObjectPtr< FlxGamepad_obj > __new(int ID, ::flixel::input::gamepad::FlxGamepadManager Manager, ::flixel::input::gamepad::FlxGamepadModel Model, ::flixel::input::gamepad::FlxGamepadAttachment Attachment);
		static hx::ObjectPtr< FlxGamepad_obj > __alloc(hx::Ctx *_hx_ctx,int ID, ::flixel::input::gamepad::FlxGamepadManager Manager, ::flixel::input::gamepad::FlxGamepadModel Model, ::flixel::input::gamepad::FlxGamepadAttachment Attachment);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepad_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxGamepad",6f,9a,b1,b8); }

		int id;
		 ::flixel::input::gamepad::FlxGamepadModel model;
		 ::flixel::input::gamepad::FlxGamepadModel detectedModel;
		 ::flixel::input::gamepad::mappings::FlxGamepadMapping mapping;
		bool connected;
		 ::flixel::input::gamepad::FlxGamepadAttachment attachment;
		 ::flixel::input::gamepad::FlxGamepadDeadZoneMode deadZoneMode;
		 ::flixel::input::gamepad::lists::FlxGamepadButtonList pressed;
		 ::flixel::input::gamepad::lists::FlxGamepadButtonList released;
		 ::flixel::input::gamepad::lists::FlxGamepadButtonList justPressed;
		 ::flixel::input::gamepad::lists::FlxGamepadButtonList justReleased;
		 ::flixel::input::gamepad::lists::FlxGamepadAnalogList analog;
		 ::flixel::input::gamepad::lists::FlxGamepadMotionValueList motion;
		 ::flixel::input::gamepad::lists::FlxGamepadPointerValueList pointer;
		::Array< Float > axis;
		bool axisActive;
		 ::flixel::input::gamepad::FlxGamepadManager manager;
		Float _deadZone;
		 ::openfl::ui::GameInputDevice _device;
		::Array< ::Dynamic> buttons;
		 ::flixel::input::gamepad::FlxGamepadButton getButton(int RawID);
		::Dynamic getButton_dyn();

		Float applyAxisFlip(Float axisValue,int axisID);
		::Dynamic applyAxisFlip_dyn();

		void update();
		::Dynamic update_dyn();

		void reset();
		::Dynamic reset_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		bool checkStatus(int ID,int Status);
		::Dynamic checkStatus_dyn();

		bool checkStatusRaw(int RawID,int Status);
		::Dynamic checkStatusRaw_dyn();

		bool checkButtonArrayState(::Array< int > IDArray,int Status);
		::Dynamic checkButtonArrayState_dyn();

		bool checkButtonArrayStateRaw(::Array< int > IDArray,int Status);
		::Dynamic checkButtonArrayStateRaw_dyn();

		bool anyPressed(::Array< int > IDArray);
		::Dynamic anyPressed_dyn();

		bool anyPressedRaw(::Array< int > RawIDArray);
		::Dynamic anyPressedRaw_dyn();

		bool anyJustPressed(::Array< int > IDArray);
		::Dynamic anyJustPressed_dyn();

		bool anyJustPressedRaw(::Array< int > RawIDArray);
		::Dynamic anyJustPressedRaw_dyn();

		bool anyJustReleased(::Array< int > IDArray);
		::Dynamic anyJustReleased_dyn();

		bool anyJustReleasedRaw(::Array< int > RawIDArray);
		::Dynamic anyJustReleasedRaw_dyn();

		int firstPressedID();
		::Dynamic firstPressedID_dyn();

		int firstPressedRawID();
		::Dynamic firstPressedRawID_dyn();

		int firstJustPressedID();
		::Dynamic firstJustPressedID_dyn();

		int firstJustPressedRawID();
		::Dynamic firstJustPressedRawID_dyn();

		int firstJustReleasedID();
		::Dynamic firstJustReleasedID_dyn();

		int firstJustReleasedRawID();
		::Dynamic firstJustReleasedRawID_dyn();

		Float getAxis(int AxisButtonID);
		::Dynamic getAxis_dyn();

		Float getAxisRaw(int RawAxisID);
		::Dynamic getAxisRaw_dyn();

		bool isAxisForAnalogStick(int AxisIndex);
		::Dynamic isAxisForAnalogStick_dyn();

		 ::flixel::input::gamepad::FlxGamepadAnalogStick getAnalogStickByAxis(int AxisIndex);
		::Dynamic getAnalogStickByAxis_dyn();

		Float getXAxis(int AxesButtonID);
		::Dynamic getXAxis_dyn();

		Float getXAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick);
		::Dynamic getXAxisRaw_dyn();

		Float getYAxis(int AxesButtonID);
		::Dynamic getYAxis_dyn();

		Float getYAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick);
		::Dynamic getYAxisRaw_dyn();

		 ::flixel::math::FlxPoint getAnalogAxes(int AxesButtonID);
		::Dynamic getAnalogAxes_dyn();

		bool anyButton(hx::Null< int >  state);
		::Dynamic anyButton_dyn();

		bool anyInput();
		::Dynamic anyInput_dyn();

		Float getAxisValue(int AxisID);
		::Dynamic getAxisValue_dyn();

		Float getAnalogXAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick);
		::Dynamic getAnalogXAxisValue_dyn();

		Float getAnalogYAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick);
		::Dynamic getAnalogYAxisValue_dyn();

		Float getAnalogAxisValueCircular( ::flixel::input::gamepad::FlxGamepadAnalogStick stick,int axisID);
		::Dynamic getAnalogAxisValueCircular_dyn();

		Float getAnalogAxisValueIndependent(int axisID);
		::Dynamic getAnalogAxisValueIndependent_dyn();

		void handleAxisMove(int axis,Float newValue,Float oldValue);
		::Dynamic handleAxisMove_dyn();

		void handleAxisMoveSub( ::flixel::input::gamepad::FlxGamepadAnalogStick stick,int axis,Float value,Float oldValue,hx::Null< Float >  sign);
		::Dynamic handleAxisMoveSub_dyn();

		 ::flixel::input::gamepad::mappings::FlxGamepadMapping createMappingForModel( ::flixel::input::gamepad::FlxGamepadModel model);
		::Dynamic createMappingForModel_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		 ::flixel::input::gamepad::FlxGamepadModel set_model( ::flixel::input::gamepad::FlxGamepadModel Model);
		::Dynamic set_model_dyn();

		 ::flixel::input::gamepad::FlxGamepadAttachment set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment Attachment);
		::Dynamic set_attachment_dyn();

		Float get_deadZone();
		::Dynamic get_deadZone_dyn();

		Float set_deadZone(Float deadZone);
		::Dynamic set_deadZone_dyn();

		::String getInputLabel(int id);
		::Dynamic getInputLabel_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepad */ 
