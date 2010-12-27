/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.io.SocketInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }


#include <java/net/Socket.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class SocketInputBuffer;
	class SocketInputBuffer
		: public cpp_object<SocketInputBuffer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		SocketInputBuffer(jobject jobj)
		: cpp_object<SocketInputBuffer>(jobj)
		{
		}

		cpp_boolean isDataAvailable(cpp_int const&);
	}; //class SocketInputBuffer

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::io::SocketInputBuffer > create< org::apache::http::impl::io::SocketInputBuffer>(local_ref< java::net::Socket > const &a0, cpp_int const &a1, local_ref< org::apache::http::params::HttpParams > const &a2)
{
	return local_ref< org::apache::http::impl::io::SocketInputBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::io::SocketInputBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::io::SocketInputBuffer::J2CPP_CLASS_NAME, org::apache::http::impl::io::SocketInputBuffer::J2CPP_METHOD_NAME(0), org::apache::http::impl::io::SocketInputBuffer::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::io::SocketInputBuffer::isDataAvailable(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::SocketInputBuffer,"org/apache/http/impl/io/SocketInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::SocketInputBuffer,0,"<init>","(Ljava/net/Socket;ILorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::SocketInputBuffer,1,"isDataAvailable","(I)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_SOCKETINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
