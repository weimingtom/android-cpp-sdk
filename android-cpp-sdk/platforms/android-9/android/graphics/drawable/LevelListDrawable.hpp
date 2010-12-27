/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.LevelListDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_LEVELLISTDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_LEVELLISTDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class LevelListDrawable;
	class LevelListDrawable
		: public cpp_object<LevelListDrawable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		LevelListDrawable(jobject jobj)
		: cpp_object<LevelListDrawable>(jobj)
		{
		}

		void addLevel(cpp_int const&, cpp_int const&, local_ref< android::graphics::drawable::Drawable > const&);
		void inflate(local_ref< android::content::res::Resources > const&, local_ref< org::xmlpull::v1::XmlPullParser > const&, local_ref< android::util::AttributeSet > const&);
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class LevelListDrawable

} //namespace drawable
} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_LEVELLISTDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_LEVELLISTDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_LEVELLISTDRAWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::drawable::LevelListDrawable > create< android::graphics::drawable::LevelListDrawable>()
{
	return local_ref< android::graphics::drawable::LevelListDrawable >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::drawable::LevelListDrawable::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::drawable::LevelListDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::LevelListDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::LevelListDrawable::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::graphics::drawable::LevelListDrawable::addLevel(cpp_int const &a0, cpp_int const &a1, local_ref< android::graphics::drawable::Drawable > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


void android::graphics::drawable::LevelListDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::LevelListDrawable::mutate()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::LevelListDrawable,"android/graphics/drawable/LevelListDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LevelListDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LevelListDrawable,1,"addLevel","(IILandroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LevelListDrawable,2,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LevelListDrawable,3,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::LevelListDrawable,4,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_LEVELLISTDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
