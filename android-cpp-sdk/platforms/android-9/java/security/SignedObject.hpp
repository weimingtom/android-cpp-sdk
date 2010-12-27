/*================================================================================
  code generated by: java2cpp
  class: java.security.SignedObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_DECL
#define J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class PrivateKey; } } }
namespace j2cpp { namespace java { namespace security { class PublicKey; } } }
namespace j2cpp { namespace java { namespace security { class Signature; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/PrivateKey.hpp>
#include <java/security/PublicKey.hpp>
#include <java/security/Signature.hpp>


namespace j2cpp {

namespace java { namespace security {

	class SignedObject;
	class SignedObject
		: public cpp_object<SignedObject>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		SignedObject(jobject jobj)
		: cpp_object<SignedObject>(jobj)
		{
		}

		local_ref< java::lang::Object > getObject();
		local_ref< cpp_byte_array<1> > getSignature();
		local_ref< java::lang::String > getAlgorithm();
		cpp_boolean verify(local_ref< java::security::PublicKey > const&, local_ref< java::security::Signature > const&);
	}; //class SignedObject

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::SignedObject > create< java::security::SignedObject>(local_ref< java::io::Serializable > const &a0, local_ref< java::security::PrivateKey > const &a1, local_ref< java::security::Signature > const &a2)
{
	return local_ref< java::security::SignedObject >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::SignedObject::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::SignedObject::J2CPP_CLASS_NAME, java::security::SignedObject::J2CPP_METHOD_NAME(0), java::security::SignedObject::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::security::SignedObject::getObject()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > java::security::SignedObject::getSignature()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::security::SignedObject::getAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::security::SignedObject::verify(local_ref< java::security::PublicKey > const &a0, local_ref< java::security::Signature > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::SignedObject,"java/security/SignedObject")
J2CPP_DEFINE_METHOD(java::security::SignedObject,0,"<init>","(Ljava/io/Serializable;Ljava/security/PrivateKey;Ljava/security/Signature;)V")
J2CPP_DEFINE_METHOD(java::security::SignedObject,1,"getObject","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::SignedObject,2,"getSignature","()[B")
J2CPP_DEFINE_METHOD(java::security::SignedObject,3,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::SignedObject,4,"verify","(Ljava/security/PublicKey;Ljava/security/Signature;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SIGNEDOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
