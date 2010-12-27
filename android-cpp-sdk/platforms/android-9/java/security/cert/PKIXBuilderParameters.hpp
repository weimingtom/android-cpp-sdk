/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.PKIXBuilderParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertSelector; } } } }
namespace j2cpp { namespace java { namespace security { class KeyStore; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/String.hpp>
#include <java/security/KeyStore.hpp>
#include <java/security/cert/CertSelector.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class PKIXBuilderParameters;
	class PKIXBuilderParameters
		: public cpp_object<PKIXBuilderParameters>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		PKIXBuilderParameters(jobject jobj)
		: cpp_object<PKIXBuilderParameters>(jobj)
		{
		}

		cpp_int getMaxPathLength();
		void setMaxPathLength(cpp_int const&);
		local_ref< java::lang::String > toString();
	}; //class PKIXBuilderParameters

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::cert::PKIXBuilderParameters > create< java::security::cert::PKIXBuilderParameters>(local_ref< java::util::Set > const &a0, local_ref< java::security::cert::CertSelector > const &a1)
{
	return local_ref< java::security::cert::PKIXBuilderParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::PKIXBuilderParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::PKIXBuilderParameters::J2CPP_CLASS_NAME, java::security::cert::PKIXBuilderParameters::J2CPP_METHOD_NAME(0), java::security::cert::PKIXBuilderParameters::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::security::cert::PKIXBuilderParameters > create< java::security::cert::PKIXBuilderParameters>(local_ref< java::security::KeyStore > const &a0, local_ref< java::security::cert::CertSelector > const &a1)
{
	return local_ref< java::security::cert::PKIXBuilderParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::PKIXBuilderParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::PKIXBuilderParameters::J2CPP_CLASS_NAME, java::security::cert::PKIXBuilderParameters::J2CPP_METHOD_NAME(1), java::security::cert::PKIXBuilderParameters::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::security::cert::PKIXBuilderParameters::getMaxPathLength()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::security::cert::PKIXBuilderParameters::setMaxPathLength(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::cert::PKIXBuilderParameters::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::PKIXBuilderParameters,"java/security/cert/PKIXBuilderParameters")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXBuilderParameters,0,"<init>","(Ljava/util/Set;Ljava/security/cert/CertSelector;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXBuilderParameters,1,"<init>","(Ljava/security/KeyStore;Ljava/security/cert/CertSelector;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXBuilderParameters,2,"getMaxPathLength","()I")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXBuilderParameters,3,"setMaxPathLength","(I)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXBuilderParameters,4,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
