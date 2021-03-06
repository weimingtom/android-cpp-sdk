/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ComponentName
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_COMPONENTNAME_HPP_DECL
#define J2CPP_ANDROID_CONTENT_COMPONENTNAME_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <android/content/Context.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ComponentName;
	class ComponentName
		: public object<ComponentName>
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
		J2CPP_DECLARE_FIELD(0)

		explicit ComponentName(jobject jobj)
		: object<ComponentName>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Object>() const;


		ComponentName(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		ComponentName(local_ref< android::content::Context > const&, local_ref< java::lang::String > const&);
		ComponentName(local_ref< android::content::Context > const&, local_ref< java::lang::Class > const&);
		ComponentName(local_ref< android::os::Parcel > const&);
		local_ref< java::lang::String > getPackageName();
		local_ref< java::lang::String > getClassName();
		local_ref< java::lang::String > getShortClassName();
		local_ref< java::lang::String > flattenToString();
		local_ref< java::lang::String > flattenToShortString();
		static local_ref< android::content::ComponentName > unflattenFromString(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toShortString();
		local_ref< java::lang::String > toString();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jint compareTo(local_ref< android::content::ComponentName >  const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		static void writeToParcel(local_ref< android::content::ComponentName >  const&, local_ref< android::os::Parcel >  const&);
		static local_ref< android::content::ComponentName > readFromParcel(local_ref< android::os::Parcel >  const&);
		jint compareTo(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ComponentName

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_COMPONENTNAME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_COMPONENTNAME_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_COMPONENTNAME_HPP_IMPL

namespace j2cpp {



android::content::ComponentName::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::content::ComponentName::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

android::content::ComponentName::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::ComponentName::ComponentName(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<android::content::ComponentName>(
	call_new_object<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(0),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



android::content::ComponentName::ComponentName(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1)
: object<android::content::ComponentName>(
	call_new_object<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(1),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}



android::content::ComponentName::ComponentName(local_ref< android::content::Context > const &a0, local_ref< java::lang::Class > const &a1)
: object<android::content::ComponentName>(
	call_new_object<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(2),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



android::content::ComponentName::ComponentName(local_ref< android::os::Parcel > const &a0)
: object<android::content::ComponentName>(
	call_new_object<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(3),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


local_ref< java::lang::String > android::content::ComponentName::getPackageName()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(4),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::content::ComponentName::getClassName()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(5),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::content::ComponentName::getShortClassName()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(6),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::content::ComponentName::flattenToString()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(7),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::content::ComponentName::flattenToShortString()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(8),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< android::content::ComponentName > android::content::ComponentName::unflattenFromString(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(9),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::content::ComponentName >
	>(a0);
}

local_ref< java::lang::String > android::content::ComponentName::toShortString()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(10),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > android::content::ComponentName::toString()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(11),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jboolean android::content::ComponentName::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(12),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

jint android::content::ComponentName::hashCode()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(13),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(13), 
		jint
	>(get_jobject());
}

jint android::content::ComponentName::compareTo(local_ref< android::content::ComponentName > const &a0)
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(14),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject(), a0);
}

jint android::content::ComponentName::describeContents()
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(15),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(15), 
		jint
	>(get_jobject());
}

void android::content::ComponentName::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(16),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1);
}

void android::content::ComponentName::writeToParcel(local_ref< android::content::ComponentName > const &a0, local_ref< android::os::Parcel > const &a1)
{
	return call_static_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(17),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(a0, a1);
}

local_ref< android::content::ComponentName > android::content::ComponentName::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_static_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(18),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< android::content::ComponentName >
	>(a0);
}

jint android::content::ComponentName::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::content::ComponentName::J2CPP_CLASS_NAME,
		android::content::ComponentName::J2CPP_METHOD_NAME(19),
		android::content::ComponentName::J2CPP_METHOD_SIGNATURE(19), 
		jint
	>(get_jobject(), a0);
}



static_field<
	android::content::ComponentName::J2CPP_CLASS_NAME,
	android::content::ComponentName::J2CPP_FIELD_NAME(0),
	android::content::ComponentName::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::content::ComponentName::CREATOR;


J2CPP_DEFINE_CLASS(android::content::ComponentName,"android/content/ComponentName")
J2CPP_DEFINE_METHOD(android::content::ComponentName,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::ComponentName,1,"<init>","(Landroid/content/Context;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::ComponentName,2,"<init>","(Landroid/content/Context;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::content::ComponentName,3,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::ComponentName,4,"getPackageName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,5,"getClassName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,6,"getShortClassName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,7,"flattenToString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,8,"flattenToShortString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,9,"unflattenFromString","(Ljava/lang/String;)Landroid/content/ComponentName;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,10,"toShortString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,11,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,12,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::content::ComponentName,13,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::content::ComponentName,14,"compareTo","(Landroid/content/ComponentName;)I")
J2CPP_DEFINE_METHOD(android::content::ComponentName,15,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::ComponentName,16,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::ComponentName,17,"writeToParcel","(Landroid/content/ComponentName;Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::content::ComponentName,18,"readFromParcel","(Landroid/os/Parcel;)Landroid/content/ComponentName;")
J2CPP_DEFINE_METHOD(android::content::ComponentName,19,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::content::ComponentName,20,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::ComponentName,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_COMPONENTNAME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
