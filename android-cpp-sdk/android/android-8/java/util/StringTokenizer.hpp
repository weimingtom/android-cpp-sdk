/*================================================================================
  code generated by: java2cpp
  class: java.util.StringTokenizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_DECL
#define J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class StringTokenizer;
	class StringTokenizer
		: public cpp_object<StringTokenizer>
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

		StringTokenizer(jobject jobj)
		: cpp_object<StringTokenizer>(jobj)
		{
		}

		cpp_int countTokens();
		cpp_boolean hasMoreElements();
		cpp_boolean hasMoreTokens();
		local_ref< java::lang::Object > nextElement();
		local_ref< java::lang::String > nextToken();
		local_ref< java::lang::String > nextToken(local_ref< java::lang::String > const&);
	}; //class StringTokenizer

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_IMPL
#define J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::StringTokenizer > create< java::util::StringTokenizer>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::StringTokenizer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::StringTokenizer::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::StringTokenizer::J2CPP_CLASS_NAME, java::util::StringTokenizer::J2CPP_METHOD_NAME(0), java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::StringTokenizer > create< java::util::StringTokenizer>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::StringTokenizer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::StringTokenizer::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::StringTokenizer::J2CPP_CLASS_NAME, java::util::StringTokenizer::J2CPP_METHOD_NAME(1), java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::util::StringTokenizer > create< java::util::StringTokenizer>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_boolean const &a2)
{
	return local_ref< java::util::StringTokenizer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::StringTokenizer::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::StringTokenizer::J2CPP_CLASS_NAME, java::util::StringTokenizer::J2CPP_METHOD_NAME(2), java::util::StringTokenizer::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int java::util::StringTokenizer::countTokens()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::util::StringTokenizer::hasMoreElements()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::util::StringTokenizer::hasMoreTokens()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::StringTokenizer::nextElement()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::util::StringTokenizer::nextToken()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > java::util::StringTokenizer::nextToken(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::StringTokenizer,"java/util/StringTokenizer")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,2,"<init>","(Ljava/lang/String;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,3,"countTokens","()I")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,4,"hasMoreElements","()Z")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,5,"hasMoreTokens","()Z")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,6,"nextElement","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,7,"nextToken","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::StringTokenizer,8,"nextToken","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_STRINGTOKENIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
