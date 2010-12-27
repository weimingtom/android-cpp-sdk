/*================================================================================
  code generated by: java2cpp
  class: java.net.URLClassLoader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLCLASSLOADER_HPP_DECL
#define J2CPP_JAVA_NET_URLCLASSLOADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace net { class URLStreamHandlerFactory; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/String.hpp>
#include <java/net/URL.hpp>
#include <java/net/URLStreamHandlerFactory.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace net {

	class URLClassLoader;
	class URLClassLoader
		: public cpp_object<URLClassLoader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)

		URLClassLoader(jobject jobj)
		: cpp_object<URLClassLoader>(jobj)
		{
		}

		local_ref< java::util::Enumeration > findResources(local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<java::net::URL, 1> > getURLs();
		static local_ref< java::net::URLClassLoader > newInstance(local_ref< cpp_object_array<java::net::URL, 1> > const&);
		static local_ref< java::net::URLClassLoader > newInstance(local_ref< cpp_object_array<java::net::URL, 1> > const&, local_ref< java::lang::ClassLoader > const&);
		local_ref< java::net::URL > findResource(local_ref< java::lang::String > const&);
	}; //class URLClassLoader

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLCLASSLOADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_URLCLASSLOADER_HPP_IMPL
#define J2CPP_JAVA_NET_URLCLASSLOADER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::URLClassLoader > create< java::net::URLClassLoader>(local_ref< cpp_object_array<java::net::URL, 1> > const &a0)
{
	return local_ref< java::net::URLClassLoader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::URLClassLoader::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::URLClassLoader::J2CPP_CLASS_NAME, java::net::URLClassLoader::J2CPP_METHOD_NAME(0), java::net::URLClassLoader::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::net::URLClassLoader > create< java::net::URLClassLoader>(local_ref< cpp_object_array<java::net::URL, 1> > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return local_ref< java::net::URLClassLoader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::URLClassLoader::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::URLClassLoader::J2CPP_CLASS_NAME, java::net::URLClassLoader::J2CPP_METHOD_NAME(1), java::net::URLClassLoader::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::net::URLClassLoader > create< java::net::URLClassLoader>(local_ref< cpp_object_array<java::net::URL, 1> > const &a0, local_ref< java::lang::ClassLoader > const &a1, local_ref< java::net::URLStreamHandlerFactory > const &a2)
{
	return local_ref< java::net::URLClassLoader >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::URLClassLoader::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::URLClassLoader::J2CPP_CLASS_NAME, java::net::URLClassLoader::J2CPP_METHOD_NAME(2), java::net::URLClassLoader::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


local_ref< java::util::Enumeration > java::net::URLClassLoader::findResources(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::Enumeration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}


local_ref< cpp_object_array<java::net::URL, 1> > java::net::URLClassLoader::getURLs()
{
	return local_ref< cpp_object_array<java::net::URL, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::net::URLClassLoader > java::net::URLClassLoader::newInstance(local_ref< cpp_object_array<java::net::URL, 1> > const &a0)
{
	return local_ref< java::net::URLClassLoader >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::net::URLClassLoader > java::net::URLClassLoader::newInstance(local_ref< cpp_object_array<java::net::URL, 1> > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return local_ref< java::net::URLClassLoader >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


local_ref< java::net::URL > java::net::URLClassLoader::findResource(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::URL >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::net::URLClassLoader,"java/net/URLClassLoader")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,0,"<init>","([java.net.URL)V")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,1,"<init>","([java.net.URLLjava/lang/ClassLoader;)V")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,2,"<init>","([java.net.URLLjava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,3,"addURL","(Ljava/net/URL;)V")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,4,"findResources","(Ljava/lang/String;)Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,5,"getPermissions","(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,6,"getURLs","()[java.net.URL")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,7,"newInstance","([java.net.URL)Ljava/net/URLClassLoader;")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,8,"newInstance","([java.net.URLLjava/lang/ClassLoader;)Ljava/net/URLClassLoader;")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,9,"findClass","(Ljava/lang/String;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,10,"findResource","(Ljava/lang/String;)Ljava/net/URL;")
J2CPP_DEFINE_METHOD(java::net::URLClassLoader,11,"definePackage","(Ljava/lang/String;Ljava/util/jar/Manifest;Ljava/net/URL;)Ljava/lang/Package;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_URLCLASSLOADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
