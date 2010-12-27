/*================================================================================
  code generated by: java2cpp
  class: android.widget.CheckedTextView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CheckedTextView;
	class CheckedTextView
		: public cpp_object<CheckedTextView>
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

		CheckedTextView(jobject jobj)
		: cpp_object<CheckedTextView>(jobj)
		{
		}

		void toggle();
		cpp_boolean isChecked();
		void setChecked(cpp_boolean const&);
		void setCheckMarkDrawable(cpp_int const&);
		void setCheckMarkDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		void setPadding(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_boolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const&);
	}; //class CheckedTextView

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::CheckedTextView > create< android::widget::CheckedTextView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::CheckedTextView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::CheckedTextView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::CheckedTextView::J2CPP_CLASS_NAME, android::widget::CheckedTextView::J2CPP_METHOD_NAME(0), android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::CheckedTextView > create< android::widget::CheckedTextView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::CheckedTextView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::CheckedTextView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::CheckedTextView::J2CPP_CLASS_NAME, android::widget::CheckedTextView::J2CPP_METHOD_NAME(1), android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::CheckedTextView > create< android::widget::CheckedTextView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::CheckedTextView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::CheckedTextView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::CheckedTextView::J2CPP_CLASS_NAME, android::widget::CheckedTextView::J2CPP_METHOD_NAME(2), android::widget::CheckedTextView::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::CheckedTextView::toggle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::widget::CheckedTextView::isChecked()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::widget::CheckedTextView::setChecked(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::CheckedTextView::setCheckMarkDrawable(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::CheckedTextView::setCheckMarkDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::CheckedTextView::setPadding(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}




cpp_boolean android::widget::CheckedTextView::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::CheckedTextView,"android/widget/CheckedTextView")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,3,"toggle","()V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,4,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,5,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,6,"setCheckMarkDrawable","(I)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,7,"setCheckMarkDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,8,"setPadding","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,9,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,10,"onCreateDrawableState","(I)[I")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,11,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::CheckedTextView,12,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CHECKEDTEXTVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
