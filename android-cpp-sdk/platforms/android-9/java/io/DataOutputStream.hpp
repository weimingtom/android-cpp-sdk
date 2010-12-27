/*================================================================================
  code generated by: java2cpp
  class: java.io.DataOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_DATAOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_DATAOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/OutputStream.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class DataOutputStream;
	class DataOutputStream
		: public cpp_object<DataOutputStream>
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
		J2CPP_DECLARE_FIELD(0)

		DataOutputStream(jobject jobj)
		: cpp_object<DataOutputStream>(jobj)
		{
		}

		void flush();
		cpp_int size();
		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(cpp_int const&);
		void writeBoolean(cpp_boolean const&);
		void writeByte(cpp_int const&);
		void writeBytes(local_ref< java::lang::String > const&);
		void writeChar(cpp_int const&);
		void writeChars(local_ref< java::lang::String > const&);
		void writeDouble(cpp_double const&);
		void writeFloat(cpp_float const&);
		void writeInt(cpp_int const&);
		void writeLong(cpp_long const&);
		void writeShort(cpp_int const&);
		void writeUTF(local_ref< java::lang::String > const&);

	}; //class DataOutputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_DATAOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_DATAOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_DATAOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::DataOutputStream > create< java::io::DataOutputStream>(local_ref< java::io::OutputStream > const &a0)
{
	return local_ref< java::io::DataOutputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::DataOutputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::DataOutputStream::J2CPP_CLASS_NAME, java::io::DataOutputStream::J2CPP_METHOD_NAME(0), java::io::DataOutputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int java::io::DataOutputStream::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::io::DataOutputStream::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::DataOutputStream::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeBoolean(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeByte(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeBytes(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeChar(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeChars(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeDouble(cpp_double const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeFloat(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeInt(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeLong(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeShort(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataOutputStream::writeUTF(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::io::DataOutputStream,"java/io/DataOutputStream")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,1,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,2,"size","()I")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,3,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,4,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,5,"writeBoolean","(Z)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,6,"writeByte","(I)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,7,"writeBytes","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,8,"writeChar","(I)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,9,"writeChars","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,10,"writeDouble","(D)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,11,"writeFloat","(F)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,12,"writeInt","(I)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,13,"writeLong","(J)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,14,"writeShort","(I)V")
J2CPP_DEFINE_METHOD(java::io::DataOutputStream,15,"writeUTF","(Ljava/lang/String;)V")
J2CPP_DEFINE_FIELD(java::io::DataOutputStream,0,"written","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_DATAOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
