/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.Attr
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ATTR_HPP_DECL
#define J2CPP_ORG_W3C_DOM_ATTR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class TypeInfo; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Element; } } } }


#include <java/lang/String.hpp>
#include <org/w3c/dom/Element.hpp>
#include <org/w3c/dom/TypeInfo.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Attr;
	class Attr
		: public cpp_object<Attr>
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

		Attr(jobject jobj)
		: cpp_object<Attr>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		cpp_boolean getSpecified();
		local_ref< java::lang::String > getValue();
		void setValue(local_ref< java::lang::String > const&);
		local_ref< org::w3c::dom::Element > getOwnerElement();
		local_ref< org::w3c::dom::TypeInfo > getSchemaTypeInfo();
		cpp_boolean isId();
	}; //class Attr

} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ATTR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ATTR_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_ATTR_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > org::w3c::dom::Attr::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean org::w3c::dom::Attr::getSpecified()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Attr::getValue()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void org::w3c::dom::Attr::setValue(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::w3c::dom::Element > org::w3c::dom::Attr::getOwnerElement()
{
	return local_ref< org::w3c::dom::Element >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< org::w3c::dom::TypeInfo > org::w3c::dom::Attr::getSchemaTypeInfo()
{
	return local_ref< org::w3c::dom::TypeInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean org::w3c::dom::Attr::isId()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Attr,"org/w3c/dom/Attr")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,0,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,1,"getSpecified","()Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,2,"getValue","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,3,"setValue","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,4,"getOwnerElement","()Lorg/w3c/dom/Element;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,5,"getSchemaTypeInfo","()Lorg/w3c/dom/TypeInfo;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Attr,6,"isId","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ATTR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
