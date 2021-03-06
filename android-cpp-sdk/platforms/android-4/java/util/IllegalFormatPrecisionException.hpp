/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.IllegalFormatPrecisionException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace util { class IllegalFormatException; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class IllegalArgumentException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/IllegalFormatException.hpp>


namespace j2cpp {

namespace java { namespace util {

	class IllegalFormatPrecisionException;
	class IllegalFormatPrecisionException
		: public object<IllegalFormatPrecisionException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit IllegalFormatPrecisionException(jobject jobj)
		: object<IllegalFormatPrecisionException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::util::IllegalFormatException>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::IllegalArgumentException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Object>() const;


		IllegalFormatPrecisionException(jint);
		jint getPrecision();
		local_ref< java::lang::String > getMessage();
	}; //class IllegalFormatPrecisionException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::IllegalFormatPrecisionException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::IllegalFormatPrecisionException::operator local_ref<java::util::IllegalFormatException>() const
{
	return local_ref<java::util::IllegalFormatException>(get_jobject());
}

java::util::IllegalFormatPrecisionException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::util::IllegalFormatPrecisionException::operator local_ref<java::lang::IllegalArgumentException>() const
{
	return local_ref<java::lang::IllegalArgumentException>(get_jobject());
}

java::util::IllegalFormatPrecisionException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::IllegalFormatPrecisionException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::util::IllegalFormatPrecisionException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::IllegalFormatPrecisionException::IllegalFormatPrecisionException(jint a0)
: object<java::util::IllegalFormatPrecisionException>(
	call_new_object<
		java::util::IllegalFormatPrecisionException::J2CPP_CLASS_NAME,
		java::util::IllegalFormatPrecisionException::J2CPP_METHOD_NAME(0),
		java::util::IllegalFormatPrecisionException::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint java::util::IllegalFormatPrecisionException::getPrecision()
{
	return call_method<
		java::util::IllegalFormatPrecisionException::J2CPP_CLASS_NAME,
		java::util::IllegalFormatPrecisionException::J2CPP_METHOD_NAME(1),
		java::util::IllegalFormatPrecisionException::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::util::IllegalFormatPrecisionException::getMessage()
{
	return call_method<
		java::util::IllegalFormatPrecisionException::J2CPP_CLASS_NAME,
		java::util::IllegalFormatPrecisionException::J2CPP_METHOD_NAME(2),
		java::util::IllegalFormatPrecisionException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::IllegalFormatPrecisionException,"java/util/IllegalFormatPrecisionException")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatPrecisionException,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatPrecisionException,1,"getPrecision","()I")
J2CPP_DEFINE_METHOD(java::util::IllegalFormatPrecisionException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ILLEGALFORMATPRECISIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
