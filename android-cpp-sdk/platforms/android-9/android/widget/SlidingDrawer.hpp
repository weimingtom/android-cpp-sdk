/*================================================================================
  code generated by: java2cpp
  class: android.widget.SlidingDrawer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SLIDINGDRAWER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SLIDINGDRAWER_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace widget { namespace SlidingDrawer_ { class OnDrawerOpenListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace SlidingDrawer_ { class OnDrawerCloseListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace SlidingDrawer_ { class OnDrawerScrollListener; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/widget/SlidingDrawer.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SlidingDrawer;
	namespace SlidingDrawer_ {

		class OnDrawerOpenListener;
		class OnDrawerOpenListener
			: public cpp_object<OnDrawerOpenListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnDrawerOpenListener(jobject jobj)
			: cpp_object<OnDrawerOpenListener>(jobj)
			{
			}

			void onDrawerOpened();
		}; //class OnDrawerOpenListener

		class OnDrawerCloseListener;
		class OnDrawerCloseListener
			: public cpp_object<OnDrawerCloseListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnDrawerCloseListener(jobject jobj)
			: cpp_object<OnDrawerCloseListener>(jobj)
			{
			}

			void onDrawerClosed();
		}; //class OnDrawerCloseListener

		class OnDrawerScrollListener;
		class OnDrawerScrollListener
			: public cpp_object<OnDrawerScrollListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			OnDrawerScrollListener(jobject jobj)
			: cpp_object<OnDrawerScrollListener>(jobj)
			{
			}

			void onScrollStarted();
			void onScrollEnded();
		}; //class OnDrawerScrollListener

	} //namespace SlidingDrawer_

	class SlidingDrawer
		: public cpp_object<SlidingDrawer>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef SlidingDrawer_::OnDrawerOpenListener OnDrawerOpenListener;
		typedef SlidingDrawer_::OnDrawerCloseListener OnDrawerCloseListener;
		typedef SlidingDrawer_::OnDrawerScrollListener OnDrawerScrollListener;

		SlidingDrawer(jobject jobj)
		: cpp_object<SlidingDrawer>(jobj)
		{
		}

		cpp_boolean onInterceptTouchEvent(local_ref< android::view::MotionEvent > const&);
		cpp_boolean onTouchEvent(local_ref< android::view::MotionEvent > const&);
		void toggle();
		void animateToggle();
		void open();
		void close();
		void animateClose();
		void animateOpen();
		void setOnDrawerOpenListener(local_ref< android::widget::SlidingDrawer_::OnDrawerOpenListener > const&);
		void setOnDrawerCloseListener(local_ref< android::widget::SlidingDrawer_::OnDrawerCloseListener > const&);
		void setOnDrawerScrollListener(local_ref< android::widget::SlidingDrawer_::OnDrawerScrollListener > const&);
		local_ref< android::view::View > getHandle();
		local_ref< android::view::View > getContent();
		void unlock();
		void lock();
		cpp_boolean isOpened();
		cpp_boolean isMoving();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ORIENTATION_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ORIENTATION_VERTICAL;
	}; //class SlidingDrawer

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SLIDINGDRAWER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SLIDINGDRAWER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SLIDINGDRAWER_HPP_IMPL

namespace j2cpp {



void android::widget::SlidingDrawer_::OnDrawerOpenListener::onDrawerOpened()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SlidingDrawer_::OnDrawerOpenListener,"android/widget/SlidingDrawer$OnDrawerOpenListener")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer_::OnDrawerOpenListener,0,"onDrawerOpened","()V")

void android::widget::SlidingDrawer_::OnDrawerCloseListener::onDrawerClosed()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SlidingDrawer_::OnDrawerCloseListener,"android/widget/SlidingDrawer$OnDrawerCloseListener")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer_::OnDrawerCloseListener,0,"onDrawerClosed","()V")

void android::widget::SlidingDrawer_::OnDrawerScrollListener::onScrollStarted()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::widget::SlidingDrawer_::OnDrawerScrollListener::onScrollEnded()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SlidingDrawer_::OnDrawerScrollListener,"android/widget/SlidingDrawer$OnDrawerScrollListener")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer_::OnDrawerScrollListener,0,"onScrollStarted","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer_::OnDrawerScrollListener,1,"onScrollEnded","()V")


template <>
local_ref< android::widget::SlidingDrawer > create< android::widget::SlidingDrawer>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::SlidingDrawer >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SlidingDrawer::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SlidingDrawer::J2CPP_CLASS_NAME, android::widget::SlidingDrawer::J2CPP_METHOD_NAME(0), android::widget::SlidingDrawer::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::SlidingDrawer > create< android::widget::SlidingDrawer>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::SlidingDrawer >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SlidingDrawer::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SlidingDrawer::J2CPP_CLASS_NAME, android::widget::SlidingDrawer::J2CPP_METHOD_NAME(1), android::widget::SlidingDrawer::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}





cpp_boolean android::widget::SlidingDrawer::onInterceptTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::SlidingDrawer::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SlidingDrawer::toggle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::widget::SlidingDrawer::animateToggle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::widget::SlidingDrawer::open()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::widget::SlidingDrawer::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::widget::SlidingDrawer::animateClose()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::widget::SlidingDrawer::animateOpen()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::widget::SlidingDrawer::setOnDrawerOpenListener(local_ref< android::widget::SlidingDrawer_::OnDrawerOpenListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SlidingDrawer::setOnDrawerCloseListener(local_ref< android::widget::SlidingDrawer_::OnDrawerCloseListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SlidingDrawer::setOnDrawerScrollListener(local_ref< android::widget::SlidingDrawer_::OnDrawerScrollListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SlidingDrawer::getHandle()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< android::view::View > android::widget::SlidingDrawer::getContent()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::widget::SlidingDrawer::unlock()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void android::widget::SlidingDrawer::lock()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean android::widget::SlidingDrawer::isOpened()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean android::widget::SlidingDrawer::isMoving()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}


static_field<
	android::widget::SlidingDrawer::J2CPP_CLASS_NAME,
	android::widget::SlidingDrawer::J2CPP_FIELD_NAME(0),
	android::widget::SlidingDrawer::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::SlidingDrawer::ORIENTATION_HORIZONTAL;

static_field<
	android::widget::SlidingDrawer::J2CPP_CLASS_NAME,
	android::widget::SlidingDrawer::J2CPP_FIELD_NAME(1),
	android::widget::SlidingDrawer::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::SlidingDrawer::ORIENTATION_VERTICAL;


J2CPP_DEFINE_CLASS(android::widget::SlidingDrawer,"android/widget/SlidingDrawer")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,2,"onFinishInflate","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,3,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,4,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,5,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,6,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,7,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,8,"toggle","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,9,"animateToggle","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,10,"open","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,11,"close","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,12,"animateClose","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,13,"animateOpen","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,14,"setOnDrawerOpenListener","(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,15,"setOnDrawerCloseListener","(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,16,"setOnDrawerScrollListener","(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,17,"getHandle","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,18,"getContent","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,19,"unlock","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,20,"lock","()V")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,21,"isOpened","()Z")
J2CPP_DEFINE_METHOD(android::widget::SlidingDrawer,22,"isMoving","()Z")
J2CPP_DEFINE_FIELD(android::widget::SlidingDrawer,0,"ORIENTATION_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::widget::SlidingDrawer,1,"ORIENTATION_VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SLIDINGDRAWER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
