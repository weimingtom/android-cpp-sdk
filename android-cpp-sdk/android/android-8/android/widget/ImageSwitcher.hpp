/*================================================================================
  code generated by: java2cpp
  class: android.widget.ImageSwitcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_DECL


namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/net/Uri.hpp>
#include <android/util/AttributeSet.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ImageSwitcher;
	class ImageSwitcher
		: public cpp_object<ImageSwitcher>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		ImageSwitcher(jobject jobj)
		: cpp_object<ImageSwitcher>(jobj)
		{
		}

		void setImageResource(cpp_int const&);
		void setImageURI(local_ref< android::net::Uri > const&);
		void setImageDrawable(local_ref< android::graphics::drawable::Drawable > const&);
	}; //class ImageSwitcher

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::ImageSwitcher > create< android::widget::ImageSwitcher>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::ImageSwitcher >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ImageSwitcher::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ImageSwitcher::J2CPP_CLASS_NAME, android::widget::ImageSwitcher::J2CPP_METHOD_NAME(0), android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ImageSwitcher > create< android::widget::ImageSwitcher>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::ImageSwitcher >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ImageSwitcher::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ImageSwitcher::J2CPP_CLASS_NAME, android::widget::ImageSwitcher::J2CPP_METHOD_NAME(1), android::widget::ImageSwitcher::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::ImageSwitcher::setImageResource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ImageSwitcher::setImageURI(local_ref< android::net::Uri > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ImageSwitcher::setImageDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ImageSwitcher,"android/widget/ImageSwitcher")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,2,"setImageResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,3,"setImageURI","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::widget::ImageSwitcher,4,"setImageDrawable","(Landroid/graphics/drawable/Drawable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_IMAGESWITCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
