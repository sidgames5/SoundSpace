// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace utils{

::lime::utils::TAError TAError_obj::RangeError;

bool TAError_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) { outValue = TAError_obj::RangeError; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TAError_obj)

int TAError_obj::__FindIndex(::String inName)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) return 0;
	return super::__FindIndex(inName);
}

int TAError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TAError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) return RangeError;
	return super::__Field(inName,inCallProp);
}

static ::String TAError_obj_sStaticFields[] = {
	HX_("RangeError",eb,ac,85,3c),
	::String(null())
};

hx::Class TAError_obj::__mClass;

Dynamic __Create_TAError_obj() { return new TAError_obj; }

void TAError_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("lime.utils.TAError",c5,58,89,62), hx::TCanCast< TAError_obj >,TAError_obj_sStaticFields,0,
	&__Create_TAError_obj, &__Create,
	&super::__SGetClass(), &CreateTAError_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TAError_obj::__GetStatic;
}

void TAError_obj::__boot()
{
RangeError = hx::CreateConstEnum< TAError_obj >(HX_("RangeError",eb,ac,85,3c),0);
}


} // end namespace lime
} // end namespace utils
