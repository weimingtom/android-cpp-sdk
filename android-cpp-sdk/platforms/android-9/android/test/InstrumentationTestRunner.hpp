/*================================================================================
  code generated by: java2cpp
  class: android.test.InstrumentationTestRunner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTRUNNER_HPP_DECL
#define J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTRUNNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace junit { namespace framework { class TestSuite; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/os/Bundle.hpp>
#include <java/lang/ClassLoader.hpp>
#include <java/lang/String.hpp>
#include <junit/framework/TestSuite.hpp>


namespace j2cpp {

namespace android { namespace test {

	class InstrumentationTestRunner;
	class InstrumentationTestRunner
		: public cpp_object<InstrumentationTestRunner>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		InstrumentationTestRunner(jobject jobj)
		: cpp_object<InstrumentationTestRunner>(jobj)
		{
		}

		void onCreate(local_ref< android::os::Bundle > const&);
		void onStart();
		local_ref< junit::framework::TestSuite > getTestSuite();
		local_ref< junit::framework::TestSuite > getAllTests();
		local_ref< java::lang::ClassLoader > getLoader();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > REPORT_VALUE_ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > REPORT_KEY_NUM_TOTAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > REPORT_KEY_NUM_CURRENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > REPORT_KEY_NAME_CLASS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > REPORT_KEY_NAME_TEST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > REPORT_VALUE_RESULT_START;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > REPORT_VALUE_RESULT_OK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > REPORT_VALUE_RESULT_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > REPORT_VALUE_RESULT_FAILURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > REPORT_KEY_STACK;
	}; //class InstrumentationTestRunner

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTRUNNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTRUNNER_HPP_IMPL
#define J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTRUNNER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::InstrumentationTestRunner > create< android::test::InstrumentationTestRunner>()
{
	return local_ref< android::test::InstrumentationTestRunner >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME, android::test::InstrumentationTestRunner::J2CPP_METHOD_NAME(0), android::test::InstrumentationTestRunner::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::test::InstrumentationTestRunner::onCreate(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


void android::test::InstrumentationTestRunner::onStart()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< junit::framework::TestSuite > android::test::InstrumentationTestRunner::getTestSuite()
{
	return local_ref< junit::framework::TestSuite >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< junit::framework::TestSuite > android::test::InstrumentationTestRunner::getAllTests()
{
	return local_ref< junit::framework::TestSuite >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::ClassLoader > android::test::InstrumentationTestRunner::getLoader()
{
	return local_ref< java::lang::ClassLoader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(0),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::test::InstrumentationTestRunner::REPORT_VALUE_ID;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(1),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::test::InstrumentationTestRunner::REPORT_KEY_NUM_TOTAL;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(2),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::test::InstrumentationTestRunner::REPORT_KEY_NUM_CURRENT;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(3),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::test::InstrumentationTestRunner::REPORT_KEY_NAME_CLASS;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(4),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::test::InstrumentationTestRunner::REPORT_KEY_NAME_TEST;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(5),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::test::InstrumentationTestRunner::REPORT_VALUE_RESULT_START;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(6),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::test::InstrumentationTestRunner::REPORT_VALUE_RESULT_OK;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(7),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::test::InstrumentationTestRunner::REPORT_VALUE_RESULT_ERROR;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(8),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::test::InstrumentationTestRunner::REPORT_VALUE_RESULT_FAILURE;

static_field<
	android::test::InstrumentationTestRunner::J2CPP_CLASS_NAME,
	android::test::InstrumentationTestRunner::J2CPP_FIELD_NAME(9),
	android::test::InstrumentationTestRunner::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::test::InstrumentationTestRunner::REPORT_KEY_STACK;


J2CPP_DEFINE_CLASS(android::test::InstrumentationTestRunner,"android/test/InstrumentationTestRunner")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,1,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,2,"getAndroidTestRunner","()Landroid/test/AndroidTestRunner;")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,3,"onStart","()V")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,4,"getTestSuite","()Ljunit/framework/TestSuite;")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,5,"getAllTests","()Ljunit/framework/TestSuite;")
J2CPP_DEFINE_METHOD(android::test::InstrumentationTestRunner,6,"getLoader","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,0,"REPORT_VALUE_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,1,"REPORT_KEY_NUM_TOTAL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,2,"REPORT_KEY_NUM_CURRENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,3,"REPORT_KEY_NAME_CLASS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,4,"REPORT_KEY_NAME_TEST","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,5,"REPORT_VALUE_RESULT_START","I")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,6,"REPORT_VALUE_RESULT_OK","I")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,7,"REPORT_VALUE_RESULT_ERROR","I")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,8,"REPORT_VALUE_RESULT_FAILURE","I")
J2CPP_DEFINE_FIELD(android::test::InstrumentationTestRunner,9,"REPORT_KEY_STACK","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_INSTRUMENTATIONTESTRUNNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
