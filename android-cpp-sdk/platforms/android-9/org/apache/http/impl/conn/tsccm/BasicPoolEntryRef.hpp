/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.BasicPoolEntryRef
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace ref { class ReferenceQueue; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }


#include <java/lang/ref/ReferenceQueue.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/impl/conn/tsccm/BasicPoolEntry.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class BasicPoolEntryRef;
	class BasicPoolEntryRef
		: public cpp_object<BasicPoolEntryRef>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		BasicPoolEntryRef(jobject jobj)
		: cpp_object<BasicPoolEntryRef>(jobj)
		{
		}

		local_ref< org::apache::http::conn::routing::HttpRoute > getRoute();
	}; //class BasicPoolEntryRef

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntryRef > create< org::apache::http::impl::conn::tsccm::BasicPoolEntryRef>(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const &a0, local_ref< java::lang::ref::ReferenceQueue > const &a1)
{
	return local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntryRef >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::J2CPP_CLASS_NAME, org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::impl::conn::tsccm::BasicPoolEntryRef::getRoute()
{
	return local_ref< org::apache::http::conn::routing::HttpRoute >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::BasicPoolEntryRef,"org/apache/http/impl/conn/tsccm/BasicPoolEntryRef")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPoolEntryRef,0,"<init>","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;Ljava/lang/ref/ReferenceQueue;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPoolEntryRef,1,"getRoute","()Lorg/apache/http/conn/routing/HttpRoute;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRYREF_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
