/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CertStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTSTORE_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTSTORE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertSelector; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CRLSelector; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertStoreParameters; } } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/lang/String.hpp>
#include <java/security/Provider.hpp>
#include <java/security/cert/CRLSelector.hpp>
#include <java/security/cert/CertSelector.hpp>
#include <java/security/cert/CertStoreParameters.hpp>
#include <java/util/Collection.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertStore;
	class CertStore
		: public cpp_object<CertStore>
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

		CertStore(jobject jobj)
		: cpp_object<CertStore>(jobj)
		{
		}

		static local_ref< java::security::cert::CertStore > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::cert::CertStoreParameters > const&);
		static local_ref< java::security::cert::CertStore > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::cert::CertStoreParameters > const&, local_ref< java::lang::String > const&);
		static local_ref< java::security::cert::CertStore > getInstance(local_ref< java::lang::String > const&, local_ref< java::security::cert::CertStoreParameters > const&, local_ref< java::security::Provider > const&);
		local_ref< java::lang::String > getType();
		local_ref< java::security::Provider > getProvider();
		local_ref< java::security::cert::CertStoreParameters > getCertStoreParameters();
		local_ref< java::util::Collection > getCertificates(local_ref< java::security::cert::CertSelector > const&);
		local_ref< java::util::Collection > getCRLs(local_ref< java::security::cert::CRLSelector > const&);
		static local_ref< java::lang::String > getDefaultType();
	}; //class CertStore

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTSTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTSTORE_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTSTORE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::cert::CertStore > create< java::security::cert::CertStore>(local_ref< java::security::cert::CertStoreSpi > const &a0, local_ref< java::security::Provider > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::security::cert::CertStoreParameters > const &a3)
{
	return local_ref< java::security::cert::CertStore >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::CertStore::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::CertStore::J2CPP_CLASS_NAME, java::security::cert::CertStore::J2CPP_METHOD_NAME(0), java::security::cert::CertStore::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::security::cert::CertStore > java::security::cert::CertStore::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::CertStoreParameters > const &a1)
{
	return local_ref< java::security::cert::CertStore >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::cert::CertStore > java::security::cert::CertStore::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::CertStoreParameters > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< java::security::cert::CertStore >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::security::cert::CertStore > java::security::cert::CertStore::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::cert::CertStoreParameters > const &a1, local_ref< java::security::Provider > const &a2)
{
	return local_ref< java::security::cert::CertStore >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::cert::CertStore::getType()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::security::Provider > java::security::cert::CertStore::getProvider()
{
	return local_ref< java::security::Provider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::security::cert::CertStoreParameters > java::security::cert::CertStore::getCertStoreParameters()
{
	return local_ref< java::security::cert::CertStoreParameters >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::util::Collection > java::security::cert::CertStore::getCertificates(local_ref< java::security::cert::CertSelector > const &a0)
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Collection > java::security::cert::CertStore::getCRLs(local_ref< java::security::cert::CRLSelector > const &a0)
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::cert::CertStore::getDefaultType()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::CertStore,"java/security/cert/CertStore")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,0,"<init>","(Ljava/security/cert/CertStoreSpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,1,"getInstance","(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,2,"getInstance","(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,3,"getInstance","(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,4,"getType","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,5,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,6,"getCertStoreParameters","()Ljava/security/cert/CertStoreParameters;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,7,"getCertificates","(Ljava/security/cert/CertSelector;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,8,"getCRLs","(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStore,9,"getDefaultType","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTSTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
