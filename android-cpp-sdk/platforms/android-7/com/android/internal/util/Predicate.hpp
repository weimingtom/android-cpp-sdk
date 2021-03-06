/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.android.internal.util.Predicate
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_ANDROID_INTERNAL_UTIL_PREDICATE_HPP_DECL
#define J2CPP_COM_ANDROID_INTERNAL_UTIL_PREDICATE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace com { namespace android { namespace internal { namespace util {

	class Predicate;
	class Predicate
		: public object<Predicate>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Predicate(jobject jobj)
		: object<Predicate>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean apply(local_ref< java::lang::Object >  const&);
	}; //class Predicate

} //namespace util
} //namespace internal
} //namespace android
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_ANDROID_INTERNAL_UTIL_PREDICATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_ANDROID_INTERNAL_UTIL_PREDICATE_HPP_IMPL
#define J2CPP_COM_ANDROID_INTERNAL_UTIL_PREDICATE_HPP_IMPL

namespace j2cpp {



com::android::internal::util::Predicate::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean com::android::internal::util::Predicate::apply(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		com::android::internal::util::Predicate::J2CPP_CLASS_NAME,
		com::android::internal::util::Predicate::J2CPP_METHOD_NAME(0),
		com::android::internal::util::Predicate::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(com::android::internal::util::Predicate,"com/android/internal/util/Predicate")
J2CPP_DEFINE_METHOD(com::android::internal::util::Predicate,0,"apply","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_COM_ANDROID_INTERNAL_UTIL_PREDICATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
