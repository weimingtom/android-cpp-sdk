/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebBackForwardList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBBACKFORWARDLIST_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBBACKFORWARDLIST_HPP_DECL


namespace j2cpp { namespace android { namespace webkit { class WebHistoryItem; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <android/webkit/WebHistoryItem.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebBackForwardList;
	class WebBackForwardList
		: public object<WebBackForwardList>
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

		explicit WebBackForwardList(jobject jobj)
		: object<WebBackForwardList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		local_ref< android::webkit::WebHistoryItem > getCurrentItem();
		jint getCurrentIndex();
		local_ref< android::webkit::WebHistoryItem > getItemAtIndex(jint);
		jint getSize();
	}; //class WebBackForwardList

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBBACKFORWARDLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBBACKFORWARDLIST_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBBACKFORWARDLIST_HPP_IMPL

namespace j2cpp {



android::webkit::WebBackForwardList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::webkit::WebBackForwardList::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

android::webkit::WebBackForwardList::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


local_ref< android::webkit::WebHistoryItem > android::webkit::WebBackForwardList::getCurrentItem()
{
	return call_method<
		android::webkit::WebBackForwardList::J2CPP_CLASS_NAME,
		android::webkit::WebBackForwardList::J2CPP_METHOD_NAME(1),
		android::webkit::WebBackForwardList::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::webkit::WebHistoryItem >
	>(get_jobject());
}

jint android::webkit::WebBackForwardList::getCurrentIndex()
{
	return call_method<
		android::webkit::WebBackForwardList::J2CPP_CLASS_NAME,
		android::webkit::WebBackForwardList::J2CPP_METHOD_NAME(2),
		android::webkit::WebBackForwardList::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< android::webkit::WebHistoryItem > android::webkit::WebBackForwardList::getItemAtIndex(jint a0)
{
	return call_method<
		android::webkit::WebBackForwardList::J2CPP_CLASS_NAME,
		android::webkit::WebBackForwardList::J2CPP_METHOD_NAME(3),
		android::webkit::WebBackForwardList::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::webkit::WebHistoryItem >
	>(get_jobject(), a0);
}

jint android::webkit::WebBackForwardList::getSize()
{
	return call_method<
		android::webkit::WebBackForwardList::J2CPP_CLASS_NAME,
		android::webkit::WebBackForwardList::J2CPP_METHOD_NAME(4),
		android::webkit::WebBackForwardList::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}




J2CPP_DEFINE_CLASS(android::webkit::WebBackForwardList,"android/webkit/WebBackForwardList")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,1,"getCurrentItem","()Landroid/webkit/WebHistoryItem;")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,2,"getCurrentIndex","()I")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,3,"getItemAtIndex","(I)Landroid/webkit/WebHistoryItem;")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,4,"getSize","()I")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,5,"clone","()Landroid/webkit/WebBackForwardList;")
J2CPP_DEFINE_METHOD(android::webkit::WebBackForwardList,6,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBBACKFORWARDLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
