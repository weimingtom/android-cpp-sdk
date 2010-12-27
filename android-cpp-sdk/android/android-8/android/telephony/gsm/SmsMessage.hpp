/*================================================================================
  code generated by: java2cpp
  class: android.telephony.gsm.SmsMessage
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_GSM_SMSMESSAGE_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_GSM_SMSMESSAGE_HPP_DECL


namespace j2cpp { namespace android { namespace telephony { namespace gsm { namespace SmsMessage_ { class SubmitPdu; } } } } }
namespace j2cpp { namespace android { namespace telephony { namespace gsm { namespace SmsMessage_ { class MessageClass; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/telephony/gsm/SmsMessage.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony { namespace gsm {

	class SmsMessage;
	namespace SmsMessage_ {

		class SubmitPdu;
		class SubmitPdu
			: public cpp_object<SubmitPdu>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			SubmitPdu(jobject jobj)
			: cpp_object<SubmitPdu>(jobj)
			, encodedScAddress(jobj)
			, encodedMessage(jobj)
			{
			}

			local_ref< java::lang::String > toString();

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< cpp_byte_array<1> > > encodedScAddress;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< cpp_byte_array<1> > > encodedMessage;
		}; //class SubmitPdu

		class MessageClass;
		class MessageClass
			: public cpp_object<MessageClass>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			MessageClass(jobject jobj)
			: cpp_object<MessageClass>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::telephony::gsm::SmsMessage_::MessageClass, 1> > values();
			static local_ref< android::telephony::gsm::SmsMessage_::MessageClass > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::telephony::gsm::SmsMessage_::MessageClass > > CLASS_0;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::telephony::gsm::SmsMessage_::MessageClass > > CLASS_1;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::telephony::gsm::SmsMessage_::MessageClass > > CLASS_2;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::telephony::gsm::SmsMessage_::MessageClass > > CLASS_3;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::telephony::gsm::SmsMessage_::MessageClass > > UNKNOWN;
		}; //class MessageClass

	} //namespace SmsMessage_

	class SmsMessage
		: public cpp_object<SmsMessage>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		typedef SmsMessage_::SubmitPdu SubmitPdu;
		typedef SmsMessage_::MessageClass MessageClass;

		SmsMessage(jobject jobj)
		: cpp_object<SmsMessage>(jobj)
		{
		}

		static local_ref< android::telephony::gsm::SmsMessage > createFromPdu(local_ref< cpp_byte_array<1> > const&);
		static cpp_int getTPLayerLengthForPDU(local_ref< java::lang::String > const&);
		static local_ref< cpp_int_array<1> > calculateLength(local_ref< java::lang::CharSequence > const&, cpp_boolean const&);
		static local_ref< cpp_int_array<1> > calculateLength(local_ref< java::lang::String > const&, cpp_boolean const&);
		static local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu > getSubmitPdu(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_boolean const&);
		static local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu > getSubmitPdu(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_short const&, local_ref< cpp_byte_array<1> > const&, cpp_boolean const&);
		local_ref< java::lang::String > getServiceCenterAddress();
		local_ref< java::lang::String > getOriginatingAddress();
		local_ref< java::lang::String > getDisplayOriginatingAddress();
		local_ref< java::lang::String > getMessageBody();
		local_ref< android::telephony::gsm::SmsMessage_::MessageClass > getMessageClass();
		local_ref< java::lang::String > getDisplayMessageBody();
		local_ref< java::lang::String > getPseudoSubject();
		cpp_long getTimestampMillis();
		cpp_boolean isEmail();
		local_ref< java::lang::String > getEmailBody();
		local_ref< java::lang::String > getEmailFrom();
		cpp_int getProtocolIdentifier();
		cpp_boolean isReplace();
		cpp_boolean isCphsMwiMessage();
		cpp_boolean isMWIClearMessage();
		cpp_boolean isMWISetMessage();
		cpp_boolean isMwiDontStore();
		local_ref< cpp_byte_array<1> > getUserData();
		local_ref< cpp_byte_array<1> > getPdu();
		cpp_int getStatusOnSim();
		cpp_int getIndexOnSim();
		cpp_int getStatus();
		cpp_boolean isStatusReportMessage();
		cpp_boolean isReplyPathPresent();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ENCODING_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ENCODING_7BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ENCODING_8BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > ENCODING_16BIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > MAX_USER_DATA_BYTES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > MAX_USER_DATA_SEPTETS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > MAX_USER_DATA_SEPTETS_WITH_HEADER;
	}; //class SmsMessage

} //namespace gsm
} //namespace telephony
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_GSM_SMSMESSAGE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_GSM_SMSMESSAGE_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_GSM_SMSMESSAGE_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu > create< android::telephony::gsm::SmsMessage_::SubmitPdu>()
{
	return local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::gsm::SmsMessage_::SubmitPdu::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::gsm::SmsMessage_::SubmitPdu::J2CPP_CLASS_NAME, android::telephony::gsm::SmsMessage_::SubmitPdu::J2CPP_METHOD_NAME(0), android::telephony::gsm::SmsMessage_::SubmitPdu::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage_::SubmitPdu::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::telephony::gsm::SmsMessage_::SubmitPdu,"android/telephony/gsm/SmsMessage$SubmitPdu")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage_::SubmitPdu,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage_::SubmitPdu,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::SubmitPdu,0,"encodedScAddress","[B")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::SubmitPdu,1,"encodedMessage","[B")

local_ref< cpp_object_array<android::telephony::gsm::SmsMessage_::MessageClass, 1> > android::telephony::gsm::SmsMessage_::MessageClass::values()
{
	return local_ref< cpp_object_array<android::telephony::gsm::SmsMessage_::MessageClass, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::telephony::gsm::SmsMessage_::MessageClass > android::telephony::gsm::SmsMessage_::MessageClass::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::telephony::gsm::SmsMessage_::MessageClass >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::telephony::gsm::SmsMessage_::MessageClass > create< android::telephony::gsm::SmsMessage_::MessageClass>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::telephony::gsm::SmsMessage_::MessageClass >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME, android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_METHOD_NAME(2), android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(0),
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::telephony::gsm::SmsMessage_::MessageClass >
> android::telephony::gsm::SmsMessage_::MessageClass::CLASS_0;

static_field<
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(1),
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::telephony::gsm::SmsMessage_::MessageClass >
> android::telephony::gsm::SmsMessage_::MessageClass::CLASS_1;

static_field<
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(2),
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::telephony::gsm::SmsMessage_::MessageClass >
> android::telephony::gsm::SmsMessage_::MessageClass::CLASS_2;

static_field<
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(3),
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::telephony::gsm::SmsMessage_::MessageClass >
> android::telephony::gsm::SmsMessage_::MessageClass::CLASS_3;

static_field<
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_NAME(4),
	android::telephony::gsm::SmsMessage_::MessageClass::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::telephony::gsm::SmsMessage_::MessageClass >
> android::telephony::gsm::SmsMessage_::MessageClass::UNKNOWN;


J2CPP_DEFINE_CLASS(android::telephony::gsm::SmsMessage_::MessageClass,"android/telephony/gsm/SmsMessage$MessageClass")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage_::MessageClass,0,"values","()[android.telephony.gsm.SmsMessage.MessageClass")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage_::MessageClass,1,"valueOf","(Ljava/lang/String;)Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage_::MessageClass,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage_::MessageClass,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::MessageClass,0,"CLASS_0","Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::MessageClass,1,"CLASS_1","Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::MessageClass,2,"CLASS_2","Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::MessageClass,3,"CLASS_3","Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::MessageClass,4,"UNKNOWN","Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage_::MessageClass,5,"$VALUES","[android.telephony.gsm.SmsMessage.MessageClass")


template <>
local_ref< android::telephony::gsm::SmsMessage > create< android::telephony::gsm::SmsMessage>()
{
	return local_ref< android::telephony::gsm::SmsMessage >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME, android::telephony::gsm::SmsMessage::J2CPP_METHOD_NAME(0), android::telephony::gsm::SmsMessage::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::telephony::gsm::SmsMessage > android::telephony::gsm::SmsMessage::createFromPdu(local_ref< cpp_byte_array<1> > const &a0)
{
	return local_ref< android::telephony::gsm::SmsMessage >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::telephony::gsm::SmsMessage::getTPLayerLengthForPDU(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_int_array<1> > android::telephony::gsm::SmsMessage::calculateLength(local_ref< java::lang::CharSequence > const &a0, cpp_boolean const &a1)
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_int_array<1> > android::telephony::gsm::SmsMessage::calculateLength(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu > android::telephony::gsm::SmsMessage::getSubmitPdu(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, cpp_boolean const &a3)
{
	return local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu > android::telephony::gsm::SmsMessage::getSubmitPdu(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_short const &a2, local_ref< cpp_byte_array<1> > const &a3, cpp_boolean const &a4)
{
	return local_ref< android::telephony::gsm::SmsMessage_::SubmitPdu >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getServiceCenterAddress()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getOriginatingAddress()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getDisplayOriginatingAddress()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getMessageBody()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< android::telephony::gsm::SmsMessage_::MessageClass > android::telephony::gsm::SmsMessage::getMessageClass()
{
	return local_ref< android::telephony::gsm::SmsMessage_::MessageClass >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getDisplayMessageBody()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getPseudoSubject()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_long android::telephony::gsm::SmsMessage::getTimestampMillis()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isEmail()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getEmailBody()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::gsm::SmsMessage::getEmailFrom()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_int android::telephony::gsm::SmsMessage::getProtocolIdentifier()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isReplace()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isCphsMwiMessage()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isMWIClearMessage()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isMWISetMessage()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isMwiDontStore()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > android::telephony::gsm::SmsMessage::getUserData()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > android::telephony::gsm::SmsMessage::getPdu()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_int android::telephony::gsm::SmsMessage::getStatusOnSim()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_int android::telephony::gsm::SmsMessage::getIndexOnSim()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_int android::telephony::gsm::SmsMessage::getStatus()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isStatusReportMessage()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

cpp_boolean android::telephony::gsm::SmsMessage::isReplyPathPresent()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}


static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(0),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::telephony::gsm::SmsMessage::ENCODING_UNKNOWN;

static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(1),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::telephony::gsm::SmsMessage::ENCODING_7BIT;

static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(2),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::telephony::gsm::SmsMessage::ENCODING_8BIT;

static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(3),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::telephony::gsm::SmsMessage::ENCODING_16BIT;

static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(4),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::telephony::gsm::SmsMessage::MAX_USER_DATA_BYTES;

static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(5),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::telephony::gsm::SmsMessage::MAX_USER_DATA_SEPTETS;

static_field<
	android::telephony::gsm::SmsMessage::J2CPP_CLASS_NAME,
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_NAME(6),
	android::telephony::gsm::SmsMessage::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::telephony::gsm::SmsMessage::MAX_USER_DATA_SEPTETS_WITH_HEADER;


J2CPP_DEFINE_CLASS(android::telephony::gsm::SmsMessage,"android/telephony/gsm/SmsMessage")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,1,"createFromPdu","([B)Landroid/telephony/gsm/SmsMessage;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,2,"getTPLayerLengthForPDU","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,3,"calculateLength","(Ljava/lang/CharSequence;Z)[I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,4,"calculateLength","(Ljava/lang/String;Z)[I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,5,"getSubmitPdu","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Landroid/telephony/gsm/SmsMessage$SubmitPdu;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,6,"getSubmitPdu","(Ljava/lang/String;Ljava/lang/String;S[BZ)Landroid/telephony/gsm/SmsMessage$SubmitPdu;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,7,"getServiceCenterAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,8,"getOriginatingAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,9,"getDisplayOriginatingAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,10,"getMessageBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,11,"getMessageClass","()Landroid/telephony/gsm/SmsMessage$MessageClass;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,12,"getDisplayMessageBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,13,"getPseudoSubject","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,14,"getTimestampMillis","()J")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,15,"isEmail","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,16,"getEmailBody","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,17,"getEmailFrom","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,18,"getProtocolIdentifier","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,19,"isReplace","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,20,"isCphsMwiMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,21,"isMWIClearMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,22,"isMWISetMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,23,"isMwiDontStore","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,24,"getUserData","()[B")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,25,"getPdu","()[B")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,26,"getStatusOnSim","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,27,"getIndexOnSim","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,28,"getStatus","()I")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,29,"isStatusReportMessage","()Z")
J2CPP_DEFINE_METHOD(android::telephony::gsm::SmsMessage,30,"isReplyPathPresent","()Z")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,0,"ENCODING_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,1,"ENCODING_7BIT","I")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,2,"ENCODING_8BIT","I")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,3,"ENCODING_16BIT","I")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,4,"MAX_USER_DATA_BYTES","I")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,5,"MAX_USER_DATA_SEPTETS","I")
J2CPP_DEFINE_FIELD(android::telephony::gsm::SmsMessage,6,"MAX_USER_DATA_SEPTETS_WITH_HEADER","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_GSM_SMSMESSAGE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
