/*================================================================================
  code generated by: java2cpp
  class: java.net.FileNameMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_FILENAMEMAP_HPP_DECL
#define J2CPP_JAVA_NET_FILENAMEMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace net {

	class FileNameMap;
	class FileNameMap
		: public cpp_object<FileNameMap>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		FileNameMap(jobject jobj)
		: cpp_object<FileNameMap>(jobj)
		{
		}

		local_ref< java::lang::String > getContentTypeFor(local_ref< java::lang::String > const&);
	}; //class FileNameMap

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_FILENAMEMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_FILENAMEMAP_HPP_IMPL
#define J2CPP_JAVA_NET_FILENAMEMAP_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > java::net::FileNameMap::getContentTypeFor(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::FileNameMap,"java/net/FileNameMap")
J2CPP_DEFINE_METHOD(java::net::FileNameMap,0,"getContentTypeFor","(Ljava/lang/String;)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_FILENAMEMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
