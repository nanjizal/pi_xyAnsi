// Generated by Haxe 5.0.0-alpha.1+1423a5f
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4ec7bca225b25bfb_42_stdout,"Sys","stdout",0x3eb7d92c,"Sys.stdout","Sys.hx",42,0x2741eff1)
HX_LOCAL_STACK_FRAME(_hx_pos_4ec7bca225b25bfb_59_getEnv,"Sys","getEnv",0xd9e05658,"Sys.getEnv","Sys.hx",59,0x2741eff1)
HX_LOCAL_STACK_FRAME(_hx_pos_4ec7bca225b25bfb_87_systemName,"Sys","systemName",0xbea5b6bb,"Sys.systemName","Sys.hx",87,0x2741eff1)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee3a981;
}

 ::haxe::io::Output Sys_obj::_hx_stdout(){
            	HX_GC_STACKFRAME(&_hx_pos_4ec7bca225b25bfb_42_stdout)
HXDLIN(  42)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stdout());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stdout,return )

::String Sys_obj::getEnv(::String s){
            	HX_STACKFRAME(&_hx_pos_4ec7bca225b25bfb_59_getEnv)
HXLINE(  60)		::String v = _hx_std_get_env(s);
HXLINE(  61)		if (::hx::IsNull( v )) {
HXLINE(  62)			return null();
            		}
HXLINE(  63)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getEnv,return )

::String Sys_obj::systemName(){
            	HX_STACKFRAME(&_hx_pos_4ec7bca225b25bfb_87_systemName)
HXDLIN(  87)		return _hx_std_sys_string();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { outValue = _hx_stdout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_("stdout",cb,bf,f3,07),
	HX_("getEnv",f7,3c,1c,a3),
	HX_("systemName",da,d8,82,f7),
	::String(null())
};

void Sys_obj::__register()
{
	Sys_obj _hx_dummy;
	Sys_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Sys",ed,64,3f,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Sys_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
