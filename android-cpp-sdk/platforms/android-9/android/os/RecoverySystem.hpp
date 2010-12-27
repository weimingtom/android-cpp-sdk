/*================================================================================
  code generated by: java2cpp
  class: android.os.RecoverySystem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_RECOVERYSYSTEM_HPP_DECL
#define J2CPP_ANDROID_OS_RECOVERYSYSTEM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace os { namespace RecoverySystem_ { class ProgressListener; } } } }


#include <android/content/Context.hpp>
#include <android/os/RecoverySystem.hpp>
#include <java/io/File.hpp>


namespace j2cpp {

namespace android { namespace os {

	class RecoverySystem;
	namespace RecoverySystem_ {

		class ProgressListener;
		class ProgressListener
			: public cpp_object<ProgressListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			ProgressListener(jobject jobj)
			: cpp_object<ProgressListener>(jobj)
			{
			}

			void onProgress(cpp_int const&);
		}; //class ProgressListener

	} //namespace RecoverySystem_

	class RecoverySystem
		: public cpp_object<RecoverySystem>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		typedef RecoverySystem_::ProgressListener ProgressListener;

		RecoverySystem(jobject jobj)
		: cpp_object<RecoverySystem>(jobj)
		{
		}

		static void verifyPackage(local_ref< java::io::File > const&, local_ref< android::os::RecoverySystem_::ProgressListener > const&, local_ref< java::io::File > const&);
		static void installPackage(local_ref< android::content::Context > const&, local_ref< java::io::File > const&);
		static void rebootWipeUserData(local_ref< android::content::Context > const&);
	}; //class RecoverySystem

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_RECOVERYSYSTEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_RECOVERYSYSTEM_HPP_IMPL
#define J2CPP_ANDROID_OS_RECOVERYSYSTEM_HPP_IMPL

namespace j2cpp {



void android::os::RecoverySystem_::ProgressListener::onProgress(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::os::RecoverySystem_::ProgressListener,"android/os/RecoverySystem$ProgressListener")
J2CPP_DEFINE_METHOD(android::os::RecoverySystem_::ProgressListener,0,"onProgress","(I)V")


template <>
local_ref< android::os::RecoverySystem > create< android::os::RecoverySystem>()
{
	return local_ref< android::os::RecoverySystem >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::RecoverySystem::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::RecoverySystem::J2CPP_CLASS_NAME, android::os::RecoverySystem::J2CPP_METHOD_NAME(0), android::os::RecoverySystem::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::os::RecoverySystem::verifyPackage(local_ref< java::io::File > const &a0, local_ref< android::os::RecoverySystem_::ProgressListener > const &a1, local_ref< java::io::File > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::os::RecoverySystem::installPackage(local_ref< android::content::Context > const &a0, local_ref< java::io::File > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::os::RecoverySystem::rebootWipeUserData(local_ref< android::content::Context > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::os::RecoverySystem,"android/os/RecoverySystem")
J2CPP_DEFINE_METHOD(android::os::RecoverySystem,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::RecoverySystem,1,"verifyPackage","(Ljava/io/File;Landroid/os/RecoverySystem$ProgressListener;Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(android::os::RecoverySystem,2,"installPackage","(Landroid/content/Context;Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(android::os::RecoverySystem,3,"rebootWipeUserData","(Landroid/content/Context;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_RECOVERYSYSTEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
