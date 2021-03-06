/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.DatagramSocketImpl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_DATAGRAMSOCKETIMPL_HPP_DECL
#define J2CPP_JAVA_NET_DATAGRAMSOCKETIMPL_HPP_DECL


namespace j2cpp { namespace java { namespace net { class SocketOptions; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/net/SocketOptions.hpp>


namespace j2cpp {

namespace java { namespace net {

	class DatagramSocketImpl;
	class DatagramSocketImpl
		: public object<DatagramSocketImpl>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit DatagramSocketImpl(jobject jobj)
		: object<DatagramSocketImpl>(jobj)
		{
		}

		operator local_ref<java::net::SocketOptions>() const;
		operator local_ref<java::lang::Object>() const;


		DatagramSocketImpl();
		local_ref< java::lang::Object > getOption(jint);
		void setOption(jint, local_ref< java::lang::Object >  const&);

	}; //class DatagramSocketImpl

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_DATAGRAMSOCKETIMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_DATAGRAMSOCKETIMPL_HPP_IMPL
#define J2CPP_JAVA_NET_DATAGRAMSOCKETIMPL_HPP_IMPL

namespace j2cpp {



java::net::DatagramSocketImpl::operator local_ref<java::net::SocketOptions>() const
{
	return local_ref<java::net::SocketOptions>(get_jobject());
}

java::net::DatagramSocketImpl::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::net::DatagramSocketImpl::DatagramSocketImpl()
: object<java::net::DatagramSocketImpl>(
	call_new_object<
		java::net::DatagramSocketImpl::J2CPP_CLASS_NAME,
		java::net::DatagramSocketImpl::J2CPP_METHOD_NAME(0),
		java::net::DatagramSocketImpl::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}







local_ref< java::lang::Object > java::net::DatagramSocketImpl::getOption(jint a0)
{
	return call_method<
		java::net::DatagramSocketImpl::J2CPP_CLASS_NAME,
		java::net::DatagramSocketImpl::J2CPP_METHOD_NAME(6),
		java::net::DatagramSocketImpl::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}










void java::net::DatagramSocketImpl::setOption(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::net::DatagramSocketImpl::J2CPP_CLASS_NAME,
		java::net::DatagramSocketImpl::J2CPP_METHOD_NAME(16),
		java::net::DatagramSocketImpl::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1);
}








J2CPP_DEFINE_CLASS(java::net::DatagramSocketImpl,"java/net/DatagramSocketImpl")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,1,"bind","(ILjava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,2,"close","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,3,"create","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,4,"getFileDescriptor","()Ljava/io/FileDescriptor;")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,5,"getLocalPort","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,6,"getOption","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,7,"getTTL","()B")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,8,"getTimeToLive","()I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,9,"join","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,10,"joinGroup","(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,11,"leave","(Ljava/net/InetAddress;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,12,"leaveGroup","(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,13,"peek","(Ljava/net/InetAddress;)I")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,14,"receive","(Ljava/net/DatagramPacket;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,15,"send","(Ljava/net/DatagramPacket;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,16,"setOption","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,17,"setTimeToLive","(I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,18,"setTTL","(B)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,19,"connect","(Ljava/net/InetAddress;I)V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,20,"disconnect","()V")
J2CPP_DEFINE_METHOD(java::net::DatagramSocketImpl,21,"peekData","(Ljava/net/DatagramPacket;)I")
J2CPP_DEFINE_FIELD(java::net::DatagramSocketImpl,0,"fd","Ljava/io/FileDescriptor;")
J2CPP_DEFINE_FIELD(java::net::DatagramSocketImpl,1,"localPort","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_DATAGRAMSOCKETIMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
