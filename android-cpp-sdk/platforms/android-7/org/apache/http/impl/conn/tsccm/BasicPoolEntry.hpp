/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.BasicPoolEntry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace ref { class ReferenceQueue; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionOperator; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { class AbstractPoolEntry; } } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>
#include <org/apache/http/conn/ClientConnectionOperator.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/impl/conn/AbstractPoolEntry.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class BasicPoolEntry;
	class BasicPoolEntry
		: public object<BasicPoolEntry>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit BasicPoolEntry(jobject jobj)
		: object<BasicPoolEntry>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::conn::AbstractPoolEntry>() const;


		BasicPoolEntry(local_ref< org::apache::http::conn::ClientConnectionOperator > const&, local_ref< org::apache::http::conn::routing::HttpRoute > const&, local_ref< java::lang::ref::ReferenceQueue > const&);
	}; //class BasicPoolEntry

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRY_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::BasicPoolEntry::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::tsccm::BasicPoolEntry::operator local_ref<org::apache::http::impl::conn::AbstractPoolEntry>() const
{
	return local_ref<org::apache::http::impl::conn::AbstractPoolEntry>(get_jobject());
}


org::apache::http::impl::conn::tsccm::BasicPoolEntry::BasicPoolEntry(local_ref< org::apache::http::conn::ClientConnectionOperator > const &a0, local_ref< org::apache::http::conn::routing::HttpRoute > const &a1, local_ref< java::lang::ref::ReferenceQueue > const &a2)
: object<org::apache::http::impl::conn::tsccm::BasicPoolEntry>(
	call_new_object<
		org::apache::http::impl::conn::tsccm::BasicPoolEntry::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::BasicPoolEntry::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::BasicPoolEntry::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}






J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::BasicPoolEntry,"org/apache/http/impl/conn/tsccm/BasicPoolEntry")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPoolEntry,0,"<init>","(Lorg/apache/http/conn/ClientConnectionOperator;Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/ref/ReferenceQueue;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPoolEntry,1,"getConnection","()Lorg/apache/http/conn/OperatedClientConnection;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPoolEntry,2,"getPlannedRoute","()Lorg/apache/http/conn/routing/HttpRoute;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::BasicPoolEntry,3,"getWeakRef","()Lorg/apache/http/impl/conn/tsccm/BasicPoolEntryRef;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_BASICPOOLENTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
