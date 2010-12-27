/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.TransitionDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/drawable/Drawable.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class TransitionDrawable;
	class TransitionDrawable
		: public cpp_object<TransitionDrawable>
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

		TransitionDrawable(jobject jobj)
		: cpp_object<TransitionDrawable>(jobj)
		{
		}

		void startTransition(cpp_int const&);
		void resetTransition();
		void reverseTransition(cpp_int const&);
		void draw(local_ref< android::graphics::Canvas > const&);
		void setCrossFadeEnabled(cpp_boolean const&);
		cpp_boolean isCrossFadeEnabled();
	}; //class TransitionDrawable

} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::TransitionDrawable > create< android::graphics::drawable::TransitionDrawable>(local_ref< cpp_object_array<android::graphics::drawable::Drawable, 1> > const &a0)
{
	return local_ref< android::graphics::drawable::TransitionDrawable >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::TransitionDrawable::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::TransitionDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::TransitionDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::TransitionDrawable::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::TransitionDrawable::startTransition(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::TransitionDrawable::resetTransition()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::graphics::drawable::TransitionDrawable::reverseTransition(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::TransitionDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::TransitionDrawable::setCrossFadeEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::drawable::TransitionDrawable::isCrossFadeEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::TransitionDrawable,"android/graphics/drawable/TransitionDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,0,"<init>","([android.graphics.drawable.Drawable)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,1,"startTransition","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,2,"resetTransition","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,3,"reverseTransition","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,4,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,5,"setCrossFadeEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::TransitionDrawable,6,"isCrossFadeEnabled","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_TRANSITIONDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
