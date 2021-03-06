/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.ProviderTestCase2
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_PROVIDERTESTCASE2_HPP_DECL
#define J2CPP_ANDROID_TEST_PROVIDERTESTCASE2_HPP_DECL


namespace j2cpp { namespace junit { namespace framework { class Test; } } }
namespace j2cpp { namespace junit { namespace framework { class Assert; } } }
namespace j2cpp { namespace junit { namespace framework { class TestCase; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class ContentProvider; } } }
namespace j2cpp { namespace android { namespace test { class IsolatedContext; } } }
namespace j2cpp { namespace android { namespace test { class AndroidTestCase; } } }
namespace j2cpp { namespace android { namespace test { namespace mock { class MockContentResolver; } } } }


#include <android/content/ContentProvider.hpp>
#include <android/content/ContentResolver.hpp>
#include <android/content/Context.hpp>
#include <android/test/AndroidTestCase.hpp>
#include <android/test/IsolatedContext.hpp>
#include <android/test/mock/MockContentResolver.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <junit/framework/Assert.hpp>
#include <junit/framework/Test.hpp>
#include <junit/framework/TestCase.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ProviderTestCase2;
	class ProviderTestCase2
		: public object<ProviderTestCase2>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit ProviderTestCase2(jobject jobj)
		: object<ProviderTestCase2>(jobj)
		{
		}

		operator local_ref<junit::framework::Test>() const;
		operator local_ref<junit::framework::Assert>() const;
		operator local_ref<junit::framework::TestCase>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::test::AndroidTestCase>() const;


		ProviderTestCase2(local_ref< java::lang::Class > const&, local_ref< java::lang::String > const&);
		local_ref< android::content::ContentProvider > getProvider();
		local_ref< android::test::mock::MockContentResolver > getMockContentResolver();
		local_ref< android::test::IsolatedContext > getMockContext();
		static local_ref< android::content::ContentResolver > newResolverWithContentProviderFromSql(local_ref< android::content::Context >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::Class >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jint, local_ref< java::lang::String >  const&);
	}; //class ProviderTestCase2

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_PROVIDERTESTCASE2_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_PROVIDERTESTCASE2_HPP_IMPL
#define J2CPP_ANDROID_TEST_PROVIDERTESTCASE2_HPP_IMPL

namespace j2cpp {



android::test::ProviderTestCase2::operator local_ref<junit::framework::Test>() const
{
	return local_ref<junit::framework::Test>(get_jobject());
}

android::test::ProviderTestCase2::operator local_ref<junit::framework::Assert>() const
{
	return local_ref<junit::framework::Assert>(get_jobject());
}

android::test::ProviderTestCase2::operator local_ref<junit::framework::TestCase>() const
{
	return local_ref<junit::framework::TestCase>(get_jobject());
}

android::test::ProviderTestCase2::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::ProviderTestCase2::operator local_ref<android::test::AndroidTestCase>() const
{
	return local_ref<android::test::AndroidTestCase>(get_jobject());
}


android::test::ProviderTestCase2::ProviderTestCase2(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
: object<android::test::ProviderTestCase2>(
	call_new_object<
		android::test::ProviderTestCase2::J2CPP_CLASS_NAME,
		android::test::ProviderTestCase2::J2CPP_METHOD_NAME(0),
		android::test::ProviderTestCase2::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


local_ref< android::content::ContentProvider > android::test::ProviderTestCase2::getProvider()
{
	return call_method<
		android::test::ProviderTestCase2::J2CPP_CLASS_NAME,
		android::test::ProviderTestCase2::J2CPP_METHOD_NAME(1),
		android::test::ProviderTestCase2::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::content::ContentProvider >
	>(get_jobject());
}


local_ref< android::test::mock::MockContentResolver > android::test::ProviderTestCase2::getMockContentResolver()
{
	return call_method<
		android::test::ProviderTestCase2::J2CPP_CLASS_NAME,
		android::test::ProviderTestCase2::J2CPP_METHOD_NAME(3),
		android::test::ProviderTestCase2::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::test::mock::MockContentResolver >
	>(get_jobject());
}

local_ref< android::test::IsolatedContext > android::test::ProviderTestCase2::getMockContext()
{
	return call_method<
		android::test::ProviderTestCase2::J2CPP_CLASS_NAME,
		android::test::ProviderTestCase2::J2CPP_METHOD_NAME(4),
		android::test::ProviderTestCase2::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::test::IsolatedContext >
	>(get_jobject());
}

local_ref< android::content::ContentResolver > android::test::ProviderTestCase2::newResolverWithContentProviderFromSql(local_ref< android::content::Context > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::Class > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4, jint a5, local_ref< java::lang::String > const &a6)
{
	return call_static_method<
		android::test::ProviderTestCase2::J2CPP_CLASS_NAME,
		android::test::ProviderTestCase2::J2CPP_METHOD_NAME(5),
		android::test::ProviderTestCase2::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::content::ContentResolver >
	>(a0, a1, a2, a3, a4, a5, a6);
}


J2CPP_DEFINE_CLASS(android::test::ProviderTestCase2,"android/test/ProviderTestCase2")
J2CPP_DEFINE_METHOD(android::test::ProviderTestCase2,0,"<init>","(Ljava/lang/Class;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::ProviderTestCase2,1,"getProvider","()Landroid/content/ContentProvider;")
J2CPP_DEFINE_METHOD(android::test::ProviderTestCase2,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::ProviderTestCase2,3,"getMockContentResolver","()Landroid/test/mock/MockContentResolver;")
J2CPP_DEFINE_METHOD(android::test::ProviderTestCase2,4,"getMockContext","()Landroid/test/IsolatedContext;")
J2CPP_DEFINE_METHOD(android::test::ProviderTestCase2,5,"newResolverWithContentProviderFromSql","(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentResolver;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_PROVIDERTESTCASE2_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
