// Generated by Haxe 5.0.0-alpha.1+1423a5f
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d58f93d28b73c415_81_compare,"Reflect","compare",0xa2d92b54,"Reflect.compare","Reflect.hx",81,0xd5c746c1)
HX_LOCAL_STACK_FRAME(_hx_pos_d58f93d28b73c415_102_isEnumValue,"Reflect","isEnumValue",0x97884d95,"Reflect.isEnumValue","Reflect.hx",102,0xd5c746c1)
HX_LOCAL_STACK_FRAME(_hx_pos_d58f93d28b73c415_127_makeVarArgs,"Reflect","makeVarArgs",0x978955c5,"Reflect.makeVarArgs","Reflect.hx",127,0xd5c746c1)

void Reflect_obj::__construct() { }

Dynamic Reflect_obj::__CreateEmpty() { return new Reflect_obj; }

void *Reflect_obj::_hx_vtable = 0;

Dynamic Reflect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Reflect_obj > _hx_result = new Reflect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Reflect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x769a515d;
}

int Reflect_obj::compare( ::Dynamic a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_d58f93d28b73c415_81_compare)
HXDLIN(  81)		return ::hx::IsEq( a,b ) ? 0 : ::hx::IsGreater( a,b ) ? 1 : -1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reflect_obj,compare,return )

bool Reflect_obj::isEnumValue( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_d58f93d28b73c415_102_isEnumValue)
HXDLIN( 102)		return (::hx::IsNotNull( v ) && ::hx::IsEq( v->__GetType(),7 ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,isEnumValue,return )

 ::Dynamic Reflect_obj::makeVarArgs( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_d58f93d28b73c415_127_makeVarArgs)
HXDLIN( 127)		return  ::__hxcpp_create_var_args(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reflect_obj,makeVarArgs,return )


Reflect_obj::Reflect_obj()
{
}

bool Reflect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isEnumValue") ) { outValue = isEnumValue_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeVarArgs") ) { outValue = makeVarArgs_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Reflect_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Reflect_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Reflect_obj::__mClass;

static ::String Reflect_obj_sStaticFields[] = {
	HX_("compare",a5,18,69,83),
	HX_("isEnumValue",66,b7,87,06),
	HX_("makeVarArgs",96,bf,88,06),
	::String(null())
};

void Reflect_obj::__register()
{
	Reflect_obj _hx_dummy;
	Reflect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Reflect",1d,ac,7a,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reflect_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Reflect_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Reflect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reflect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reflect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
