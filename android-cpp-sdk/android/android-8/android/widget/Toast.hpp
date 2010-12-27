/*================================================================================
  code generated by: java2cpp
  class: android.widget.Toast
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TOAST_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TOAST_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/content/Context.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class Toast;
	class Toast
		: public cpp_object<Toast>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		Toast(jobject jobj)
		: cpp_object<Toast>(jobj)
		{
		}

		void show();
		void cancel();
		void setView(local_ref< android::view::View > const&);
		local_ref< android::view::View > getView();
		void setDuration(cpp_int const&);
		cpp_int getDuration();
		void setMargin(cpp_float const&, cpp_float const&);
		cpp_float getHorizontalMargin();
		cpp_float getVerticalMargin();
		void setGravity(cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_int getGravity();
		cpp_int getXOffset();
		cpp_int getYOffset();
		static local_ref< android::widget::Toast > makeText(local_ref< android::content::Context > const&, local_ref< java::lang::CharSequence > const&, cpp_int const&);
		static local_ref< android::widget::Toast > makeText(local_ref< android::content::Context > const&, cpp_int const&, cpp_int const&);
		void setText(cpp_int const&);
		void setText(local_ref< java::lang::CharSequence > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > LENGTH_SHORT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > LENGTH_LONG;
	}; //class Toast

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TOAST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TOAST_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TOAST_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::Toast > create< android::widget::Toast>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::Toast >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::Toast::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::Toast::J2CPP_CLASS_NAME, android::widget::Toast::J2CPP_METHOD_NAME(0), android::widget::Toast::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::Toast::show()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::widget::Toast::cancel()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::widget::Toast::setView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::Toast::getView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::widget::Toast::setDuration(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::Toast::getDuration()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::widget::Toast::setMargin(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float android::widget::Toast::getHorizontalMargin()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_float android::widget::Toast::getVerticalMargin()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::widget::Toast::setGravity(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::widget::Toast::getGravity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::widget::Toast::getXOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_int android::widget::Toast::getYOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< android::widget::Toast > android::widget::Toast::makeText(local_ref< android::content::Context > const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::Toast >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::widget::Toast > android::widget::Toast::makeText(local_ref< android::content::Context > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::Toast >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::Toast::setText(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::Toast::setText(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::widget::Toast::J2CPP_CLASS_NAME,
	android::widget::Toast::J2CPP_FIELD_NAME(0),
	android::widget::Toast::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::Toast::LENGTH_SHORT;

static_field<
	android::widget::Toast::J2CPP_CLASS_NAME,
	android::widget::Toast::J2CPP_FIELD_NAME(1),
	android::widget::Toast::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::Toast::LENGTH_LONG;


J2CPP_DEFINE_CLASS(android::widget::Toast,"android/widget/Toast")
J2CPP_DEFINE_METHOD(android::widget::Toast,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::Toast,1,"show","()V")
J2CPP_DEFINE_METHOD(android::widget::Toast,2,"cancel","()V")
J2CPP_DEFINE_METHOD(android::widget::Toast,3,"setView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::Toast,4,"getView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::Toast,5,"setDuration","(I)V")
J2CPP_DEFINE_METHOD(android::widget::Toast,6,"getDuration","()I")
J2CPP_DEFINE_METHOD(android::widget::Toast,7,"setMargin","(FF)V")
J2CPP_DEFINE_METHOD(android::widget::Toast,8,"getHorizontalMargin","()F")
J2CPP_DEFINE_METHOD(android::widget::Toast,9,"getVerticalMargin","()F")
J2CPP_DEFINE_METHOD(android::widget::Toast,10,"setGravity","(III)V")
J2CPP_DEFINE_METHOD(android::widget::Toast,11,"getGravity","()I")
J2CPP_DEFINE_METHOD(android::widget::Toast,12,"getXOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::Toast,13,"getYOffset","()I")
J2CPP_DEFINE_METHOD(android::widget::Toast,14,"makeText","(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;")
J2CPP_DEFINE_METHOD(android::widget::Toast,15,"makeText","(Landroid/content/Context;II)Landroid/widget/Toast;")
J2CPP_DEFINE_METHOD(android::widget::Toast,16,"setText","(I)V")
J2CPP_DEFINE_METHOD(android::widget::Toast,17,"setText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_FIELD(android::widget::Toast,0,"LENGTH_SHORT","I")
J2CPP_DEFINE_FIELD(android::widget::Toast,1,"LENGTH_LONG","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TOAST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
