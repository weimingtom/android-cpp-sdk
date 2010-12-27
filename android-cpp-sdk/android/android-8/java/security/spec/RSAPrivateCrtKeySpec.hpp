/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.RSAPrivateCrtKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace math { class BigInteger; } } }


#include <java/math/BigInteger.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class RSAPrivateCrtKeySpec;
	class RSAPrivateCrtKeySpec
		: public cpp_object<RSAPrivateCrtKeySpec>
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

		RSAPrivateCrtKeySpec(jobject jobj)
		: cpp_object<RSAPrivateCrtKeySpec>(jobj)
		{
		}

		local_ref< java::math::BigInteger > getCrtCoefficient();
		local_ref< java::math::BigInteger > getPrimeExponentP();
		local_ref< java::math::BigInteger > getPrimeExponentQ();
		local_ref< java::math::BigInteger > getPrimeP();
		local_ref< java::math::BigInteger > getPrimeQ();
		local_ref< java::math::BigInteger > getPublicExponent();
	}; //class RSAPrivateCrtKeySpec

} //namespace spec
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::spec::RSAPrivateCrtKeySpec > create< java::security::spec::RSAPrivateCrtKeySpec>(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2, local_ref< java::math::BigInteger > const &a3, local_ref< java::math::BigInteger > const &a4, local_ref< java::math::BigInteger > const &a5, local_ref< java::math::BigInteger > const &a6, local_ref< java::math::BigInteger > const &a7)
{
	return local_ref< java::security::spec::RSAPrivateCrtKeySpec >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::RSAPrivateCrtKeySpec::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::RSAPrivateCrtKeySpec::J2CPP_CLASS_NAME, java::security::spec::RSAPrivateCrtKeySpec::J2CPP_METHOD_NAME(0), java::security::spec::RSAPrivateCrtKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAPrivateCrtKeySpec::getCrtCoefficient()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAPrivateCrtKeySpec::getPrimeExponentP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAPrivateCrtKeySpec::getPrimeExponentQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAPrivateCrtKeySpec::getPrimeP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAPrivateCrtKeySpec::getPrimeQ()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::math::BigInteger > java::security::spec::RSAPrivateCrtKeySpec::getPublicExponent()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::RSAPrivateCrtKeySpec,"java/security/spec/RSAPrivateCrtKeySpec")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,1,"getCrtCoefficient","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,2,"getPrimeExponentP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,3,"getPrimeExponentQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,4,"getPrimeP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,5,"getPrimeQ","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::security::spec::RSAPrivateCrtKeySpec,6,"getPublicExponent","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_RSAPRIVATECRTKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
