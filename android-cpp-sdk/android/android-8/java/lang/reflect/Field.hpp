/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.Field
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/Type.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Field;
	class Field
		: public cpp_object<Field>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)

		Field(jobject jobj)
		: cpp_object<Field>(jobj)
		{
		}

		cpp_boolean isSynthetic();
		local_ref< java::lang::String > toGenericString();
		cpp_boolean isEnumConstant();
		local_ref< java::lang::reflect::Type > getGenericType();
		local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > getDeclaredAnnotations();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object > const&);
		cpp_boolean getBoolean(local_ref< java::lang::Object > const&);
		cpp_byte getByte(local_ref< java::lang::Object > const&);
		cpp_char getChar(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Class > getDeclaringClass();
		cpp_double getDouble(local_ref< java::lang::Object > const&);
		cpp_float getFloat(local_ref< java::lang::Object > const&);
		cpp_int getInt(local_ref< java::lang::Object > const&);
		cpp_long getLong(local_ref< java::lang::Object > const&);
		cpp_int getModifiers();
		local_ref< java::lang::String > getName();
		cpp_short getShort(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Class > getType();
		cpp_int hashCode();
		void set(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void setBoolean(local_ref< java::lang::Object > const&, cpp_boolean const&);
		void setByte(local_ref< java::lang::Object > const&, cpp_byte const&);
		void setChar(local_ref< java::lang::Object > const&, cpp_char const&);
		void setDouble(local_ref< java::lang::Object > const&, cpp_double const&);
		void setFloat(local_ref< java::lang::Object > const&, cpp_float const&);
		void setInt(local_ref< java::lang::Object > const&, cpp_int const&);
		void setLong(local_ref< java::lang::Object > const&, cpp_long const&);
		void setShort(local_ref< java::lang::Object > const&, cpp_short const&);
		local_ref< java::lang::String > toString();
	}; //class Field

} //namespace reflect
} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::reflect::Field > create< java::lang::reflect::Field>()
{
	return local_ref< java::lang::reflect::Field >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::reflect::Field::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::reflect::Field::J2CPP_CLASS_NAME, java::lang::reflect::Field::J2CPP_METHOD_NAME(0), java::lang::reflect::Field::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::lang::reflect::Field::isSynthetic()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::reflect::Field::toGenericString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::lang::reflect::Field::isEnumConstant()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::reflect::Type > java::lang::reflect::Field::getGenericType()
{
	return local_ref< java::lang::reflect::Type >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> > java::lang::reflect::Field::getDeclaredAnnotations()
{
	return local_ref< cpp_object_array<java::lang::annotation::Annotation, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::lang::reflect::Field::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::lang::reflect::Field::get(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::reflect::Field::getBoolean(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_byte java::lang::reflect::Field::getByte(local_ref< java::lang::Object > const &a0)
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_char java::lang::reflect::Field::getChar(local_ref< java::lang::Object > const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Class > java::lang::reflect::Field::getDeclaringClass()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_double java::lang::reflect::Field::getDouble(local_ref< java::lang::Object > const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float java::lang::reflect::Field::getFloat(local_ref< java::lang::Object > const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::reflect::Field::getInt(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::lang::reflect::Field::getLong(local_ref< java::lang::Object > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::reflect::Field::getModifiers()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::reflect::Field::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_short java::lang::reflect::Field::getShort(local_ref< java::lang::Object > const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Class > java::lang::reflect::Field::getType()
{
	return local_ref< java::lang::Class >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int java::lang::reflect::Field::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

void java::lang::reflect::Field::set(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setBoolean(local_ref< java::lang::Object > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setByte(local_ref< java::lang::Object > const &a0, cpp_byte const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setChar(local_ref< java::lang::Object > const &a0, cpp_char const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setDouble(local_ref< java::lang::Object > const &a0, cpp_double const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setFloat(local_ref< java::lang::Object > const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setInt(local_ref< java::lang::Object > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setLong(local_ref< java::lang::Object > const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::reflect::Field::setShort(local_ref< java::lang::Object > const &a0, cpp_short const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::reflect::Field::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::reflect::Field,"java/lang/reflect/Field")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,1,"isSynthetic","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,2,"toGenericString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,3,"isEnumConstant","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,4,"getGenericType","()Ljava/lang/reflect/Type;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,5,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,7,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,8,"getBoolean","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,9,"getByte","(Ljava/lang/Object;)B")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,10,"getChar","(Ljava/lang/Object;)C")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,11,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,12,"getDouble","(Ljava/lang/Object;)D")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,13,"getFloat","(Ljava/lang/Object;)F")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,14,"getInt","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,15,"getLong","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,16,"getModifiers","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,17,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,18,"getShort","(Ljava/lang/Object;)S")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,19,"getType","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,20,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,21,"set","(Ljava/lang/Object;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,22,"setBoolean","(Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,23,"setByte","(Ljava/lang/Object;B)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,24,"setChar","(Ljava/lang/Object;C)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,25,"setDouble","(Ljava/lang/Object;D)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,26,"setFloat","(Ljava/lang/Object;F)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,27,"setInt","(Ljava/lang/Object;I)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,28,"setLong","(Ljava/lang/Object;J)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,29,"setShort","(Ljava/lang/Object;S)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Field,30,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_FIELD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
