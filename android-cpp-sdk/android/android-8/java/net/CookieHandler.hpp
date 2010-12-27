/*================================================================================
  code generated by: java2cpp
  class: java.net.CookieHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEHANDLER_HPP_DECL
#define J2CPP_JAVA_NET_COOKIEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/net/URI.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CookieHandler;
	class CookieHandler
		: public cpp_object<CookieHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		CookieHandler(jobject jobj)
		: cpp_object<CookieHandler>(jobj)
		{
		}

		static local_ref< java::net::CookieHandler > getDefault();
		static void setDefault(local_ref< java::net::CookieHandler > const&);
		local_ref< java::util::Map > get(local_ref< java::net::URI > const&, local_ref< java::util::Map > const&);
		void put(local_ref< java::net::URI > const&, local_ref< java::util::Map > const&);
	}; //class CookieHandler

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEHANDLER_HPP_IMPL
#define J2CPP_JAVA_NET_COOKIEHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::CookieHandler > create< java::net::CookieHandler>()
{
	return local_ref< java::net::CookieHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::CookieHandler::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::CookieHandler::J2CPP_CLASS_NAME, java::net::CookieHandler::J2CPP_METHOD_NAME(0), java::net::CookieHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::net::CookieHandler > java::net::CookieHandler::getDefault()
{
	return local_ref< java::net::CookieHandler >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

void java::net::CookieHandler::setDefault(local_ref< java::net::CookieHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Map > java::net::CookieHandler::get(local_ref< java::net::URI > const &a0, local_ref< java::util::Map > const &a1)
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::net::CookieHandler::put(local_ref< java::net::URI > const &a0, local_ref< java::util::Map > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::CookieHandler,"java/net/CookieHandler")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,1,"getDefault","()Ljava/net/CookieHandler;")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,2,"setDefault","(Ljava/net/CookieHandler;)V")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,3,"get","(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::net::CookieHandler,4,"put","(Ljava/net/URI;Ljava/util/Map;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
