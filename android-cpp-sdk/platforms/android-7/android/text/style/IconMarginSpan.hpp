/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.IconMarginSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_ICONMARGINSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_ICONMARGINSPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Paint_ { class FontMetricsInt; } } } }
namespace j2cpp { namespace android { namespace text { class Layout; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class WrapTogetherSpan; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class LeadingMarginSpan; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class LineHeightSpan; } } } }
namespace j2cpp { namespace android { namespace text { namespace style { class ParagraphStyle; } } } }


#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/text/Layout.hpp>
#include <android/text/style/LeadingMarginSpan.hpp>
#include <android/text/style/LineHeightSpan.hpp>
#include <android/text/style/ParagraphStyle.hpp>
#include <android/text/style/WrapTogetherSpan.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class IconMarginSpan;
	class IconMarginSpan
		: public object<IconMarginSpan>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit IconMarginSpan(jobject jobj)
		: object<IconMarginSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::style::WrapTogetherSpan>() const;
		operator local_ref<android::text::style::LeadingMarginSpan>() const;
		operator local_ref<android::text::style::LineHeightSpan>() const;
		operator local_ref<android::text::style::ParagraphStyle>() const;


		IconMarginSpan(local_ref< android::graphics::Bitmap > const&);
		IconMarginSpan(local_ref< android::graphics::Bitmap > const&, jint);
		jint getLeadingMargin(jboolean);
		void drawLeadingMargin(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&, jint, jint, jint, jint, jint, local_ref< java::lang::CharSequence >  const&, jint, jint, jboolean, local_ref< android::text::Layout >  const&);
		void chooseHeight(local_ref< java::lang::CharSequence >  const&, jint, jint, jint, jint, local_ref< android::graphics::Paint_::FontMetricsInt >  const&);
	}; //class IconMarginSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_ICONMARGINSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_ICONMARGINSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_ICONMARGINSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::IconMarginSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::style::IconMarginSpan::operator local_ref<android::text::style::WrapTogetherSpan>() const
{
	return local_ref<android::text::style::WrapTogetherSpan>(get_jobject());
}

android::text::style::IconMarginSpan::operator local_ref<android::text::style::LeadingMarginSpan>() const
{
	return local_ref<android::text::style::LeadingMarginSpan>(get_jobject());
}

android::text::style::IconMarginSpan::operator local_ref<android::text::style::LineHeightSpan>() const
{
	return local_ref<android::text::style::LineHeightSpan>(get_jobject());
}

android::text::style::IconMarginSpan::operator local_ref<android::text::style::ParagraphStyle>() const
{
	return local_ref<android::text::style::ParagraphStyle>(get_jobject());
}


android::text::style::IconMarginSpan::IconMarginSpan(local_ref< android::graphics::Bitmap > const &a0)
: object<android::text::style::IconMarginSpan>(
	call_new_object<
		android::text::style::IconMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::IconMarginSpan::J2CPP_METHOD_NAME(0),
		android::text::style::IconMarginSpan::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



android::text::style::IconMarginSpan::IconMarginSpan(local_ref< android::graphics::Bitmap > const &a0, jint a1)
: object<android::text::style::IconMarginSpan>(
	call_new_object<
		android::text::style::IconMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::IconMarginSpan::J2CPP_METHOD_NAME(1),
		android::text::style::IconMarginSpan::J2CPP_METHOD_SIGNATURE(1)
	>(a0, a1)
)
{
}


jint android::text::style::IconMarginSpan::getLeadingMargin(jboolean a0)
{
	return call_method<
		android::text::style::IconMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::IconMarginSpan::J2CPP_METHOD_NAME(2),
		android::text::style::IconMarginSpan::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0);
}

void android::text::style::IconMarginSpan::drawLeadingMargin(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, local_ref< java::lang::CharSequence > const &a7, jint a8, jint a9, jboolean a10, local_ref< android::text::Layout > const &a11)
{
	return call_method<
		android::text::style::IconMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::IconMarginSpan::J2CPP_METHOD_NAME(3),
		android::text::style::IconMarginSpan::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

void android::text::style::IconMarginSpan::chooseHeight(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2, jint a3, jint a4, local_ref< android::graphics::Paint_::FontMetricsInt > const &a5)
{
	return call_method<
		android::text::style::IconMarginSpan::J2CPP_CLASS_NAME,
		android::text::style::IconMarginSpan::J2CPP_METHOD_NAME(4),
		android::text::style::IconMarginSpan::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}


J2CPP_DEFINE_CLASS(android::text::style::IconMarginSpan,"android/text/style/IconMarginSpan")
J2CPP_DEFINE_METHOD(android::text::style::IconMarginSpan,0,"<init>","(Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::text::style::IconMarginSpan,1,"<init>","(Landroid/graphics/Bitmap;I)V")
J2CPP_DEFINE_METHOD(android::text::style::IconMarginSpan,2,"getLeadingMargin","(Z)I")
J2CPP_DEFINE_METHOD(android::text::style::IconMarginSpan,3,"drawLeadingMargin","(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V")
J2CPP_DEFINE_METHOD(android::text::style::IconMarginSpan,4,"chooseHeight","(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_ICONMARGINSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
