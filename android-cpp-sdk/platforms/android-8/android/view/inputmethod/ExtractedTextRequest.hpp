/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.ExtractedTextRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class ExtractedTextRequest;
	class ExtractedTextRequest
		: public object<ExtractedTextRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit ExtractedTextRequest(jobject jobj)
		: object<ExtractedTextRequest>(jobj)
		, token(jobj)
		, flags(jobj)
		, hintMaxLines(jobj)
		, hintMaxChars(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<java::lang::Object>() const;


		ExtractedTextRequest();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > token;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > flags;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > hintMaxLines;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > hintMaxChars;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ExtractedTextRequest

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::ExtractedTextRequest::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::view::inputmethod::ExtractedTextRequest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::view::inputmethod::ExtractedTextRequest::ExtractedTextRequest()
: object<android::view::inputmethod::ExtractedTextRequest>(
	call_new_object<
		android::view::inputmethod::ExtractedTextRequest::J2CPP_CLASS_NAME,
		android::view::inputmethod::ExtractedTextRequest::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::ExtractedTextRequest::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, token(get_jobject())
, flags(get_jobject())
, hintMaxLines(get_jobject())
, hintMaxChars(get_jobject())
{
}


void android::view::inputmethod::ExtractedTextRequest::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::inputmethod::ExtractedTextRequest::J2CPP_CLASS_NAME,
		android::view::inputmethod::ExtractedTextRequest::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::ExtractedTextRequest::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

jint android::view::inputmethod::ExtractedTextRequest::describeContents()
{
	return call_method<
		android::view::inputmethod::ExtractedTextRequest::J2CPP_CLASS_NAME,
		android::view::inputmethod::ExtractedTextRequest::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::ExtractedTextRequest::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}



static_field<
	android::view::inputmethod::ExtractedTextRequest::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedTextRequest::J2CPP_FIELD_NAME(4),
	android::view::inputmethod::ExtractedTextRequest::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::ExtractedTextRequest::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::ExtractedTextRequest,"android/view/inputmethod/ExtractedTextRequest")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedTextRequest,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedTextRequest,1,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedTextRequest,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedTextRequest,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedTextRequest,0,"token","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedTextRequest,1,"flags","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedTextRequest,2,"hintMaxLines","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedTextRequest,3,"hintMaxChars","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedTextRequest,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXTREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
