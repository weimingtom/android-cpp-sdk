/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.LinkedBlockingDeque
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class LinkedBlockingDeque;
	class LinkedBlockingDeque
		: public cpp_object<LinkedBlockingDeque>
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
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)

		LinkedBlockingDeque(jobject jobj)
		: cpp_object<LinkedBlockingDeque>(jobj)
		{
		}

		void addFirst(local_ref< java::lang::Object > const&);
		void addLast(local_ref< java::lang::Object > const&);
		cpp_boolean offerFirst(local_ref< java::lang::Object > const&);
		cpp_boolean offerLast(local_ref< java::lang::Object > const&);
		void putFirst(local_ref< java::lang::Object > const&);
		void putLast(local_ref< java::lang::Object > const&);
		cpp_boolean offerFirst(local_ref< java::lang::Object > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		cpp_boolean offerLast(local_ref< java::lang::Object > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > removeFirst();
		local_ref< java::lang::Object > removeLast();
		local_ref< java::lang::Object > pollFirst();
		local_ref< java::lang::Object > pollLast();
		local_ref< java::lang::Object > takeFirst();
		local_ref< java::lang::Object > takeLast();
		local_ref< java::lang::Object > pollFirst(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > pollLast(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > getFirst();
		local_ref< java::lang::Object > getLast();
		local_ref< java::lang::Object > peekFirst();
		local_ref< java::lang::Object > peekLast();
		cpp_boolean removeFirstOccurrence(local_ref< java::lang::Object > const&);
		cpp_boolean removeLastOccurrence(local_ref< java::lang::Object > const&);
		cpp_boolean add(local_ref< java::lang::Object > const&);
		cpp_boolean offer(local_ref< java::lang::Object > const&);
		void put(local_ref< java::lang::Object > const&);
		cpp_boolean offer(local_ref< java::lang::Object > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > remove();
		local_ref< java::lang::Object > poll();
		local_ref< java::lang::Object > take();
		local_ref< java::lang::Object > poll(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > element();
		local_ref< java::lang::Object > peek();
		cpp_int remainingCapacity();
		cpp_int drainTo(local_ref< java::util::Collection > const&);
		cpp_int drainTo(local_ref< java::util::Collection > const&, cpp_int const&);
		void push(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > pop();
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		cpp_int size();
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::lang::String > toString();
		void clear();
		local_ref< java::util::Iterator > iterator();
		local_ref< java::util::Iterator > descendingIterator();
	}; //class LinkedBlockingDeque

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::LinkedBlockingDeque > create< java::util::concurrent::LinkedBlockingDeque>()
{
	return local_ref< java::util::concurrent::LinkedBlockingDeque >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME, java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(0), java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::concurrent::LinkedBlockingDeque > create< java::util::concurrent::LinkedBlockingDeque>(cpp_int const &a0)
{
	return local_ref< java::util::concurrent::LinkedBlockingDeque >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME, java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(1), java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::concurrent::LinkedBlockingDeque > create< java::util::concurrent::LinkedBlockingDeque>(local_ref< java::util::Collection > const &a0)
{
	return local_ref< java::util::concurrent::LinkedBlockingDeque >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::LinkedBlockingDeque::J2CPP_CLASS_NAME, java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_NAME(2), java::util::concurrent::LinkedBlockingDeque::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::addFirst(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::addLast(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::offerFirst(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::offerLast(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::putFirst(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::putLast(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::offerFirst(local_ref< java::lang::Object > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::offerLast(local_ref< java::lang::Object > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::removeFirst()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::removeLast()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollFirst()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollLast()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::takeFirst()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::takeLast()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollFirst(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pollLast(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::getFirst()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::getLast()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::peekFirst()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::peekLast()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::removeFirstOccurrence(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::removeLastOccurrence(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::offer(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::put(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::offer(local_ref< java::lang::Object > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::remove()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::poll()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::take()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::poll(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::element()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::peek()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

cpp_int java::util::concurrent::LinkedBlockingDeque::remainingCapacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

cpp_int java::util::concurrent::LinkedBlockingDeque::drainTo(local_ref< java::util::Collection > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::LinkedBlockingDeque::drainTo(local_ref< java::util::Collection > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::push(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::LinkedBlockingDeque::pop()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::LinkedBlockingDeque::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

cpp_boolean java::util::concurrent::LinkedBlockingDeque::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::LinkedBlockingDeque::toArray()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::LinkedBlockingDeque::toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::concurrent::LinkedBlockingDeque::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>()
		)
	);
}

void java::util::concurrent::LinkedBlockingDeque::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>()
		)
	);
}

local_ref< java::util::Iterator > java::util::concurrent::LinkedBlockingDeque::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>()
		)
	);
}

local_ref< java::util::Iterator > java::util::concurrent::LinkedBlockingDeque::descendingIterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::LinkedBlockingDeque,"java/util/concurrent/LinkedBlockingDeque")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,2,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,3,"addFirst","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,4,"addLast","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,5,"offerFirst","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,6,"offerLast","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,7,"putFirst","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,8,"putLast","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,9,"offerFirst","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,10,"offerLast","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,11,"removeFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,12,"removeLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,13,"pollFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,14,"pollLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,15,"takeFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,16,"takeLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,17,"pollFirst","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,18,"pollLast","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,19,"getFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,20,"getLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,21,"peekFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,22,"peekLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,23,"removeFirstOccurrence","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,24,"removeLastOccurrence","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,25,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,26,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,27,"put","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,28,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,29,"remove","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,30,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,31,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,32,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,33,"element","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,34,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,35,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,36,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,37,"drainTo","(Ljava/util/Collection;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,38,"push","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,39,"pop","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,40,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,41,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,42,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,43,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,44,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,45,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,46,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,47,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::LinkedBlockingDeque,48,"descendingIterator","()Ljava/util/Iterator;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LINKEDBLOCKINGDEQUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
