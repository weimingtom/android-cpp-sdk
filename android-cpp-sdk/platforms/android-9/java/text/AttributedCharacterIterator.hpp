/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.AttributedCharacterIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_HPP_DECL
#define J2CPP_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace text { class CharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { namespace AttributedCharacterIterator_ { class Attribute; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/CharacterIterator.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace text {

	class AttributedCharacterIterator;
	namespace AttributedCharacterIterator_ {

		class Attribute;
		class Attribute
			: public object<Attribute>
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
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			explicit Attribute(jobject jobj)
			: object<Attribute>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<java::io::Serializable>() const;


			jboolean equals(local_ref< java::lang::Object >  const&);
			jint hashCode();
			local_ref< java::lang::String > toString();

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::text::AttributedCharacterIterator_::Attribute > > INPUT_METHOD_SEGMENT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::text::AttributedCharacterIterator_::Attribute > > LANGUAGE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::text::AttributedCharacterIterator_::Attribute > > READING;
		}; //class Attribute

	} //namespace AttributedCharacterIterator_

	class AttributedCharacterIterator
		: public object<AttributedCharacterIterator>
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

		typedef AttributedCharacterIterator_::Attribute Attribute;

		explicit AttributedCharacterIterator(jobject jobj)
		: object<AttributedCharacterIterator>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::text::CharacterIterator>() const;


		local_ref< java::util::Set > getAllAttributeKeys();
		local_ref< java::lang::Object > getAttribute(local_ref< java::text::AttributedCharacterIterator_::Attribute >  const&);
		local_ref< java::util::Map > getAttributes();
		jint getRunLimit();
		jint getRunLimit(local_ref< java::text::AttributedCharacterIterator_::Attribute >  const&);
		jint getRunLimit(local_ref< java::util::Set >  const&);
		jint getRunStart();
		jint getRunStart(local_ref< java::text::AttributedCharacterIterator_::Attribute >  const&);
		jint getRunStart(local_ref< java::util::Set >  const&);
	}; //class AttributedCharacterIterator

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_HPP_IMPL
#define J2CPP_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_HPP_IMPL

namespace j2cpp {




java::text::AttributedCharacterIterator_::Attribute::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::AttributedCharacterIterator_::Attribute::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


jboolean java::text::AttributedCharacterIterator_::Attribute::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_METHOD_NAME(1),
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_METHOD_SIGNATURE(1), 
		jboolean
	>(get_jobject(), a0);
}


jint java::text::AttributedCharacterIterator_::Attribute::hashCode()
{
	return call_method<
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_METHOD_NAME(3),
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}


local_ref< java::lang::String > java::text::AttributedCharacterIterator_::Attribute::toString()
{
	return call_method<
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_METHOD_NAME(5),
		java::text::AttributedCharacterIterator_::Attribute::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}



static_field<
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_CLASS_NAME,
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_FIELD_NAME(0),
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::text::AttributedCharacterIterator_::Attribute >
> java::text::AttributedCharacterIterator_::Attribute::INPUT_METHOD_SEGMENT;

static_field<
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_CLASS_NAME,
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_FIELD_NAME(1),
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::text::AttributedCharacterIterator_::Attribute >
> java::text::AttributedCharacterIterator_::Attribute::LANGUAGE;

static_field<
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_CLASS_NAME,
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_FIELD_NAME(2),
	java::text::AttributedCharacterIterator_::Attribute::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::text::AttributedCharacterIterator_::Attribute >
> java::text::AttributedCharacterIterator_::Attribute::READING;


J2CPP_DEFINE_CLASS(java::text::AttributedCharacterIterator_::Attribute,"java/text/AttributedCharacterIterator$Attribute")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,1,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,2,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,3,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,4,"readResolve","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator_::Attribute,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::text::AttributedCharacterIterator_::Attribute,0,"INPUT_METHOD_SEGMENT","Ljava/text/AttributedCharacterIterator$Attribute;")
J2CPP_DEFINE_FIELD(java::text::AttributedCharacterIterator_::Attribute,1,"LANGUAGE","Ljava/text/AttributedCharacterIterator$Attribute;")
J2CPP_DEFINE_FIELD(java::text::AttributedCharacterIterator_::Attribute,2,"READING","Ljava/text/AttributedCharacterIterator$Attribute;")



java::text::AttributedCharacterIterator::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::text::AttributedCharacterIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::text::AttributedCharacterIterator::operator local_ref<java::text::CharacterIterator>() const
{
	return local_ref<java::text::CharacterIterator>(get_jobject());
}

local_ref< java::util::Set > java::text::AttributedCharacterIterator::getAllAttributeKeys()
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(0),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::lang::Object > java::text::AttributedCharacterIterator::getAttribute(local_ref< java::text::AttributedCharacterIterator_::Attribute > const &a0)
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(1),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::util::Map > java::text::AttributedCharacterIterator::getAttributes()
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(2),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::Map >
	>(get_jobject());
}

jint java::text::AttributedCharacterIterator::getRunLimit()
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(3),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint java::text::AttributedCharacterIterator::getRunLimit(local_ref< java::text::AttributedCharacterIterator_::Attribute > const &a0)
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(4),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0);
}

jint java::text::AttributedCharacterIterator::getRunLimit(local_ref< java::util::Set > const &a0)
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(5),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0);
}

jint java::text::AttributedCharacterIterator::getRunStart()
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(6),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint java::text::AttributedCharacterIterator::getRunStart(local_ref< java::text::AttributedCharacterIterator_::Attribute > const &a0)
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(7),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0);
}

jint java::text::AttributedCharacterIterator::getRunStart(local_ref< java::util::Set > const &a0)
{
	return call_method<
		java::text::AttributedCharacterIterator::J2CPP_CLASS_NAME,
		java::text::AttributedCharacterIterator::J2CPP_METHOD_NAME(8),
		java::text::AttributedCharacterIterator::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::text::AttributedCharacterIterator,"java/text/AttributedCharacterIterator")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,0,"getAllAttributeKeys","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,1,"getAttribute","(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,2,"getAttributes","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,3,"getRunLimit","()I")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,4,"getRunLimit","(Ljava/text/AttributedCharacterIterator$Attribute;)I")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,5,"getRunLimit","(Ljava/util/Set;)I")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,6,"getRunStart","()I")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,7,"getRunStart","(Ljava/text/AttributedCharacterIterator$Attribute;)I")
J2CPP_DEFINE_METHOD(java::text::AttributedCharacterIterator,8,"getRunStart","(Ljava/util/Set;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_ATTRIBUTEDCHARACTERITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
