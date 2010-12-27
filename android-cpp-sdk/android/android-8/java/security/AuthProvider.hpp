/*================================================================================
  code generated by: java2cpp
  class: java.security.AuthProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_AUTHPROVIDER_HPP_DECL
#define J2CPP_JAVA_SECURITY_AUTHPROVIDER_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace auth { namespace callback { class CallbackHandler; } } } } }
namespace j2cpp { namespace javax { namespace security { namespace auth { class Subject; } } } }


#include <javax/security/auth/Subject.hpp>
#include <javax/security/auth/callback/CallbackHandler.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AuthProvider;
	class AuthProvider
		: public cpp_object<AuthProvider>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		AuthProvider(jobject jobj)
		: cpp_object<AuthProvider>(jobj)
		{
		}

		void login(local_ref< javax::security::auth::Subject > const&, local_ref< javax::security::auth::callback::CallbackHandler > const&);
		void logout();
		void setCallbackHandler(local_ref< javax::security::auth::callback::CallbackHandler > const&);
	}; //class AuthProvider

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_AUTHPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_AUTHPROVIDER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_AUTHPROVIDER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::AuthProvider > create< java::security::AuthProvider>(local_ref< java::lang::String > const &a0, cpp_double const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< java::security::AuthProvider >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::AuthProvider::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::AuthProvider::J2CPP_CLASS_NAME, java::security::AuthProvider::J2CPP_METHOD_NAME(0), java::security::AuthProvider::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::security::AuthProvider::login(local_ref< javax::security::auth::Subject > const &a0, local_ref< javax::security::auth::callback::CallbackHandler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::security::AuthProvider::logout()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::security::AuthProvider::setCallbackHandler(local_ref< javax::security::auth::callback::CallbackHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::AuthProvider,"java/security/AuthProvider")
J2CPP_DEFINE_METHOD(java::security::AuthProvider,0,"<init>","(Ljava/lang/String;DLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AuthProvider,1,"login","(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V")
J2CPP_DEFINE_METHOD(java::security::AuthProvider,2,"logout","()V")
J2CPP_DEFINE_METHOD(java::security::AuthProvider,3,"setCallbackHandler","(Ljavax/security/auth/callback/CallbackHandler;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_AUTHPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
