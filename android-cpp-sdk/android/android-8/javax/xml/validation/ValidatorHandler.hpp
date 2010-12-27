/*================================================================================
  code generated by: java2cpp
  class: javax.xml.validation.ValidatorHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_VALIDATORHANDLER_HPP_DECL
#define J2CPP_JAVAX_XML_VALIDATION_VALIDATORHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSResourceResolver; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ContentHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace javax { namespace xml { namespace validation { class TypeInfoProvider; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/validation/TypeInfoProvider.hpp>
#include <org/w3c/dom/ls/LSResourceResolver.hpp>
#include <org/xml/sax/ContentHandler.hpp>
#include <org/xml/sax/ErrorHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace validation {

	class ValidatorHandler;
	class ValidatorHandler
		: public cpp_object<ValidatorHandler>
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

		ValidatorHandler(jobject jobj)
		: cpp_object<ValidatorHandler>(jobj)
		{
		}

		void setContentHandler(local_ref< org::xml::sax::ContentHandler > const&);
		local_ref< org::xml::sax::ContentHandler > getContentHandler();
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const&);
		local_ref< org::xml::sax::ErrorHandler > getErrorHandler();
		void setResourceResolver(local_ref< org::w3c::dom::ls::LSResourceResolver > const&);
		local_ref< org::w3c::dom::ls::LSResourceResolver > getResourceResolver();
		local_ref< javax::xml::validation::TypeInfoProvider > getTypeInfoProvider();
		cpp_boolean getFeature(local_ref< java::lang::String > const&);
		void setFeature(local_ref< java::lang::String > const&, cpp_boolean const&);
		void setProperty(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String > const&);
	}; //class ValidatorHandler

} //namespace validation
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_VALIDATORHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_VALIDATION_VALIDATORHANDLER_HPP_IMPL
#define J2CPP_JAVAX_XML_VALIDATION_VALIDATORHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::validation::ValidatorHandler > create< javax::xml::validation::ValidatorHandler>()
{
	return local_ref< javax::xml::validation::ValidatorHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::validation::ValidatorHandler::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::validation::ValidatorHandler::J2CPP_CLASS_NAME, javax::xml::validation::ValidatorHandler::J2CPP_METHOD_NAME(0), javax::xml::validation::ValidatorHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void javax::xml::validation::ValidatorHandler::setContentHandler(local_ref< org::xml::sax::ContentHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::xml::sax::ContentHandler > javax::xml::validation::ValidatorHandler::getContentHandler()
{
	return local_ref< org::xml::sax::ContentHandler >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void javax::xml::validation::ValidatorHandler::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::xml::sax::ErrorHandler > javax::xml::validation::ValidatorHandler::getErrorHandler()
{
	return local_ref< org::xml::sax::ErrorHandler >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void javax::xml::validation::ValidatorHandler::setResourceResolver(local_ref< org::w3c::dom::ls::LSResourceResolver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::ls::LSResourceResolver > javax::xml::validation::ValidatorHandler::getResourceResolver()
{
	return local_ref< org::w3c::dom::ls::LSResourceResolver >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< javax::xml::validation::TypeInfoProvider > javax::xml::validation::ValidatorHandler::getTypeInfoProvider()
{
	return local_ref< javax::xml::validation::TypeInfoProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean javax::xml::validation::ValidatorHandler::getFeature(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void javax::xml::validation::ValidatorHandler::setFeature(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::validation::ValidatorHandler::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::xml::validation::ValidatorHandler::getProperty(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::validation::ValidatorHandler,"javax/xml/validation/ValidatorHandler")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,1,"setContentHandler","(Lorg/xml/sax/ContentHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,2,"getContentHandler","()Lorg/xml/sax/ContentHandler;")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,3,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,4,"getErrorHandler","()Lorg/xml/sax/ErrorHandler;")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,5,"setResourceResolver","(Lorg/w3c/dom/ls/LSResourceResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,6,"getResourceResolver","()Lorg/w3c/dom/ls/LSResourceResolver;")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,7,"getTypeInfoProvider","()Ljavax/xml/validation/TypeInfoProvider;")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,8,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,9,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,10,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(javax::xml::validation::ValidatorHandler,11,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_VALIDATION_VALIDATORHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
