/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.shapes.PathShape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Path.hpp>
#include <android/graphics/drawable/shapes/Shape.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class PathShape;
	class PathShape
		: public cpp_object<PathShape>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		PathShape(jobject jobj)
		: cpp_object<PathShape>(jobj)
		{
		}

		void draw(local_ref< android::graphics::Canvas > const&, local_ref< android::graphics::Paint > const&);
		local_ref< android::graphics::drawable::shapes::PathShape > clone();
		local_ref< android::graphics::drawable::shapes::Shape > clone_1();
		local_ref< java::lang::Object > clone_2();
	}; //class PathShape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::shapes::PathShape > create< android::graphics::drawable::shapes::PathShape>(local_ref< android::graphics::Path > const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return local_ref< android::graphics::drawable::shapes::PathShape >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::shapes::PathShape::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::shapes::PathShape::J2CPP_CLASS_NAME, android::graphics::drawable::shapes::PathShape::J2CPP_METHOD_NAME(0), android::graphics::drawable::shapes::PathShape::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::drawable::shapes::PathShape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


local_ref< android::graphics::drawable::shapes::PathShape > android::graphics::drawable::shapes::PathShape::clone()
{
	return local_ref< android::graphics::drawable::shapes::PathShape >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< android::graphics::drawable::shapes::Shape > android::graphics::drawable::shapes::PathShape::clone_1()
{
	return local_ref< android::graphics::drawable::shapes::Shape >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > android::graphics::drawable::shapes::PathShape::clone_2()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::PathShape,"android/graphics/drawable/shapes/PathShape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::PathShape,0,"<init>","(Landroid/graphics/Path;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::PathShape,1,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::PathShape,2,"onResize","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::PathShape,3,"clone","()Landroid/graphics/drawable/shapes/PathShape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::PathShape,4,"clone","()Landroid/graphics/drawable/shapes/Shape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::PathShape,5,"clone","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_PATHSHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
