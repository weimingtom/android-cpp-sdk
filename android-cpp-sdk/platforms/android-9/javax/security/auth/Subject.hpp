/*================================================================================
  code generated by: java2cpp
  class: javax.security.auth.Subject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_SUBJECT_HPP_DECL
#define J2CPP_JAVAX_SECURITY_AUTH_SUBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class PrivilegedExceptionAction; } } }
namespace j2cpp { namespace java { namespace security { class AccessControlContext; } } }
namespace j2cpp { namespace java { namespace security { class PrivilegedAction; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/AccessControlContext.hpp>
#include <java/security/PrivilegedAction.hpp>
#include <java/security/PrivilegedExceptionAction.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace auth {

	class Subject;
	class Subject
		: public cpp_object<Subject>
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
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)

		Subject(jobject jobj)
		: cpp_object<Subject>(jobj)
		{
		}

		static local_ref< java::lang::Object > doAs(local_ref< javax::security::auth::Subject > const&, local_ref< java::security::PrivilegedAction > const&);
		static local_ref< java::lang::Object > doAsPrivileged(local_ref< javax::security::auth::Subject > const&, local_ref< java::security::PrivilegedAction > const&, local_ref< java::security::AccessControlContext > const&);
		static local_ref< java::lang::Object > doAs(local_ref< javax::security::auth::Subject > const&, local_ref< java::security::PrivilegedExceptionAction > const&);
		static local_ref< java::lang::Object > doAsPrivileged(local_ref< javax::security::auth::Subject > const&, local_ref< java::security::PrivilegedExceptionAction > const&, local_ref< java::security::AccessControlContext > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::util::Set > getPrincipals();
		local_ref< java::util::Set > getPrincipals(local_ref< java::lang::Class > const&);
		local_ref< java::util::Set > getPrivateCredentials();
		local_ref< java::util::Set > getPrivateCredentials(local_ref< java::lang::Class > const&);
		local_ref< java::util::Set > getPublicCredentials();
		local_ref< java::util::Set > getPublicCredentials(local_ref< java::lang::Class > const&);
		cpp_int hashCode();
		void setReadOnly();
		cpp_boolean isReadOnly();
		local_ref< java::lang::String > toString();
		static local_ref< javax::security::auth::Subject > getSubject(local_ref< java::security::AccessControlContext > const&);
	}; //class Subject

} //namespace auth
} //namespace security
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_SUBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_AUTH_SUBJECT_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_AUTH_SUBJECT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::security::auth::Subject > create< javax::security::auth::Subject>()
{
	return local_ref< javax::security::auth::Subject >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::security::auth::Subject::J2CPP_CLASS_NAME>(),
			get_method_id<javax::security::auth::Subject::J2CPP_CLASS_NAME, javax::security::auth::Subject::J2CPP_METHOD_NAME(0), javax::security::auth::Subject::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< javax::security::auth::Subject > create< javax::security::auth::Subject>(cpp_boolean const &a0, local_ref< java::util::Set > const &a1, local_ref< java::util::Set > const &a2, local_ref< java::util::Set > const &a3)
{
	return local_ref< javax::security::auth::Subject >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::security::auth::Subject::J2CPP_CLASS_NAME>(),
			get_method_id<javax::security::auth::Subject::J2CPP_CLASS_NAME, javax::security::auth::Subject::J2CPP_METHOD_NAME(1), javax::security::auth::Subject::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::security::auth::Subject::doAs(local_ref< javax::security::auth::Subject > const &a0, local_ref< java::security::PrivilegedAction > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::security::auth::Subject::doAsPrivileged(local_ref< javax::security::auth::Subject > const &a0, local_ref< java::security::PrivilegedAction > const &a1, local_ref< java::security::AccessControlContext > const &a2)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::security::auth::Subject::doAs(local_ref< javax::security::auth::Subject > const &a0, local_ref< java::security::PrivilegedExceptionAction > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::security::auth::Subject::doAsPrivileged(local_ref< javax::security::auth::Subject > const &a0, local_ref< java::security::PrivilegedExceptionAction > const &a1, local_ref< java::security::AccessControlContext > const &a2)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean javax::security::auth::Subject::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > javax::security::auth::Subject::getPrincipals()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::util::Set > javax::security::auth::Subject::getPrincipals(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > javax::security::auth::Subject::getPrivateCredentials()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::util::Set > javax::security::auth::Subject::getPrivateCredentials(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > javax::security::auth::Subject::getPublicCredentials()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::util::Set > javax::security::auth::Subject::getPublicCredentials(local_ref< java::lang::Class > const &a0)
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int javax::security::auth::Subject::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void javax::security::auth::Subject::setReadOnly()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean javax::security::auth::Subject::isReadOnly()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::String > javax::security::auth::Subject::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< javax::security::auth::Subject > javax::security::auth::Subject::getSubject(local_ref< java::security::AccessControlContext > const &a0)
{
	return local_ref< javax::security::auth::Subject >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::security::auth::Subject,"javax/security/auth/Subject")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,1,"<init>","(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,2,"doAs","(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,3,"doAsPrivileged","(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,4,"doAs","(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,5,"doAsPrivileged","(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,7,"getPrincipals","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,8,"getPrincipals","(Ljava/lang/Class;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,9,"getPrivateCredentials","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,10,"getPrivateCredentials","(Ljava/lang/Class;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,11,"getPublicCredentials","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,12,"getPublicCredentials","(Ljava/lang/Class;)Ljava/util/Set;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,13,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,14,"setReadOnly","()V")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,15,"isReadOnly","()Z")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,16,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::security::auth::Subject,17,"getSubject","(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_AUTH_SUBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
