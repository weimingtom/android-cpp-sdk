/*================================================================================
  code generated by: java2cpp
  class: android.view.Gravity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_GRAVITY_HPP_DECL
#define J2CPP_ANDROID_VIEW_GRAVITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }


#include <android/graphics/Rect.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class Gravity;
	class Gravity
		: public cpp_object<Gravity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)

		explicit Gravity(jobject jobj)
		: cpp_object<Gravity>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Gravity();
		static void apply(cpp_int const&, cpp_int const&, cpp_int const&, local_ref< android::graphics::Rect > const&, local_ref< android::graphics::Rect > const&);
		static void apply(cpp_int const&, cpp_int const&, cpp_int const&, local_ref< android::graphics::Rect > const&, cpp_int const&, cpp_int const&, local_ref< android::graphics::Rect > const&);
		static void applyDisplay(cpp_int const&, local_ref< android::graphics::Rect > const&, local_ref< android::graphics::Rect > const&);
		static cpp_boolean isVertical(cpp_int const&);
		static cpp_boolean isHorizontal(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > NO_GRAVITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > AXIS_SPECIFIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > AXIS_PULL_BEFORE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > AXIS_PULL_AFTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > AXIS_CLIP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > AXIS_X_SHIFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > AXIS_Y_SHIFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > TOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > BOTTOM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > LEFT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > RIGHT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > CENTER_VERTICAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > FILL_VERTICAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > CENTER_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > FILL_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > CENTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > FILL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), cpp_int > CLIP_VERTICAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), cpp_int > CLIP_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), cpp_int > HORIZONTAL_GRAVITY_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), cpp_int > VERTICAL_GRAVITY_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), cpp_int > DISPLAY_CLIP_VERTICAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), cpp_int > DISPLAY_CLIP_HORIZONTAL;
	}; //class Gravity

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_GRAVITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_GRAVITY_HPP_IMPL
#define J2CPP_ANDROID_VIEW_GRAVITY_HPP_IMPL

namespace j2cpp {



android::view::Gravity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::view::Gravity::Gravity()
: cpp_object<android::view::Gravity>(
	environment::get().get_jenv()->NewObject(
		get_class<android::view::Gravity::J2CPP_CLASS_NAME>(),
		get_method_id<android::view::Gravity::J2CPP_CLASS_NAME, android::view::Gravity::J2CPP_METHOD_NAME(0), android::view::Gravity::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void android::view::Gravity::apply(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< android::graphics::Rect > const &a3, local_ref< android::graphics::Rect > const &a4)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::view::Gravity::apply(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< android::graphics::Rect > const &a3, cpp_int const &a4, cpp_int const &a5, local_ref< android::graphics::Rect > const &a6)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype()
		)
	);
}

void android::view::Gravity::applyDisplay(cpp_int const &a0, local_ref< android::graphics::Rect > const &a1, local_ref< android::graphics::Rect > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::view::Gravity::isVertical(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::Gravity::isHorizontal(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(0),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::view::Gravity::NO_GRAVITY;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(1),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::view::Gravity::AXIS_SPECIFIED;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(2),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::view::Gravity::AXIS_PULL_BEFORE;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(3),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::view::Gravity::AXIS_PULL_AFTER;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(4),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::view::Gravity::AXIS_CLIP;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(5),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::view::Gravity::AXIS_X_SHIFT;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(6),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::view::Gravity::AXIS_Y_SHIFT;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(7),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::view::Gravity::TOP;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(8),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::view::Gravity::BOTTOM;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(9),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::view::Gravity::LEFT;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(10),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> android::view::Gravity::RIGHT;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(11),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> android::view::Gravity::CENTER_VERTICAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(12),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> android::view::Gravity::FILL_VERTICAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(13),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> android::view::Gravity::CENTER_HORIZONTAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(14),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> android::view::Gravity::FILL_HORIZONTAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(15),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> android::view::Gravity::CENTER;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(16),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(16),
	cpp_int
> android::view::Gravity::FILL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(17),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(17),
	cpp_int
> android::view::Gravity::CLIP_VERTICAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(18),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(18),
	cpp_int
> android::view::Gravity::CLIP_HORIZONTAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(19),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(19),
	cpp_int
> android::view::Gravity::HORIZONTAL_GRAVITY_MASK;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(20),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(20),
	cpp_int
> android::view::Gravity::VERTICAL_GRAVITY_MASK;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(21),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(21),
	cpp_int
> android::view::Gravity::DISPLAY_CLIP_VERTICAL;

static_field<
	android::view::Gravity::J2CPP_CLASS_NAME,
	android::view::Gravity::J2CPP_FIELD_NAME(22),
	android::view::Gravity::J2CPP_FIELD_SIGNATURE(22),
	cpp_int
> android::view::Gravity::DISPLAY_CLIP_HORIZONTAL;


J2CPP_DEFINE_CLASS(android::view::Gravity,"android/view/Gravity")
J2CPP_DEFINE_METHOD(android::view::Gravity,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::Gravity,1,"apply","(IIILandroid/graphics/Rect;Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::view::Gravity,2,"apply","(IIILandroid/graphics/Rect;IILandroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::view::Gravity,3,"applyDisplay","(ILandroid/graphics/Rect;Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::view::Gravity,4,"isVertical","(I)Z")
J2CPP_DEFINE_METHOD(android::view::Gravity,5,"isHorizontal","(I)Z")
J2CPP_DEFINE_FIELD(android::view::Gravity,0,"NO_GRAVITY","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,1,"AXIS_SPECIFIED","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,2,"AXIS_PULL_BEFORE","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,3,"AXIS_PULL_AFTER","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,4,"AXIS_CLIP","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,5,"AXIS_X_SHIFT","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,6,"AXIS_Y_SHIFT","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,7,"TOP","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,8,"BOTTOM","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,9,"LEFT","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,10,"RIGHT","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,11,"CENTER_VERTICAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,12,"FILL_VERTICAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,13,"CENTER_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,14,"FILL_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,15,"CENTER","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,16,"FILL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,17,"CLIP_VERTICAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,18,"CLIP_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,19,"HORIZONTAL_GRAVITY_MASK","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,20,"VERTICAL_GRAVITY_MASK","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,21,"DISPLAY_CLIP_VERTICAL","I")
J2CPP_DEFINE_FIELD(android::view::Gravity,22,"DISPLAY_CLIP_HORIZONTAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_GRAVITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION