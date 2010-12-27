/*================================================================================
  code generated by: java2cpp
  class: android.view.ViewTreeObserver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_DECL
#define J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnScrollChangedListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnPreDrawListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnGlobalFocusChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnTouchModeChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewTreeObserver_ { class OnGlobalLayoutListener; } } } }


#include <android/view/View.hpp>
#include <android/view/ViewTreeObserver.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ViewTreeObserver;
	namespace ViewTreeObserver_ {

		class OnScrollChangedListener;
		class OnScrollChangedListener
			: public cpp_object<OnScrollChangedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnScrollChangedListener(jobject jobj)
			: cpp_object<OnScrollChangedListener>(jobj)
			{
			}

			void onScrollChanged();
		}; //class OnScrollChangedListener

		class OnPreDrawListener;
		class OnPreDrawListener
			: public cpp_object<OnPreDrawListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnPreDrawListener(jobject jobj)
			: cpp_object<OnPreDrawListener>(jobj)
			{
			}

			cpp_boolean onPreDraw();
		}; //class OnPreDrawListener

		class OnGlobalFocusChangeListener;
		class OnGlobalFocusChangeListener
			: public cpp_object<OnGlobalFocusChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnGlobalFocusChangeListener(jobject jobj)
			: cpp_object<OnGlobalFocusChangeListener>(jobj)
			{
			}

			void onGlobalFocusChanged(local_ref< android::view::View > const&, local_ref< android::view::View > const&);
		}; //class OnGlobalFocusChangeListener

		class OnTouchModeChangeListener;
		class OnTouchModeChangeListener
			: public cpp_object<OnTouchModeChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnTouchModeChangeListener(jobject jobj)
			: cpp_object<OnTouchModeChangeListener>(jobj)
			{
			}

			void onTouchModeChanged(cpp_boolean const&);
		}; //class OnTouchModeChangeListener

		class OnGlobalLayoutListener;
		class OnGlobalLayoutListener
			: public cpp_object<OnGlobalLayoutListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnGlobalLayoutListener(jobject jobj)
			: cpp_object<OnGlobalLayoutListener>(jobj)
			{
			}

			void onGlobalLayout();
		}; //class OnGlobalLayoutListener

	} //namespace ViewTreeObserver_

	class ViewTreeObserver
		: public cpp_object<ViewTreeObserver>
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

		typedef ViewTreeObserver_::OnScrollChangedListener OnScrollChangedListener;
		typedef ViewTreeObserver_::OnPreDrawListener OnPreDrawListener;
		typedef ViewTreeObserver_::OnGlobalFocusChangeListener OnGlobalFocusChangeListener;
		typedef ViewTreeObserver_::OnTouchModeChangeListener OnTouchModeChangeListener;
		typedef ViewTreeObserver_::OnGlobalLayoutListener OnGlobalLayoutListener;

		ViewTreeObserver(jobject jobj)
		: cpp_object<ViewTreeObserver>(jobj)
		{
		}

		void addOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener > const&);
		void removeOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener > const&);
		void addOnGlobalLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener > const&);
		void removeGlobalOnLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener > const&);
		void addOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener > const&);
		void removeOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener > const&);
		void addOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener > const&);
		void removeOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener > const&);
		void addOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener > const&);
		void removeOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener > const&);
		cpp_boolean isAlive();
		void dispatchOnGlobalLayout();
		cpp_boolean dispatchOnPreDraw();
	}; //class ViewTreeObserver

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_IMPL

namespace j2cpp {



void android::view::ViewTreeObserver_::OnScrollChangedListener::onScrollChanged()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnScrollChangedListener,"android/view/ViewTreeObserver$OnScrollChangedListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnScrollChangedListener,0,"onScrollChanged","()V")

cpp_boolean android::view::ViewTreeObserver_::OnPreDrawListener::onPreDraw()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnPreDrawListener,"android/view/ViewTreeObserver$OnPreDrawListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnPreDrawListener,0,"onPreDraw","()Z")

void android::view::ViewTreeObserver_::OnGlobalFocusChangeListener::onGlobalFocusChanged(local_ref< android::view::View > const &a0, local_ref< android::view::View > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnGlobalFocusChangeListener,"android/view/ViewTreeObserver$OnGlobalFocusChangeListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnGlobalFocusChangeListener,0,"onGlobalFocusChanged","(Landroid/view/View;Landroid/view/View;)V")

void android::view::ViewTreeObserver_::OnTouchModeChangeListener::onTouchModeChanged(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnTouchModeChangeListener,"android/view/ViewTreeObserver$OnTouchModeChangeListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnTouchModeChangeListener,0,"onTouchModeChanged","(Z)V")

void android::view::ViewTreeObserver_::OnGlobalLayoutListener::onGlobalLayout()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver_::OnGlobalLayoutListener,"android/view/ViewTreeObserver$OnGlobalLayoutListener")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver_::OnGlobalLayoutListener,0,"onGlobalLayout","()V")


template <>
local_ref< android::view::ViewTreeObserver > create< android::view::ViewTreeObserver>()
{
	return local_ref< android::view::ViewTreeObserver >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::ViewTreeObserver::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::ViewTreeObserver::J2CPP_CLASS_NAME, android::view::ViewTreeObserver::J2CPP_METHOD_NAME(0), android::view::ViewTreeObserver::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::view::ViewTreeObserver::addOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::removeOnGlobalFocusChangeListener(local_ref< android::view::ViewTreeObserver_::OnGlobalFocusChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::addOnGlobalLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::removeGlobalOnLayoutListener(local_ref< android::view::ViewTreeObserver_::OnGlobalLayoutListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::addOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::removeOnPreDrawListener(local_ref< android::view::ViewTreeObserver_::OnPreDrawListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::addOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::removeOnScrollChangedListener(local_ref< android::view::ViewTreeObserver_::OnScrollChangedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::addOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewTreeObserver::removeOnTouchModeChangeListener(local_ref< android::view::ViewTreeObserver_::OnTouchModeChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::ViewTreeObserver::isAlive()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::view::ViewTreeObserver::dispatchOnGlobalLayout()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean android::view::ViewTreeObserver::dispatchOnPreDraw()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewTreeObserver,"android/view/ViewTreeObserver")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,1,"addOnGlobalFocusChangeListener","(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,2,"removeOnGlobalFocusChangeListener","(Landroid/view/ViewTreeObserver$OnGlobalFocusChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,3,"addOnGlobalLayoutListener","(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,4,"removeGlobalOnLayoutListener","(Landroid/view/ViewTreeObserver$OnGlobalLayoutListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,5,"addOnPreDrawListener","(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,6,"removeOnPreDrawListener","(Landroid/view/ViewTreeObserver$OnPreDrawListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,7,"addOnScrollChangedListener","(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,8,"removeOnScrollChangedListener","(Landroid/view/ViewTreeObserver$OnScrollChangedListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,9,"addOnTouchModeChangeListener","(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,10,"removeOnTouchModeChangeListener","(Landroid/view/ViewTreeObserver$OnTouchModeChangeListener;)V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,11,"isAlive","()Z")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,12,"dispatchOnGlobalLayout","()V")
J2CPP_DEFINE_METHOD(android::view::ViewTreeObserver,13,"dispatchOnPreDraw","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWTREEOBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
