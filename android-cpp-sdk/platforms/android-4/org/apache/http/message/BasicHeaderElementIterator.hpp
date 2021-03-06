/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.message.BasicHeaderElementIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENTITERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENTITERATOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderIterator; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElementIterator; } } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderElement; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class HeaderValueParser; } } } } }


#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/http/HeaderElement.hpp>
#include <org/apache/http/HeaderElementIterator.hpp>
#include <org/apache/http/HeaderIterator.hpp>
#include <org/apache/http/message/HeaderValueParser.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicHeaderElementIterator;
	class BasicHeaderElementIterator
		: public object<BasicHeaderElementIterator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit BasicHeaderElementIterator(jobject jobj)
		: object<BasicHeaderElementIterator>(jobj)
		{
		}

		operator local_ref<org::apache::http::HeaderElementIterator>() const;
		operator local_ref<java::util::Iterator>() const;
		operator local_ref<java::lang::Object>() const;


		BasicHeaderElementIterator(local_ref< org::apache::http::HeaderIterator > const&, local_ref< org::apache::http::message::HeaderValueParser > const&);
		BasicHeaderElementIterator(local_ref< org::apache::http::HeaderIterator > const&);
		jboolean hasNext();
		local_ref< org::apache::http::HeaderElement > nextElement();
		local_ref< java::lang::Object > next();
		void remove();
	}; //class BasicHeaderElementIterator

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENTITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENTITERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENTITERATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicHeaderElementIterator::operator local_ref<org::apache::http::HeaderElementIterator>() const
{
	return local_ref<org::apache::http::HeaderElementIterator>(get_jobject());
}

org::apache::http::message::BasicHeaderElementIterator::operator local_ref<java::util::Iterator>() const
{
	return local_ref<java::util::Iterator>(get_jobject());
}

org::apache::http::message::BasicHeaderElementIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::message::BasicHeaderElementIterator::BasicHeaderElementIterator(local_ref< org::apache::http::HeaderIterator > const &a0, local_ref< org::apache::http::message::HeaderValueParser > const &a1)
: object<org::apache::http::message::BasicHeaderElementIterator>(
	call_new_object<
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_NAME(0),
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



org::apache::http::message::BasicHeaderElementIterator::BasicHeaderElementIterator(local_ref< org::apache::http::HeaderIterator > const &a0)
: object<org::apache::http::message::BasicHeaderElementIterator>(
	call_new_object<
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_NAME(1),
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jboolean org::apache::http::message::BasicHeaderElementIterator::hasNext()
{
	return call_method<
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_NAME(2),
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

local_ref< org::apache::http::HeaderElement > org::apache::http::message::BasicHeaderElementIterator::nextElement()
{
	return call_method<
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_NAME(3),
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< org::apache::http::HeaderElement >
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::message::BasicHeaderElementIterator::next()
{
	return call_method<
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_NAME(4),
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

void org::apache::http::message::BasicHeaderElementIterator::remove()
{
	return call_method<
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_CLASS_NAME,
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_NAME(5),
		org::apache::http::message::BasicHeaderElementIterator::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicHeaderElementIterator,"org/apache/http/message/BasicHeaderElementIterator")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElementIterator,0,"<init>","(Lorg/apache/http/HeaderIterator;Lorg/apache/http/message/HeaderValueParser;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElementIterator,1,"<init>","(Lorg/apache/http/HeaderIterator;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElementIterator,2,"hasNext","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElementIterator,3,"nextElement","()Lorg/apache/http/HeaderElement;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElementIterator,4,"next","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicHeaderElementIterator,5,"remove","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICHEADERELEMENTITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
