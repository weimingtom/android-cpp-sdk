/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ArrayIndexOutOfBoundsException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class IndexOutOfBoundsException; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IndexOutOfBoundsException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ArrayIndexOutOfBoundsException;
	class ArrayIndexOutOfBoundsException
		: public object<ArrayIndexOutOfBoundsException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit ArrayIndexOutOfBoundsException(jobject jobj)
		: object<ArrayIndexOutOfBoundsException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::IndexOutOfBoundsException>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		ArrayIndexOutOfBoundsException();
		ArrayIndexOutOfBoundsException(jint);
		ArrayIndexOutOfBoundsException(local_ref< java::lang::String > const&);
	}; //class ArrayIndexOutOfBoundsException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::ArrayIndexOutOfBoundsException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::ArrayIndexOutOfBoundsException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::ArrayIndexOutOfBoundsException::operator local_ref<java::lang::IndexOutOfBoundsException>() const
{
	return local_ref<java::lang::IndexOutOfBoundsException>(get_jobject());
}

java::lang::ArrayIndexOutOfBoundsException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::lang::ArrayIndexOutOfBoundsException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::ArrayIndexOutOfBoundsException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException()
: object<java::lang::ArrayIndexOutOfBoundsException>(
	call_new_object<
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_CLASS_NAME,
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_METHOD_NAME(0),
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(jint a0)
: object<java::lang::ArrayIndexOutOfBoundsException>(
	call_new_object<
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_CLASS_NAME,
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_METHOD_NAME(1),
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(local_ref< java::lang::String > const &a0)
: object<java::lang::ArrayIndexOutOfBoundsException>(
	call_new_object<
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_CLASS_NAME,
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_METHOD_NAME(2),
		java::lang::ArrayIndexOutOfBoundsException::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::ArrayIndexOutOfBoundsException,"java/lang/ArrayIndexOutOfBoundsException")
J2CPP_DEFINE_METHOD(java::lang::ArrayIndexOutOfBoundsException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ArrayIndexOutOfBoundsException,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::lang::ArrayIndexOutOfBoundsException,2,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
