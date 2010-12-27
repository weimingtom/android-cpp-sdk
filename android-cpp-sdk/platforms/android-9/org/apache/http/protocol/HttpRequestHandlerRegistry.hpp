/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.protocol.HttpRequestHandlerRegistry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERREGISTRY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERREGISTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestHandler; } } } } }


#include <java/lang/String.hpp>
#include <java/util/Map.hpp>
#include <org/apache/http/protocol/HttpRequestHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpRequestHandlerRegistry;
	class HttpRequestHandlerRegistry
		: public cpp_object<HttpRequestHandlerRegistry>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		HttpRequestHandlerRegistry(jobject jobj)
		: cpp_object<HttpRequestHandlerRegistry>(jobj)
		{
		}

		void register(local_ref< java::lang::String > const&, local_ref< org::apache::http::protocol::HttpRequestHandler > const&);
		void unregister(local_ref< java::lang::String > const&);
		void setHandlers(local_ref< java::util::Map > const&);
		local_ref< org::apache::http::protocol::HttpRequestHandler > lookup(local_ref< java::lang::String > const&);
	}; //class HttpRequestHandlerRegistry

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERREGISTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERREGISTRY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERREGISTRY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::protocol::HttpRequestHandlerRegistry > create< org::apache::http::protocol::HttpRequestHandlerRegistry>()
{
	return local_ref< org::apache::http::protocol::HttpRequestHandlerRegistry >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::protocol::HttpRequestHandlerRegistry::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::protocol::HttpRequestHandlerRegistry::J2CPP_CLASS_NAME, org::apache::http::protocol::HttpRequestHandlerRegistry::J2CPP_METHOD_NAME(0), org::apache::http::protocol::HttpRequestHandlerRegistry::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::protocol::HttpRequestHandlerRegistry::register(local_ref< java::lang::String > const &a0, local_ref< org::apache::http::protocol::HttpRequestHandler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::protocol::HttpRequestHandlerRegistry::unregister(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::protocol::HttpRequestHandlerRegistry::setHandlers(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::protocol::HttpRequestHandler > org::apache::http::protocol::HttpRequestHandlerRegistry::lookup(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::protocol::HttpRequestHandler >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpRequestHandlerRegistry,"org/apache/http/protocol/HttpRequestHandlerRegistry")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerRegistry,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerRegistry,1,"register","(Ljava/lang/String;Lorg/apache/http/protocol/HttpRequestHandler;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerRegistry,2,"unregister","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerRegistry,3,"setHandlers","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerRegistry,4,"lookup","(Ljava/lang/String;)Lorg/apache/http/protocol/HttpRequestHandler;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerRegistry,5,"matchUriRequestPattern","(Ljava/lang/String;Ljava/lang/String;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERREGISTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
