/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.atomic.AtomicLongFieldUpdater
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicLongFieldUpdater;
	class AtomicLongFieldUpdater
		: public cpp_object<AtomicLongFieldUpdater>
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

		AtomicLongFieldUpdater(jobject jobj)
		: cpp_object<AtomicLongFieldUpdater>(jobj)
		{
		}

		static local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater > newUpdater(local_ref< java::lang::Class > const&, local_ref< java::lang::String > const&);
		cpp_boolean compareAndSet(local_ref< java::lang::Object > const&, cpp_long const&, cpp_long const&);
		cpp_boolean weakCompareAndSet(local_ref< java::lang::Object > const&, cpp_long const&, cpp_long const&);
		void set(local_ref< java::lang::Object > const&, cpp_long const&);
		cpp_long get(local_ref< java::lang::Object > const&);
		cpp_long getAndSet(local_ref< java::lang::Object > const&, cpp_long const&);
		cpp_long getAndIncrement(local_ref< java::lang::Object > const&);
		cpp_long getAndDecrement(local_ref< java::lang::Object > const&);
		cpp_long getAndAdd(local_ref< java::lang::Object > const&, cpp_long const&);
		cpp_long incrementAndGet(local_ref< java::lang::Object > const&);
		cpp_long decrementAndGet(local_ref< java::lang::Object > const&);
		cpp_long addAndGet(local_ref< java::lang::Object > const&, cpp_long const&);
	}; //class AtomicLongFieldUpdater

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater > create< java::util::concurrent::atomic::AtomicLongFieldUpdater>()
{
	return local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME, java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(0), java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater > java::util::concurrent::atomic::AtomicLongFieldUpdater::newUpdater(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::atomic::AtomicLongFieldUpdater::compareAndSet(local_ref< java::lang::Object > const &a0, cpp_long const &a1, cpp_long const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::atomic::AtomicLongFieldUpdater::weakCompareAndSet(local_ref< java::lang::Object > const &a0, cpp_long const &a1, cpp_long const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::util::concurrent::atomic::AtomicLongFieldUpdater::set(local_ref< java::lang::Object > const &a0, cpp_long const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::get(local_ref< java::lang::Object > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndSet(local_ref< java::lang::Object > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndIncrement(local_ref< java::lang::Object > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndDecrement(local_ref< java::lang::Object > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndAdd(local_ref< java::lang::Object > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::incrementAndGet(local_ref< java::lang::Object > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::decrementAndGet(local_ref< java::lang::Object > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::concurrent::atomic::AtomicLongFieldUpdater::addAndGet(local_ref< java::lang::Object > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicLongFieldUpdater,"java/util/concurrent/atomic/AtomicLongFieldUpdater")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,1,"newUpdater","(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,2,"compareAndSet","(Ljava/lang/Object;JJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,3,"weakCompareAndSet","(Ljava/lang/Object;JJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,4,"set","(Ljava/lang/Object;J)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,5,"get","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,6,"getAndSet","(Ljava/lang/Object;J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,7,"getAndIncrement","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,8,"getAndDecrement","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,9,"getAndAdd","(Ljava/lang/Object;J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,10,"incrementAndGet","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,11,"decrementAndGet","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,12,"addAndGet","(Ljava/lang/Object;J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
