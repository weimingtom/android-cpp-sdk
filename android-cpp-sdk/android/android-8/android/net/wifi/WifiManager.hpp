/*================================================================================
  code generated by: java2cpp
  class: android.net.wifi.WifiManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_WIFI_WIFIMANAGER_HPP_DECL
#define J2CPP_ANDROID_NET_WIFI_WIFIMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace net { class DhcpInfo; } } }
namespace j2cpp { namespace android { namespace net { namespace wifi { namespace WifiManager_ { class MulticastLock; } } } } }
namespace j2cpp { namespace android { namespace net { namespace wifi { class WifiConfiguration; } } } }
namespace j2cpp { namespace android { namespace net { namespace wifi { namespace WifiManager_ { class WifiLock; } } } } }
namespace j2cpp { namespace android { namespace net { namespace wifi { class WifiInfo; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/net/DhcpInfo.hpp>
#include <android/net/wifi/WifiConfiguration.hpp>
#include <android/net/wifi/WifiInfo.hpp>
#include <android/net/wifi/WifiManager.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace net { namespace wifi {

	class WifiManager;
	namespace WifiManager_ {

		class MulticastLock;
		class MulticastLock
			: public cpp_object<MulticastLock>
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
			J2CPP_DECLARE_FIELD(0)

			MulticastLock(jobject jobj)
			: cpp_object<MulticastLock>(jobj)
			{
			}

			void acquire();
			void release();
			void setReferenceCounted(cpp_boolean const&);
			cpp_boolean isHeld();
			local_ref< java::lang::String > toString();

		}; //class MulticastLock

		class WifiLock;
		class WifiLock
			: public cpp_object<WifiLock>
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
			J2CPP_DECLARE_FIELD(0)

			WifiLock(jobject jobj)
			: cpp_object<WifiLock>(jobj)
			{
			}

			void acquire();
			void release();
			void setReferenceCounted(cpp_boolean const&);
			cpp_boolean isHeld();
			local_ref< java::lang::String > toString();

		}; //class WifiLock

	} //namespace WifiManager_

	class WifiManager
		: public cpp_object<WifiManager>
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
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)

		typedef WifiManager_::MulticastLock MulticastLock;
		typedef WifiManager_::WifiLock WifiLock;

		WifiManager(jobject jobj)
		: cpp_object<WifiManager>(jobj)
		{
		}

		local_ref< java::util::List > getConfiguredNetworks();
		cpp_int addNetwork(local_ref< android::net::wifi::WifiConfiguration > const&);
		cpp_int updateNetwork(local_ref< android::net::wifi::WifiConfiguration > const&);
		cpp_boolean removeNetwork(cpp_int const&);
		cpp_boolean enableNetwork(cpp_int const&, cpp_boolean const&);
		cpp_boolean disableNetwork(cpp_int const&);
		cpp_boolean disconnect();
		cpp_boolean reconnect();
		cpp_boolean reassociate();
		cpp_boolean pingSupplicant();
		cpp_boolean startScan();
		local_ref< android::net::wifi::WifiInfo > getConnectionInfo();
		local_ref< java::util::List > getScanResults();
		cpp_boolean saveConfiguration();
		local_ref< android::net::DhcpInfo > getDhcpInfo();
		cpp_boolean setWifiEnabled(cpp_boolean const&);
		cpp_int getWifiState();
		cpp_boolean isWifiEnabled();
		static cpp_int calculateSignalLevel(cpp_int const&, cpp_int const&);
		static cpp_int compareSignalLevel(cpp_int const&, cpp_int const&);
		local_ref< android::net::wifi::WifiManager_::WifiLock > createWifiLock(cpp_int const&, local_ref< java::lang::String > const&);
		local_ref< android::net::wifi::WifiManager_::WifiLock > createWifiLock(local_ref< java::lang::String > const&);
		local_ref< android::net::wifi::WifiManager_::MulticastLock > createMulticastLock(local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ERROR_AUTHENTICATING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > WIFI_STATE_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_WIFI_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_PREVIOUS_WIFI_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > WIFI_STATE_DISABLING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > WIFI_STATE_DISABLED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > WIFI_STATE_ENABLING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > WIFI_STATE_ENABLED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > WIFI_STATE_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > SUPPLICANT_CONNECTION_CHANGE_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > EXTRA_SUPPLICANT_CONNECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > NETWORK_STATE_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > EXTRA_NETWORK_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > EXTRA_BSSID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > SUPPLICANT_STATE_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::String > > EXTRA_NEW_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< java::lang::String > > EXTRA_SUPPLICANT_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), local_ref< java::lang::String > > SCAN_RESULTS_AVAILABLE_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), local_ref< java::lang::String > > RSSI_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), local_ref< java::lang::String > > EXTRA_NEW_RSSI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), local_ref< java::lang::String > > NETWORK_IDS_CHANGED_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), local_ref< java::lang::String > > ACTION_PICK_WIFI_NETWORK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), cpp_int > WIFI_MODE_FULL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), cpp_int > WIFI_MODE_SCAN_ONLY;
	}; //class WifiManager

} //namespace wifi
} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_WIFI_WIFIMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_WIFI_WIFIMANAGER_HPP_IMPL
#define J2CPP_ANDROID_NET_WIFI_WIFIMANAGER_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::net::wifi::WifiManager_::MulticastLock > create< android::net::wifi::WifiManager_::MulticastLock>(local_ref< android::net::wifi::WifiManager > const &a0)
{
	return local_ref< android::net::wifi::WifiManager_::MulticastLock >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::wifi::WifiManager_::MulticastLock::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::wifi::WifiManager_::MulticastLock::J2CPP_CLASS_NAME, android::net::wifi::WifiManager_::MulticastLock::J2CPP_METHOD_NAME(0), android::net::wifi::WifiManager_::MulticastLock::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::wifi::WifiManager_::MulticastLock::acquire()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::net::wifi::WifiManager_::MulticastLock::release()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::net::wifi::WifiManager_::MulticastLock::setReferenceCounted(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager_::MulticastLock::isHeld()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > android::net::wifi::WifiManager_::MulticastLock::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}




J2CPP_DEFINE_CLASS(android::net::wifi::WifiManager_::MulticastLock,"android/net/wifi/WifiManager$MulticastLock")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,0,"<init>","(Landroid/net/wifi/WifiManager;)V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,1,"acquire","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,2,"release","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,3,"setReferenceCounted","(Z)V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,4,"isHeld","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::MulticastLock,6,"finalize","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager_::MulticastLock,0,"this$0","Landroid/net/wifi/WifiManager;")

template <>
local_ref< android::net::wifi::WifiManager_::WifiLock > create< android::net::wifi::WifiManager_::WifiLock>(local_ref< android::net::wifi::WifiManager > const &a0)
{
	return local_ref< android::net::wifi::WifiManager_::WifiLock >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::wifi::WifiManager_::WifiLock::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::wifi::WifiManager_::WifiLock::J2CPP_CLASS_NAME, android::net::wifi::WifiManager_::WifiLock::J2CPP_METHOD_NAME(0), android::net::wifi::WifiManager_::WifiLock::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::net::wifi::WifiManager_::WifiLock::acquire()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::net::wifi::WifiManager_::WifiLock::release()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::net::wifi::WifiManager_::WifiLock::setReferenceCounted(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager_::WifiLock::isHeld()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > android::net::wifi::WifiManager_::WifiLock::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}




J2CPP_DEFINE_CLASS(android::net::wifi::WifiManager_::WifiLock,"android/net/wifi/WifiManager$WifiLock")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,0,"<init>","(Landroid/net/wifi/WifiManager;)V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,1,"acquire","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,2,"release","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,3,"setReferenceCounted","(Z)V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,4,"isHeld","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager_::WifiLock,6,"finalize","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager_::WifiLock,0,"this$0","Landroid/net/wifi/WifiManager;")


template <>
local_ref< android::net::wifi::WifiManager > create< android::net::wifi::WifiManager>()
{
	return local_ref< android::net::wifi::WifiManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::wifi::WifiManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::wifi::WifiManager::J2CPP_CLASS_NAME, android::net::wifi::WifiManager::J2CPP_METHOD_NAME(0), android::net::wifi::WifiManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::util::List > android::net::wifi::WifiManager::getConfiguredNetworks()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::net::wifi::WifiManager::addNetwork(local_ref< android::net::wifi::WifiConfiguration > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::net::wifi::WifiManager::updateNetwork(local_ref< android::net::wifi::WifiConfiguration > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::removeNetwork(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::enableNetwork(cpp_int const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::disableNetwork(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::disconnect()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::reconnect()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::reassociate()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::pingSupplicant()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::startScan()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< android::net::wifi::WifiInfo > android::net::wifi::WifiManager::getConnectionInfo()
{
	return local_ref< android::net::wifi::WifiInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::util::List > android::net::wifi::WifiManager::getScanResults()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::saveConfiguration()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< android::net::DhcpInfo > android::net::wifi::WifiManager::getDhcpInfo()
{
	return local_ref< android::net::DhcpInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::setWifiEnabled(cpp_boolean const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::net::wifi::WifiManager::getWifiState()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean android::net::wifi::WifiManager::isWifiEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int android::net::wifi::WifiManager::calculateSignalLevel(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::net::wifi::WifiManager::compareSignalLevel(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::net::wifi::WifiManager_::WifiLock > android::net::wifi::WifiManager::createWifiLock(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::net::wifi::WifiManager_::WifiLock >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::net::wifi::WifiManager_::WifiLock > android::net::wifi::WifiManager::createWifiLock(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::net::wifi::WifiManager_::WifiLock >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::wifi::WifiManager_::MulticastLock > android::net::wifi::WifiManager::createMulticastLock(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::net::wifi::WifiManager_::MulticastLock >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::net::wifi::WifiManager::ERROR_AUTHENTICATING;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::WIFI_STATE_CHANGED_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_WIFI_STATE;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_PREVIOUS_WIFI_STATE;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(4),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::net::wifi::WifiManager::WIFI_STATE_DISABLING;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(5),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::net::wifi::WifiManager::WIFI_STATE_DISABLED;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(6),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::net::wifi::WifiManager::WIFI_STATE_ENABLING;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(7),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::net::wifi::WifiManager::WIFI_STATE_ENABLED;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(8),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::net::wifi::WifiManager::WIFI_STATE_UNKNOWN;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(9),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::SUPPLICANT_CONNECTION_CHANGE_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(10),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_SUPPLICANT_CONNECTED;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(11),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::NETWORK_STATE_CHANGED_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(12),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_NETWORK_INFO;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(13),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_BSSID;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(14),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::SUPPLICANT_STATE_CHANGED_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(15),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_NEW_STATE;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(16),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(16),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_SUPPLICANT_ERROR;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(17),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(17),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::SCAN_RESULTS_AVAILABLE_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(18),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(18),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::RSSI_CHANGED_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(19),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(19),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::EXTRA_NEW_RSSI;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(20),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(20),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::NETWORK_IDS_CHANGED_ACTION;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(21),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(21),
	local_ref< java::lang::String >
> android::net::wifi::WifiManager::ACTION_PICK_WIFI_NETWORK;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(22),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(22),
	cpp_int
> android::net::wifi::WifiManager::WIFI_MODE_FULL;

static_field<
	android::net::wifi::WifiManager::J2CPP_CLASS_NAME,
	android::net::wifi::WifiManager::J2CPP_FIELD_NAME(23),
	android::net::wifi::WifiManager::J2CPP_FIELD_SIGNATURE(23),
	cpp_int
> android::net::wifi::WifiManager::WIFI_MODE_SCAN_ONLY;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiManager,"android/net/wifi/WifiManager")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,1,"getConfiguredNetworks","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,2,"addNetwork","(Landroid/net/wifi/WifiConfiguration;)I")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,3,"updateNetwork","(Landroid/net/wifi/WifiConfiguration;)I")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,4,"removeNetwork","(I)Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,5,"enableNetwork","(IZ)Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,6,"disableNetwork","(I)Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,7,"disconnect","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,8,"reconnect","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,9,"reassociate","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,10,"pingSupplicant","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,11,"startScan","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,12,"getConnectionInfo","()Landroid/net/wifi/WifiInfo;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,13,"getScanResults","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,14,"saveConfiguration","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,15,"getDhcpInfo","()Landroid/net/DhcpInfo;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,16,"setWifiEnabled","(Z)Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,17,"getWifiState","()I")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,18,"isWifiEnabled","()Z")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,19,"calculateSignalLevel","(II)I")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,20,"compareSignalLevel","(II)I")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,21,"createWifiLock","(ILjava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,22,"createWifiLock","(Ljava/lang/String;)Landroid/net/wifi/WifiManager$WifiLock;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiManager,23,"createMulticastLock","(Ljava/lang/String;)Landroid/net/wifi/WifiManager$MulticastLock;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,0,"ERROR_AUTHENTICATING","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,1,"WIFI_STATE_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,2,"EXTRA_WIFI_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,3,"EXTRA_PREVIOUS_WIFI_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,4,"WIFI_STATE_DISABLING","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,5,"WIFI_STATE_DISABLED","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,6,"WIFI_STATE_ENABLING","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,7,"WIFI_STATE_ENABLED","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,8,"WIFI_STATE_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,9,"SUPPLICANT_CONNECTION_CHANGE_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,10,"EXTRA_SUPPLICANT_CONNECTED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,11,"NETWORK_STATE_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,12,"EXTRA_NETWORK_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,13,"EXTRA_BSSID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,14,"SUPPLICANT_STATE_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,15,"EXTRA_NEW_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,16,"EXTRA_SUPPLICANT_ERROR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,17,"SCAN_RESULTS_AVAILABLE_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,18,"RSSI_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,19,"EXTRA_NEW_RSSI","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,20,"NETWORK_IDS_CHANGED_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,21,"ACTION_PICK_WIFI_NETWORK","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,22,"WIFI_MODE_FULL","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiManager,23,"WIFI_MODE_SCAN_ONLY","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_WIFI_WIFIMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
