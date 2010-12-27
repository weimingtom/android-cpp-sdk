/*================================================================================
  code generated by: java2cpp
  class: android.text.SpannableStringBuilder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRINGBUILDER_HPP_DECL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRINGBUILDER_HPP_DECL


namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { class InputFilter; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }


#include <android/text/Editable.hpp>
#include <android/text/InputFilter.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class SpannableStringBuilder;
	class SpannableStringBuilder
		: public cpp_object<SpannableStringBuilder>
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

		SpannableStringBuilder(jobject jobj)
		: cpp_object<SpannableStringBuilder>(jobj)
		{
		}

		static local_ref< android::text::SpannableStringBuilder > valueOf(local_ref< java::lang::CharSequence > const&);
		cpp_char charAt(cpp_int const&);
		cpp_int length();
		local_ref< android::text::SpannableStringBuilder > insert(cpp_int const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< android::text::SpannableStringBuilder > insert(cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< android::text::SpannableStringBuilder > deleteThe(cpp_int const&, cpp_int const&);
		void clear();
		void clearSpans();
		local_ref< android::text::SpannableStringBuilder > append(local_ref< java::lang::CharSequence > const&);
		local_ref< android::text::SpannableStringBuilder > append(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< android::text::SpannableStringBuilder > append(cpp_char const&);
		local_ref< android::text::SpannableStringBuilder > replace(cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< android::text::SpannableStringBuilder > replace(cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		void setSpan(local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void removeSpan(local_ref< java::lang::Object > const&);
		cpp_int getSpanStart(local_ref< java::lang::Object > const&);
		cpp_int getSpanEnd(local_ref< java::lang::Object > const&);
		cpp_int getSpanFlags(local_ref< java::lang::Object > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > getSpans(cpp_int const&, cpp_int const&, local_ref< java::lang::Class > const&);
		cpp_int nextSpanTransition(cpp_int const&, cpp_int const&, local_ref< java::lang::Class > const&);
		local_ref< java::lang::CharSequence > subSequence(cpp_int const&, cpp_int const&);
		void getChars(cpp_int const&, cpp_int const&, local_ref< cpp_char_array<1> > const&, cpp_int const&);
		local_ref< java::lang::String > toString();
		void setFilters(local_ref< cpp_object_array<android::text::InputFilter, 1> > const&);
		local_ref< cpp_object_array<android::text::InputFilter, 1> > getFilters();
		local_ref< android::text::Editable > append_1(cpp_char const&);
		local_ref< android::text::Editable > append_1(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< android::text::Editable > append_1(local_ref< java::lang::CharSequence > const&);
		local_ref< android::text::Editable > delete_1(cpp_int const&, cpp_int const&);
		local_ref< android::text::Editable > insert_1(cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< android::text::Editable > insert_1(cpp_int const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< android::text::Editable > replace_1(cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< android::text::Editable > replace_1(cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::Appendable > append_2(cpp_char const&);
	}; //class SpannableStringBuilder

} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRINGBUILDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRINGBUILDER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRINGBUILDER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::SpannableStringBuilder > create< android::text::SpannableStringBuilder>()
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::SpannableStringBuilder::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::SpannableStringBuilder::J2CPP_CLASS_NAME, android::text::SpannableStringBuilder::J2CPP_METHOD_NAME(0), android::text::SpannableStringBuilder::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::text::SpannableStringBuilder > create< android::text::SpannableStringBuilder>(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::SpannableStringBuilder::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::SpannableStringBuilder::J2CPP_CLASS_NAME, android::text::SpannableStringBuilder::J2CPP_METHOD_NAME(1), android::text::SpannableStringBuilder::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::text::SpannableStringBuilder > create< android::text::SpannableStringBuilder>(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::SpannableStringBuilder::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::SpannableStringBuilder::J2CPP_CLASS_NAME, android::text::SpannableStringBuilder::J2CPP_METHOD_NAME(2), android::text::SpannableStringBuilder::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::valueOf(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

cpp_char android::text::SpannableStringBuilder::charAt(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringBuilder::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::insert(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::insert(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::deleteThe(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::SpannableStringBuilder::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::text::SpannableStringBuilder::clearSpans()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::append(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::append(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::append(cpp_char const &a0)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::replace(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::CharSequence > const &a2)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::text::SpannableStringBuilder > android::text::SpannableStringBuilder::replace(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::CharSequence > const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return local_ref< android::text::SpannableStringBuilder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::text::SpannableStringBuilder::setSpan(local_ref< java::lang::Object > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::text::SpannableStringBuilder::removeSpan(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringBuilder::getSpanStart(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringBuilder::getSpanEnd(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringBuilder::getSpanFlags(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > android::text::SpannableStringBuilder::getSpans(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::Class > const &a2)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringBuilder::nextSpanTransition(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::Class > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::text::SpannableStringBuilder::subSequence(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::text::SpannableStringBuilder::getChars(cpp_int const &a0, cpp_int const &a1, local_ref< cpp_char_array<1> > const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::SpannableStringBuilder::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

void android::text::SpannableStringBuilder::setFilters(local_ref< cpp_object_array<android::text::InputFilter, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<android::text::InputFilter, 1> > android::text::SpannableStringBuilder::getFilters()
{
	return local_ref< cpp_object_array<android::text::InputFilter, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::append_1(cpp_char const &a0)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::append_1(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::delete_1(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::insert_1(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::insert_1(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::replace_1(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::CharSequence > const &a2)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::text::Editable > android::text::SpannableStringBuilder::replace_1(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::CharSequence > const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return local_ref< android::text::Editable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > android::text::SpannableStringBuilder::append_2(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > android::text::SpannableStringBuilder::append_2(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > android::text::SpannableStringBuilder::append_2(cpp_char const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::SpannableStringBuilder,"android/text/SpannableStringBuilder")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,1,"<init>","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,2,"<init>","(Ljava/lang/CharSequence;II)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,3,"valueOf","(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,4,"charAt","(I)C")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,5,"length","()I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,6,"insert","(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,7,"insert","(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,8,"delete","(II)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,9,"clear","()V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,10,"clearSpans","()V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,11,"append","(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,12,"append","(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,13,"append","(C)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,14,"replace","(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,15,"replace","(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,16,"setSpan","(Ljava/lang/Object;III)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,17,"removeSpan","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,18,"getSpanStart","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,19,"getSpanEnd","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,20,"getSpanFlags","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,21,"getSpans","(IILjava/lang/Class;)[java.lang.Object")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,22,"nextSpanTransition","(IILjava/lang/Class;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,23,"subSequence","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,24,"getChars","(II[CI)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,25,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,26,"setFilters","([android.text.InputFilter)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,27,"getFilters","()[android.text.InputFilter")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,28,"append","(C)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,29,"append","(Ljava/lang/CharSequence;II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,30,"append","(Ljava/lang/CharSequence;)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,31,"delete","(II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,32,"insert","(ILjava/lang/CharSequence;)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,33,"insert","(ILjava/lang/CharSequence;II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,34,"replace","(IILjava/lang/CharSequence;)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,35,"replace","(IILjava/lang/CharSequence;II)Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,36,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,37,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringBuilder,38,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRINGBUILDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
