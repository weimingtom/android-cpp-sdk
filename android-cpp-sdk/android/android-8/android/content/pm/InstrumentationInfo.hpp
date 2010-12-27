/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.InstrumentationInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_INSTRUMENTATIONINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_INSTRUMENTATIONINFO_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class InstrumentationInfo;
	class InstrumentationInfo
		: public cpp_object<InstrumentationInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		InstrumentationInfo(jobject jobj)
		: cpp_object<InstrumentationInfo>(jobj)
		, targetPackage(jobj)
		, sourceDir(jobj)
		, publicSourceDir(jobj)
		, dataDir(jobj)
		, handleProfiling(jobj)
		, functionalTest(jobj)
		{
		}

		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > targetPackage;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > sourceDir;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > publicSourceDir;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > dataDir;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_boolean > handleProfiling;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_boolean > functionalTest;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class InstrumentationInfo

} //namespace pm
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_INSTRUMENTATIONINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_INSTRUMENTATIONINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_INSTRUMENTATIONINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::pm::InstrumentationInfo > create< android::content::pm::InstrumentationInfo>()
{
	return local_ref< android::content::pm::InstrumentationInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::InstrumentationInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::InstrumentationInfo::J2CPP_CLASS_NAME, android::content::pm::InstrumentationInfo::J2CPP_METHOD_NAME(0), android::content::pm::InstrumentationInfo::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::content::pm::InstrumentationInfo > create< android::content::pm::InstrumentationInfo>(local_ref< android::content::pm::InstrumentationInfo > const &a0)
{
	return local_ref< android::content::pm::InstrumentationInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::InstrumentationInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::InstrumentationInfo::J2CPP_CLASS_NAME, android::content::pm::InstrumentationInfo::J2CPP_METHOD_NAME(1), android::content::pm::InstrumentationInfo::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::pm::InstrumentationInfo::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::content::pm::InstrumentationInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::content::pm::InstrumentationInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::content::pm::InstrumentationInfo::J2CPP_CLASS_NAME,
	android::content::pm::InstrumentationInfo::J2CPP_FIELD_NAME(6),
	android::content::pm::InstrumentationInfo::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::InstrumentationInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::InstrumentationInfo,"android/content/pm/InstrumentationInfo")
J2CPP_DEFINE_METHOD(android::content::pm::InstrumentationInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::InstrumentationInfo,1,"<init>","(Landroid/content/pm/InstrumentationInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::InstrumentationInfo,2,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::InstrumentationInfo,3,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::InstrumentationInfo,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::InstrumentationInfo,5,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,0,"targetPackage","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,1,"sourceDir","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,2,"publicSourceDir","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,3,"dataDir","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,4,"handleProfiling","Z")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,5,"functionalTest","Z")
J2CPP_DEFINE_FIELD(android::content::pm::InstrumentationInfo,6,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_INSTRUMENTATIONINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
