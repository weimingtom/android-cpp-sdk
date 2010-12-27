/*================================================================================
  code generated by: java2cpp
  class: android.gesture.GestureOverlayView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace gesture { namespace GestureOverlayView_ { class OnGesturePerformedListener; } } } }
namespace j2cpp { namespace android { namespace gesture { class Gesture; } } }
namespace j2cpp { namespace android { namespace gesture { namespace GestureOverlayView_ { class OnGestureListener; } } } }
namespace j2cpp { namespace android { namespace gesture { namespace GestureOverlayView_ { class OnGesturingListener; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }


#include <android/content/Context.hpp>
#include <android/gesture/Gesture.hpp>
#include <android/gesture/GestureOverlayView.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Path.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/MotionEvent.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureOverlayView;
	namespace GestureOverlayView_ {

		class OnGesturePerformedListener;
		class OnGesturePerformedListener
			: public cpp_object<OnGesturePerformedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnGesturePerformedListener(jobject jobj)
			: cpp_object<OnGesturePerformedListener>(jobj)
			{
			}

			void onGesturePerformed(local_ref< android::gesture::GestureOverlayView > const&, local_ref< android::gesture::Gesture > const&);
		}; //class OnGesturePerformedListener

		class OnGestureListener;
		class OnGestureListener
			: public cpp_object<OnGestureListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			OnGestureListener(jobject jobj)
			: cpp_object<OnGestureListener>(jobj)
			{
			}

			void onGestureStarted(local_ref< android::gesture::GestureOverlayView > const&, local_ref< android::view::MotionEvent > const&);
			void onGesture(local_ref< android::gesture::GestureOverlayView > const&, local_ref< android::view::MotionEvent > const&);
			void onGestureEnded(local_ref< android::gesture::GestureOverlayView > const&, local_ref< android::view::MotionEvent > const&);
			void onGestureCancelled(local_ref< android::gesture::GestureOverlayView > const&, local_ref< android::view::MotionEvent > const&);
		}; //class OnGestureListener

		class OnGesturingListener;
		class OnGesturingListener
			: public cpp_object<OnGesturingListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			OnGesturingListener(jobject jobj)
			: cpp_object<OnGesturingListener>(jobj)
			{
			}

			void onGesturingStarted(local_ref< android::gesture::GestureOverlayView > const&);
			void onGesturingEnded(local_ref< android::gesture::GestureOverlayView > const&);
		}; //class OnGesturingListener

	} //namespace GestureOverlayView_

	class GestureOverlayView
		: public cpp_object<GestureOverlayView>
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
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef GestureOverlayView_::OnGesturePerformedListener OnGesturePerformedListener;
		typedef GestureOverlayView_::OnGestureListener OnGestureListener;
		typedef GestureOverlayView_::OnGesturingListener OnGesturingListener;

		GestureOverlayView(jobject jobj)
		: cpp_object<GestureOverlayView>(jobj)
		{
		}

		local_ref< java::util::ArrayList > getCurrentStroke();
		cpp_int getOrientation();
		void setOrientation(cpp_int const&);
		void setGestureColor(cpp_int const&);
		void setUncertainGestureColor(cpp_int const&);
		cpp_int getUncertainGestureColor();
		cpp_int getGestureColor();
		cpp_float getGestureStrokeWidth();
		void setGestureStrokeWidth(cpp_float const&);
		cpp_int getGestureStrokeType();
		void setGestureStrokeType(cpp_int const&);
		cpp_float getGestureStrokeLengthThreshold();
		void setGestureStrokeLengthThreshold(cpp_float const&);
		cpp_float getGestureStrokeSquarenessTreshold();
		void setGestureStrokeSquarenessTreshold(cpp_float const&);
		cpp_float getGestureStrokeAngleThreshold();
		void setGestureStrokeAngleThreshold(cpp_float const&);
		cpp_boolean isEventsInterceptionEnabled();
		void setEventsInterceptionEnabled(cpp_boolean const&);
		cpp_boolean isFadeEnabled();
		void setFadeEnabled(cpp_boolean const&);
		local_ref< android::gesture::Gesture > getGesture();
		void setGesture(local_ref< android::gesture::Gesture > const&);
		local_ref< android::graphics::Path > getGesturePath();
		local_ref< android::graphics::Path > getGesturePath(local_ref< android::graphics::Path > const&);
		cpp_boolean isGestureVisible();
		void setGestureVisible(cpp_boolean const&);
		cpp_long getFadeOffset();
		void setFadeOffset(cpp_long const&);
		void addOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener > const&);
		void removeOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener > const&);
		void removeAllOnGestureListeners();
		void addOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener > const&);
		void removeOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener > const&);
		void removeAllOnGesturePerformedListeners();
		void addOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener > const&);
		void removeOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener > const&);
		void removeAllOnGesturingListeners();
		cpp_boolean isGesturing();
		void draw(local_ref< android::graphics::Canvas > const&);
		void clear(cpp_boolean const&);
		void cancelClearAnimation();
		void cancelGesture();
		cpp_boolean dispatchTouchEvent(local_ref< android::view::MotionEvent > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > GESTURE_STROKE_TYPE_SINGLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > GESTURE_STROKE_TYPE_MULTIPLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ORIENTATION_HORIZONTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > ORIENTATION_VERTICAL;
	}; //class GestureOverlayView

} //namespace gesture
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_IMPL

namespace j2cpp {



void android::gesture::GestureOverlayView_::OnGesturePerformedListener::onGesturePerformed(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::gesture::Gesture > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView_::OnGesturePerformedListener,"android/gesture/GestureOverlayView$OnGesturePerformedListener")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGesturePerformedListener,0,"onGesturePerformed","(Landroid/gesture/GestureOverlayView;Landroid/gesture/Gesture;)V")

void android::gesture::GestureOverlayView_::OnGestureListener::onGestureStarted(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGesture(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGestureEnded(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView_::OnGestureListener::onGestureCancelled(local_ref< android::gesture::GestureOverlayView > const &a0, local_ref< android::view::MotionEvent > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView_::OnGestureListener,"android/gesture/GestureOverlayView$OnGestureListener")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,0,"onGestureStarted","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,1,"onGesture","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,2,"onGestureEnded","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGestureListener,3,"onGestureCancelled","(Landroid/gesture/GestureOverlayView;Landroid/view/MotionEvent;)V")

void android::gesture::GestureOverlayView_::OnGesturingListener::onGesturingStarted(local_ref< android::gesture::GestureOverlayView > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView_::OnGesturingListener::onGesturingEnded(local_ref< android::gesture::GestureOverlayView > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView_::OnGesturingListener,"android/gesture/GestureOverlayView$OnGesturingListener")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGesturingListener,0,"onGesturingStarted","(Landroid/gesture/GestureOverlayView;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView_::OnGesturingListener,1,"onGesturingEnded","(Landroid/gesture/GestureOverlayView;)V")


template <>
local_ref< android::gesture::GestureOverlayView > create< android::gesture::GestureOverlayView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::gesture::GestureOverlayView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::gesture::GestureOverlayView::J2CPP_CLASS_NAME>(),
			get_method_id<android::gesture::GestureOverlayView::J2CPP_CLASS_NAME, android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(0), android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::gesture::GestureOverlayView > create< android::gesture::GestureOverlayView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::gesture::GestureOverlayView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::gesture::GestureOverlayView::J2CPP_CLASS_NAME>(),
			get_method_id<android::gesture::GestureOverlayView::J2CPP_CLASS_NAME, android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(1), android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::gesture::GestureOverlayView > create< android::gesture::GestureOverlayView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::gesture::GestureOverlayView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::gesture::GestureOverlayView::J2CPP_CLASS_NAME>(),
			get_method_id<android::gesture::GestureOverlayView::J2CPP_CLASS_NAME, android::gesture::GestureOverlayView::J2CPP_METHOD_NAME(2), android::gesture::GestureOverlayView::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::ArrayList > android::gesture::GestureOverlayView::getCurrentStroke()
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::gesture::GestureOverlayView::getOrientation()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setOrientation(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureColor(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::setUncertainGestureColor(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::gesture::GestureOverlayView::getUncertainGestureColor()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int android::gesture::GestureOverlayView::getGestureColor()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_float android::gesture::GestureOverlayView::getGestureStrokeWidth()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureStrokeWidth(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::gesture::GestureOverlayView::getGestureStrokeType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureStrokeType(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::gesture::GestureOverlayView::getGestureStrokeLengthThreshold()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureStrokeLengthThreshold(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::gesture::GestureOverlayView::getGestureStrokeSquarenessTreshold()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureStrokeSquarenessTreshold(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::gesture::GestureOverlayView::getGestureStrokeAngleThreshold()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureStrokeAngleThreshold(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::gesture::GestureOverlayView::isEventsInterceptionEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setEventsInterceptionEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::gesture::GestureOverlayView::isFadeEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setFadeEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::gesture::Gesture > android::gesture::GestureOverlayView::getGesture()
{
	return local_ref< android::gesture::Gesture >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGesture(local_ref< android::gesture::Gesture > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Path > android::gesture::GestureOverlayView::getGesturePath()
{
	return local_ref< android::graphics::Path >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

local_ref< android::graphics::Path > android::gesture::GestureOverlayView::getGesturePath(local_ref< android::graphics::Path > const &a0)
{
	return local_ref< android::graphics::Path >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::gesture::GestureOverlayView::isGestureVisible()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setGestureVisible(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::gesture::GestureOverlayView::getFadeOffset()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

void android::gesture::GestureOverlayView::setFadeOffset(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::addOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::removeOnGestureListener(local_ref< android::gesture::GestureOverlayView_::OnGestureListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::removeAllOnGestureListeners()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

void android::gesture::GestureOverlayView::addOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::removeOnGesturePerformedListener(local_ref< android::gesture::GestureOverlayView_::OnGesturePerformedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::removeAllOnGesturePerformedListeners()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}

void android::gesture::GestureOverlayView::addOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::removeOnGesturingListener(local_ref< android::gesture::GestureOverlayView_::OnGesturingListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::removeAllOnGesturingListeners()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

cpp_boolean android::gesture::GestureOverlayView::isGesturing()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

void android::gesture::GestureOverlayView::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::clear(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureOverlayView::cancelClearAnimation()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>()
		)
	);
}

void android::gesture::GestureOverlayView::cancelGesture()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>()
		)
	);
}


cpp_boolean android::gesture::GestureOverlayView::dispatchTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(0),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::gesture::GestureOverlayView::GESTURE_STROKE_TYPE_SINGLE;

static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(1),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::gesture::GestureOverlayView::GESTURE_STROKE_TYPE_MULTIPLE;

static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(2),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::gesture::GestureOverlayView::ORIENTATION_HORIZONTAL;

static_field<
	android::gesture::GestureOverlayView::J2CPP_CLASS_NAME,
	android::gesture::GestureOverlayView::J2CPP_FIELD_NAME(3),
	android::gesture::GestureOverlayView::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::gesture::GestureOverlayView::ORIENTATION_VERTICAL;


J2CPP_DEFINE_CLASS(android::gesture::GestureOverlayView,"android/gesture/GestureOverlayView")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,3,"getCurrentStroke","()Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,4,"getOrientation","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,5,"setOrientation","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,6,"setGestureColor","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,7,"setUncertainGestureColor","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,8,"getUncertainGestureColor","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,9,"getGestureColor","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,10,"getGestureStrokeWidth","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,11,"setGestureStrokeWidth","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,12,"getGestureStrokeType","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,13,"setGestureStrokeType","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,14,"getGestureStrokeLengthThreshold","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,15,"setGestureStrokeLengthThreshold","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,16,"getGestureStrokeSquarenessTreshold","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,17,"setGestureStrokeSquarenessTreshold","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,18,"getGestureStrokeAngleThreshold","()F")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,19,"setGestureStrokeAngleThreshold","(F)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,20,"isEventsInterceptionEnabled","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,21,"setEventsInterceptionEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,22,"isFadeEnabled","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,23,"setFadeEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,24,"getGesture","()Landroid/gesture/Gesture;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,25,"setGesture","(Landroid/gesture/Gesture;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,26,"getGesturePath","()Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,27,"getGesturePath","(Landroid/graphics/Path;)Landroid/graphics/Path;")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,28,"isGestureVisible","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,29,"setGestureVisible","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,30,"getFadeOffset","()J")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,31,"setFadeOffset","(J)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,32,"addOnGestureListener","(Landroid/gesture/GestureOverlayView$OnGestureListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,33,"removeOnGestureListener","(Landroid/gesture/GestureOverlayView$OnGestureListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,34,"removeAllOnGestureListeners","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,35,"addOnGesturePerformedListener","(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,36,"removeOnGesturePerformedListener","(Landroid/gesture/GestureOverlayView$OnGesturePerformedListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,37,"removeAllOnGesturePerformedListeners","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,38,"addOnGesturingListener","(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,39,"removeOnGesturingListener","(Landroid/gesture/GestureOverlayView$OnGesturingListener;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,40,"removeAllOnGesturingListeners","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,41,"isGesturing","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,42,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,43,"clear","(Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,44,"cancelClearAnimation","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,45,"cancelGesture","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,46,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureOverlayView,47,"dispatchTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,0,"GESTURE_STROKE_TYPE_SINGLE","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,1,"GESTURE_STROKE_TYPE_MULTIPLE","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,2,"ORIENTATION_HORIZONTAL","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureOverlayView,3,"ORIENTATION_VERTICAL","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREOVERLAYVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
