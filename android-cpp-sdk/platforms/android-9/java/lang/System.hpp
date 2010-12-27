/*================================================================================
  code generated by: java2cpp
  class: java.lang.System
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SYSTEM_HPP_DECL
#define J2CPP_JAVA_LANG_SYSTEM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class SecurityManager; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class Channel; } } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }
namespace j2cpp { namespace java { namespace io { class PrintStream; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Console; } } }


#include <java/io/Console.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/SecurityManager.hpp>
#include <java/lang/String.hpp>
#include <java/nio/channels/Channel.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class System;
	class System
		: public cpp_object<System>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		System(jobject jobj)
		: cpp_object<System>(jobj)
		{
		}

		static void setIn(local_ref< java::io::InputStream > const&);
		static void setOut(local_ref< java::io::PrintStream > const&);
		static void setErr(local_ref< java::io::PrintStream > const&);
		static void arraycopy(local_ref< java::lang::Object > const&, cpp_int const&, local_ref< java::lang::Object > const&, cpp_int const&, cpp_int const&);
		static cpp_long currentTimeMillis();
		static cpp_long nanoTime();
		static void exit(cpp_int const&);
		static void gc();
		static local_ref< java::lang::String > getenv(local_ref< java::lang::String > const&);
		static local_ref< java::util::Map > getenv();
		static local_ref< java::nio::channels::Channel > inheritedChannel();
		static local_ref< java::util::Properties > getProperties();
		static local_ref< java::lang::String > getProperty(local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > getProperty(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > setProperty(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > clearProperty(local_ref< java::lang::String > const&);
		static local_ref< java::io::Console > console();
		static local_ref< java::lang::SecurityManager > getSecurityManager();
		static cpp_int identityHashCode(local_ref< java::lang::Object > const&);
		static void load(local_ref< java::lang::String > const&);
		static void loadLibrary(local_ref< java::lang::String > const&);
		static void runFinalization();
		static void runFinalizersOnExit(cpp_boolean const&);
		static void setProperties(local_ref< java::util::Properties > const&);
		static void setSecurityManager(local_ref< java::lang::SecurityManager > const&);
		static local_ref< java::lang::String > mapLibraryName(local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::io::InputStream > > in;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::io::PrintStream > > out;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::io::PrintStream > > err;
	}; //class System

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SYSTEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SYSTEM_HPP_IMPL
#define J2CPP_JAVA_LANG_SYSTEM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::System > create< java::lang::System>()
{
	return local_ref< java::lang::System >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::System::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::System::J2CPP_CLASS_NAME, java::lang::System::J2CPP_METHOD_NAME(0), java::lang::System::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void java::lang::System::setIn(local_ref< java::io::InputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::setOut(local_ref< java::io::PrintStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::setErr(local_ref< java::io::PrintStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::arraycopy(local_ref< java::lang::Object > const &a0, cpp_int const &a1, local_ref< java::lang::Object > const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

cpp_long java::lang::System::currentTimeMillis()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

cpp_long java::lang::System::nanoTime()
{
	return cpp_long(
		environment::get().get_jenv()->CallStaticLongMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

void java::lang::System::exit(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::gc()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

local_ref< java::lang::String > java::lang::System::getenv(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Map > java::lang::System::getenv()
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>()
		)
	);
}

local_ref< java::nio::channels::Channel > java::lang::System::inheritedChannel()
{
	return local_ref< java::nio::channels::Channel >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>()
		)
	);
}

local_ref< java::util::Properties > java::lang::System::getProperties()
{
	return local_ref< java::util::Properties >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>()
		)
	);
}

local_ref< java::lang::String > java::lang::System::getProperty(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::System::getProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::System::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::System::clearProperty(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::Console > java::lang::System::console()
{
	return local_ref< java::io::Console >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>()
		)
	);
}

local_ref< java::lang::SecurityManager > java::lang::System::getSecurityManager()
{
	return local_ref< java::lang::SecurityManager >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>()
		)
	);
}

cpp_int java::lang::System::identityHashCode(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::load(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::loadLibrary(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::runFinalization()
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), true>()
		)
	);
}

void java::lang::System::runFinalizersOnExit(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::setProperties(local_ref< java::util::Properties > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype()
		)
	);
}

void java::lang::System::setSecurityManager(local_ref< java::lang::SecurityManager > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::System::mapLibraryName(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::lang::System::J2CPP_CLASS_NAME,
	java::lang::System::J2CPP_FIELD_NAME(0),
	java::lang::System::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::io::InputStream >
> java::lang::System::in;

static_field<
	java::lang::System::J2CPP_CLASS_NAME,
	java::lang::System::J2CPP_FIELD_NAME(1),
	java::lang::System::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::io::PrintStream >
> java::lang::System::out;

static_field<
	java::lang::System::J2CPP_CLASS_NAME,
	java::lang::System::J2CPP_FIELD_NAME(2),
	java::lang::System::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::io::PrintStream >
> java::lang::System::err;


J2CPP_DEFINE_CLASS(java::lang::System,"java/lang/System")
J2CPP_DEFINE_METHOD(java::lang::System,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::System,1,"setIn","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::lang::System,2,"setOut","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(java::lang::System,3,"setErr","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(java::lang::System,4,"arraycopy","(Ljava/lang/Object;ILjava/lang/Object;II)V")
J2CPP_DEFINE_METHOD(java::lang::System,5,"currentTimeMillis","()J")
J2CPP_DEFINE_METHOD(java::lang::System,6,"nanoTime","()J")
J2CPP_DEFINE_METHOD(java::lang::System,7,"exit","(I)V")
J2CPP_DEFINE_METHOD(java::lang::System,8,"gc","()V")
J2CPP_DEFINE_METHOD(java::lang::System,9,"getenv","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::System,10,"getenv","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::lang::System,11,"inheritedChannel","()Ljava/nio/channels/Channel;")
J2CPP_DEFINE_METHOD(java::lang::System,12,"getProperties","()Ljava/util/Properties;")
J2CPP_DEFINE_METHOD(java::lang::System,13,"getProperty","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::System,14,"getProperty","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::System,15,"setProperty","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::System,16,"clearProperty","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::System,17,"console","()Ljava/io/Console;")
J2CPP_DEFINE_METHOD(java::lang::System,18,"getSecurityManager","()Ljava/lang/SecurityManager;")
J2CPP_DEFINE_METHOD(java::lang::System,19,"identityHashCode","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::System,20,"load","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::System,21,"loadLibrary","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::System,22,"runFinalization","()V")
J2CPP_DEFINE_METHOD(java::lang::System,23,"runFinalizersOnExit","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::System,24,"setProperties","(Ljava/util/Properties;)V")
J2CPP_DEFINE_METHOD(java::lang::System,25,"setSecurityManager","(Ljava/lang/SecurityManager;)V")
J2CPP_DEFINE_METHOD(java::lang::System,26,"mapLibraryName","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::System,27,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::System,0,"in","Ljava/io/InputStream;")
J2CPP_DEFINE_FIELD(java::lang::System,1,"out","Ljava/io/PrintStream;")
J2CPP_DEFINE_FIELD(java::lang::System,2,"err","Ljava/io/PrintStream;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SYSTEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
