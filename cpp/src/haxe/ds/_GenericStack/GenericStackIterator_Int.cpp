// Generated by Haxe 5.0.0-alpha.1+1423a5f
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_Int
#include <haxe/ds/GenericCell_Int.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_Int
#include <haxe/ds/_GenericStack/GenericStackIterator_Int.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_514c7ea52de51947_78_new,"haxe.ds._GenericStack.GenericStackIterator_Int","new",0x133b5d56,"haxe.ds._GenericStack.GenericStackIterator_Int.new","haxe/ds/GenericStack.hx",78,0x77bce356)
HX_LOCAL_STACK_FRAME(_hx_pos_514c7ea52de51947_68_hasNext,"haxe.ds._GenericStack.GenericStackIterator_Int","hasNext",0xe876e563,"haxe.ds._GenericStack.GenericStackIterator_Int.hasNext","haxe/ds/GenericStack.hx",68,0x77bce356)
HX_LOCAL_STACK_FRAME(_hx_pos_514c7ea52de51947_71_next,"haxe.ds._GenericStack.GenericStackIterator_Int","next",0xc0b64f3d,"haxe.ds._GenericStack.GenericStackIterator_Int.next","haxe/ds/GenericStack.hx",71,0x77bce356)
namespace haxe{
namespace ds{
namespace _GenericStack{

void GenericStackIterator_Int_obj::__construct( ::haxe::ds::GenericCell_Int head){
            	HX_STACKFRAME(&_hx_pos_514c7ea52de51947_78_new)
HXDLIN(  78)		this->current = head;
            	}

Dynamic GenericStackIterator_Int_obj::__CreateEmpty() { return new GenericStackIterator_Int_obj; }

void *GenericStackIterator_Int_obj::_hx_vtable = 0;

Dynamic GenericStackIterator_Int_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericStackIterator_Int_obj > _hx_result = new GenericStackIterator_Int_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GenericStackIterator_Int_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78b9d442;
}

bool GenericStackIterator_Int_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_514c7ea52de51947_68_hasNext)
HXDLIN(  68)		return ::hx::IsNotNull( this->current );
            	}


int GenericStackIterator_Int_obj::next(){
            	HX_STACKFRAME(&_hx_pos_514c7ea52de51947_71_next)
HXLINE(  72)		int result = this->current->elt;
HXLINE(  73)		this->current = this->current->next;
HXLINE(  74)		return result;
            	}



::hx::ObjectPtr< GenericStackIterator_Int_obj > GenericStackIterator_Int_obj::__new( ::haxe::ds::GenericCell_Int head) {
	::hx::ObjectPtr< GenericStackIterator_Int_obj > __this = new GenericStackIterator_Int_obj();
	__this->__construct(head);
	return __this;
}

::hx::ObjectPtr< GenericStackIterator_Int_obj > GenericStackIterator_Int_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_Int head) {
	GenericStackIterator_Int_obj *__this = (GenericStackIterator_Int_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericStackIterator_Int_obj), true, "haxe.ds._GenericStack.GenericStackIterator_Int"));
	*(void **)__this = GenericStackIterator_Int_obj::_hx_vtable;
	__this->__construct(head);
	return __this;
}

GenericStackIterator_Int_obj::GenericStackIterator_Int_obj()
{
}

void GenericStackIterator_Int_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator_Int);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_END_CLASS();
}

void GenericStackIterator_Int_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
}

::hx::Val GenericStackIterator_Int_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericStackIterator_Int_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast<  ::haxe::ds::GenericCell_Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_Int_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("current",39,9c,e3,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericStackIterator_Int_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::GenericCell_Int */ ,(int)offsetof(GenericStackIterator_Int_obj,current),HX_("current",39,9c,e3,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericStackIterator_Int_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericStackIterator_Int_obj_sMemberFields[] = {
	HX_("current",39,9c,e3,cb),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class GenericStackIterator_Int_obj::__mClass;

void GenericStackIterator_Int_obj::__register()
{
	GenericStackIterator_Int_obj _hx_dummy;
	GenericStackIterator_Int_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds._GenericStack.GenericStackIterator_Int",64,ba,88,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericStackIterator_Int_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericStackIterator_Int_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericStackIterator_Int_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericStackIterator_Int_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack
