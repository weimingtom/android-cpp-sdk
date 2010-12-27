/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.ResolveInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace content { class IntentFilter; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ActivityInfo; } } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class ServiceInfo; } } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/IntentFilter.hpp>
#include <android/content/pm/ActivityInfo.hpp>
#include <android/content/pm/PackageManager.hpp>
#include <android/content/pm/ServiceInfo.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/Printer.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class ResolveInfo;
	namespace ResolveInfo_ {

		class DisplayNameComparator;
		class DisplayNameComparator
			: public cpp_object<DisplayNameComparator>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			DisplayNameComparator(jobject jobj)
			: cpp_object<DisplayNameComparator>(jobj)
			{
			}

			cpp_int compare(local_ref< android::content::pm::ResolveInfo > const&, local_ref< android::content::pm::ResolveInfo > const&);
			cpp_int compare(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		}; //class DisplayNameComparator

	} //namespace ResolveInfo_

	class ResolveInfo
		: public cpp_object<ResolveInfo>
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

		typedef ResolveInfo_::DisplayNameComparator DisplayNameComparator;

		ResolveInfo(jobject jobj)
		: cpp_object<ResolveInfo>(jobj)
		, activityInfo(jobj)
		, serviceInfo(jobj)
		, filter(jobj)
		, priority(jobj)
		, preferredOrder(jobj)
		, match(jobj)
		, specificIndex(jobj)
		, isDefault(jobj)
		, labelRes(jobj)
		, nonLocalizedLabel(jobj)
		, icon(jobj)
		, resolvePackageName(jobj)
		{
		}

		local_ref< java::lang::CharSequence > loadLabel(local_ref< android::content::pm::PackageManager > const&);
		local_ref< android::graphics::drawable::Drawable > loadIcon(local_ref< android::content::pm::PackageManager > const&);
		cpp_int getIconResource();
		void dump(local_ref< android::util::Printer > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::content::pm::ActivityInfo > > activityInfo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::content::pm::ServiceInfo > > serviceInfo;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::content::IntentFilter > > filter;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > priority;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > preferredOrder;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > match;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > specificIndex;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_boolean > isDefault;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > labelRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::CharSequence > > nonLocalizedLabel;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > icon;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > resolvePackageName;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ResolveInfo

} //namespace pm
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::content::pm::ResolveInfo_::DisplayNameComparator > create< android::content::pm::ResolveInfo_::DisplayNameComparator>(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::content::pm::ResolveInfo_::DisplayNameComparator >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_CLASS_NAME, android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_NAME(0), android::content::pm::ResolveInfo_::DisplayNameComparator::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::pm::ResolveInfo_::DisplayNameComparator::compare(local_ref< android::content::pm::ResolveInfo > const &a0, local_ref< android::content::pm::ResolveInfo > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::pm::ResolveInfo_::DisplayNameComparator::compare(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::pm::ResolveInfo_::DisplayNameComparator,"android/content/pm/ResolveInfo$DisplayNameComparator")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo_::DisplayNameComparator,0,"<init>","(Landroid/content/pm/PackageManager;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo_::DisplayNameComparator,1,"compare","(Landroid/content/pm/ResolveInfo;Landroid/content/pm/ResolveInfo;)I")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo_::DisplayNameComparator,2,"compare","(Ljava/lang/Object;Ljava/lang/Object;)I")


template <>
local_ref< android::content::pm::ResolveInfo > create< android::content::pm::ResolveInfo>()
{
	return local_ref< android::content::pm::ResolveInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::ResolveInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::ResolveInfo::J2CPP_CLASS_NAME, android::content::pm::ResolveInfo::J2CPP_METHOD_NAME(0), android::content::pm::ResolveInfo::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::pm::ResolveInfo::loadLabel(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::content::pm::ResolveInfo::loadIcon(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::pm::ResolveInfo::getIconResource()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::content::pm::ResolveInfo::dump(local_ref< android::util::Printer > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::pm::ResolveInfo::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::content::pm::ResolveInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::content::pm::ResolveInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::content::pm::ResolveInfo::J2CPP_CLASS_NAME,
	android::content::pm::ResolveInfo::J2CPP_FIELD_NAME(12),
	android::content::pm::ResolveInfo::J2CPP_FIELD_SIGNATURE(12),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::ResolveInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::ResolveInfo,"android/content/pm/ResolveInfo")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,1,"loadLabel","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,2,"loadIcon","(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,3,"getIconResource","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,4,"dump","(Landroid/util/Printer;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,6,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::ResolveInfo,8,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,0,"activityInfo","Landroid/content/pm/ActivityInfo;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,1,"serviceInfo","Landroid/content/pm/ServiceInfo;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,2,"filter","Landroid/content/IntentFilter;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,3,"priority","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,4,"preferredOrder","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,5,"match","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,6,"specificIndex","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,7,"isDefault","Z")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,8,"labelRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,9,"nonLocalizedLabel","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,10,"icon","I")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,11,"resolvePackageName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::ResolveInfo,12,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_RESOLVEINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
