/*================================================================================
  code generated by: java2cpp
  class: android.content.SyncResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCRESULT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SYNCRESULT_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace content { class SyncStats; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/content/SyncStats.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class SyncResult;
	class SyncResult
		: public cpp_object<SyncResult>
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

		SyncResult(jobject jobj)
		: cpp_object<SyncResult>(jobj)
		, syncAlreadyInProgress(jobj)
		, tooManyDeletions(jobj)
		, tooManyRetries(jobj)
		, databaseError(jobj)
		, fullSyncRequested(jobj)
		, partialSyncUnavailable(jobj)
		, moreRecordsToGet(jobj)
		, delayUntil(jobj)
		, stats(jobj)
		{
		}

		cpp_boolean hasHardError();
		cpp_boolean hasSoftError();
		cpp_boolean hasError();
		cpp_boolean madeSomeProgress();
		void clear();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toDebugString();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_boolean > syncAlreadyInProgress;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_boolean > tooManyDeletions;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_boolean > tooManyRetries;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_boolean > databaseError;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_boolean > fullSyncRequested;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_boolean > partialSyncUnavailable;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_boolean > moreRecordsToGet;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_long > delayUntil;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::content::SyncStats > > stats;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::content::SyncResult > > ALREADY_IN_PROGRESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class SyncResult

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCRESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SYNCRESULT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SYNCRESULT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::SyncResult > create< android::content::SyncResult>()
{
	return local_ref< android::content::SyncResult >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::SyncResult::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::SyncResult::J2CPP_CLASS_NAME, android::content::SyncResult::J2CPP_METHOD_NAME(0), android::content::SyncResult::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::content::SyncResult::hasHardError()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean android::content::SyncResult::hasSoftError()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean android::content::SyncResult::hasError()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::content::SyncResult::madeSomeProgress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::content::SyncResult::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::content::SyncResult::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::content::SyncResult::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::SyncResult::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::content::SyncResult::toDebugString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


static_field<
	android::content::SyncResult::J2CPP_CLASS_NAME,
	android::content::SyncResult::J2CPP_FIELD_NAME(9),
	android::content::SyncResult::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::content::SyncResult >
> android::content::SyncResult::ALREADY_IN_PROGRESS;

static_field<
	android::content::SyncResult::J2CPP_CLASS_NAME,
	android::content::SyncResult::J2CPP_FIELD_NAME(10),
	android::content::SyncResult::J2CPP_FIELD_SIGNATURE(10),
	local_ref< android::os::Parcelable_::Creator >
> android::content::SyncResult::CREATOR;


J2CPP_DEFINE_CLASS(android::content::SyncResult,"android/content/SyncResult")
J2CPP_DEFINE_METHOD(android::content::SyncResult,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::SyncResult,1,"hasHardError","()Z")
J2CPP_DEFINE_METHOD(android::content::SyncResult,2,"hasSoftError","()Z")
J2CPP_DEFINE_METHOD(android::content::SyncResult,3,"hasError","()Z")
J2CPP_DEFINE_METHOD(android::content::SyncResult,4,"madeSomeProgress","()Z")
J2CPP_DEFINE_METHOD(android::content::SyncResult,5,"clear","()V")
J2CPP_DEFINE_METHOD(android::content::SyncResult,6,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::SyncResult,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::SyncResult,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::SyncResult,9,"toDebugString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::SyncResult,10,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::SyncResult,0,"syncAlreadyInProgress","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,1,"tooManyDeletions","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,2,"tooManyRetries","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,3,"databaseError","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,4,"fullSyncRequested","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,5,"partialSyncUnavailable","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,6,"moreRecordsToGet","Z")
J2CPP_DEFINE_FIELD(android::content::SyncResult,7,"delayUntil","J")
J2CPP_DEFINE_FIELD(android::content::SyncResult,8,"stats","Landroid/content/SyncStats;")
J2CPP_DEFINE_FIELD(android::content::SyncResult,9,"ALREADY_IN_PROGRESS","Landroid/content/SyncResult;")
J2CPP_DEFINE_FIELD(android::content::SyncResult,10,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SYNCRESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
