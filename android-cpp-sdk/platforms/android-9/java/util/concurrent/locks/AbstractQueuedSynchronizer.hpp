/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.locks.AbstractQueuedSynchronizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { namespace AbstractQueuedSynchronizer_ { class ConditionObject; } } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Date.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <java/util/concurrent/locks/AbstractQueuedSynchronizer.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace locks {

	class AbstractQueuedSynchronizer;
	namespace AbstractQueuedSynchronizer_ {

		class ConditionObject;
		class ConditionObject
			: public cpp_object<ConditionObject>
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
			J2CPP_DECLARE_FIELD(0)

			ConditionObject(jobject jobj)
			: cpp_object<ConditionObject>(jobj)
			{
			}

			void signal();
			void signalAll();
			void awaitUninterruptibly();
			void await();
			cpp_long awaitNanos(cpp_long const&);
			cpp_boolean awaitUntil(local_ref< java::util::Date > const&);
			cpp_boolean await(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);

		}; //class ConditionObject

	} //namespace AbstractQueuedSynchronizer_

	class AbstractQueuedSynchronizer
		: public cpp_object<AbstractQueuedSynchronizer>
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

		typedef AbstractQueuedSynchronizer_::ConditionObject ConditionObject;

		AbstractQueuedSynchronizer(jobject jobj)
		: cpp_object<AbstractQueuedSynchronizer>(jobj)
		{
		}

		void acquire(cpp_int const&);
		void acquireInterruptibly(cpp_int const&);
		cpp_boolean tryAcquireNanos(cpp_int const&, cpp_long const&);
		cpp_boolean release(cpp_int const&);
		void acquireShared(cpp_int const&);
		void acquireSharedInterruptibly(cpp_int const&);
		cpp_boolean tryAcquireSharedNanos(cpp_int const&, cpp_long const&);
		cpp_boolean releaseShared(cpp_int const&);
		cpp_boolean hasQueuedThreads();
		cpp_boolean hasContended();
		local_ref< java::lang::Thread > getFirstQueuedThread();
		cpp_boolean isQueued(local_ref< java::lang::Thread > const&);
		cpp_int getQueueLength();
		local_ref< java::util::Collection > getQueuedThreads();
		local_ref< java::util::Collection > getExclusiveQueuedThreads();
		local_ref< java::util::Collection > getSharedQueuedThreads();
		local_ref< java::lang::String > toString();
		cpp_boolean owns(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const&);
		cpp_boolean hasWaiters(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const&);
		cpp_int getWaitQueueLength(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const&);
		local_ref< java::util::Collection > getWaitingThreads(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const&);
	}; //class AbstractQueuedSynchronizer

} //namespace locks
} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_HPP_IMPL

namespace j2cpp {



template <>
local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > create< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject>(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer > const &a0)
{
	return local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::J2CPP_CLASS_NAME, java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::J2CPP_METHOD_NAME(0), java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::signal()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::signalAll()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::awaitUninterruptibly()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::await()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::awaitNanos(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::awaitUntil(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject::await(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}






J2CPP_DEFINE_CLASS(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,"java/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,0,"<init>","(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,1,"signal","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,2,"signalAll","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,3,"awaitUninterruptibly","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,4,"await","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,5,"awaitNanos","(J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,6,"awaitUntil","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,7,"await","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,8,"hasWaiters","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,9,"getWaitQueueLength","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,10,"getWaitingThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_FIELD(java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject,0,"this$0","Ljava/util/concurrent/locks/AbstractQueuedSynchronizer;")


template <>
local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer > create< java::util::concurrent::locks::AbstractQueuedSynchronizer>()
{
	return local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::locks::AbstractQueuedSynchronizer::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::locks::AbstractQueuedSynchronizer::J2CPP_CLASS_NAME, java::util::concurrent::locks::AbstractQueuedSynchronizer::J2CPP_METHOD_NAME(0), java::util::concurrent::locks::AbstractQueuedSynchronizer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}









void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquire(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquireInterruptibly(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::tryAcquireNanos(cpp_int const &a0, cpp_long const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::release(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquireShared(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::locks::AbstractQueuedSynchronizer::acquireSharedInterruptibly(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::tryAcquireSharedNanos(cpp_int const &a0, cpp_long const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::releaseShared(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::hasQueuedThreads()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::hasContended()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::Thread > java::util::concurrent::locks::AbstractQueuedSynchronizer::getFirstQueuedThread()
{
	return local_ref< java::lang::Thread >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::isQueued(local_ref< java::lang::Thread > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::locks::AbstractQueuedSynchronizer::getQueueLength()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::util::Collection > java::util::concurrent::locks::AbstractQueuedSynchronizer::getQueuedThreads()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

local_ref< java::util::Collection > java::util::concurrent::locks::AbstractQueuedSynchronizer::getExclusiveQueuedThreads()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< java::util::Collection > java::util::concurrent::locks::AbstractQueuedSynchronizer::getSharedQueuedThreads()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

local_ref< java::lang::String > java::util::concurrent::locks::AbstractQueuedSynchronizer::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::owns(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::locks::AbstractQueuedSynchronizer::hasWaiters(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::locks::AbstractQueuedSynchronizer::getWaitQueueLength(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Collection > java::util::concurrent::locks::AbstractQueuedSynchronizer::getWaitingThreads(local_ref< java::util::concurrent::locks::AbstractQueuedSynchronizer_::ConditionObject > const &a0)
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::locks::AbstractQueuedSynchronizer,"java/util/concurrent/locks/AbstractQueuedSynchronizer")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,1,"getState","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,2,"setState","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,3,"compareAndSetState","(II)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,4,"tryAcquire","(I)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,5,"tryRelease","(I)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,6,"tryAcquireShared","(I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,7,"tryReleaseShared","(I)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,8,"isHeldExclusively","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,9,"acquire","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,10,"acquireInterruptibly","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,11,"tryAcquireNanos","(IJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,12,"release","(I)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,13,"acquireShared","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,14,"acquireSharedInterruptibly","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,15,"tryAcquireSharedNanos","(IJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,16,"releaseShared","(I)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,17,"hasQueuedThreads","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,18,"hasContended","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,19,"getFirstQueuedThread","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,20,"isQueued","(Ljava/lang/Thread;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,21,"getQueueLength","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,22,"getQueuedThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,23,"getExclusiveQueuedThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,24,"getSharedQueuedThreads","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,25,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,26,"owns","(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,27,"hasWaiters","(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,28,"getWaitQueueLength","(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::AbstractQueuedSynchronizer,29,"getWaitingThreads","(Ljava/util/concurrent/locks/AbstractQueuedSynchronizer$ConditionObject;)Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
