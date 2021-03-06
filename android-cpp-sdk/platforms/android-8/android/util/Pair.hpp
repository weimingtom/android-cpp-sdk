/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.Pair
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PAIR_HPP_DECL
#define J2CPP_ANDROID_UTIL_PAIR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace util {

	class Pair;
	class Pair
		: public object<Pair>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit Pair(jobject jobj)
		: object<Pair>(jobj)
		, first(jobj)
		, second(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Pair(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		static local_ref< android::util::Pair > create(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > first;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Object > > second;
	}; //class Pair

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PAIR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PAIR_HPP_IMPL
#define J2CPP_ANDROID_UTIL_PAIR_HPP_IMPL

namespace j2cpp {



android::util::Pair::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::util::Pair::Pair(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
: object<android::util::Pair>(
	call_new_object<
		android::util::Pair::J2CPP_CLASS_NAME,
		android::util::Pair::J2CPP_METHOD_NAME(0),
		android::util::Pair::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
, first(get_jobject())
, second(get_jobject())
{
}


jboolean android::util::Pair::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::util::Pair::J2CPP_CLASS_NAME,
		android::util::Pair::J2CPP_METHOD_NAME(1),
		android::util::Pair::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}

jint android::util::Pair::hashCode()
{
	return call_method<
		android::util::Pair::J2CPP_CLASS_NAME,
		android::util::Pair::J2CPP_METHOD_NAME(2),
		android::util::Pair::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

local_ref< android::util::Pair > android::util::Pair::create(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		android::util::Pair::J2CPP_CLASS_NAME,
		android::util::Pair::J2CPP_METHOD_NAME(3),
		android::util::Pair::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::util::Pair >
	>(a0, a1);
}



J2CPP_DEFINE_CLASS(android::util::Pair,"android/util/Pair")
J2CPP_DEFINE_METHOD(android::util::Pair,0,"<init>","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::util::Pair,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::util::Pair,2,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::util::Pair,3,"create","(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;")
J2CPP_DEFINE_FIELD(android::util::Pair,0,"first","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::util::Pair,1,"second","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PAIR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
