/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.auth.AuthSchemeRegistry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEREGISTRY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEREGISTRY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthScheme; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace auth { class AuthSchemeFactory; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/auth/AuthScheme.hpp>
#include <org/apache/http/auth/AuthSchemeFactory.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthSchemeRegistry;
	class AuthSchemeRegistry
		: public cpp_object<AuthSchemeRegistry>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		AuthSchemeRegistry(jobject jobj)
		: cpp_object<AuthSchemeRegistry>(jobj)
		{
		}

		void register(local_ref< java::lang::String > const&, local_ref< org::apache::http::auth::AuthSchemeFactory > const&);
		void unregister(local_ref< java::lang::String > const&);
		local_ref< org::apache::http::auth::AuthScheme > getAuthScheme(local_ref< java::lang::String > const&, local_ref< org::apache::http::params::HttpParams > const&);
		local_ref< java::util::List > getSchemeNames();
		void setItems(local_ref< java::util::Map > const&);
	}; //class AuthSchemeRegistry

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEREGISTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEREGISTRY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEREGISTRY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::auth::AuthSchemeRegistry > create< org::apache::http::auth::AuthSchemeRegistry>()
{
	return local_ref< org::apache::http::auth::AuthSchemeRegistry >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::auth::AuthSchemeRegistry::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::auth::AuthSchemeRegistry::J2CPP_CLASS_NAME, org::apache::http::auth::AuthSchemeRegistry::J2CPP_METHOD_NAME(0), org::apache::http::auth::AuthSchemeRegistry::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::auth::AuthSchemeRegistry::register(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::auth::AuthSchemeFactory > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::auth::AuthSchemeRegistry::unregister(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::auth::AuthScheme > org::apache::http::auth::AuthSchemeRegistry::getAuthScheme(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return local_ref< org::apache::http::auth::AuthScheme >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::List > org::apache::http::auth::AuthSchemeRegistry::getSchemeNames()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void org::apache::http::auth::AuthSchemeRegistry::setItems(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthSchemeRegistry,"org/apache/http/auth/AuthSchemeRegistry")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeRegistry,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeRegistry,1,"register","(Ljava/lang/String;Lorg/apache/http/auth/AuthSchemeFactory;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeRegistry,2,"unregister","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeRegistry,3,"getAuthScheme","(Ljava/lang/String;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/auth/AuthScheme;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeRegistry,4,"getSchemeNames","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthSchemeRegistry,5,"setItems","(Ljava/util/Map;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCHEMEREGISTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
