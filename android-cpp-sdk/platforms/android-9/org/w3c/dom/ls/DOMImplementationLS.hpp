/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.ls.DOMImplementationLS
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_HPP_DECL
#define J2CPP_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSSerializer; } } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSInput; } } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSParser; } } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { namespace ls { class LSOutput; } } } } }


#include <java/lang/String.hpp>
#include <org/w3c/dom/ls/LSInput.hpp>
#include <org/w3c/dom/ls/LSOutput.hpp>
#include <org/w3c/dom/ls/LSParser.hpp>
#include <org/w3c/dom/ls/LSSerializer.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom { namespace ls {

	class DOMImplementationLS;
	class DOMImplementationLS
		: public cpp_object<DOMImplementationLS>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		DOMImplementationLS(jobject jobj)
		: cpp_object<DOMImplementationLS>(jobj)
		{
		}

		local_ref< org::w3c::dom::ls::LSParser > createLSParser(cpp_short const&, local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::ls::LSSerializer > createLSSerializer();
		local_ref< org::w3c::dom::ls::LSInput > createLSInput();
		local_ref< org::w3c::dom::ls::LSOutput > createLSOutput();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_short > MODE_SYNCHRONOUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_short > MODE_ASYNCHRONOUS;
	}; //class DOMImplementationLS

} //namespace ls
} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_HPP_IMPL

namespace j2cpp {


local_ref< org::w3c::dom::ls::LSParser > org::w3c::dom::ls::DOMImplementationLS::createLSParser(cpp_short const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< org::w3c::dom::ls::LSParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::ls::LSSerializer > org::w3c::dom::ls::DOMImplementationLS::createLSSerializer()
{
	return local_ref< org::w3c::dom::ls::LSSerializer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::w3c::dom::ls::LSInput > org::w3c::dom::ls::DOMImplementationLS::createLSInput()
{
	return local_ref< org::w3c::dom::ls::LSInput >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< org::w3c::dom::ls::LSOutput > org::w3c::dom::ls::DOMImplementationLS::createLSOutput()
{
	return local_ref< org::w3c::dom::ls::LSOutput >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


static_field<
	org::w3c::dom::ls::DOMImplementationLS::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::DOMImplementationLS::J2CPP_FIELD_NAME(0),
	org::w3c::dom::ls::DOMImplementationLS::J2CPP_FIELD_SIGNATURE(0),
	cpp_short
> org::w3c::dom::ls::DOMImplementationLS::MODE_SYNCHRONOUS;

static_field<
	org::w3c::dom::ls::DOMImplementationLS::J2CPP_CLASS_NAME,
	org::w3c::dom::ls::DOMImplementationLS::J2CPP_FIELD_NAME(1),
	org::w3c::dom::ls::DOMImplementationLS::J2CPP_FIELD_SIGNATURE(1),
	cpp_short
> org::w3c::dom::ls::DOMImplementationLS::MODE_ASYNCHRONOUS;


J2CPP_DEFINE_CLASS(org::w3c::dom::ls::DOMImplementationLS,"org/w3c/dom/ls/DOMImplementationLS")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::DOMImplementationLS,0,"createLSParser","(SLjava/lang/String;)Lorg/w3c/dom/ls/LSParser;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::DOMImplementationLS,1,"createLSSerializer","()Lorg/w3c/dom/ls/LSSerializer;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::DOMImplementationLS,2,"createLSInput","()Lorg/w3c/dom/ls/LSInput;")
J2CPP_DEFINE_METHOD(org::w3c::dom::ls::DOMImplementationLS,3,"createLSOutput","()Lorg/w3c/dom/ls/LSOutput;")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::DOMImplementationLS,0,"MODE_SYNCHRONOUS","S")
J2CPP_DEFINE_FIELD(org::w3c::dom::ls::DOMImplementationLS,1,"MODE_ASYNCHRONOUS","S")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_LS_DOMIMPLEMENTATIONLS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
