/*================================================================================
  code generated by: java2cpp
  class: android.graphics.Path
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATH_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATH_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Path_ { class FillType; } } } }
namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Path_ { class Direction; } } } }


#include <android/graphics/Matrix.hpp>
#include <android/graphics/Path.hpp>
#include <android/graphics/RectF.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Path;
	namespace Path_ {

		class FillType;
		class FillType
			: public cpp_object<FillType>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			FillType(jobject jobj)
			: cpp_object<FillType>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::graphics::Path_::FillType, 1> > values();
			static local_ref< android::graphics::Path_::FillType > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Path_::FillType > > EVEN_ODD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Path_::FillType > > INVERSE_EVEN_ODD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Path_::FillType > > INVERSE_WINDING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::Path_::FillType > > WINDING;
		}; //class FillType

		class Direction;
		class Direction
			: public cpp_object<Direction>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			Direction(jobject jobj)
			: cpp_object<Direction>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::graphics::Path_::Direction, 1> > values();
			static local_ref< android::graphics::Path_::Direction > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Path_::Direction > > CCW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Path_::Direction > > CW;
		}; //class Direction

	} //namespace Path_

	class Path
		: public cpp_object<Path>
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
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)

		typedef Path_::FillType FillType;
		typedef Path_::Direction Direction;

		Path(jobject jobj)
		: cpp_object<Path>(jobj)
		{
		}

		void reset();
		void rewind();
		void set(local_ref< android::graphics::Path > const&);
		local_ref< android::graphics::Path_::FillType > getFillType();
		void setFillType(local_ref< android::graphics::Path_::FillType > const&);
		cpp_boolean isInverseFillType();
		void toggleInverseFillType();
		cpp_boolean isEmpty();
		cpp_boolean isRect(local_ref< android::graphics::RectF > const&);
		void computeBounds(local_ref< android::graphics::RectF > const&, cpp_boolean const&);
		void incReserve(cpp_int const&);
		void moveTo(cpp_float const&, cpp_float const&);
		void rMoveTo(cpp_float const&, cpp_float const&);
		void lineTo(cpp_float const&, cpp_float const&);
		void rLineTo(cpp_float const&, cpp_float const&);
		void quadTo(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		void rQuadTo(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		void cubicTo(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		void rCubicTo(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&);
		void arcTo(local_ref< android::graphics::RectF > const&, cpp_float const&, cpp_float const&, cpp_boolean const&);
		void arcTo(local_ref< android::graphics::RectF > const&, cpp_float const&, cpp_float const&);
		void close();
		void addRect(local_ref< android::graphics::RectF > const&, local_ref< android::graphics::Path_::Direction > const&);
		void addRect(cpp_float const&, cpp_float const&, cpp_float const&, cpp_float const&, local_ref< android::graphics::Path_::Direction > const&);
		void addOval(local_ref< android::graphics::RectF > const&, local_ref< android::graphics::Path_::Direction > const&);
		void addCircle(cpp_float const&, cpp_float const&, cpp_float const&, local_ref< android::graphics::Path_::Direction > const&);
		void addArc(local_ref< android::graphics::RectF > const&, cpp_float const&, cpp_float const&);
		void addRoundRect(local_ref< android::graphics::RectF > const&, cpp_float const&, cpp_float const&, local_ref< android::graphics::Path_::Direction > const&);
		void addRoundRect(local_ref< android::graphics::RectF > const&, local_ref< cpp_float_array<1> > const&, local_ref< android::graphics::Path_::Direction > const&);
		void addPath(local_ref< android::graphics::Path > const&, cpp_float const&, cpp_float const&);
		void addPath(local_ref< android::graphics::Path > const&);
		void addPath(local_ref< android::graphics::Path > const&, local_ref< android::graphics::Matrix > const&);
		void offset(cpp_float const&, cpp_float const&, local_ref< android::graphics::Path > const&);
		void offset(cpp_float const&, cpp_float const&);
		void setLastPoint(cpp_float const&, cpp_float const&);
		void transform(local_ref< android::graphics::Matrix > const&, local_ref< android::graphics::Path > const&);
		void transform(local_ref< android::graphics::Matrix > const&);
	}; //class Path

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATH_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATH_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<android::graphics::Path_::FillType, 1> > android::graphics::Path_::FillType::values()
{
	return local_ref< cpp_object_array<android::graphics::Path_::FillType, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::graphics::Path_::FillType > android::graphics::Path_::FillType::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::Path_::FillType >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::Path_::FillType > create< android::graphics::Path_::FillType>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Path_::FillType >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Path_::FillType::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Path_::FillType::J2CPP_CLASS_NAME, android::graphics::Path_::FillType::J2CPP_METHOD_NAME(2), android::graphics::Path_::FillType::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(0),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::EVEN_ODD;

static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(1),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::INVERSE_EVEN_ODD;

static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(2),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::INVERSE_WINDING;

static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(3),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::WINDING;


J2CPP_DEFINE_CLASS(android::graphics::Path_::FillType,"android/graphics/Path$FillType")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,0,"values","()[android.graphics.Path.FillType")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,0,"EVEN_ODD","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,1,"INVERSE_EVEN_ODD","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,2,"INVERSE_WINDING","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,3,"WINDING","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,4,"$VALUES","[android.graphics.Path.FillType")

local_ref< cpp_object_array<android::graphics::Path_::Direction, 1> > android::graphics::Path_::Direction::values()
{
	return local_ref< cpp_object_array<android::graphics::Path_::Direction, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::graphics::Path_::Direction > android::graphics::Path_::Direction::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::Path_::Direction >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::Path_::Direction > create< android::graphics::Path_::Direction>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Path_::Direction >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Path_::Direction::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Path_::Direction::J2CPP_CLASS_NAME, android::graphics::Path_::Direction::J2CPP_METHOD_NAME(2), android::graphics::Path_::Direction::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::graphics::Path_::Direction::J2CPP_CLASS_NAME,
	android::graphics::Path_::Direction::J2CPP_FIELD_NAME(0),
	android::graphics::Path_::Direction::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Path_::Direction >
> android::graphics::Path_::Direction::CCW;

static_field<
	android::graphics::Path_::Direction::J2CPP_CLASS_NAME,
	android::graphics::Path_::Direction::J2CPP_FIELD_NAME(1),
	android::graphics::Path_::Direction::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Path_::Direction >
> android::graphics::Path_::Direction::CW;


J2CPP_DEFINE_CLASS(android::graphics::Path_::Direction,"android/graphics/Path$Direction")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,0,"values","()[android.graphics.Path.Direction")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Path$Direction;")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Path_::Direction,0,"CCW","Landroid/graphics/Path$Direction;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::Direction,1,"CW","Landroid/graphics/Path$Direction;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::Direction,2,"$VALUES","[android.graphics.Path.Direction")


template <>
local_ref< android::graphics::Path > create< android::graphics::Path>()
{
	return local_ref< android::graphics::Path >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Path::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Path::J2CPP_CLASS_NAME, android::graphics::Path::J2CPP_METHOD_NAME(0), android::graphics::Path::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::graphics::Path > create< android::graphics::Path>(local_ref< android::graphics::Path > const &a0)
{
	return local_ref< android::graphics::Path >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::Path::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::Path::J2CPP_CLASS_NAME, android::graphics::Path::J2CPP_METHOD_NAME(1), android::graphics::Path::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Path::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::graphics::Path::rewind()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::graphics::Path::set(local_ref< android::graphics::Path > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Path_::FillType > android::graphics::Path::getFillType()
{
	return local_ref< android::graphics::Path_::FillType >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::graphics::Path::setFillType(local_ref< android::graphics::Path_::FillType > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::Path::isInverseFillType()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::graphics::Path::toggleInverseFillType()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean android::graphics::Path::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean android::graphics::Path::isRect(local_ref< android::graphics::RectF > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Path::computeBounds(local_ref< android::graphics::RectF > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::incReserve(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Path::moveTo(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::rMoveTo(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::lineTo(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::rLineTo(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::quadTo(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Path::rQuadTo(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Path::cubicTo(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::graphics::Path::rCubicTo(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void android::graphics::Path::arcTo(local_ref< android::graphics::RectF > const &a0, cpp_float const &a1, cpp_float const &a2, cpp_boolean const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Path::arcTo(local_ref< android::graphics::RectF > const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::Path::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

void android::graphics::Path::addRect(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::Path_::Direction > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::addRect(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3, local_ref< android::graphics::Path_::Direction > const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::graphics::Path::addOval(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::Path_::Direction > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::addCircle(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, local_ref< android::graphics::Path_::Direction > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Path::addArc(local_ref< android::graphics::RectF > const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::Path::addRoundRect(local_ref< android::graphics::RectF > const &a0, cpp_float const &a1, cpp_float const &a2, local_ref< android::graphics::Path_::Direction > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::Path::addRoundRect(local_ref< android::graphics::RectF > const &a0, local_ref< cpp_float_array<1> > const &a1, local_ref< android::graphics::Path_::Direction > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::Path::addPath(local_ref< android::graphics::Path > const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::Path::addPath(local_ref< android::graphics::Path > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::Path::addPath(local_ref< android::graphics::Path > const &a0, local_ref< android::graphics::Matrix > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::offset(cpp_float const &a0, cpp_float const &a1, local_ref< android::graphics::Path > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::Path::offset(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::setLastPoint(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::transform(local_ref< android::graphics::Matrix > const &a0, local_ref< android::graphics::Path > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::Path::transform(local_ref< android::graphics::Matrix > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::graphics::Path,"android/graphics/Path")
J2CPP_DEFINE_METHOD(android::graphics::Path,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,1,"<init>","(Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,2,"reset","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,3,"rewind","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,4,"set","(Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,5,"getFillType","()Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_METHOD(android::graphics::Path,6,"setFillType","(Landroid/graphics/Path$FillType;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,7,"isInverseFillType","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Path,8,"toggleInverseFillType","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,9,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Path,10,"isRect","(Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Path,11,"computeBounds","(Landroid/graphics/RectF;Z)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,12,"incReserve","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,13,"moveTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,14,"rMoveTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,15,"lineTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,16,"rLineTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,17,"quadTo","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,18,"rQuadTo","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,19,"cubicTo","(FFFFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,20,"rCubicTo","(FFFFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,21,"arcTo","(Landroid/graphics/RectF;FFZ)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,22,"arcTo","(Landroid/graphics/RectF;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,23,"close","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,24,"addRect","(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,25,"addRect","(FFFFLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,26,"addOval","(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,27,"addCircle","(FFFLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,28,"addArc","(Landroid/graphics/RectF;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,29,"addRoundRect","(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,30,"addRoundRect","(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,31,"addPath","(Landroid/graphics/Path;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,32,"addPath","(Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,33,"addPath","(Landroid/graphics/Path;Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,34,"offset","(FFLandroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,35,"offset","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,36,"setLastPoint","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,37,"transform","(Landroid/graphics/Matrix;Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,38,"transform","(Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,39,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
