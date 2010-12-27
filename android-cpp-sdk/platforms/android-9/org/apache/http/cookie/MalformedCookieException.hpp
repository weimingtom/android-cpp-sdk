/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.cookie.MalformedCookieException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_MALFORMEDCOOKIEEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_MALFORMEDCOOKIEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie {

	class MalformedCookieException;
	class MalformedCookieException
		: public cpp_object<MalformedCookieException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		MalformedCookieException(jobject jobj)
		: cpp_object<MalformedCookieException>(jobj)
		{
		}

	}; //class MalformedCookieException

} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_MALFORMEDCOOKIEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_MALFORMEDCOOKIEEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_MALFORMEDCOOKIEEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::cookie::MalformedCookieException > create< org::apache::http::cookie::MalformedCookieException>()
{
	return local_ref< org::apache::http::cookie::MalformedCookieException >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::cookie::MalformedCookieException::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::cookie::MalformedCookieException::J2CPP_CLASS_NAME, org::apache::http::cookie::MalformedCookieException::J2CPP_METHOD_NAME(0), org::apache::http::cookie::MalformedCookieException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::apache::http::cookie::MalformedCookieException > create< org::apache::http::cookie::MalformedCookieException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::cookie::MalformedCookieException >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::cookie::MalformedCookieException::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::cookie::MalformedCookieException::J2CPP_CLASS_NAME, org::apache::http::cookie::MalformedCookieException::J2CPP_METHOD_NAME(1), org::apache::http::cookie::MalformedCookieException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::cookie::MalformedCookieException > create< org::apache::http::cookie::MalformedCookieException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return local_ref< org::apache::http::cookie::MalformedCookieException >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::cookie::MalformedCookieException::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::cookie::MalformedCookieException::J2CPP_CLASS_NAME, org::apache::http::cookie::MalformedCookieException::J2CPP_METHOD_NAME(2), org::apache::http::cookie::MalformedCookieException::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::cookie::MalformedCookieException,"org/apache/http/cookie/MalformedCookieException")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::MalformedCookieException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::MalformedCookieException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::cookie::MalformedCookieException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_MALFORMEDCOOKIEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
