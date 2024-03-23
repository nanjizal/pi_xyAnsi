// Generated by Haxe 5.0.0-alpha.1+1423a5f
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_Int
#define INCLUDED_haxe_ds__GenericStack_GenericStackIterator_Int

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cpp_FastIterator
#include <cpp/FastIterator.h>
#endif
HX_DECLARE_CLASS2(haxe,ds,GenericCell_Int)
HX_DECLARE_CLASS3(haxe,ds,_GenericStack,GenericStackIterator_Int)

namespace haxe{
namespace ds{
namespace _GenericStack{


class HXCPP_CLASS_ATTRIBUTES GenericStackIterator_Int_obj : public ::cpp::FastIterator_obj< int >
{
	public:
		typedef ::cpp::FastIterator_obj< int > super;
		typedef GenericStackIterator_Int_obj OBJ_;
		GenericStackIterator_Int_obj();

	public:
		enum { _hx_ClassId = 0x78b9d442 };

		void __construct( ::haxe::ds::GenericCell_Int head);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds._GenericStack.GenericStackIterator_Int")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ds._GenericStack.GenericStackIterator_Int"); }
		static ::hx::ObjectPtr< GenericStackIterator_Int_obj > __new( ::haxe::ds::GenericCell_Int head);
		static ::hx::ObjectPtr< GenericStackIterator_Int_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::GenericCell_Int head);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GenericStackIterator_Int_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GenericStackIterator_Int",2f,e2,1b,67); }

		 ::haxe::ds::GenericCell_Int current;
		bool hasNext();

		int next();

};

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack

#endif /* INCLUDED_haxe_ds__GenericStack_GenericStackIterator_Int */ 