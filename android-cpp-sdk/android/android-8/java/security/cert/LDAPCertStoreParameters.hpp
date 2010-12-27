/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.LDAPCertStoreParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class LDAPCertStoreParameters;
	class LDAPCertStoreParameters
		: public cpp_object<LDAPCertStoreParameters>
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

		LDAPCertStoreParameters(jobject jobj)
		: cpp_object<LDAPCertStoreParameters>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		cpp_int getPort();
		local_ref< java::lang::String > getServerName();
		local_ref< java::lang::String > toString();
	}; //class LDAPCertStoreParameters

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::cert::LDAPCertStoreParameters > create< java::security::cert::LDAPCertStoreParameters>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::security::cert::LDAPCertStoreParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME, java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(0), java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::security::cert::LDAPCertStoreParameters > create< java::security::cert::LDAPCertStoreParameters>()
{
	return local_ref< java::security::cert::LDAPCertStoreParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME, java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(1), java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

template <>
local_ref< java::security::cert::LDAPCertStoreParameters > create< java::security::cert::LDAPCertStoreParameters>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::cert::LDAPCertStoreParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::LDAPCertStoreParameters::J2CPP_CLASS_NAME, java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_NAME(2), java::security::cert::LDAPCertStoreParameters::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::security::cert::LDAPCertStoreParameters::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::security::cert::LDAPCertStoreParameters::getPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > java::security::cert::LDAPCertStoreParameters::getServerName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::security::cert::LDAPCertStoreParameters::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::LDAPCertStoreParameters,"java/security/cert/LDAPCertStoreParameters")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,3,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,4,"getPort","()I")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,5,"getServerName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::LDAPCertStoreParameters,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_LDAPCERTSTOREPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
