/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.ConnectionKeepAliveStrategy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }


#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class ConnectionKeepAliveStrategy;
	class ConnectionKeepAliveStrategy
		: public cpp_object<ConnectionKeepAliveStrategy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		ConnectionKeepAliveStrategy(jobject jobj)
		: cpp_object<ConnectionKeepAliveStrategy>(jobj)
		{
		}

		cpp_long getKeepAliveDuration(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class ConnectionKeepAliveStrategy

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_HPP_IMPL

namespace j2cpp {


cpp_long org::apache::http::conn::ConnectionKeepAliveStrategy::getKeepAliveDuration(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::ConnectionKeepAliveStrategy,"org/apache/http/conn/ConnectionKeepAliveStrategy")
J2CPP_DEFINE_METHOD(org::apache::http::conn::ConnectionKeepAliveStrategy,0,"getKeepAliveDuration","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)J")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
