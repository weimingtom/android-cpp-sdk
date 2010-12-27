/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.OperatedClientConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_OPERATEDCLIENTCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_OPERATEDCLIENTCONNECTION_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }


#include <java/net/Socket.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class OperatedClientConnection;
	class OperatedClientConnection
		: public cpp_object<OperatedClientConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		OperatedClientConnection(jobject jobj)
		: cpp_object<OperatedClientConnection>(jobj)
		{
		}

		local_ref< org::apache::http::HttpHost > getTargetHost();
		cpp_boolean isSecure();
		local_ref< java::net::Socket > getSocket();
		void opening(local_ref< java::net::Socket > const&, local_ref< org::apache::http::HttpHost > const&);
		void openCompleted(cpp_boolean const&, local_ref< org::apache::http::params::HttpParams > const&);
		void update(local_ref< java::net::Socket > const&, local_ref< org::apache::http::HttpHost > const&, cpp_boolean const&, local_ref< org::apache::http::params::HttpParams > const&);
	}; //class OperatedClientConnection

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_OPERATEDCLIENTCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_OPERATEDCLIENTCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_OPERATEDCLIENTCONNECTION_HPP_IMPL

namespace j2cpp {


local_ref< org::apache::http::HttpHost > org::apache::http::conn::OperatedClientConnection::getTargetHost()
{
	return local_ref< org::apache::http::HttpHost >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean org::apache::http::conn::OperatedClientConnection::isSecure()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::net::Socket > org::apache::http::conn::OperatedClientConnection::getSocket()
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void org::apache::http::conn::OperatedClientConnection::opening(local_ref< java::net::Socket > const &a0, local_ref< org::apache::http::HttpHost > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::conn::OperatedClientConnection::openCompleted(cpp_boolean const &a0, local_ref< org::apache::http::params::HttpParams > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::conn::OperatedClientConnection::update(local_ref< java::net::Socket > const &a0, local_ref< org::apache::http::HttpHost > const &a1, cpp_boolean const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::OperatedClientConnection,"org/apache/http/conn/OperatedClientConnection")
J2CPP_DEFINE_METHOD(org::apache::http::conn::OperatedClientConnection,0,"getTargetHost","()Lorg/apache/http/HttpHost;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::OperatedClientConnection,1,"isSecure","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::OperatedClientConnection,2,"getSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::OperatedClientConnection,3,"opening","(Ljava/net/Socket;Lorg/apache/http/HttpHost;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::OperatedClientConnection,4,"openCompleted","(ZLorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::OperatedClientConnection,5,"update","(Ljava/net/Socket;Lorg/apache/http/HttpHost;ZLorg/apache/http/params/HttpParams;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_OPERATEDCLIENTCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
