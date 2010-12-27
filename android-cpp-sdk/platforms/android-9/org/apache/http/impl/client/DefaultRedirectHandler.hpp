/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.client.DefaultRedirectHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <java/net/URI.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace client {

	class DefaultRedirectHandler;
	class DefaultRedirectHandler
		: public cpp_object<DefaultRedirectHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		DefaultRedirectHandler(jobject jobj)
		: cpp_object<DefaultRedirectHandler>(jobj)
		{
		}

		cpp_boolean isRedirectRequested(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
		local_ref< java::net::URI > getLocationURI(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class DefaultRedirectHandler

} //namespace client
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::client::DefaultRedirectHandler > create< org::apache::http::impl::client::DefaultRedirectHandler>()
{
	return local_ref< org::apache::http::impl::client::DefaultRedirectHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_CLASS_NAME, org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_NAME(0), org::apache::http::impl::client::DefaultRedirectHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean org::apache::http::impl::client::DefaultRedirectHandler::isRedirectRequested(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::net::URI > org::apache::http::impl::client::DefaultRedirectHandler::getLocationURI(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return local_ref< java::net::URI >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::client::DefaultRedirectHandler,"org/apache/http/impl/client/DefaultRedirectHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultRedirectHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultRedirectHandler,1,"isRedirectRequested","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::client::DefaultRedirectHandler,2,"getLocationURI","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)Ljava/net/URI;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTREDIRECTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
