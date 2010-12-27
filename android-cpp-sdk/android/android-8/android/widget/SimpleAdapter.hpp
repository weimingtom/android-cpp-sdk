/*================================================================================
  code generated by: java2cpp
  class: android.widget.SimpleAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class ImageView; } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { namespace SimpleAdapter_ { class ViewBinder; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/content/Context.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/ImageView.hpp>
#include <android/widget/SimpleAdapter.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class SimpleAdapter;
	namespace SimpleAdapter_ {

		class ViewBinder;
		class ViewBinder
			: public cpp_object<ViewBinder>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			ViewBinder(jobject jobj)
			: cpp_object<ViewBinder>(jobj)
			{
			}

			cpp_boolean setViewValue(local_ref< android::view::View > const&, local_ref< java::lang::Object > const&, local_ref< java::lang::String > const&);
		}; //class ViewBinder

	} //namespace SimpleAdapter_

	class SimpleAdapter
		: public cpp_object<SimpleAdapter>
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

		typedef SimpleAdapter_::ViewBinder ViewBinder;

		SimpleAdapter(jobject jobj)
		: cpp_object<SimpleAdapter>(jobj)
		{
		}

		cpp_int getCount();
		local_ref< java::lang::Object > getItem(cpp_int const&);
		cpp_long getItemId(cpp_int const&);
		local_ref< android::view::View > getView(cpp_int const&, local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		void setDropDownViewResource(cpp_int const&);
		local_ref< android::view::View > getDropDownView(cpp_int const&, local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::widget::SimpleAdapter_::ViewBinder > getViewBinder();
		void setViewBinder(local_ref< android::widget::SimpleAdapter_::ViewBinder > const&);
		void setViewImage(local_ref< android::widget::ImageView > const&, cpp_int const&);
		void setViewImage(local_ref< android::widget::ImageView > const&, local_ref< java::lang::String > const&);
		void setViewText(local_ref< android::widget::TextView > const&, local_ref< java::lang::String > const&);
		local_ref< android::widget::Filter > getFilter();
	}; //class SimpleAdapter

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_IMPL

namespace j2cpp {



cpp_boolean android::widget::SimpleAdapter_::ViewBinder::setViewValue(local_ref< android::view::View > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::String > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleAdapter_::ViewBinder,"android/widget/SimpleAdapter$ViewBinder")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter_::ViewBinder,0,"setViewValue","(Landroid/view/View;Ljava/lang/Object;Ljava/lang/String;)Z")


template <>
local_ref< android::widget::SimpleAdapter > create< android::widget::SimpleAdapter>(local_ref< android::content::Context > const &a0, local_ref< java::util::List > const &a1, cpp_int const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3, local_ref< cpp_int_array<1> > const &a4)
{
	return local_ref< android::widget::SimpleAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::SimpleAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::SimpleAdapter::J2CPP_CLASS_NAME, android::widget::SimpleAdapter::J2CPP_METHOD_NAME(0), android::widget::SimpleAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

cpp_int android::widget::SimpleAdapter::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::Object > android::widget::SimpleAdapter::getItem(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::SimpleAdapter::getItemId(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleAdapter::getView(cpp_int const &a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::SimpleAdapter::setDropDownViewResource(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::SimpleAdapter::getDropDownView(cpp_int const &a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::widget::SimpleAdapter_::ViewBinder > android::widget::SimpleAdapter::getViewBinder()
{
	return local_ref< android::widget::SimpleAdapter_::ViewBinder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::widget::SimpleAdapter::setViewBinder(local_ref< android::widget::SimpleAdapter_::ViewBinder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::SimpleAdapter::setViewImage(local_ref< android::widget::ImageView > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::SimpleAdapter::setViewImage(local_ref< android::widget::ImageView > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::SimpleAdapter::setViewText(local_ref< android::widget::TextView > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::widget::Filter > android::widget::SimpleAdapter::getFilter()
{
	return local_ref< android::widget::Filter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::SimpleAdapter,"android/widget/SimpleAdapter")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,0,"<init>","(Landroid/content/Context;Ljava/util/List;I[java.lang.String[I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,1,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,2,"getItem","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,3,"getItemId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,4,"getView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,5,"setDropDownViewResource","(I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,6,"getDropDownView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,7,"getViewBinder","()Landroid/widget/SimpleAdapter$ViewBinder;")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,8,"setViewBinder","(Landroid/widget/SimpleAdapter$ViewBinder;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,9,"setViewImage","(Landroid/widget/ImageView;I)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,10,"setViewImage","(Landroid/widget/ImageView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,11,"setViewText","(Landroid/widget/TextView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::SimpleAdapter,12,"getFilter","()Landroid/widget/Filter;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_SIMPLEADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
