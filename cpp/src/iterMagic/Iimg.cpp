// Generated by Haxe 5.0.0-alpha.1+1423a5f
#include <hxcpp.h>

#ifndef INCLUDED_iterMagic_Iimg
#include <iterMagic/Iimg.h>
#endif

namespace iterMagic{


static ::String Iimg_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class Iimg_obj::__mClass;

void Iimg_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("iterMagic.Iimg",73,91,ae,df);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Iimg_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xed2c7ccf >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iterMagic