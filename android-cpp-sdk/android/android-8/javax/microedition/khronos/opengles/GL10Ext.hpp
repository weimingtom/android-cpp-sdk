/*================================================================================
  code generated by: java2cpp
  class: javax.microedition.khronos.opengles.GL10Ext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_HPP_DECL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class IntBuffer; } } }


#include <java/nio/IntBuffer.hpp>


namespace j2cpp {

namespace javax { namespace microedition { namespace khronos { namespace opengles {

	class GL10Ext;
	class GL10Ext
		: public cpp_object<GL10Ext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		GL10Ext(jobject jobj)
		: cpp_object<GL10Ext>(jobj)
		{
		}

		cpp_int glQueryMatrixxOES(local_ref< cpp_int_array<1> > const&, cpp_int const&, local_ref< cpp_int_array<1> > const&, cpp_int const&);
		cpp_int glQueryMatrixxOES(local_ref< java::nio::IntBuffer > const&, local_ref< java::nio::IntBuffer > const&);
	}; //class GL10Ext

} //namespace opengles
} //namespace khronos
} //namespace microedition
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_HPP_IMPL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_HPP_IMPL

namespace j2cpp {


cpp_int javax::microedition::khronos::opengles::GL10Ext::glQueryMatrixxOES(local_ref< cpp_int_array<1> > const &a0, cpp_int const &a1, local_ref< cpp_int_array<1> > const &a2, cpp_int const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int javax::microedition::khronos::opengles::GL10Ext::glQueryMatrixxOES(local_ref< java::nio::IntBuffer > const &a0, local_ref< java::nio::IntBuffer > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::microedition::khronos::opengles::GL10Ext,"javax/microedition/khronos/opengles/GL10Ext")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL10Ext,0,"glQueryMatrixxOES","([II[II)I")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL10Ext,1,"glQueryMatrixxOES","(Ljava/nio/IntBuffer;Ljava/nio/IntBuffer;)I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL10EXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
