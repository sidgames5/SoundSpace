// Generated by Haxe 4.0.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aca9948080e5d770_20_new,"lime.app.Module","new",0x17f937a4,"lime.app.Module.new","lime/app/Module.hx",20,0x653a538a)
HX_LOCAL_STACK_FRAME(_hx_pos_aca9948080e5d770_27___registerLimeModule,"lime.app.Module","__registerLimeModule",0xc57e2940,"lime.app.Module.__registerLimeModule","lime/app/Module.hx",27,0x653a538a)
HX_LOCAL_STACK_FRAME(_hx_pos_aca9948080e5d770_29___unregisterLimeModule,"lime.app.Module","__unregisterLimeModule",0xa3a1a8d9,"lime.app.Module.__unregisterLimeModule","lime/app/Module.hx",29,0x653a538a)
namespace lime{
namespace app{

void Module_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_aca9948080e5d770_20_new)
HXDLIN(  20)		this->onExit =  ::lime::app::_Event_Int_Void_obj::__alloc( HX_CTX );
            	}

Dynamic Module_obj::__CreateEmpty() { return new Module_obj; }

void *Module_obj::_hx_vtable = 0;

Dynamic Module_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Module_obj > _hx_result = new Module_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Module_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77491638;
}

static ::lime::app::IModule_obj _hx_lime_app_Module__hx_lime_app_IModule= {
	( void (hx::Object::*)( ::lime::app::Application))&::lime::app::Module_obj::_hx___registerLimeModule,
	( void (hx::Object::*)( ::lime::app::Application))&::lime::app::Module_obj::_hx___unregisterLimeModule,
};

void *Module_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf464d6e9: return &_hx_lime_app_Module__hx_lime_app_IModule;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Module_obj::_hx___registerLimeModule( ::lime::app::Application application){
            	HX_STACKFRAME(&_hx_pos_aca9948080e5d770_27___registerLimeModule)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,_hx___registerLimeModule,(void))

void Module_obj::_hx___unregisterLimeModule( ::lime::app::Application application){
            	HX_STACKFRAME(&_hx_pos_aca9948080e5d770_29___unregisterLimeModule)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Module_obj,_hx___unregisterLimeModule,(void))


hx::ObjectPtr< Module_obj > Module_obj::__new() {
	hx::ObjectPtr< Module_obj > __this = new Module_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Module_obj > Module_obj::__alloc(hx::Ctx *_hx_ctx) {
	Module_obj *__this = (Module_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Module_obj), true, "lime.app.Module"));
	*(void **)__this = Module_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Module_obj::Module_obj()
{
}

void Module_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Module);
	HX_MARK_MEMBER_NAME(onExit,"onExit");
	HX_MARK_END_CLASS();
}

void Module_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onExit,"onExit");
}

hx::Val Module_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return hx::Val( onExit ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__registerLimeModule") ) { return hx::Val( _hx___registerLimeModule_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__unregisterLimeModule") ) { return hx::Val( _hx___unregisterLimeModule_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Module_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { onExit=inValue.Cast<  ::lime::app::_Event_Int_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Module_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onExit",dd,ff,a7,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Module_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::lime::app::_Event_Int_Void */ ,(int)offsetof(Module_obj,onExit),HX_("onExit",dd,ff,a7,e5)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Module_obj_sStaticStorageInfo = 0;
#endif

static ::String Module_obj_sMemberFields[] = {
	HX_("onExit",dd,ff,a7,e5),
	HX_("__registerLimeModule",04,fd,1b,af),
	HX_("__unregisterLimeModule",9d,f5,2e,8f),
	::String(null()) };

hx::Class Module_obj::__mClass;

void Module_obj::__register()
{
	Module_obj _hx_dummy;
	Module_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.app.Module",b2,d5,db,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Module_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Module_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Module_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Module_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
