/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.HandlerThread
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_HANDLERTHREAD_HPP_DECL
#define J2CPP_ANDROID_OS_HANDLERTHREAD_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Looper; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }


#include <android/os/Looper.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>


namespace j2cpp {

namespace android { namespace os {

	class HandlerThread;
	class HandlerThread
		: public object<HandlerThread>
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

		explicit HandlerThread(jobject jobj)
		: object<HandlerThread>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Thread>() const;
		operator local_ref<java::lang::Runnable>() const;


		HandlerThread(local_ref< java::lang::String > const&);
		HandlerThread(local_ref< java::lang::String > const&, jint);
		void run();
		local_ref< android::os::Looper > getLooper();
		jboolean quit();
		jint getThreadId();
	}; //class HandlerThread

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_HANDLERTHREAD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_HANDLERTHREAD_HPP_IMPL
#define J2CPP_ANDROID_OS_HANDLERTHREAD_HPP_IMPL

namespace j2cpp {



android::os::HandlerThread::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::os::HandlerThread::operator local_ref<java::lang::Thread>() const
{
	return local_ref<java::lang::Thread>(get_jobject());
}

android::os::HandlerThread::operator local_ref<java::lang::Runnable>() const
{
	return local_ref<java::lang::Runnable>(get_jobject());
}


android::os::HandlerThread::HandlerThread(local_ref< java::lang::String > const &a0)
: object<android::os::HandlerThread>(
	call_new_object<
		android::os::HandlerThread::J2CPP_CLASS_NAME,
		android::os::HandlerThread::J2CPP_METHOD_NAME(0),
		android::os::HandlerThread::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::os::HandlerThread::HandlerThread(local_ref< java::lang::String > const &a0, jint a1)
: object<android::os::HandlerThread>(
	call_new_object<
		android::os::HandlerThread::J2CPP_CLASS_NAME,
		android::os::HandlerThread::J2CPP_METHOD_NAME(1),
		android::os::HandlerThread::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



void android::os::HandlerThread::run()
{
	return call_method<
		android::os::HandlerThread::J2CPP_CLASS_NAME,
		android::os::HandlerThread::J2CPP_METHOD_NAME(3),
		android::os::HandlerThread::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

local_ref< android::os::Looper > android::os::HandlerThread::getLooper()
{
	return call_method<
		android::os::HandlerThread::J2CPP_CLASS_NAME,
		android::os::HandlerThread::J2CPP_METHOD_NAME(4),
		android::os::HandlerThread::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::os::Looper >
	>(get_jobject());
}

jboolean android::os::HandlerThread::quit()
{
	return call_method<
		android::os::HandlerThread::J2CPP_CLASS_NAME,
		android::os::HandlerThread::J2CPP_METHOD_NAME(5),
		android::os::HandlerThread::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

jint android::os::HandlerThread::getThreadId()
{
	return call_method<
		android::os::HandlerThread::J2CPP_CLASS_NAME,
		android::os::HandlerThread::J2CPP_METHOD_NAME(6),
		android::os::HandlerThread::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::HandlerThread,"android/os/HandlerThread")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,2,"onLooperPrepared","()V")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,3,"run","()V")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,4,"getLooper","()Landroid/os/Looper;")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,5,"quit","()Z")
J2CPP_DEFINE_METHOD(android::os::HandlerThread,6,"getThreadId","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_HANDLERTHREAD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
