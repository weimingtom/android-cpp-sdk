/*================================================================================
  code generated by: java2cpp
  class: android.location.LocationListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_DECL
#define J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace location { class Location; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/location/Location.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace location {

	class LocationListener;
	class LocationListener
		: public cpp_object<LocationListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		LocationListener(jobject jobj)
		: cpp_object<LocationListener>(jobj)
		{
		}

		void onLocationChanged(local_ref< android::location::Location > const&);
		void onStatusChanged(local_ref< java::lang::String > const&, cpp_int const&, local_ref< android::os::Bundle > const&);
		void onProviderEnabled(local_ref< java::lang::String > const&);
		void onProviderDisabled(local_ref< java::lang::String > const&);
	}; //class LocationListener

} //namespace location
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_IMPL

namespace j2cpp {


void android::location::LocationListener::onLocationChanged(local_ref< android::location::Location > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationListener::onStatusChanged(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< android::os::Bundle > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::location::LocationListener::onProviderEnabled(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationListener::onProviderDisabled(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::location::LocationListener,"android/location/LocationListener")
J2CPP_DEFINE_METHOD(android::location::LocationListener,0,"onLocationChanged","(Landroid/location/Location;)V")
J2CPP_DEFINE_METHOD(android::location::LocationListener,1,"onStatusChanged","(Ljava/lang/String;ILandroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::location::LocationListener,2,"onProviderEnabled","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::LocationListener,3,"onProviderDisabled","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
