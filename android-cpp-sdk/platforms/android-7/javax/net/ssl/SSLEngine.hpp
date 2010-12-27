/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLEngine
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLEngineResult; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { namespace SSLEngineResult_ { class HandshakeStatus; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <javax/net/ssl/SSLEngineResult.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLEngine;
	class SSLEngine
		: public cpp_object<SSLEngine>
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

		explicit SSLEngine(jobject jobj)
		: cpp_object<SSLEngine>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getPeerHost();
		cpp_int getPeerPort();
		void beginHandshake();
		void closeInbound();
		void closeOutbound();
		local_ref< java::lang::Runnable > getDelegatedTask();
		local_ref< cpp_object_array<java::lang::String, 1> > getEnabledCipherSuites();
		local_ref< cpp_object_array<java::lang::String, 1> > getEnabledProtocols();
		cpp_boolean getEnableSessionCreation();
		local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > getHandshakeStatus();
		cpp_boolean getNeedClientAuth();
		local_ref< javax::net::ssl::SSLSession > getSession();
		local_ref< cpp_object_array<java::lang::String, 1> > getSupportedCipherSuites();
		local_ref< cpp_object_array<java::lang::String, 1> > getSupportedProtocols();
		cpp_boolean getUseClientMode();
		cpp_boolean getWantClientAuth();
		cpp_boolean isInboundDone();
		cpp_boolean isOutboundDone();
		void setEnabledCipherSuites(local_ref< cpp_object_array<java::lang::String, 1> > const&);
		void setEnabledProtocols(local_ref< cpp_object_array<java::lang::String, 1> > const&);
		void setEnableSessionCreation(cpp_boolean const&);
		void setNeedClientAuth(cpp_boolean const&);
		void setUseClientMode(cpp_boolean const&);
		void setWantClientAuth(cpp_boolean const&);
		local_ref< javax::net::ssl::SSLEngineResult > unwrap(local_ref< java::nio::ByteBuffer > const&, local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const&, cpp_int const&, cpp_int const&);
		local_ref< javax::net::ssl::SSLEngineResult > wrap(local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const&, cpp_int const&, cpp_int const&, local_ref< java::nio::ByteBuffer > const&);
		local_ref< javax::net::ssl::SSLEngineResult > unwrap(local_ref< java::nio::ByteBuffer > const&, local_ref< java::nio::ByteBuffer > const&);
		local_ref< javax::net::ssl::SSLEngineResult > unwrap(local_ref< java::nio::ByteBuffer > const&, local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const&);
		local_ref< javax::net::ssl::SSLEngineResult > wrap(local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const&, local_ref< java::nio::ByteBuffer > const&);
		local_ref< javax::net::ssl::SSLEngineResult > wrap(local_ref< java::nio::ByteBuffer > const&, local_ref< java::nio::ByteBuffer > const&);
	}; //class SSLEngine

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLEngine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}



local_ref< java::lang::String > javax::net::ssl::SSLEngine::getPeerHost()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int javax::net::ssl::SSLEngine::getPeerPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void javax::net::ssl::SSLEngine::beginHandshake()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void javax::net::ssl::SSLEngine::closeInbound()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void javax::net::ssl::SSLEngine::closeOutbound()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::Runnable > javax::net::ssl::SSLEngine::getDelegatedTask()
{
	return local_ref< java::lang::Runnable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLEngine::getEnabledCipherSuites()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLEngine::getEnabledProtocols()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean javax::net::ssl::SSLEngine::getEnableSessionCreation()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus > javax::net::ssl::SSLEngine::getHandshakeStatus()
{
	return local_ref< javax::net::ssl::SSLEngineResult_::HandshakeStatus >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_boolean javax::net::ssl::SSLEngine::getNeedClientAuth()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< javax::net::ssl::SSLSession > javax::net::ssl::SSLEngine::getSession()
{
	return local_ref< javax::net::ssl::SSLSession >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLEngine::getSupportedCipherSuites()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLEngine::getSupportedProtocols()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_boolean javax::net::ssl::SSLEngine::getUseClientMode()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean javax::net::ssl::SSLEngine::getWantClientAuth()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean javax::net::ssl::SSLEngine::isInboundDone()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean javax::net::ssl::SSLEngine::isOutboundDone()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void javax::net::ssl::SSLEngine::setEnabledCipherSuites(local_ref< cpp_object_array<java::lang::String, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::SSLEngine::setEnabledProtocols(local_ref< cpp_object_array<java::lang::String, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::SSLEngine::setEnableSessionCreation(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::SSLEngine::setNeedClientAuth(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::SSLEngine::setUseClientMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

void javax::net::ssl::SSLEngine::setWantClientAuth(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::unwrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::wrap(local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< java::nio::ByteBuffer > const &a3)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::unwrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::unwrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const &a1)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::wrap(local_ref< cpp_object_array<java::nio::ByteBuffer, 1> > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLEngineResult > javax::net::ssl::SSLEngine::wrap(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::ByteBuffer > const &a1)
{
	return local_ref< javax::net::ssl::SSLEngineResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLEngine,"javax/net/ssl/SSLEngine")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,2,"getPeerHost","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,3,"getPeerPort","()I")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,4,"beginHandshake","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,5,"closeInbound","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,6,"closeOutbound","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,7,"getDelegatedTask","()Ljava/lang/Runnable;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,8,"getEnabledCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,9,"getEnabledProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,10,"getEnableSessionCreation","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,11,"getHandshakeStatus","()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,12,"getNeedClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,13,"getSession","()Ljavax/net/ssl/SSLSession;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,14,"getSupportedCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,15,"getSupportedProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,16,"getUseClientMode","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,17,"getWantClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,18,"isInboundDone","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,19,"isOutboundDone","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,20,"setEnabledCipherSuites","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,21,"setEnabledProtocols","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,22,"setEnableSessionCreation","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,23,"setNeedClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,24,"setUseClientMode","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,25,"setWantClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,26,"unwrap","(Ljava/nio/ByteBuffer;[java.nio.ByteBufferII)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,27,"wrap","([java.nio.ByteBufferIILjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,28,"unwrap","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,29,"unwrap","(Ljava/nio/ByteBuffer;[java.nio.ByteBuffer)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,30,"wrap","([java.nio.ByteBufferLjava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLEngine,31,"wrap","(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)Ljavax/net/ssl/SSLEngineResult;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLENGINE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION