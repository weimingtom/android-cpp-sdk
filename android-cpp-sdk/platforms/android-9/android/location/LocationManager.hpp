/*================================================================================
  code generated by: java2cpp
  class: android.location.LocationManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONMANAGER_HPP_DECL
#define J2CPP_ANDROID_LOCATION_LOCATIONMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace location { class GpsStatus; } } }
namespace j2cpp { namespace android { namespace location { class Location; } } }
namespace j2cpp { namespace android { namespace location { namespace GpsStatus_ { class NmeaListener; } } } }
namespace j2cpp { namespace android { namespace location { class LocationListener; } } }
namespace j2cpp { namespace android { namespace location { class LocationProvider; } } }
namespace j2cpp { namespace android { namespace location { namespace GpsStatus_ { class Listener; } } } }
namespace j2cpp { namespace android { namespace location { class Criteria; } } }
namespace j2cpp { namespace android { namespace app { class PendingIntent; } } }
namespace j2cpp { namespace android { namespace os { class Looper; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/app/PendingIntent.hpp>
#include <android/location/Criteria.hpp>
#include <android/location/GpsStatus.hpp>
#include <android/location/Location.hpp>
#include <android/location/LocationListener.hpp>
#include <android/location/LocationProvider.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/Looper.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace location {

	class LocationManager;
	class LocationManager
		: public cpp_object<LocationManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)

		LocationManager(jobject jobj)
		: cpp_object<LocationManager>(jobj)
		{
		}

		local_ref< java::util::List > getAllProviders();
		local_ref< java::util::List > getProviders(cpp_boolean const&);
		local_ref< android::location::LocationProvider > getProvider(local_ref< java::lang::String > const&);
		local_ref< java::util::List > getProviders(local_ref< android::location::Criteria > const&, cpp_boolean const&);
		local_ref< java::lang::String > getBestProvider(local_ref< android::location::Criteria > const&, cpp_boolean const&);
		void requestLocationUpdates(local_ref< java::lang::String > const&, cpp_long const&, cpp_float const&, local_ref< android::location::LocationListener > const&);
		void requestLocationUpdates(local_ref< java::lang::String > const&, cpp_long const&, cpp_float const&, local_ref< android::location::LocationListener > const&, local_ref< android::os::Looper > const&);
		void requestLocationUpdates(cpp_long const&, cpp_float const&, local_ref< android::location::Criteria > const&, local_ref< android::location::LocationListener > const&, local_ref< android::os::Looper > const&);
		void requestLocationUpdates(local_ref< java::lang::String > const&, cpp_long const&, cpp_float const&, local_ref< android::app::PendingIntent > const&);
		void requestLocationUpdates(cpp_long const&, cpp_float const&, local_ref< android::location::Criteria > const&, local_ref< android::app::PendingIntent > const&);
		void requestSingleUpdate(local_ref< java::lang::String > const&, local_ref< android::location::LocationListener > const&, local_ref< android::os::Looper > const&);
		void requestSingleUpdate(local_ref< android::location::Criteria > const&, local_ref< android::location::LocationListener > const&, local_ref< android::os::Looper > const&);
		void requestSingleUpdate(local_ref< java::lang::String > const&, local_ref< android::app::PendingIntent > const&);
		void requestSingleUpdate(local_ref< android::location::Criteria > const&, local_ref< android::app::PendingIntent > const&);
		void removeUpdates(local_ref< android::location::LocationListener > const&);
		void removeUpdates(local_ref< android::app::PendingIntent > const&);
		void addProximityAlert(cpp_double const&, cpp_double const&, cpp_float const&, cpp_long const&, local_ref< android::app::PendingIntent > const&);
		void removeProximityAlert(local_ref< android::app::PendingIntent > const&);
		cpp_boolean isProviderEnabled(local_ref< java::lang::String > const&);
		local_ref< android::location::Location > getLastKnownLocation(local_ref< java::lang::String > const&);
		void addTestProvider(local_ref< java::lang::String > const&, cpp_boolean const&, cpp_boolean const&, cpp_boolean const&, cpp_boolean const&, cpp_boolean const&, cpp_boolean const&, cpp_boolean const&, cpp_int const&, cpp_int const&);
		void removeTestProvider(local_ref< java::lang::String > const&);
		void setTestProviderLocation(local_ref< java::lang::String > const&, local_ref< android::location::Location > const&);
		void clearTestProviderLocation(local_ref< java::lang::String > const&);
		void setTestProviderEnabled(local_ref< java::lang::String > const&, cpp_boolean const&);
		void clearTestProviderEnabled(local_ref< java::lang::String > const&);
		void setTestProviderStatus(local_ref< java::lang::String > const&, cpp_int const&, local_ref< android::os::Bundle > const&, cpp_long const&);
		void clearTestProviderStatus(local_ref< java::lang::String > const&);
		cpp_boolean addGpsStatusListener(local_ref< android::location::GpsStatus_::Listener > const&);
		void removeGpsStatusListener(local_ref< android::location::GpsStatus_::Listener > const&);
		cpp_boolean addNmeaListener(local_ref< android::location::GpsStatus_::NmeaListener > const&);
		void removeNmeaListener(local_ref< android::location::GpsStatus_::NmeaListener > const&);
		local_ref< android::location::GpsStatus > getGpsStatus(local_ref< android::location::GpsStatus > const&);
		cpp_boolean sendExtraCommand(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< android::os::Bundle > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > NETWORK_PROVIDER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > GPS_PROVIDER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > PASSIVE_PROVIDER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > KEY_PROXIMITY_ENTERING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > KEY_STATUS_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > KEY_PROVIDER_ENABLED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > KEY_LOCATION_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > PROVIDERS_CHANGED_ACTION;
	}; //class LocationManager

} //namespace location
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_LOCATIONMANAGER_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_LOCATIONMANAGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::location::LocationManager > create< android::location::LocationManager>()
{
	return local_ref< android::location::LocationManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::location::LocationManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::location::LocationManager::J2CPP_CLASS_NAME, android::location::LocationManager::J2CPP_METHOD_NAME(0), android::location::LocationManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::util::List > android::location::LocationManager::getAllProviders()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::util::List > android::location::LocationManager::getProviders(cpp_boolean const &a0)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::location::LocationProvider > android::location::LocationManager::getProvider(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::location::LocationProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > android::location::LocationManager::getProviders(local_ref< android::location::Criteria > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::LocationManager::getBestProvider(local_ref< android::location::Criteria > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::location::LocationManager::requestLocationUpdates(local_ref< java::lang::String > const &a0, cpp_long const &a1, cpp_float const &a2, local_ref< android::location::LocationListener > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::location::LocationManager::requestLocationUpdates(local_ref< java::lang::String > const &a0, cpp_long const &a1, cpp_float const &a2, local_ref< android::location::LocationListener > const &a3, local_ref< android::os::Looper > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::location::LocationManager::requestLocationUpdates(cpp_long const &a0, cpp_float const &a1, local_ref< android::location::Criteria > const &a2, local_ref< android::location::LocationListener > const &a3, local_ref< android::os::Looper > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::location::LocationManager::requestLocationUpdates(local_ref< java::lang::String > const &a0, cpp_long const &a1, cpp_float const &a2, local_ref< android::app::PendingIntent > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::location::LocationManager::requestLocationUpdates(cpp_long const &a0, cpp_float const &a1, local_ref< android::location::Criteria > const &a2, local_ref< android::app::PendingIntent > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::location::LocationManager::requestSingleUpdate(local_ref< java::lang::String > const &a0, local_ref< android::location::LocationListener > const &a1, local_ref< android::os::Looper > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::location::LocationManager::requestSingleUpdate(local_ref< android::location::Criteria > const &a0, local_ref< android::location::LocationListener > const &a1, local_ref< android::os::Looper > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::location::LocationManager::requestSingleUpdate(local_ref< java::lang::String > const &a0, local_ref< android::app::PendingIntent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::location::LocationManager::requestSingleUpdate(local_ref< android::location::Criteria > const &a0, local_ref< android::app::PendingIntent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::location::LocationManager::removeUpdates(local_ref< android::location::LocationListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::removeUpdates(local_ref< android::app::PendingIntent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::addProximityAlert(cpp_double const &a0, cpp_double const &a1, cpp_float const &a2, cpp_long const &a3, local_ref< android::app::PendingIntent > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::location::LocationManager::removeProximityAlert(local_ref< android::app::PendingIntent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::LocationManager::isProviderEnabled(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::location::Location > android::location::LocationManager::getLastKnownLocation(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::location::Location >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::addTestProvider(local_ref< java::lang::String > const &a0, cpp_boolean const &a1, cpp_boolean const &a2, cpp_boolean const &a3, cpp_boolean const &a4, cpp_boolean const &a5, cpp_boolean const &a6, cpp_boolean const &a7, cpp_int const &a8, cpp_int const &a9)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype(), a9.get_jtype()
		)
	);
}

void android::location::LocationManager::removeTestProvider(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::setTestProviderLocation(local_ref< java::lang::String > const &a0, local_ref< android::location::Location > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::location::LocationManager::clearTestProviderLocation(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::setTestProviderEnabled(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::location::LocationManager::clearTestProviderEnabled(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::setTestProviderStatus(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< android::os::Bundle > const &a2, cpp_long const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::location::LocationManager::clearTestProviderStatus(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::LocationManager::addGpsStatusListener(local_ref< android::location::GpsStatus_::Listener > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::removeGpsStatusListener(local_ref< android::location::GpsStatus_::Listener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::LocationManager::addNmeaListener(local_ref< android::location::GpsStatus_::NmeaListener > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::LocationManager::removeNmeaListener(local_ref< android::location::GpsStatus_::NmeaListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::location::GpsStatus > android::location::LocationManager::getGpsStatus(local_ref< android::location::GpsStatus > const &a0)
{
	return local_ref< android::location::GpsStatus >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::LocationManager::sendExtraCommand(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(0),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::location::LocationManager::NETWORK_PROVIDER;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(1),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::location::LocationManager::GPS_PROVIDER;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(2),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::location::LocationManager::PASSIVE_PROVIDER;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(3),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::location::LocationManager::KEY_PROXIMITY_ENTERING;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(4),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::location::LocationManager::KEY_STATUS_CHANGED;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(5),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::location::LocationManager::KEY_PROVIDER_ENABLED;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(6),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::location::LocationManager::KEY_LOCATION_CHANGED;

static_field<
	android::location::LocationManager::J2CPP_CLASS_NAME,
	android::location::LocationManager::J2CPP_FIELD_NAME(7),
	android::location::LocationManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::location::LocationManager::PROVIDERS_CHANGED_ACTION;


J2CPP_DEFINE_CLASS(android::location::LocationManager,"android/location/LocationManager")
J2CPP_DEFINE_METHOD(android::location::LocationManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,1,"getAllProviders","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,2,"getProviders","(Z)Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,3,"getProvider","(Ljava/lang/String;)Landroid/location/LocationProvider;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,4,"getProviders","(Landroid/location/Criteria;Z)Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,5,"getBestProvider","(Landroid/location/Criteria;Z)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,6,"requestLocationUpdates","(Ljava/lang/String;JFLandroid/location/LocationListener;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,7,"requestLocationUpdates","(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,8,"requestLocationUpdates","(JFLandroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,9,"requestLocationUpdates","(Ljava/lang/String;JFLandroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,10,"requestLocationUpdates","(JFLandroid/location/Criteria;Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,11,"requestSingleUpdate","(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,12,"requestSingleUpdate","(Landroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,13,"requestSingleUpdate","(Ljava/lang/String;Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,14,"requestSingleUpdate","(Landroid/location/Criteria;Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,15,"removeUpdates","(Landroid/location/LocationListener;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,16,"removeUpdates","(Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,17,"addProximityAlert","(DDFJLandroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,18,"removeProximityAlert","(Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,19,"isProviderEnabled","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::location::LocationManager,20,"getLastKnownLocation","(Ljava/lang/String;)Landroid/location/Location;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,21,"addTestProvider","(Ljava/lang/String;ZZZZZZZII)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,22,"removeTestProvider","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,23,"setTestProviderLocation","(Ljava/lang/String;Landroid/location/Location;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,24,"clearTestProviderLocation","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,25,"setTestProviderEnabled","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,26,"clearTestProviderEnabled","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,27,"setTestProviderStatus","(Ljava/lang/String;ILandroid/os/Bundle;J)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,28,"clearTestProviderStatus","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,29,"addGpsStatusListener","(Landroid/location/GpsStatus$Listener;)Z")
J2CPP_DEFINE_METHOD(android::location::LocationManager,30,"removeGpsStatusListener","(Landroid/location/GpsStatus$Listener;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,31,"addNmeaListener","(Landroid/location/GpsStatus$NmeaListener;)Z")
J2CPP_DEFINE_METHOD(android::location::LocationManager,32,"removeNmeaListener","(Landroid/location/GpsStatus$NmeaListener;)V")
J2CPP_DEFINE_METHOD(android::location::LocationManager,33,"getGpsStatus","(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;")
J2CPP_DEFINE_METHOD(android::location::LocationManager,34,"sendExtraCommand","(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z")
J2CPP_DEFINE_FIELD(android::location::LocationManager,0,"NETWORK_PROVIDER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,1,"GPS_PROVIDER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,2,"PASSIVE_PROVIDER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,3,"KEY_PROXIMITY_ENTERING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,4,"KEY_STATUS_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,5,"KEY_PROVIDER_ENABLED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,6,"KEY_LOCATION_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::location::LocationManager,7,"PROVIDERS_CHANGED_ACTION","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_LOCATIONMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
