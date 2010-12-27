/*================================================================================
  code generated by: java2cpp
  class: android.location.Geocoder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_GEOCODER_HPP_DECL
#define J2CPP_ANDROID_LOCATION_GEOCODER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }


#include <android/content/Context.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace android { namespace location {

	class Geocoder;
	class Geocoder
		: public cpp_object<Geocoder>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		Geocoder(jobject jobj)
		: cpp_object<Geocoder>(jobj)
		{
		}

		static cpp_boolean isPresent();
		local_ref< java::util::List > getFromLocation(cpp_double const&, cpp_double const&, cpp_int const&);
		local_ref< java::util::List > getFromLocationName(local_ref< java::lang::String > const&, cpp_int const&);
		local_ref< java::util::List > getFromLocationName(local_ref< java::lang::String > const&, cpp_int const&, cpp_double const&, cpp_double const&, cpp_double const&, cpp_double const&);
	}; //class Geocoder

} //namespace location
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_GEOCODER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_GEOCODER_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_GEOCODER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::location::Geocoder > create< android::location::Geocoder>(local_ref< android::content::Context > const &a0, local_ref< java::util::Locale > const &a1)
{
	return local_ref< android::location::Geocoder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::location::Geocoder::J2CPP_CLASS_NAME>(),
			get_method_id<android::location::Geocoder::J2CPP_CLASS_NAME, android::location::Geocoder::J2CPP_METHOD_NAME(0), android::location::Geocoder::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::location::Geocoder > create< android::location::Geocoder>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::location::Geocoder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::location::Geocoder::J2CPP_CLASS_NAME>(),
			get_method_id<android::location::Geocoder::J2CPP_CLASS_NAME, android::location::Geocoder::J2CPP_METHOD_NAME(1), android::location::Geocoder::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::Geocoder::isPresent()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

local_ref< java::util::List > android::location::Geocoder::getFromLocation(cpp_double const &a0, cpp_double const &a1, cpp_int const &a2)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::List > android::location::Geocoder::getFromLocationName(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::List > android::location::Geocoder::getFromLocationName(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_double const &a2, cpp_double const &a3, cpp_double const &a4, cpp_double const &a5)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::location::Geocoder,"android/location/Geocoder")
J2CPP_DEFINE_METHOD(android::location::Geocoder,0,"<init>","(Landroid/content/Context;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(android::location::Geocoder,1,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::location::Geocoder,2,"isPresent","()Z")
J2CPP_DEFINE_METHOD(android::location::Geocoder,3,"getFromLocation","(DDI)Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::location::Geocoder,4,"getFromLocationName","(Ljava/lang/String;I)Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::location::Geocoder,5,"getFromLocationName","(Ljava/lang/String;IDDDD)Ljava/util/List;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_GEOCODER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
