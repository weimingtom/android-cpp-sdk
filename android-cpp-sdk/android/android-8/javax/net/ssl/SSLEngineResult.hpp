/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLEngineResult
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLENGINERESULT_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLENGINERESULT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { namespace SSLEngineResult_ { class Status; } } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { namespace SSLEngineResult_ { class HandshakeStatus; } } } } }


#include <java/lang/String.hpp>
#include <javax/net/ssl/SSLEngineResult.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLEngineResult;
	namespace SSLEngineResult_ {

		class Status;
		class Status
			: public cpp_object<Status>
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

			Status(jobject jobj)
			: cpp_object<Status>(jobj)
			{
			}

			static local_ref< cpp_object_array<javax::net::ssl::SSLEngineResult_::Status, 1> > values();
			static local_ref< javax::net::ssl::SSLEngineResult_::Status > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< javax::net::ssl::SSLEngineResult_::Status > > BUFFER_OVERFLOW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< javax::net::ssl::SSLEngineResult_::Status > > BUFFER_UNDERFLOW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< javax::net::ssl::SSLEngineResult_::Status > > CLOSED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< javax::net::ssl::SSLEngineResult_::Status > > OK;
		}; //class Status

		class HandshakeStatus;
		class HandshakeStatus
			: public cpp_object<HandshakeStatus>
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

			HandshakeStatus(jobject jobj)
			: cpp_object<HandshakeStatus>(jobj)
			{
			}

			static local_ref< cpp_object_array<javax::net::ssl::SSLEngineResult_::HandshakeStatus, 1> > values();
			static local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > > FINISHED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > > NEED_TASK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > > NEED_UNWRAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > > NEED_WRAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > > NOT_HANDSHAKING;
		}; //class HandshakeStatus

	} //namespace SSLEngineResult_

	class SSLEngineResult
		: public cpp_object<SSLEngineResult>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef SSLEngineResult_::Status Status;
		typedef SSLEngineResult_::HandshakeStatus HandshakeStatus;

		SSLEngineResult(jobject jobj)
		: cpp_object<SSLEngineResult>(jobj)
		{
		}

		local_ref< javax::net::ssl::SSLEngineResult_::Status > getStatus();
		local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > getHandshakeStatus();
		cpp_int bytesConsumed();
		cpp_int bytesProduced();
		local_ref< java::lang::String > toString();
	}; //class SSLEngineResult

} //namespace ssl
} //namespace net
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLENGINERESULT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLENGINERESULT_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLENGINERESULT_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<javax::net::ssl::SSLEngineResult_::Status, 1> > javax::net::ssl::SSLEngineResult_::Status::values()
{
	return local_ref< cpp_object_array<javax::net::ssl::SSLEngineResult_::Status, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult_::Status > javax::net::ssl::SSLEngineResult_::Status::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::net::ssl::SSLEngineResult_::Status >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::net::ssl::SSLEngineResult_::Status > create< javax::net::ssl::SSLEngineResult_::Status>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< javax::net::ssl::SSLEngineResult_::Status >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::SSLEngineResult_::Status::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::SSLEngineResult_::Status::J2CPP_CLASS_NAME, javax::net::ssl::SSLEngineResult_::Status::J2CPP_METHOD_NAME(2), javax::net::ssl::SSLEngineResult_::Status::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_NAME(0),
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_SIGNATURE(0),
	local_ref< javax::net::ssl::SSLEngineResult_::Status >
> javax::net::ssl::SSLEngineResult_::Status::BUFFER_OVERFLOW;

static_field<
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_NAME(1),
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_SIGNATURE(1),
	local_ref< javax::net::ssl::SSLEngineResult_::Status >
> javax::net::ssl::SSLEngineResult_::Status::BUFFER_UNDERFLOW;

static_field<
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_NAME(2),
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_SIGNATURE(2),
	local_ref< javax::net::ssl::SSLEngineResult_::Status >
> javax::net::ssl::SSLEngineResult_::Status::CLOSED;

static_field<
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_NAME(3),
	javax::net::ssl::SSLEngineResult_::Status::J2CPP_FIELD_SIGNATURE(3),
	local_ref< javax::net::ssl::SSLEngineResult_::Status >
> javax::net::ssl::SSLEngineResult_::Status::OK;


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLEngineResult_::Status,"javax/net/ssl/SSLEngineResult$Status")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::Status,0,"values","()[javax.net.ssl.SSLEngineResult.Status")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::Status,1,"valueOf","(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::Status,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::Status,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::Status,0,"BUFFER_OVERFLOW","Ljavax/net/ssl/SSLEngineResult$Status;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::Status,1,"BUFFER_UNDERFLOW","Ljavax/net/ssl/SSLEngineResult$Status;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::Status,2,"CLOSED","Ljavax/net/ssl/SSLEngineResult$Status;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::Status,3,"OK","Ljavax/net/ssl/SSLEngineResult$Status;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::Status,4,"$VALUES","[javax.net.ssl.SSLEngineResult.Status")

local_ref< cpp_object_array<javax::net::ssl::SSLEngineResult_::HandshakeStatus, 1> > javax::net::ssl::SSLEngineResult_::HandshakeStatus::values()
{
	return local_ref< cpp_object_array<javax::net::ssl::SSLEngineResult_::HandshakeStatus, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > javax::net::ssl::SSLEngineResult_::HandshakeStatus::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > create< javax::net::ssl::SSLEngineResult_::HandshakeStatus>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME, javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_METHOD_NAME(2), javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_NAME(0),
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_SIGNATURE(0),
	local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >
> javax::net::ssl::SSLEngineResult_::HandshakeStatus::FINISHED;

static_field<
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_NAME(1),
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_SIGNATURE(1),
	local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >
> javax::net::ssl::SSLEngineResult_::HandshakeStatus::NEED_TASK;

static_field<
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_NAME(2),
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_SIGNATURE(2),
	local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >
> javax::net::ssl::SSLEngineResult_::HandshakeStatus::NEED_UNWRAP;

static_field<
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_NAME(3),
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_SIGNATURE(3),
	local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >
> javax::net::ssl::SSLEngineResult_::HandshakeStatus::NEED_WRAP;

static_field<
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_CLASS_NAME,
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_NAME(4),
	javax::net::ssl::SSLEngineResult_::HandshakeStatus::J2CPP_FIELD_SIGNATURE(4),
	local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >
> javax::net::ssl::SSLEngineResult_::HandshakeStatus::NOT_HANDSHAKING;


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLEngineResult_::HandshakeStatus,"javax/net/ssl/SSLEngineResult$HandshakeStatus")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,0,"values","()[javax.net.ssl.SSLEngineResult.HandshakeStatus")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,1,"valueOf","(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,0,"FINISHED","Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,1,"NEED_TASK","Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,2,"NEED_UNWRAP","Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,3,"NEED_WRAP","Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,4,"NOT_HANDSHAKING","Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_FIELD(javax::net::ssl::SSLEngineResult_::HandshakeStatus,5,"$VALUES","[javax.net.ssl.SSLEngineResult.HandshakeStatus")


template <>
local_ref< javax::net::ssl::SSLEngineResult > create< javax::net::ssl::SSLEngineResult>(local_ref< javax::net::ssl::SSLEngineResult_::Status > const &a0, local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::SSLEngineResult::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::SSLEngineResult::J2CPP_CLASS_NAME, javax::net::ssl::SSLEngineResult::J2CPP_METHOD_NAME(0), javax::net::ssl::SSLEngineResult::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult_::Status > javax::net::ssl::SSLEngineResult::getStatus()
{
	return local_ref< javax::net::ssl::SSLEngineResult_::Status >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > javax::net::ssl::SSLEngineResult::getHandshakeStatus()
{
	return local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int javax::net::ssl::SSLEngineResult::bytesConsumed()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int javax::net::ssl::SSLEngineResult::bytesProduced()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > javax::net::ssl::SSLEngineResult::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLEngineResult,"javax/net/ssl/SSLEngineResult")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult,0,"<init>","(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult,1,"getStatus","()Ljavax/net/ssl/SSLEngineResult$Status;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult,2,"getHandshakeStatus","()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult,3,"bytesConsumed","()I")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult,4,"bytesProduced","()I")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngineResult,5,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLENGINERESULT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
