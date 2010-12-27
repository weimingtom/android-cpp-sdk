/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.LayerDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_LAYERDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_LAYERDRAWABLE_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Runnable.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class LayerDrawable;
	class LayerDrawable
		: public cpp_object<LayerDrawable>
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

		LayerDrawable(jobject jobj)
		: cpp_object<LayerDrawable>(jobj)
		{
		}

		void inflate(local_ref< android::content::res::Resources > const&, local_ref< org::xmlpull::v1::XmlPullParser > const&, local_ref< android::util::AttributeSet > const&);
		local_ref< android::graphics::drawable::Drawable > findDrawableByLayerId(cpp_int const&);
		void setId(cpp_int const&, cpp_int const&);
		cpp_int getNumberOfLayers();
		local_ref< android::graphics::drawable::Drawable > getDrawable(cpp_int const&);
		cpp_int getId(cpp_int const&);
		cpp_boolean setDrawableByLayerId(cpp_int const&, local_ref< android::graphics::drawable::Drawable > const&);
		void setLayerInset(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		void scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const&, local_ref< java::lang::Runnable > const&, cpp_long const&);
		void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const&, local_ref< java::lang::Runnable > const&);
		void draw(local_ref< android::graphics::Canvas > const&);
		cpp_int getChangingConfigurations();
		cpp_boolean getPadding(local_ref< android::graphics::Rect > const&);
		cpp_boolean setVisible(cpp_boolean const&, cpp_boolean const&);
		void setDither(cpp_boolean const&);
		void setAlpha(cpp_int const&);
		void setColorFilter(local_ref< android::graphics::ColorFilter > const&);
		cpp_int getOpacity();
		cpp_boolean isStateful();
		cpp_int getIntrinsicWidth();
		cpp_int getIntrinsicHeight();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class LayerDrawable

} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_LAYERDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_LAYERDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_LAYERDRAWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::LayerDrawable > create< android::graphics::drawable::LayerDrawable>(local_ref< cpp_object_array<android::graphics::drawable::Drawable, 1> > const &a0)
{
	return local_ref< android::graphics::drawable::LayerDrawable >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::LayerDrawable::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::LayerDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::LayerDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::LayerDrawable::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::LayerDrawable::findDrawableByLayerId(cpp_int const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::setId(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::LayerDrawable::getNumberOfLayers()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::LayerDrawable::getDrawable(cpp_int const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::LayerDrawable::getId(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::drawable::LayerDrawable::setDrawableByLayerId(cpp_int const &a0, local_ref< android::graphics::drawable::Drawable > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::setLayerInset(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::LayerDrawable::getChangingConfigurations()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::LayerDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::graphics::drawable::LayerDrawable::setVisible(cpp_boolean const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::setDither(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::setAlpha(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::LayerDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::LayerDrawable::getOpacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::LayerDrawable::isStateful()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}




cpp_int android::graphics::drawable::LayerDrawable::getIntrinsicWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_int android::graphics::drawable::LayerDrawable::getIntrinsicHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::LayerDrawable::getConstantState()
{
	return local_ref< android::graphics::drawable::Drawable_::ConstantState >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::LayerDrawable::mutate()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::LayerDrawable,"android/graphics/drawable/LayerDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,0,"<init>","([android.graphics.drawable.Drawable)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,1,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,2,"findDrawableByLayerId","(I)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,3,"setId","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,4,"getNumberOfLayers","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,5,"getDrawable","(I)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,6,"getId","(I)I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,7,"setDrawableByLayerId","(ILandroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,8,"setLayerInset","(IIIII)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,9,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,10,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,11,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,12,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,13,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,14,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,15,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,16,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,17,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,18,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,19,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,20,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,21,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,22,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,23,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,24,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,25,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,26,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LayerDrawable,27,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_LAYERDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
