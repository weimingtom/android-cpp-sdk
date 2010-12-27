/*================================================================================
  code generated by: java2cpp
  class: java.security.interfaces.RSAMultiPrimePrivateCrtKey
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace spec { class RSAOtherPrimeInfo; } } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/math/BigInteger.hpp>
#include <java/security/spec/RSAOtherPrimeInfo.hpp>


namespace j2cpp {

namespace java { namespace security { namespace interfaces {

	class RSAMultiPrimePrivateCrtKey;
	class RSAMultiPrimePrivateCrtKey
		: public cpp_object<RSAMultiPrimePrivateCrtKey>
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
		J2CPP_DECLARE_FIELD(0)

		RSAMultiPrimePrivateCrtKey(jobject jobj)
		: cpp_object<RSAMultiPrimePrivateCrtKey>(jobj)
		{
		}

		local_ref< java::math::BigInteger > getCrtCoefficient();
		local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> > getOtherPrimeInfo();
		local_ref< java::math::BigInteger > getPrimeP();
		local_ref< java::math::BigInteger > getPrimeQ();
		local_ref< java::math::BigInteger > getPrimeExponentP();
		local_ref< java::math::BigInteger > getPrimeExponentQ();
		local_ref< java::math::BigInteger > getPublicExponent();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_long > serialVersionUID;
	}; //class RSAMultiPrimePrivateCrtKey

} //namespace interfaces
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_HPP_IMPL

namespace j2cpp {


local_ref< java::math::BigInteger > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getCrtCoefficient()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getOtherPrimeInfo()
{
	return local_ref< cpp_object_array<java::security::spec::RSAOtherPrimeInfo, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeExponentP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPrimeExponentQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::interfaces::RSAMultiPrimePrivateCrtKey::getPublicExponent()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


static_field<
	java::security::interfaces::RSAMultiPrimePrivateCrtKey::J2CPP_CLASS_NAME,
	java::security::interfaces::RSAMultiPrimePrivateCrtKey::J2CPP_FIELD_NAME(0),
	java::security::interfaces::RSAMultiPrimePrivateCrtKey::J2CPP_FIELD_SIGNATURE(0),
	cpp_long
> java::security::interfaces::RSAMultiPrimePrivateCrtKey::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::interfaces::RSAMultiPrimePrivateCrtKey,"java/security/interfaces/RSAMultiPrimePrivateCrtKey")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,0,"getCrtCoefficient","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,1,"getOtherPrimeInfo","()[java.security.spec.RSAOtherPrimeInfo")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,2,"getPrimeP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,3,"getPrimeQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,4,"getPrimeExponentP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,5,"getPrimeExponentQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,6,"getPublicExponent","()Ljava/math/BigInteger;")
J2CPP_DEFINE_FIELD(java::security::interfaces::RSAMultiPrimePrivateCrtKey,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_INTERFACES_RSAMULTIPRIMEPRIVATECRTKEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
