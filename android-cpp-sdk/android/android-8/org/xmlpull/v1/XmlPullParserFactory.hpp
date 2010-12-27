/*================================================================================
  code generated by: java2cpp
  class: org.xmlpull.v1.XmlPullParserFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_DECL
#define J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlSerializer; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }


#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>
#include <org/xmlpull/v1/XmlSerializer.hpp>


namespace j2cpp {

namespace org { namespace xmlpull { namespace v1 {

	class XmlPullParserFactory;
	class XmlPullParserFactory
		: public cpp_object<XmlPullParserFactory>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		XmlPullParserFactory(jobject jobj)
		: cpp_object<XmlPullParserFactory>(jobj)
		{
		}

		void setFeature(local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_boolean getFeature(local_ref< java::lang::String > const&);
		void setNamespaceAware(cpp_boolean const&);
		cpp_boolean isNamespaceAware();
		void setValidating(cpp_boolean const&);
		cpp_boolean isValidating();
		local_ref< org::xmlpull::v1::XmlPullParser > newPullParser();
		local_ref< org::xmlpull::v1::XmlSerializer > newSerializer();
		static local_ref< org::xmlpull::v1::XmlPullParserFactory > newInstance();
		static local_ref< org::xmlpull::v1::XmlPullParserFactory > newInstance(local_ref< java::lang::String > const&, local_ref< java::lang::Class > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > PROPERTY_NAME;
	}; //class XmlPullParserFactory

} //namespace v1
} //namespace xmlpull
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_IMPL
#define J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::xmlpull::v1::XmlPullParserFactory > create< org::xmlpull::v1::XmlPullParserFactory>()
{
	return local_ref< org::xmlpull::v1::XmlPullParserFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME>(),
			get_method_id<org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME, org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_NAME(0), org::xmlpull::v1::XmlPullParserFactory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::xmlpull::v1::XmlPullParserFactory::setFeature(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParserFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void org::xmlpull::v1::XmlPullParserFactory::setNamespaceAware(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParserFactory::isNamespaceAware()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void org::xmlpull::v1::XmlPullParserFactory::setValidating(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParserFactory::isValidating()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< org::xmlpull::v1::XmlPullParser > org::xmlpull::v1::XmlPullParserFactory::newPullParser()
{
	return local_ref< org::xmlpull::v1::XmlPullParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< org::xmlpull::v1::XmlSerializer > org::xmlpull::v1::XmlPullParserFactory::newSerializer()
{
	return local_ref< org::xmlpull::v1::XmlSerializer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< org::xmlpull::v1::XmlPullParserFactory > org::xmlpull::v1::XmlPullParserFactory::newInstance()
{
	return local_ref< org::xmlpull::v1::XmlPullParserFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>()
		)
	);
}

local_ref< org::xmlpull::v1::XmlPullParserFactory > org::xmlpull::v1::XmlPullParserFactory::newInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
{
	return local_ref< org::xmlpull::v1::XmlPullParserFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	org::xmlpull::v1::XmlPullParserFactory::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParserFactory::J2CPP_FIELD_NAME(0),
	org::xmlpull::v1::XmlPullParserFactory::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParserFactory::PROPERTY_NAME;


J2CPP_DEFINE_CLASS(org::xmlpull::v1::XmlPullParserFactory,"org/xmlpull/v1/XmlPullParserFactory")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,1,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,2,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,3,"setNamespaceAware","(Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,4,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,5,"setValidating","(Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,6,"isValidating","()Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,7,"newPullParser","()Lorg/xmlpull/v1/XmlPullParser;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,8,"newSerializer","()Lorg/xmlpull/v1/XmlSerializer;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,9,"newInstance","()Lorg/xmlpull/v1/XmlPullParserFactory;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParserFactory,10,"newInstance","(Ljava/lang/String;Ljava/lang/Class;)Lorg/xmlpull/v1/XmlPullParserFactory;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,0,"PROPERTY_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,1,"parserClasses","Ljava/util/ArrayList;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,2,"classNamesLocation","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,3,"serializerClasses","Ljava/util/ArrayList;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParserFactory,4,"features","Ljava/util/HashMap;")

} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLPULLPARSERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
