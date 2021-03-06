/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.annotation.AnnotationTypeMismatchException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Method; } } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/lang/reflect/Method.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class AnnotationTypeMismatchException;
	class AnnotationTypeMismatchException
		: public object<AnnotationTypeMismatchException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AnnotationTypeMismatchException(jobject jobj)
		: object<AnnotationTypeMismatchException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		AnnotationTypeMismatchException(local_ref< java::lang::reflect::Method > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::reflect::Method > element();
		local_ref< java::lang::String > foundType();
	}; //class AnnotationTypeMismatchException

} //namespace annotation
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::annotation::AnnotationTypeMismatchException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::annotation::AnnotationTypeMismatchException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::annotation::AnnotationTypeMismatchException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::lang::annotation::AnnotationTypeMismatchException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::lang::annotation::AnnotationTypeMismatchException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::lang::annotation::AnnotationTypeMismatchException::AnnotationTypeMismatchException(local_ref< java::lang::reflect::Method > const &a0, local_ref< java::lang::String > const &a1)
: object<java::lang::annotation::AnnotationTypeMismatchException>(
	call_new_object<
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_CLASS_NAME,
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_METHOD_NAME(0),
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< java::lang::reflect::Method > java::lang::annotation::AnnotationTypeMismatchException::element()
{
	return call_method<
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_CLASS_NAME,
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_METHOD_NAME(1),
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::reflect::Method >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::annotation::AnnotationTypeMismatchException::foundType()
{
	return call_method<
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_CLASS_NAME,
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_METHOD_NAME(2),
		java::lang::annotation::AnnotationTypeMismatchException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::annotation::AnnotationTypeMismatchException,"java/lang/annotation/AnnotationTypeMismatchException")
J2CPP_DEFINE_METHOD(java::lang::annotation::AnnotationTypeMismatchException,0,"<init>","(Ljava/lang/reflect/Method;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::annotation::AnnotationTypeMismatchException,1,"element","()Ljava/lang/reflect/Method;")
J2CPP_DEFINE_METHOD(java::lang::annotation::AnnotationTypeMismatchException,2,"foundType","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
