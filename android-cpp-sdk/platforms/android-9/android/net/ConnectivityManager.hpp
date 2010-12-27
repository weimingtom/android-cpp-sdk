/*================================================================================
  code generated by: java2cpp
  class: android.net.ConnectivityManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_DECL
#define J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class NetworkInfo; } } }


#include <android/net/NetworkInfo.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class ConnectivityManager;
	class ConnectivityManager
		: public cpp_object<ConnectivityManager>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)

		ConnectivityManager(jobject jobj)
		: cpp_object<ConnectivityManager>(jobj)
		{
		}

		static cpp_boolean isNetworkTypeValid(cpp_int const&);
		void setNetworkPreference(cpp_int const&);
		cpp_int getNetworkPreference();
		local_ref< android::net::NetworkInfo > getActiveNetworkInfo();
		local_ref< android::net::NetworkInfo > getNetworkInfo(cpp_int const&);
		local_ref< cpp_object_array<android::net::NetworkInfo, 1> > getAllNetworkInfo();
		cpp_int startUsingNetworkFeature(cpp_int const&, local_ref< java::lang::String > const&);
		cpp_int stopUsingNetworkFeature(cpp_int const&, local_ref< java::lang::String > const&);
		cpp_boolean requestRouteToHost(cpp_int const&, cpp_int const&);
		cpp_boolean getBackgroundDataSetting();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > CONNECTIVITY_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_NETWORK_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_IS_FAILOVER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_OTHER_NETWORK_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_NO_CONNECTIVITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_REASON;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXTRA_EXTRA_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_BACKGROUND_DATA_SETTING_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > TYPE_MOBILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > TYPE_WIFI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > TYPE_MOBILE_MMS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > TYPE_MOBILE_SUPL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > TYPE_MOBILE_DUN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > TYPE_MOBILE_HIPRI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > TYPE_WIMAX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > DEFAULT_NETWORK_PREFERENCE;
	}; //class ConnectivityManager

} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_IMPL
#define J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::net::ConnectivityManager > create< android::net::ConnectivityManager>()
{
	return local_ref< android::net::ConnectivityManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::ConnectivityManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::ConnectivityManager::J2CPP_CLASS_NAME, android::net::ConnectivityManager::J2CPP_METHOD_NAME(0), android::net::ConnectivityManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::net::ConnectivityManager::isNetworkTypeValid(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void android::net::ConnectivityManager::setNetworkPreference(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::net::ConnectivityManager::getNetworkPreference()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< android::net::NetworkInfo > android::net::ConnectivityManager::getActiveNetworkInfo()
{
	return local_ref< android::net::NetworkInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< android::net::NetworkInfo > android::net::ConnectivityManager::getNetworkInfo(cpp_int const &a0)
{
	return local_ref< android::net::NetworkInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<android::net::NetworkInfo, 1> > android::net::ConnectivityManager::getAllNetworkInfo()
{
	return local_ref< cpp_object_array<android::net::NetworkInfo, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int android::net::ConnectivityManager::startUsingNetworkFeature(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::net::ConnectivityManager::stopUsingNetworkFeature(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::net::ConnectivityManager::requestRouteToHost(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::net::ConnectivityManager::getBackgroundDataSetting()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(0),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::CONNECTIVITY_ACTION;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(1),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_NETWORK_INFO;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(2),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_IS_FAILOVER;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(3),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_OTHER_NETWORK_INFO;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(4),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_NO_CONNECTIVITY;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(5),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_REASON;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(6),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::EXTRA_EXTRA_INFO;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(7),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::net::ConnectivityManager::ACTION_BACKGROUND_DATA_SETTING_CHANGED;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(8),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::net::ConnectivityManager::TYPE_MOBILE;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(9),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::net::ConnectivityManager::TYPE_WIFI;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(10),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> android::net::ConnectivityManager::TYPE_MOBILE_MMS;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(11),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> android::net::ConnectivityManager::TYPE_MOBILE_SUPL;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(12),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> android::net::ConnectivityManager::TYPE_MOBILE_DUN;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(13),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::net::ConnectivityManager::TYPE_MOBILE_HIPRI;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(14),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> android::net::ConnectivityManager::TYPE_WIMAX;

static_field<
	android::net::ConnectivityManager::J2CPP_CLASS_NAME,
	android::net::ConnectivityManager::J2CPP_FIELD_NAME(15),
	android::net::ConnectivityManager::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> android::net::ConnectivityManager::DEFAULT_NETWORK_PREFERENCE;


J2CPP_DEFINE_CLASS(android::net::ConnectivityManager,"android/net/ConnectivityManager")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,1,"isNetworkTypeValid","(I)Z")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,2,"setNetworkPreference","(I)V")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,3,"getNetworkPreference","()I")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,4,"getActiveNetworkInfo","()Landroid/net/NetworkInfo;")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,5,"getNetworkInfo","(I)Landroid/net/NetworkInfo;")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,6,"getAllNetworkInfo","()[android.net.NetworkInfo")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,7,"startUsingNetworkFeature","(ILjava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,8,"stopUsingNetworkFeature","(ILjava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,9,"requestRouteToHost","(II)Z")
J2CPP_DEFINE_METHOD(android::net::ConnectivityManager,10,"getBackgroundDataSetting","()Z")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,0,"CONNECTIVITY_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,1,"EXTRA_NETWORK_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,2,"EXTRA_IS_FAILOVER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,3,"EXTRA_OTHER_NETWORK_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,4,"EXTRA_NO_CONNECTIVITY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,5,"EXTRA_REASON","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,6,"EXTRA_EXTRA_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,7,"ACTION_BACKGROUND_DATA_SETTING_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,8,"TYPE_MOBILE","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,9,"TYPE_WIFI","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,10,"TYPE_MOBILE_MMS","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,11,"TYPE_MOBILE_SUPL","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,12,"TYPE_MOBILE_DUN","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,13,"TYPE_MOBILE_HIPRI","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,14,"TYPE_WIMAX","I")
J2CPP_DEFINE_FIELD(android::net::ConnectivityManager,15,"DEFAULT_NETWORK_PREFERENCE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_CONNECTIVITYMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
