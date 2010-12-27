/*================================================================================
  code generated by: java2cpp
  class: java.security.acl.Permission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_PERMISSION_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACL_PERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security { namespace acl {

	class Permission;
	class Permission
		: public cpp_object<Permission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		Permission(jobject jobj)
		: cpp_object<Permission>(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
	}; //class Permission

} //namespace acl
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_PERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACL_PERMISSION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACL_PERMISSION_HPP_IMPL

namespace j2cpp {


cpp_boolean java::security::acl::Permission::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::acl::Permission::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::acl::Permission,"java/security/acl/Permission")
J2CPP_DEFINE_METHOD(java::security::acl::Permission,0,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::security::acl::Permission,1,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACL_PERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
