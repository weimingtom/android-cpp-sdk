/*================================================================================
  code generated by: java2cpp
  class: android.view.ViewParent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWPARENT_HPP_DECL
#define J2CPP_ANDROID_VIEW_VIEWPARENT_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ContextMenu; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class Point; } } }


#include <android/graphics/Point.hpp>
#include <android/graphics/Rect.hpp>
#include <android/view/ContextMenu.hpp>
#include <android/view/View.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ViewParent;
	class ViewParent
		: public cpp_object<ViewParent>
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

		ViewParent(jobject jobj)
		: cpp_object<ViewParent>(jobj)
		{
		}

		void requestLayout();
		cpp_boolean isLayoutRequested();
		void requestTransparentRegion(local_ref< android::view::View > const&);
		void invalidateChild(local_ref< android::view::View > const&, local_ref< android::graphics::Rect > const&);
		local_ref< android::view::ViewParent > invalidateChildInParent(local_ref< cpp_int_array<1> > const&, local_ref< android::graphics::Rect > const&);
		local_ref< android::view::ViewParent > getParent();
		void requestChildFocus(local_ref< android::view::View > const&, local_ref< android::view::View > const&);
		void recomputeViewAttributes(local_ref< android::view::View > const&);
		void clearChildFocus(local_ref< android::view::View > const&);
		cpp_boolean getChildVisibleRect(local_ref< android::view::View > const&, local_ref< android::graphics::Rect > const&, local_ref< android::graphics::Point > const&);
		local_ref< android::view::View > focusSearch(local_ref< android::view::View > const&, cpp_int const&);
		void bringChildToFront(local_ref< android::view::View > const&);
		void focusableViewAvailable(local_ref< android::view::View > const&);
		cpp_boolean showContextMenuForChild(local_ref< android::view::View > const&);
		void createContextMenu(local_ref< android::view::ContextMenu > const&);
		void childDrawableStateChanged(local_ref< android::view::View > const&);
		void requestDisallowInterceptTouchEvent(cpp_boolean const&);
		cpp_boolean requestChildRectangleOnScreen(local_ref< android::view::View > const&, local_ref< android::graphics::Rect > const&, cpp_boolean const&);
	}; //class ViewParent

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWPARENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_VIEWPARENT_HPP_IMPL
#define J2CPP_ANDROID_VIEW_VIEWPARENT_HPP_IMPL

namespace j2cpp {


void android::view::ViewParent::requestLayout()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::view::ViewParent::isLayoutRequested()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::view::ViewParent::requestTransparentRegion(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewParent::invalidateChild(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::ViewParent > android::view::ViewParent::invalidateChildInParent(local_ref< cpp_int_array<1> > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return local_ref< android::view::ViewParent >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::view::ViewParent > android::view::ViewParent::getParent()
{
	return local_ref< android::view::ViewParent >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::view::ViewParent::requestChildFocus(local_ref< android::view::View > const &a0, local_ref< android::view::View > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::ViewParent::recomputeViewAttributes(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewParent::clearChildFocus(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::ViewParent::getChildVisibleRect(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1, local_ref< android::graphics::Point > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::view::ViewParent::focusSearch(local_ref< android::view::View > const &a0, cpp_int const &a1)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::ViewParent::bringChildToFront(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewParent::focusableViewAvailable(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::ViewParent::showContextMenuForChild(local_ref< android::view::View > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewParent::createContextMenu(local_ref< android::view::ContextMenu > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewParent::childDrawableStateChanged(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ViewParent::requestDisallowInterceptTouchEvent(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::ViewParent::requestChildRectangleOnScreen(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1, cpp_boolean const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ViewParent,"android/view/ViewParent")
J2CPP_DEFINE_METHOD(android::view::ViewParent,0,"requestLayout","()V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,1,"isLayoutRequested","()Z")
J2CPP_DEFINE_METHOD(android::view::ViewParent,2,"requestTransparentRegion","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,3,"invalidateChild","(Landroid/view/View;Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,4,"invalidateChildInParent","([ILandroid/graphics/Rect;)Landroid/view/ViewParent;")
J2CPP_DEFINE_METHOD(android::view::ViewParent,5,"getParent","()Landroid/view/ViewParent;")
J2CPP_DEFINE_METHOD(android::view::ViewParent,6,"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,7,"recomputeViewAttributes","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,8,"clearChildFocus","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,9,"getChildVisibleRect","(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z")
J2CPP_DEFINE_METHOD(android::view::ViewParent,10,"focusSearch","(Landroid/view/View;I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::view::ViewParent,11,"bringChildToFront","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,12,"focusableViewAvailable","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,13,"showContextMenuForChild","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::view::ViewParent,14,"createContextMenu","(Landroid/view/ContextMenu;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,15,"childDrawableStateChanged","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,16,"requestDisallowInterceptTouchEvent","(Z)V")
J2CPP_DEFINE_METHOD(android::view::ViewParent,17,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_VIEWPARENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
