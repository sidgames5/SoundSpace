// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoBitmapData
#include <openfl/display/_internal/CairoBitmapData.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9214f9594be357b4_16_renderDrawable,"openfl.display._internal.CairoBitmapData","renderDrawable",0xc020167d,"openfl.display._internal.CairoBitmapData.renderDrawable","openfl/display/_internal/CairoBitmapData.hx",16,0xf08dfb3c)
HX_LOCAL_STACK_FRAME(_hx_pos_9214f9594be357b4_45_renderDrawableMask,"openfl.display._internal.CairoBitmapData","renderDrawableMask",0x4d290609,"openfl.display._internal.CairoBitmapData.renderDrawableMask","openfl/display/_internal/CairoBitmapData.hx",45,0xf08dfb3c)
namespace openfl{
namespace display{
namespace _internal{

void CairoBitmapData_obj::__construct() { }

Dynamic CairoBitmapData_obj::__CreateEmpty() { return new CairoBitmapData_obj; }

void *CairoBitmapData_obj::_hx_vtable = 0;

Dynamic CairoBitmapData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoBitmapData_obj > _hx_result = new CairoBitmapData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoBitmapData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18a80717;
}

void CairoBitmapData_obj::renderDrawable( ::openfl::display::BitmapData bitmapData, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9214f9594be357b4_16_renderDrawable)
HXLINE(  18)		if (!(bitmapData->readable)) {
HXLINE(  18)			return;
            		}
HXLINE(  20)		 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXLINE(  22)		renderer->applyMatrix(bitmapData->_hx___renderTransform,cairo);
HXLINE(  24)		 ::Dynamic surface = bitmapData->getSurface();
HXLINE(  26)		if (hx::IsNotNull( surface )) {
HXLINE(  28)			 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			if (!(!(renderer->_hx___allowSmoothing))) {
HXLINE(  30)				_hx_tmp = (cairo->get_antialias() == 1);
            			}
            			else {
HXLINE(  30)				_hx_tmp = true;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  32)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,3);
            			}
            			else {
HXLINE(  36)				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,1);
            			}
HXLINE(  39)			cairo->set_source(pattern);
HXLINE(  40)			cairo->paint();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmapData_obj,renderDrawable,(void))

void CairoBitmapData_obj::renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_9214f9594be357b4_45_renderDrawableMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoBitmapData_obj,renderDrawableMask,(void))


CairoBitmapData_obj::CairoBitmapData_obj()
{
}

bool CairoBitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoBitmapData_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoBitmapData_obj_sStaticStorageInfo = 0;
#endif

hx::Class CairoBitmapData_obj::__mClass;

static ::String CairoBitmapData_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoBitmapData_obj::__register()
{
	CairoBitmapData_obj _hx_dummy;
	CairoBitmapData_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoBitmapData",e5,c0,33,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoBitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoBitmapData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoBitmapData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoBitmapData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoBitmapData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
