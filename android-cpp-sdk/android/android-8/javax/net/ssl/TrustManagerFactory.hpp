/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.TrustManagerFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class KeyStore; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class ManagerFactoryParameters; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class TrustManager; } } } }


#include <java/lang/String.hpp>
#include <java/security/KeyStore.hpp>
#include <java/security/Provider.hpp>
#include <javax/net/ssl/ManagerFactoryParameters.hpp>
#include <javax/net/ssl/TrustManager.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class TrustManagerFactory;
	class TrustManagerFactory
		: public cpp_object<TrustManagerFactory>
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

		TrustManagerFactory(jobject jobj)
		: cpp_object<TrustManagerFactory>(jobj)
		{
		}

		static local_ref< java::lang::String > getDefaultAlgorithm();
		static local_ref< javax::net::ssl::TrustManagerFactory > getInstance(local_ref< java::lang::String > const&);
		static local_ref< javax::net::ssl::TrustManagerFactory > getInstance(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< javax::net::ssl::TrustManagerFactory > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::Provider > const&);
		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::security::Provider > getProvider();
		void init(local_ref< java::security::KeyStore > const&);
		void init(local_ref< javax::net::ssl::ManagerFactoryParameters > const&);
		local_ref< cpp_object_array<javax::net::ssl::TrustManager, 1> > getTrustManagers();
	}; //class TrustManagerFactory

} //namespace ssl
} //namespace net
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::net::ssl::TrustManagerFactory > create< javax::net::ssl::TrustManagerFactory>(local_ref< javax::net::ssl::TrustManagerFactorySpi > const &a0, local_ref< java::security::Provider > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< javax::net::ssl::TrustManagerFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::TrustManagerFactory::J2CPP_CLASS_NAME, javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_NAME(0), javax::net::ssl::TrustManagerFactory::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::net::ssl::TrustManagerFactory::getDefaultAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< javax::net::ssl::TrustManagerFactory > javax::net::ssl::TrustManagerFactory::getInstance(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::net::ssl::TrustManagerFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::TrustManagerFactory > javax::net::ssl::TrustManagerFactory::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< javax::net::ssl::TrustManagerFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::TrustManagerFactory > javax::net::ssl::TrustManagerFactory::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return local_ref< javax::net::ssl::TrustManagerFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::net::ssl::TrustManagerFactory::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::security::Provider > javax::net::ssl::TrustManagerFactory::getProvider()
{
	return local_ref< java::security::Provider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void javax::net::ssl::TrustManagerFactory::init(local_ref< java::security::KeyStore > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::TrustManagerFactory::init(local_ref< javax::net::ssl::ManagerFactoryParameters > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<javax::net::ssl::TrustManager, 1> > javax::net::ssl::TrustManagerFactory::getTrustManagers()
{
	return local_ref< cpp_object_array<javax::net::ssl::TrustManager, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::TrustManagerFactory,"javax/net/ssl/TrustManagerFactory")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,0,"<init>","(Ljavax/net/ssl/TrustManagerFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,1,"getDefaultAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,2,"getInstance","(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,3,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,4,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljavax/net/ssl/TrustManagerFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,5,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,6,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,7,"init","(Ljava/security/KeyStore;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,8,"init","(Ljavax/net/ssl/ManagerFactoryParameters;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::TrustManagerFactory,9,"getTrustManagers","()[javax.net.ssl.TrustManager")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_TRUSTMANAGERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
