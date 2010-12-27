/*================================================================================
  code generated by: java2cpp
  class: android.content.IntentSender
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_INTENTSENDER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_INTENTSENDER_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Handler; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { namespace IntentSender_ { class OnFinished; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/content/IntentSender.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/Handler.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class IntentSender;
	namespace IntentSender_ {

		class SendIntentException;
		class SendIntentException
			: public cpp_object<SendIntentException>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			SendIntentException(jobject jobj)
			: cpp_object<SendIntentException>(jobj)
			{
			}

		}; //class SendIntentException

		class OnFinished;
		class OnFinished
			: public cpp_object<OnFinished>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnFinished(jobject jobj)
			: cpp_object<OnFinished>(jobj)
			{
			}

			void onSendFinished(local_ref< android::content::IntentSender > const&, local_ref< android::content::Intent > const&, cpp_int const&, local_ref< java::lang::String > const&, local_ref< android::os::Bundle > const&);
		}; //class OnFinished

	} //namespace IntentSender_

	class IntentSender
		: public cpp_object<IntentSender>
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
		J2CPP_DECLARE_FIELD(0)

		typedef IntentSender_::SendIntentException SendIntentException;
		typedef IntentSender_::OnFinished OnFinished;

		IntentSender(jobject jobj)
		: cpp_object<IntentSender>(jobj)
		{
		}

		void sendIntent(local_ref< android::content::Context > const&, cpp_int const&, local_ref< android::content::Intent > const&, local_ref< android::content::IntentSender_::OnFinished > const&, local_ref< android::os::Handler > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		static void writeIntentSenderOrNullToParcel(local_ref< android::content::IntentSender > const&, local_ref< android::os::Parcel > const&);
		static local_ref< android::content::IntentSender > readIntentSenderOrNullFromParcel(local_ref< android::os::Parcel > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class IntentSender

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_INTENTSENDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_INTENTSENDER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_INTENTSENDER_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::content::IntentSender_::SendIntentException > create< android::content::IntentSender_::SendIntentException>()
{
	return local_ref< android::content::IntentSender_::SendIntentException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::IntentSender_::SendIntentException::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::IntentSender_::SendIntentException::J2CPP_CLASS_NAME, android::content::IntentSender_::SendIntentException::J2CPP_METHOD_NAME(0), android::content::IntentSender_::SendIntentException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::content::IntentSender_::SendIntentException > create< android::content::IntentSender_::SendIntentException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::content::IntentSender_::SendIntentException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::IntentSender_::SendIntentException::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::IntentSender_::SendIntentException::J2CPP_CLASS_NAME, android::content::IntentSender_::SendIntentException::J2CPP_METHOD_NAME(1), android::content::IntentSender_::SendIntentException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::content::IntentSender_::SendIntentException > create< android::content::IntentSender_::SendIntentException>(local_ref< java::lang::Exception > const &a0)
{
	return local_ref< android::content::IntentSender_::SendIntentException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::IntentSender_::SendIntentException::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::IntentSender_::SendIntentException::J2CPP_CLASS_NAME, android::content::IntentSender_::SendIntentException::J2CPP_METHOD_NAME(2), android::content::IntentSender_::SendIntentException::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::IntentSender_::SendIntentException,"android/content/IntentSender$SendIntentException")
J2CPP_DEFINE_METHOD(android::content::IntentSender_::SendIntentException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::IntentSender_::SendIntentException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::IntentSender_::SendIntentException,2,"<init>","(Ljava/lang/Exception;)V")

void android::content::IntentSender_::OnFinished::onSendFinished(local_ref< android::content::IntentSender > const &a0, local_ref< android::content::Intent > const &a1, cpp_int const &a2, local_ref< java::lang::String > const &a3, local_ref< android::os::Bundle > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::IntentSender_::OnFinished,"android/content/IntentSender$OnFinished")
J2CPP_DEFINE_METHOD(android::content::IntentSender_::OnFinished,0,"onSendFinished","(Landroid/content/IntentSender;Landroid/content/Intent;ILjava/lang/String;Landroid/os/Bundle;)V")


template <>
local_ref< android::content::IntentSender > create< android::content::IntentSender>()
{
	return local_ref< android::content::IntentSender >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::IntentSender::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::IntentSender::J2CPP_CLASS_NAME, android::content::IntentSender::J2CPP_METHOD_NAME(0), android::content::IntentSender::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::content::IntentSender::sendIntent(local_ref< android::content::Context > const &a0, cpp_int const &a1, local_ref< android::content::Intent > const &a2, local_ref< android::content::IntentSender_::OnFinished > const &a3, local_ref< android::os::Handler > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

cpp_boolean android::content::IntentSender::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::IntentSender::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > android::content::IntentSender::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::content::IntentSender::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::content::IntentSender::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::IntentSender::writeIntentSenderOrNullToParcel(local_ref< android::content::IntentSender > const &a0, local_ref< android::os::Parcel > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::IntentSender > android::content::IntentSender::readIntentSenderOrNullFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::content::IntentSender >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::content::IntentSender::J2CPP_CLASS_NAME,
	android::content::IntentSender::J2CPP_FIELD_NAME(0),
	android::content::IntentSender::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::IntentSender::CREATOR;


J2CPP_DEFINE_CLASS(android::content::IntentSender,"android/content/IntentSender")
J2CPP_DEFINE_METHOD(android::content::IntentSender,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::IntentSender,1,"sendIntent","(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;)V")
J2CPP_DEFINE_METHOD(android::content::IntentSender,2,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::content::IntentSender,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::content::IntentSender,4,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::IntentSender,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::IntentSender,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::IntentSender,7,"writeIntentSenderOrNullToParcel","(Landroid/content/IntentSender;Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::IntentSender,8,"readIntentSenderOrNullFromParcel","(Landroid/os/Parcel;)Landroid/content/IntentSender;")
J2CPP_DEFINE_METHOD(android::content::IntentSender,9,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::IntentSender,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_INTENTSENDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
