/*================================================================================
  code generated by: java2cpp
  class: android.content.ServiceConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SERVICECONNECTION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SERVICECONNECTION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }


#include <android/content/ComponentName.hpp>
#include <android/os/IBinder.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ServiceConnection;
	class ServiceConnection
		: public cpp_object<ServiceConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ServiceConnection(jobject jobj)
		: cpp_object<ServiceConnection>(jobj)
		{
		}

		void onServiceConnected(local_ref< android::content::ComponentName > const&, local_ref< android::os::IBinder > const&);
		void onServiceDisconnected(local_ref< android::content::ComponentName > const&);
	}; //class ServiceConnection

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SERVICECONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SERVICECONNECTION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SERVICECONNECTION_HPP_IMPL

namespace j2cpp {


void android::content::ServiceConnection::onServiceConnected(local_ref< android::content::ComponentName > const &a0, local_ref< android::os::IBinder > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::ServiceConnection::onServiceDisconnected(local_ref< android::content::ComponentName > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::ServiceConnection,"android/content/ServiceConnection")
J2CPP_DEFINE_METHOD(android::content::ServiceConnection,0,"onServiceConnected","(Landroid/content/ComponentName;Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::content::ServiceConnection,1,"onServiceDisconnected","(Landroid/content/ComponentName;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SERVICECONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
