/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.SelectableChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace nio { namespace channels { class SelectionKey; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { namespace spi { class SelectorProvider; } } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Selector; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/nio/channels/SelectionKey.hpp>
#include <java/nio/channels/Selector.hpp>
#include <java/nio/channels/spi/SelectorProvider.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class SelectableChannel;
	class SelectableChannel
		: public cpp_object<SelectableChannel>
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

		SelectableChannel(jobject jobj)
		: cpp_object<SelectableChannel>(jobj)
		{
		}

		local_ref< java::lang::Object > blockingLock();
		local_ref< java::nio::channels::SelectableChannel > configureBlocking(cpp_boolean const&);
		cpp_boolean isBlocking();
		cpp_boolean isRegistered();
		local_ref< java::nio::channels::SelectionKey > keyFor(local_ref< java::nio::channels::Selector > const&);
		local_ref< java::nio::channels::spi::SelectorProvider > provider();
		local_ref< java::nio::channels::SelectionKey > register(local_ref< java::nio::channels::Selector > const&, cpp_int const&);
		local_ref< java::nio::channels::SelectionKey > register(local_ref< java::nio::channels::Selector > const&, cpp_int const&, local_ref< java::lang::Object > const&);
		cpp_int validOps();
	}; //class SelectableChannel

} //namespace channels
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::channels::SelectableChannel > create< java::nio::channels::SelectableChannel>()
{
	return local_ref< java::nio::channels::SelectableChannel >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::channels::SelectableChannel::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::channels::SelectableChannel::J2CPP_CLASS_NAME, java::nio::channels::SelectableChannel::J2CPP_METHOD_NAME(0), java::nio::channels::SelectableChannel::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::Object > java::nio::channels::SelectableChannel::blockingLock()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::nio::channels::SelectableChannel > java::nio::channels::SelectableChannel::configureBlocking(cpp_boolean const &a0)
{
	return local_ref< java::nio::channels::SelectableChannel >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::channels::SelectableChannel::isBlocking()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::nio::channels::SelectableChannel::isRegistered()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::nio::channels::SelectionKey > java::nio::channels::SelectableChannel::keyFor(local_ref< java::nio::channels::Selector > const &a0)
{
	return local_ref< java::nio::channels::SelectionKey >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::channels::spi::SelectorProvider > java::nio::channels::SelectableChannel::provider()
{
	return local_ref< java::nio::channels::spi::SelectorProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::nio::channels::SelectionKey > java::nio::channels::SelectableChannel::register(local_ref< java::nio::channels::Selector > const &a0, cpp_int const &a1)
{
	return local_ref< java::nio::channels::SelectionKey >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::nio::channels::SelectionKey > java::nio::channels::SelectableChannel::register(local_ref< java::nio::channels::Selector > const &a0, cpp_int const &a1, local_ref< java::lang::Object > const &a2)
{
	return local_ref< java::nio::channels::SelectionKey >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int java::nio::channels::SelectableChannel::validOps()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::channels::SelectableChannel,"java/nio/channels/SelectableChannel")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,1,"blockingLock","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,2,"configureBlocking","(Z)Ljava/nio/channels/SelectableChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,3,"isBlocking","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,4,"isRegistered","()Z")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,5,"keyFor","(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,6,"provider","()Ljava/nio/channels/spi/SelectorProvider;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,7,"register","(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,8,"register","(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;")
J2CPP_DEFINE_METHOD(java::nio::channels::SelectableChannel,9,"validOps","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_SELECTABLECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
