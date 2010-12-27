/*================================================================================
  code generated by: java2cpp
  class: android.graphics.Point
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_POINT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_POINT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Point;
	class Point
		: public cpp_object<Point>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		Point(jobject jobj)
		: cpp_object<Point>(jobj)
		, x(jobj)
		, y(jobj)
		{
		}

		void set(cpp_int const&, cpp_int const&);
		void negate();
		void offset(cpp_int const&, cpp_int const&);
		cpp_boolean equals(cpp_int const&, cpp_int const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > x;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > y;
	}; //class Point

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_POINT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_POINT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_POINT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::Point > create< android::graphics::Point>()
{
	return local_ref< android::graphics::Point >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Point::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Point::J2CPP_CLASS_NAME, android::graphics::Point::J2CPP_METHOD_NAME(0), android::graphics::Point::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::graphics::Point > create< android::graphics::Point>(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Point >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Point::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Point::J2CPP_CLASS_NAME, android::graphics::Point::J2CPP_METHOD_NAME(1), android::graphics::Point::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::Point > create< android::graphics::Point>(local_ref< android::graphics::Point > const &a0)
{
	return local_ref< android::graphics::Point >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Point::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Point::J2CPP_CLASS_NAME, android::graphics::Point::J2CPP_METHOD_NAME(2), android::graphics::Point::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Point::set(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Point::negate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::graphics::Point::offset(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Point::equals(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Point::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::Point::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::graphics::Point::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::graphics::Point,"android/graphics/Point")
J2CPP_DEFINE_METHOD(android::graphics::Point,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Point,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Point,2,"<init>","(Landroid/graphics/Point;)V")
J2CPP_DEFINE_METHOD(android::graphics::Point,3,"set","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Point,4,"negate","()V")
J2CPP_DEFINE_METHOD(android::graphics::Point,5,"offset","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::Point,6,"equals","(II)Z")
J2CPP_DEFINE_METHOD(android::graphics::Point,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Point,8,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::graphics::Point,9,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::graphics::Point,0,"x","I")
J2CPP_DEFINE_FIELD(android::graphics::Point,1,"y","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_POINT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
