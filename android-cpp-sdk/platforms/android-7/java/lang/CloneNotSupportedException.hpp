/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.CloneNotSupportedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION_HPP_DECL


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

namespace java { namespace lang {

	class CloneNotSupportedException;
	class CloneNotSupportedException
		: public object<CloneNotSupportedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CloneNotSupportedException(jobject jobj)
		: object<CloneNotSupportedException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		CloneNotSupportedException();
		CloneNotSupportedException(local_ref< java::lang::String > const&);
	}; //class CloneNotSupportedException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::CloneNotSupportedException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::CloneNotSupportedException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::CloneNotSupportedException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::CloneNotSupportedException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::lang::CloneNotSupportedException::CloneNotSupportedException()
: object<java::lang::CloneNotSupportedException>(
	call_new_object<
		java::lang::CloneNotSupportedException::J2CPP_CLASS_NAME,
		java::lang::CloneNotSupportedException::J2CPP_METHOD_NAME(0),
		java::lang::CloneNotSupportedException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::CloneNotSupportedException::CloneNotSupportedException(local_ref< java::lang::String > const &a0)
: object<java::lang::CloneNotSupportedException>(
	call_new_object<
		java::lang::CloneNotSupportedException::J2CPP_CLASS_NAME,
		java::lang::CloneNotSupportedException::J2CPP_METHOD_NAME(1),
		java::lang::CloneNotSupportedException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::CloneNotSupportedException,"java/lang/CloneNotSupportedException")
J2CPP_DEFINE_METHOD(java::lang::CloneNotSupportedException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::CloneNotSupportedException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
