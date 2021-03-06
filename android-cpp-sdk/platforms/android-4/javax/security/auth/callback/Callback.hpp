/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.security.auth.callback.Callback
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_CALLBACK_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_CALLBACK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth { namespace callback {

	class Callback;
	class Callback
		: public object<Callback>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit Callback(jobject jobj)
		: object<Callback>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;

	}; //class Callback

} //namespace callback
} //namespace auth
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_CALLBACK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_CALLBACK_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_CALLBACK_HPP_IMPL

namespace j2cpp {



javax::security::auth::callback::Callback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(javax::security::auth::callback::Callback,"javax/security/auth/callback/Callback")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_CALLBACK_CALLBACK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
