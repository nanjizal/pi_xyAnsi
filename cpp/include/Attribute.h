// Generated by Haxe 5.0.0-alpha.1+1423a5f
#ifndef INCLUDED_Attribute
#define INCLUDED_Attribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Attribute)


class Attribute_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Attribute_obj OBJ_;

	public:
		enum { _hx_ClassId = 0x6006c53c };

		Attribute_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Attribute",fc,4f,c3,9c); }
		::String __ToString() const { return HX_("Attribute.",b2,ac,22,8e) + _hx_tag; }
		bool _hx_isInstanceOf(int inClassId);

		static ::Attribute Black;
		static inline ::Attribute Black_dyn() { return Black; }
		static ::Attribute BlackBack;
		static inline ::Attribute BlackBack_dyn() { return BlackBack; }
		static ::Attribute Blink;
		static inline ::Attribute Blink_dyn() { return Blink; }
		static ::Attribute BlinkOff;
		static inline ::Attribute BlinkOff_dyn() { return BlinkOff; }
		static ::Attribute Blue;
		static inline ::Attribute Blue_dyn() { return Blue; }
		static ::Attribute BlueBack;
		static inline ::Attribute BlueBack_dyn() { return BlueBack; }
		static ::Attribute Bold;
		static inline ::Attribute Bold_dyn() { return Bold; }
		static ::Attribute BoldOff;
		static inline ::Attribute BoldOff_dyn() { return BoldOff; }
		static ::Attribute Concealed;
		static inline ::Attribute Concealed_dyn() { return Concealed; }
		static ::Attribute ConcealedOff;
		static inline ::Attribute ConcealedOff_dyn() { return ConcealedOff; }
		static ::Attribute Cyan;
		static inline ::Attribute Cyan_dyn() { return Cyan; }
		static ::Attribute CyanBack;
		static inline ::Attribute CyanBack_dyn() { return CyanBack; }
		static ::Attribute DefaultBackground;
		static inline ::Attribute DefaultBackground_dyn() { return DefaultBackground; }
		static ::Attribute DefaultForeground;
		static inline ::Attribute DefaultForeground_dyn() { return DefaultForeground; }
		static ::Attribute Green;
		static inline ::Attribute Green_dyn() { return Green; }
		static ::Attribute GreenBack;
		static inline ::Attribute GreenBack_dyn() { return GreenBack; }
		static ::Attribute Magenta;
		static inline ::Attribute Magenta_dyn() { return Magenta; }
		static ::Attribute MagentaBack;
		static inline ::Attribute MagentaBack_dyn() { return MagentaBack; }
		static ::Attribute NormalVideo;
		static inline ::Attribute NormalVideo_dyn() { return NormalVideo; }
		static ::Attribute Off;
		static inline ::Attribute Off_dyn() { return Off; }
		static ::Attribute Red;
		static inline ::Attribute Red_dyn() { return Red; }
		static ::Attribute RedBack;
		static inline ::Attribute RedBack_dyn() { return RedBack; }
		static ::Attribute ReverseVideo;
		static inline ::Attribute ReverseVideo_dyn() { return ReverseVideo; }
		static ::Attribute Underline;
		static inline ::Attribute Underline_dyn() { return Underline; }
		static ::Attribute UnderlineOff;
		static inline ::Attribute UnderlineOff_dyn() { return UnderlineOff; }
		static ::Attribute White;
		static inline ::Attribute White_dyn() { return White; }
		static ::Attribute WhiteBack;
		static inline ::Attribute WhiteBack_dyn() { return WhiteBack; }
		static ::Attribute Yellow;
		static inline ::Attribute Yellow_dyn() { return Yellow; }
		static ::Attribute YellowBack;
		static inline ::Attribute YellowBack_dyn() { return YellowBack; }
};


#endif /* INCLUDED_Attribute */ 
