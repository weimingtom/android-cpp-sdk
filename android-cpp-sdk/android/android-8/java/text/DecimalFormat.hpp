/*================================================================================
  code generated by: java2cpp
  class: java.text.DecimalFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_DECL
#define J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace text { class DecimalFormatSymbols; } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { class FieldPosition; } } }
namespace j2cpp { namespace java { namespace text { class ParsePosition; } } }
namespace j2cpp { namespace java { namespace util { class Currency; } } }


#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/DecimalFormatSymbols.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/text/ParsePosition.hpp>
#include <java/util/Currency.hpp>


namespace j2cpp {

namespace java { namespace text {

	class DecimalFormat;
	class DecimalFormat
		: public cpp_object<DecimalFormat>
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

		DecimalFormat(jobject jobj)
		: cpp_object<DecimalFormat>(jobj)
		{
		}

		void applyLocalizedPattern(local_ref< java::lang::String > const&);
		void applyPattern(local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > clone();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::text::AttributedCharacterIterator > formatToCharacterIterator(local_ref< java::lang::Object > const&);
		local_ref< java::lang::StringBuffer > format(cpp_double const&, local_ref< java::lang::StringBuffer > const&, local_ref< java::text::FieldPosition > const&);
		local_ref< java::lang::StringBuffer > format(cpp_long const&, local_ref< java::lang::StringBuffer > const&, local_ref< java::text::FieldPosition > const&);
		local_ref< java::lang::StringBuffer > format(local_ref< java::lang::Object > const&, local_ref< java::lang::StringBuffer > const&, local_ref< java::text::FieldPosition > const&);
		local_ref< java::text::DecimalFormatSymbols > getDecimalFormatSymbols();
		local_ref< java::util::Currency > getCurrency();
		cpp_int getGroupingSize();
		cpp_int getMultiplier();
		local_ref< java::lang::String > getNegativePrefix();
		local_ref< java::lang::String > getNegativeSuffix();
		local_ref< java::lang::String > getPositivePrefix();
		local_ref< java::lang::String > getPositiveSuffix();
		cpp_int hashCode();
		cpp_boolean isDecimalSeparatorAlwaysShown();
		cpp_boolean isParseBigDecimal();
		void setParseIntegerOnly(cpp_boolean const&);
		cpp_boolean isParseIntegerOnly();
		local_ref< java::lang::Number > parse(local_ref< java::lang::String > const&, local_ref< java::text::ParsePosition > const&);
		void setDecimalFormatSymbols(local_ref< java::text::DecimalFormatSymbols > const&);
		void setCurrency(local_ref< java::util::Currency > const&);
		void setDecimalSeparatorAlwaysShown(cpp_boolean const&);
		void setGroupingSize(cpp_int const&);
		void setGroupingUsed(cpp_boolean const&);
		cpp_boolean isGroupingUsed();
		void setMaximumFractionDigits(cpp_int const&);
		void setMaximumIntegerDigits(cpp_int const&);
		void setMinimumFractionDigits(cpp_int const&);
		void setMinimumIntegerDigits(cpp_int const&);
		void setMultiplier(cpp_int const&);
		void setNegativePrefix(local_ref< java::lang::String > const&);
		void setNegativeSuffix(local_ref< java::lang::String > const&);
		void setPositivePrefix(local_ref< java::lang::String > const&);
		void setPositiveSuffix(local_ref< java::lang::String > const&);
		void setParseBigDecimal(cpp_boolean const&);
		local_ref< java::lang::String > toLocalizedPattern();
		local_ref< java::lang::String > toPattern();
	}; //class DecimalFormat

} //namespace text
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_IMPL
#define J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::text::DecimalFormat > create< java::text::DecimalFormat>()
{
	return local_ref< java::text::DecimalFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::DecimalFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::DecimalFormat::J2CPP_CLASS_NAME, java::text::DecimalFormat::J2CPP_METHOD_NAME(0), java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::text::DecimalFormat > create< java::text::DecimalFormat>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::text::DecimalFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::DecimalFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::DecimalFormat::J2CPP_CLASS_NAME, java::text::DecimalFormat::J2CPP_METHOD_NAME(1), java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::text::DecimalFormat > create< java::text::DecimalFormat>(local_ref< java::lang::String > const &a0, local_ref< java::text::DecimalFormatSymbols > const &a1)
{
	return local_ref< java::text::DecimalFormat >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::DecimalFormat::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::DecimalFormat::J2CPP_CLASS_NAME, java::text::DecimalFormat::J2CPP_METHOD_NAME(2), java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::DecimalFormat::applyLocalizedPattern(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::applyPattern(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::text::DecimalFormat::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::text::DecimalFormat::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::AttributedCharacterIterator > java::text::DecimalFormat::formatToCharacterIterator(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::text::AttributedCharacterIterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::text::DecimalFormat::format(cpp_double const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::text::DecimalFormat::format(cpp_long const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::text::DecimalFormat::format(local_ref< java::lang::Object > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::text::DecimalFormatSymbols > java::text::DecimalFormat::getDecimalFormatSymbols()
{
	return local_ref< java::text::DecimalFormatSymbols >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::util::Currency > java::text::DecimalFormat::getCurrency()
{
	return local_ref< java::util::Currency >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_int java::text::DecimalFormat::getGroupingSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int java::text::DecimalFormat::getMultiplier()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::String > java::text::DecimalFormat::getNegativePrefix()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::String > java::text::DecimalFormat::getNegativeSuffix()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::text::DecimalFormat::getPositivePrefix()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::lang::String > java::text::DecimalFormat::getPositiveSuffix()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int java::text::DecimalFormat::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean java::text::DecimalFormat::isDecimalSeparatorAlwaysShown()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean java::text::DecimalFormat::isParseBigDecimal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

void java::text::DecimalFormat::setParseIntegerOnly(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::text::DecimalFormat::isParseIntegerOnly()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< java::lang::Number > java::text::DecimalFormat::parse(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return local_ref< java::lang::Number >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setDecimalFormatSymbols(local_ref< java::text::DecimalFormatSymbols > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setCurrency(local_ref< java::util::Currency > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setDecimalSeparatorAlwaysShown(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setGroupingSize(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setGroupingUsed(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::text::DecimalFormat::isGroupingUsed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

void java::text::DecimalFormat::setMaximumFractionDigits(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setMaximumIntegerDigits(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setMinimumFractionDigits(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setMinimumIntegerDigits(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setMultiplier(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setNegativePrefix(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setNegativeSuffix(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setPositivePrefix(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setPositiveSuffix(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::DecimalFormat::setParseBigDecimal(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::text::DecimalFormat::toLocalizedPattern()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

local_ref< java::lang::String > java::text::DecimalFormat::toPattern()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::DecimalFormat,"java/text/DecimalFormat")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,2,"<init>","(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,3,"applyLocalizedPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,4,"applyPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,5,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,7,"formatToCharacterIterator","(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,8,"format","(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,9,"format","(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,10,"format","(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,11,"getDecimalFormatSymbols","()Ljava/text/DecimalFormatSymbols;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,12,"getCurrency","()Ljava/util/Currency;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,13,"getGroupingSize","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,14,"getMultiplier","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,15,"getNegativePrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,16,"getNegativeSuffix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,17,"getPositivePrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,18,"getPositiveSuffix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,19,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,20,"isDecimalSeparatorAlwaysShown","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,21,"isParseBigDecimal","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,22,"setParseIntegerOnly","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,23,"isParseIntegerOnly","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,24,"parse","(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,25,"setDecimalFormatSymbols","(Ljava/text/DecimalFormatSymbols;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,26,"setCurrency","(Ljava/util/Currency;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,27,"setDecimalSeparatorAlwaysShown","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,28,"setGroupingSize","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,29,"setGroupingUsed","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,30,"isGroupingUsed","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,31,"setMaximumFractionDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,32,"setMaximumIntegerDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,33,"setMinimumFractionDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,34,"setMinimumIntegerDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,35,"setMultiplier","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,36,"setNegativePrefix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,37,"setNegativeSuffix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,38,"setPositivePrefix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,39,"setPositiveSuffix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,40,"setParseBigDecimal","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,41,"toLocalizedPattern","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,42,"toPattern","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
