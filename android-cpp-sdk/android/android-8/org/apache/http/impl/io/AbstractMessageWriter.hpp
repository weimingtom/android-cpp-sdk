/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.io.AbstractMessageWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEWRITER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEWRITER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class LineFormatter; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionOutputBuffer; } } } } }


#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/io/SessionOutputBuffer.hpp>
#include <org/apache/http/message/LineFormatter.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class AbstractMessageWriter;
	class AbstractMessageWriter
		: public cpp_object<AbstractMessageWriter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		AbstractMessageWriter(jobject jobj)
		: cpp_object<AbstractMessageWriter>(jobj)
		{
		}

		void write(local_ref< org::apache::http::HttpMessage > const&);

	}; //class AbstractMessageWriter

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEWRITER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEWRITER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::io::AbstractMessageWriter > create< org::apache::http::impl::io::AbstractMessageWriter>(local_ref< org::apache::http::io::SessionOutputBuffer > const &a0, local_ref< org::apache::http::message::LineFormatter > const &a1, local_ref< org::apache::http::params::HttpParams > const &a2)
{
	return local_ref< org::apache::http::impl::io::AbstractMessageWriter >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::io::AbstractMessageWriter::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::io::AbstractMessageWriter::J2CPP_CLASS_NAME, org::apache::http::impl::io::AbstractMessageWriter::J2CPP_METHOD_NAME(0), org::apache::http::impl::io::AbstractMessageWriter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


void org::apache::http::impl::io::AbstractMessageWriter::write(local_ref< org::apache::http::HttpMessage > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::io::AbstractMessageWriter,"org/apache/http/impl/io/AbstractMessageWriter")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageWriter,0,"<init>","(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/message/LineFormatter;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageWriter,1,"writeHeadLine","(Lorg/apache/http/HttpMessage;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractMessageWriter,2,"write","(Lorg/apache/http/HttpMessage;)V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::io::AbstractMessageWriter,0,"sessionBuffer","Lorg/apache/http/io/SessionOutputBuffer;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::io::AbstractMessageWriter,1,"lineBuf","Lorg/apache/http/util/CharArrayBuffer;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::io::AbstractMessageWriter,2,"lineFormatter","Lorg/apache/http/message/LineFormatter;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTMESSAGEWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
