/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.security.auth.DestroyFailedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth {

	class DestroyFailedException;
	class DestroyFailedException
		: public object<DestroyFailedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit DestroyFailedException(jobject jobj)
		: object<DestroyFailedException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		DestroyFailedException();
		DestroyFailedException(local_ref< java::lang::String > const&);
	}; //class DestroyFailedException

} //namespace auth
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::security::auth::DestroyFailedException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

javax::security::auth::DestroyFailedException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::security::auth::DestroyFailedException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

javax::security::auth::DestroyFailedException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


javax::security::auth::DestroyFailedException::DestroyFailedException()
: object<javax::security::auth::DestroyFailedException>(
	call_new_object<
		javax::security::auth::DestroyFailedException::J2CPP_CLASS_NAME,
		javax::security::auth::DestroyFailedException::J2CPP_METHOD_NAME(0),
		javax::security::auth::DestroyFailedException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



javax::security::auth::DestroyFailedException::DestroyFailedException(local_ref< java::lang::String > const &a0)
: object<javax::security::auth::DestroyFailedException>(
	call_new_object<
		javax::security::auth::DestroyFailedException::J2CPP_CLASS_NAME,
		javax::security::auth::DestroyFailedException::J2CPP_METHOD_NAME(1),
		javax::security::auth::DestroyFailedException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(javax::security::auth::DestroyFailedException,"javax/security/auth/DestroyFailedException")
J2CPP_DEFINE_METHOD(javax::security::auth::DestroyFailedException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::security::auth::DestroyFailedException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
