/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.CursorWindow
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORWINDOW_HPP_DECL
#define J2CPP_ANDROID_DATABASE_CURSORWINDOW_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace database { namespace sqlite { class SQLiteClosable; } } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/database/CharArrayBuffer.hpp>
#include <android/database/sqlite/SQLiteClosable.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database {

	class CursorWindow;
	class CursorWindow
		: public object<CursorWindow>
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
		J2CPP_DECLARE_FIELD(0)

		explicit CursorWindow(jobject jobj)
		: object<CursorWindow>(jobj)
		{
		}

		operator local_ref<android::os::Parcelable>() const;
		operator local_ref<android::database::sqlite::SQLiteClosable>() const;
		operator local_ref<java::lang::Object>() const;


		CursorWindow(jboolean);
		jint getStartPosition();
		void setStartPosition(jint);
		jint getNumRows();
		jboolean setNumColumns(jint);
		jboolean allocRow();
		void freeLastRow();
		jboolean putBlob(local_ref< array<jbyte,1> >  const&, jint, jint);
		jboolean putString(local_ref< java::lang::String >  const&, jint, jint);
		jboolean putLong(jlong, jint, jint);
		jboolean putDouble(jdouble, jint, jint);
		jboolean putNull(jint, jint);
		jboolean isNull(jint, jint);
		local_ref< array<jbyte,1> > getBlob(jint, jint);
		jboolean isBlob(jint, jint);
		local_ref< java::lang::String > getString(jint, jint);
		void copyStringToBuffer(jint, jint, local_ref< android::database::CharArrayBuffer >  const&);
		jlong getLong(jint, jint);
		jdouble getDouble(jint, jint);
		jshort getShort(jint, jint);
		jint getInt(jint, jint);
		jfloat getFloat(jint, jint);
		void clear();
		void close();
		static local_ref< android::database::CursorWindow > newFromParcel(local_ref< android::os::Parcel >  const&);
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class CursorWindow

} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORWINDOW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_CURSORWINDOW_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_CURSORWINDOW_HPP_IMPL

namespace j2cpp {



android::database::CursorWindow::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}

android::database::CursorWindow::operator local_ref<android::database::sqlite::SQLiteClosable>() const
{
	return local_ref<android::database::sqlite::SQLiteClosable>(get_jobject());
}

android::database::CursorWindow::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::database::CursorWindow::CursorWindow(jboolean a0)
: object<android::database::CursorWindow>(
	call_new_object<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(0),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}


jint android::database::CursorWindow::getStartPosition()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(1),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

void android::database::CursorWindow::setStartPosition(jint a0)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(2),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jint android::database::CursorWindow::getNumRows()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(3),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jboolean android::database::CursorWindow::setNumColumns(jint a0)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(4),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jboolean android::database::CursorWindow::allocRow()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(5),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject());
}

void android::database::CursorWindow::freeLastRow()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(6),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

jboolean android::database::CursorWindow::putBlob(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(7),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::database::CursorWindow::putString(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(8),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::database::CursorWindow::putLong(jlong a0, jint a1, jint a2)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(9),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(9), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::database::CursorWindow::putDouble(jdouble a0, jint a1, jint a2)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(10),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean android::database::CursorWindow::putNull(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(11),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject(), a0, a1);
}

jboolean android::database::CursorWindow::isNull(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(12),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > android::database::CursorWindow::getBlob(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(13),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array<jbyte,1> >
	>(get_jobject(), a0, a1);
}

jboolean android::database::CursorWindow::isBlob(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(14),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::database::CursorWindow::getString(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(15),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String >
	>(get_jobject(), a0, a1);
}

void android::database::CursorWindow::copyStringToBuffer(jint a0, jint a1, local_ref< android::database::CharArrayBuffer > const &a2)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(16),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0, a1, a2);
}

jlong android::database::CursorWindow::getLong(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(17),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(17), 
		jlong
	>(get_jobject(), a0, a1);
}

jdouble android::database::CursorWindow::getDouble(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(18),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(18), 
		jdouble
	>(get_jobject(), a0, a1);
}

jshort android::database::CursorWindow::getShort(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(19),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(19), 
		jshort
	>(get_jobject(), a0, a1);
}

jint android::database::CursorWindow::getInt(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(20),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(20), 
		jint
	>(get_jobject(), a0, a1);
}

jfloat android::database::CursorWindow::getFloat(jint a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(21),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(21), 
		jfloat
	>(get_jobject(), a0, a1);
}

void android::database::CursorWindow::clear()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(22),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(22), 
		void
	>(get_jobject());
}

void android::database::CursorWindow::close()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(23),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(23), 
		void
	>(get_jobject());
}


local_ref< android::database::CursorWindow > android::database::CursorWindow::newFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_static_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(25),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::database::CursorWindow >
	>(a0);
}

jint android::database::CursorWindow::describeContents()
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(26),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(26), 
		jint
	>(get_jobject());
}

void android::database::CursorWindow::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::database::CursorWindow::J2CPP_CLASS_NAME,
		android::database::CursorWindow::J2CPP_METHOD_NAME(27),
		android::database::CursorWindow::J2CPP_METHOD_SIGNATURE(27), 
		void
	>(get_jobject(), a0, a1);
}




static_field<
	android::database::CursorWindow::J2CPP_CLASS_NAME,
	android::database::CursorWindow::J2CPP_FIELD_NAME(0),
	android::database::CursorWindow::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::database::CursorWindow::CREATOR;


J2CPP_DEFINE_CLASS(android::database::CursorWindow,"android/database/CursorWindow")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,0,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,1,"getStartPosition","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,2,"setStartPosition","(I)V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,3,"getNumRows","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,4,"setNumColumns","(I)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,5,"allocRow","()Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,6,"freeLastRow","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,7,"putBlob","([BII)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,8,"putString","(Ljava/lang/String;II)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,9,"putLong","(JII)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,10,"putDouble","(DII)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,11,"putNull","(II)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,12,"isNull","(II)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,13,"getBlob","(II)[B")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,14,"isBlob","(II)Z")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,15,"getString","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,16,"copyStringToBuffer","(IILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,17,"getLong","(II)J")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,18,"getDouble","(II)D")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,19,"getShort","(II)S")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,20,"getInt","(II)I")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,21,"getFloat","(II)F")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,22,"clear","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,23,"close","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,24,"finalize","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,25,"newFromParcel","(Landroid/os/Parcel;)Landroid/database/CursorWindow;")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,26,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,27,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,28,"onAllReferencesReleased","()V")
J2CPP_DEFINE_METHOD(android::database::CursorWindow,29,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::database::CursorWindow,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_CURSORWINDOW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
