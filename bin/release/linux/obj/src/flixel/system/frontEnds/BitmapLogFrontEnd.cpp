// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_729ca37c5683ec35_54_new,"flixel.system.frontEnds.BitmapLogFrontEnd","new",0xa186019f,"flixel.system.frontEnds.BitmapLogFrontEnd.new","flixel/system/frontEnds/BitmapLogFrontEnd.hx",54,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_12_add,"flixel.system.frontEnds.BitmapLogFrontEnd","add",0xa17c2360,"flixel.system.frontEnds.BitmapLogFrontEnd.add","flixel/system/frontEnds/BitmapLogFrontEnd.hx",12,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_22_clear,"flixel.system.frontEnds.BitmapLogFrontEnd","clear",0x3f6bb08c,"flixel.system.frontEnds.BitmapLogFrontEnd.clear","flixel/system/frontEnds/BitmapLogFrontEnd.hx",22,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_33_clearAt,"flixel.system.frontEnds.BitmapLogFrontEnd","clearAt",0xb622249f,"flixel.system.frontEnds.BitmapLogFrontEnd.clearAt","flixel/system/frontEnds/BitmapLogFrontEnd.hx",33,0x20ede752)
HX_LOCAL_STACK_FRAME(_hx_pos_729ca37c5683ec35_43_viewCache,"flixel.system.frontEnds.BitmapLogFrontEnd","viewCache",0xebde341c,"flixel.system.frontEnds.BitmapLogFrontEnd.viewCache","flixel/system/frontEnds/BitmapLogFrontEnd.hx",43,0x20ede752)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void BitmapLogFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_54_new)
            	}

Dynamic BitmapLogFrontEnd_obj::__CreateEmpty() { return new BitmapLogFrontEnd_obj; }

void *BitmapLogFrontEnd_obj::_hx_vtable = 0;

Dynamic BitmapLogFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapLogFrontEnd_obj > _hx_result = new BitmapLogFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapLogFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ee62c55;
}

void BitmapLogFrontEnd_obj::add( ::openfl::display::BitmapData Data,::String __o_Name){
            		::String Name = __o_Name;
            		if (hx::IsNull(__o_Name)) Name = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_12_add)
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLogFrontEnd_obj,add,(void))

void BitmapLogFrontEnd_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_22_clear)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,clear,(void))

void BitmapLogFrontEnd_obj::clearAt(hx::Null< int >  __o_Index){
            		int Index = __o_Index.Default(-1);
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_33_clearAt)
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLogFrontEnd_obj,clearAt,(void))

void BitmapLogFrontEnd_obj::viewCache(){
            	HX_STACKFRAME(&_hx_pos_729ca37c5683ec35_43_viewCache)
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLogFrontEnd_obj,viewCache,(void))


hx::ObjectPtr< BitmapLogFrontEnd_obj > BitmapLogFrontEnd_obj::__new() {
	hx::ObjectPtr< BitmapLogFrontEnd_obj > __this = new BitmapLogFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BitmapLogFrontEnd_obj > BitmapLogFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	BitmapLogFrontEnd_obj *__this = (BitmapLogFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BitmapLogFrontEnd_obj), false, "flixel.system.frontEnds.BitmapLogFrontEnd"));
	*(void **)__this = BitmapLogFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapLogFrontEnd_obj::BitmapLogFrontEnd_obj()
{
}

hx::Val BitmapLogFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clearAt") ) { return hx::Val( clearAt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"viewCache") ) { return hx::Val( viewCache_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *BitmapLogFrontEnd_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BitmapLogFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapLogFrontEnd_obj_sMemberFields[] = {
	HX_("add",21,f2,49,00),
	HX_("clear",8d,71,5b,48),
	HX_("clearAt",e0,e7,44,ab),
	HX_("viewCache",9d,09,a9,81),
	::String(null()) };

hx::Class BitmapLogFrontEnd_obj::__mClass;

void BitmapLogFrontEnd_obj::__register()
{
	BitmapLogFrontEnd_obj _hx_dummy;
	BitmapLogFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.BitmapLogFrontEnd",2d,46,a7,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapLogFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapLogFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapLogFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapLogFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
