/*================================================================================
  code generated by: java2cpp
  class: java.nio.ShortBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_SHORTBUFFER_HPP_DECL
#define J2CPP_JAVA_NIO_SHORTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class ByteOrder; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteOrder.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class ShortBuffer;
	class ShortBuffer
		: public cpp_object<ShortBuffer>
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

		ShortBuffer(jobject jobj)
		: cpp_object<ShortBuffer>(jobj)
		{
		}

		static local_ref< java::nio::ShortBuffer > allocate(cpp_int const&);
		static local_ref< java::nio::ShortBuffer > wrap(local_ref< cpp_short_array<1> > const&);
		static local_ref< java::nio::ShortBuffer > wrap(local_ref< cpp_short_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< cpp_short_array<1> > array();
		cpp_int arrayOffset();
		local_ref< java::nio::ShortBuffer > asReadOnlyBuffer();
		local_ref< java::nio::ShortBuffer > compact();
		cpp_int compareTo(local_ref< java::nio::ShortBuffer > const&);
		local_ref< java::nio::ShortBuffer > duplicate();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_short get();
		local_ref< java::nio::ShortBuffer > get(local_ref< cpp_short_array<1> > const&);
		local_ref< java::nio::ShortBuffer > get(local_ref< cpp_short_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_short get(cpp_int const&);
		cpp_boolean hasArray();
		cpp_int hashCode();
		cpp_boolean isDirect();
		local_ref< java::nio::ByteOrder > order();
		local_ref< java::nio::ShortBuffer > put(cpp_short const&);
		local_ref< java::nio::ShortBuffer > put(local_ref< cpp_short_array<1> > const&);
		local_ref< java::nio::ShortBuffer > put(local_ref< cpp_short_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::nio::ShortBuffer > put(local_ref< java::nio::ShortBuffer > const&);
		local_ref< java::nio::ShortBuffer > put(cpp_int const&, cpp_short const&);
		local_ref< java::nio::ShortBuffer > slice();
		local_ref< java::lang::String > toString();
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class ShortBuffer

} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_SHORTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_SHORTBUFFER_HPP_IMPL
#define J2CPP_JAVA_NIO_SHORTBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::ShortBuffer > create< java::nio::ShortBuffer>()
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::ShortBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::ShortBuffer::J2CPP_CLASS_NAME, java::nio::ShortBuffer::J2CPP_METHOD_NAME(0), java::nio::ShortBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::allocate(cpp_int const &a0)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::wrap(local_ref< cpp_short_array<1> > const &a0)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::wrap(local_ref< cpp_short_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< cpp_short_array<1> > java::nio::ShortBuffer::array()
{
	return local_ref< cpp_short_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::nio::ShortBuffer::arrayOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::asReadOnlyBuffer()
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::compact()
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::nio::ShortBuffer::compareTo(local_ref< java::nio::ShortBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::duplicate()
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean java::nio::ShortBuffer::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_short java::nio::ShortBuffer::get()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::get(local_ref< cpp_short_array<1> > const &a0)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::get(local_ref< cpp_short_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_short java::nio::ShortBuffer::get(cpp_int const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::nio::ShortBuffer::hasArray()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::nio::ShortBuffer::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean java::nio::ShortBuffer::isDirect()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::nio::ByteOrder > java::nio::ShortBuffer::order()
{
	return local_ref< java::nio::ByteOrder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(cpp_short const &a0)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(local_ref< cpp_short_array<1> > const &a0)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(local_ref< cpp_short_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(local_ref< java::nio::ShortBuffer > const &a0)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::put(cpp_int const &a0, cpp_short const &a1)
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::nio::ShortBuffer > java::nio::ShortBuffer::slice()
{
	return local_ref< java::nio::ShortBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

local_ref< java::lang::String > java::nio::ShortBuffer::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_int java::nio::ShortBuffer::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::ShortBuffer,"java/nio/ShortBuffer")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,1,"allocate","(I)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,2,"wrap","([S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,3,"wrap","([SII)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,4,"array","()[S")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,5,"arrayOffset","()I")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,6,"asReadOnlyBuffer","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,7,"compact","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,8,"compareTo","(Ljava/nio/ShortBuffer;)I")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,9,"duplicate","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,10,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,11,"get","()S")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,12,"get","([S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,13,"get","([SII)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,14,"get","(I)S")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,15,"hasArray","()Z")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,16,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,17,"isDirect","()Z")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,18,"order","()Ljava/nio/ByteOrder;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,19,"put","(S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,20,"put","([S)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,21,"put","([SII)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,22,"put","(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,23,"put","(IS)Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,24,"slice","()Ljava/nio/ShortBuffer;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,25,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::ShortBuffer,26,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_SHORTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
