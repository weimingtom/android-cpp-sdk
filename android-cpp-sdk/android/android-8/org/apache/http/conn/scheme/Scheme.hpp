/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.scheme.Scheme
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SocketFactory; } } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/conn/scheme/SocketFactory.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class Scheme;
	class Scheme
		: public cpp_object<Scheme>
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

		Scheme(jobject jobj)
		: cpp_object<Scheme>(jobj)
		{
		}

		cpp_int getDefaultPort();
		local_ref< org::apache::http::conn::scheme::SocketFactory > getSocketFactory();
		local_ref< java::lang::String > getName();
		cpp_boolean isLayered();
		cpp_int resolvePort(cpp_int const&);
		local_ref< java::lang::String > toString();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
	}; //class Scheme

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::conn::scheme::Scheme > create< org::apache::http::conn::scheme::Scheme>(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::conn::scheme::SocketFactory > const &a1, cpp_int const &a2)
{
	return local_ref< org::apache::http::conn::scheme::Scheme >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::conn::scheme::Scheme::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::conn::scheme::Scheme::J2CPP_CLASS_NAME, org::apache::http::conn::scheme::Scheme::J2CPP_METHOD_NAME(0), org::apache::http::conn::scheme::Scheme::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int org::apache::http::conn::scheme::Scheme::getDefaultPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::apache::http::conn::scheme::SocketFactory > org::apache::http::conn::scheme::Scheme::getSocketFactory()
{
	return local_ref< org::apache::http::conn::scheme::SocketFactory >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::conn::scheme::Scheme::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::http::conn::scheme::Scheme::isLayered()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int org::apache::http::conn::scheme::Scheme::resolvePort(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::conn::scheme::Scheme::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean org::apache::http::conn::scheme::Scheme::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::conn::scheme::Scheme::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::Scheme,"org/apache/http/conn/scheme/Scheme")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,0,"<init>","(Ljava/lang/String;Lorg/apache/http/conn/scheme/SocketFactory;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,1,"getDefaultPort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,2,"getSocketFactory","()Lorg/apache/http/conn/scheme/SocketFactory;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,3,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,4,"isLayered","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,5,"resolvePort","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::Scheme,8,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
