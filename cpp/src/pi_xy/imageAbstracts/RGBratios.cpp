// Generated by Haxe 5.0.0-alpha.1+1423a5f
#include <hxcpp.h>

#ifndef INCLUDED_pi_xy_imageAbstracts_RGBratios
#include <pi_xy/imageAbstracts/RGBratios.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_668caaed1fd700b2_21_new,"pi_xy.imageAbstracts.RGBratios","new",0xf8d65736,"pi_xy.imageAbstracts.RGBratios.new","pi_xy/imageAbstracts/AnsiImage.hx",21,0x78773437)
namespace pi_xy{
namespace imageAbstracts{

void RGBratios_obj::__construct(Float red,Float green,Float blue){
            	HX_STACKFRAME(&_hx_pos_668caaed1fd700b2_21_new)
HXLINE(  22)		Float tot = ((red + green) + blue);
HXLINE(  23)		Float ratio = (( (Float)(1) ) / tot);
HXLINE(  24)		if ((tot == ((Float)1.))) {
HXLINE(  25)			this->r = red;
HXLINE(  26)			this->g = green;
HXLINE(  27)			this->b = blue;
            		}
            		else {
HXLINE(  29)			this->r = (red * ratio);
HXLINE(  30)			this->g = (green * ratio);
HXLINE(  31)			this->b = (blue * ratio);
            		}
            	}

Dynamic RGBratios_obj::__CreateEmpty() { return new RGBratios_obj; }

void *RGBratios_obj::_hx_vtable = 0;

Dynamic RGBratios_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RGBratios_obj > _hx_result = new RGBratios_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool RGBratios_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f068a3c;
}


RGBratios_obj::RGBratios_obj()
{
}

::hx::Val RGBratios_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"g") ) { return ::hx::Val( g ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RGBratios_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RGBratios_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("g",67,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RGBratios_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(RGBratios_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RGBratios_obj,g),HX_("g",67,00,00,00)},
	{::hx::fsFloat,(int)offsetof(RGBratios_obj,b),HX_("b",62,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RGBratios_obj_sStaticStorageInfo = 0;
#endif

static ::String RGBratios_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("g",67,00,00,00),
	HX_("b",62,00,00,00),
	::String(null()) };

::hx::Class RGBratios_obj::__mClass;

void RGBratios_obj::__register()
{
	RGBratios_obj _hx_dummy;
	RGBratios_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pi_xy.imageAbstracts.RGBratios",44,44,e9,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RGBratios_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RGBratios_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RGBratios_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RGBratios_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pi_xy
} // end namespace imageAbstracts
