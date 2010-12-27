/*================================================================================
  code generated by: java2cpp
  class: android.view.Menu
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENU_HPP_DECL
#define J2CPP_ANDROID_VIEW_MENU_HPP_DECL


namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class SubMenu; } } }
namespace j2cpp { namespace android { namespace view { class MenuItem; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/content/ComponentName.hpp>
#include <android/content/Intent.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MenuItem.hpp>
#include <android/view/SubMenu.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace view {

	class Menu;
	class Menu
		: public cpp_object<Menu>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		Menu(jobject jobj)
		: cpp_object<Menu>(jobj)
		{
		}

		local_ref< android::view::MenuItem > add(local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::MenuItem > add(cpp_int const&);
		local_ref< android::view::MenuItem > add(cpp_int const&, cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::MenuItem > add(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		local_ref< android::view::SubMenu > addSubMenu(local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::SubMenu > addSubMenu(cpp_int const&);
		local_ref< android::view::SubMenu > addSubMenu(cpp_int const&, cpp_int const&, cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::SubMenu > addSubMenu(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_int addIntentOptions(cpp_int const&, cpp_int const&, cpp_int const&, local_ref< android::content::ComponentName > const&, local_ref< cpp_object_array<android::content::Intent, 1> > const&, local_ref< android::content::Intent > const&, cpp_int const&, local_ref< cpp_object_array<android::view::MenuItem, 1> > const&);
		void removeItem(cpp_int const&);
		void removeGroup(cpp_int const&);
		void clear();
		void setGroupCheckable(cpp_int const&, cpp_boolean const&, cpp_boolean const&);
		void setGroupVisible(cpp_int const&, cpp_boolean const&);
		void setGroupEnabled(cpp_int const&, cpp_boolean const&);
		cpp_boolean hasVisibleItems();
		local_ref< android::view::MenuItem > findItem(cpp_int const&);
		cpp_int size();
		local_ref< android::view::MenuItem > getItem(cpp_int const&);
		void close();
		cpp_boolean performShortcut(cpp_int const&, local_ref< android::view::KeyEvent > const&, cpp_int const&);
		cpp_boolean isShortcutKey(cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean performIdentifierAction(cpp_int const&, cpp_int const&);
		void setQwertyMode(cpp_boolean const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > FIRST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > CATEGORY_CONTAINER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > CATEGORY_SYSTEM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > CATEGORY_SECONDARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > CATEGORY_ALTERNATIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > FLAG_APPEND_TO_GROUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > FLAG_PERFORM_NO_CLOSE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > FLAG_ALWAYS_PERFORM_CLOSE;
	}; //class Menu

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENU_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_MENU_HPP_IMPL
#define J2CPP_ANDROID_VIEW_MENU_HPP_IMPL

namespace j2cpp {


local_ref< android::view::MenuItem > android::view::Menu::add(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::Menu::add(cpp_int const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::Menu::add(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< java::lang::CharSequence > const &a3)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::Menu::add(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(cpp_int const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< java::lang::CharSequence > const &a3)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::Menu::addSubMenu(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int android::view::Menu::addIntentOptions(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, local_ref< android::content::ComponentName > const &a3, local_ref< cpp_object_array<android::content::Intent, 1> > const &a4, local_ref< android::content::Intent > const &a5, cpp_int const &a6, local_ref< cpp_object_array<android::view::MenuItem, 1> > const &a7)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}

void android::view::Menu::removeItem(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::Menu::removeGroup(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::Menu::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::view::Menu::setGroupCheckable(cpp_int const &a0, cpp_boolean const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::view::Menu::setGroupVisible(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::Menu::setGroupEnabled(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::Menu::hasVisibleItems()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::Menu::findItem(cpp_int const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::Menu::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< android::view::MenuItem > android::view::Menu::getItem(cpp_int const &a0)
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::Menu::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_boolean android::view::Menu::performShortcut(cpp_int const &a0, local_ref< android::view::KeyEvent > const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::view::Menu::isShortcutKey(cpp_int const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::view::Menu::performIdentifierAction(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::Menu::setQwertyMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(0),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::view::Menu::NONE;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(1),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::view::Menu::FIRST;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(2),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::view::Menu::CATEGORY_CONTAINER;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(3),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::view::Menu::CATEGORY_SYSTEM;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(4),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::view::Menu::CATEGORY_SECONDARY;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(5),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::view::Menu::CATEGORY_ALTERNATIVE;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(6),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::view::Menu::FLAG_APPEND_TO_GROUP;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(7),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::view::Menu::FLAG_PERFORM_NO_CLOSE;

static_field<
	android::view::Menu::J2CPP_CLASS_NAME,
	android::view::Menu::J2CPP_FIELD_NAME(8),
	android::view::Menu::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::view::Menu::FLAG_ALWAYS_PERFORM_CLOSE;


J2CPP_DEFINE_CLASS(android::view::Menu,"android/view/Menu")
J2CPP_DEFINE_METHOD(android::view::Menu,0,"add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,1,"add","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,2,"add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,3,"add","(IIII)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,4,"addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,5,"addSubMenu","(I)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,6,"addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,7,"addSubMenu","(IIII)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::Menu,8,"addIntentOptions","(IIILandroid/content/ComponentName;[android.content.IntentLandroid/content/Intent;I[android.view.MenuItem)I")
J2CPP_DEFINE_METHOD(android::view::Menu,9,"removeItem","(I)V")
J2CPP_DEFINE_METHOD(android::view::Menu,10,"removeGroup","(I)V")
J2CPP_DEFINE_METHOD(android::view::Menu,11,"clear","()V")
J2CPP_DEFINE_METHOD(android::view::Menu,12,"setGroupCheckable","(IZZ)V")
J2CPP_DEFINE_METHOD(android::view::Menu,13,"setGroupVisible","(IZ)V")
J2CPP_DEFINE_METHOD(android::view::Menu,14,"setGroupEnabled","(IZ)V")
J2CPP_DEFINE_METHOD(android::view::Menu,15,"hasVisibleItems","()Z")
J2CPP_DEFINE_METHOD(android::view::Menu,16,"findItem","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,17,"size","()I")
J2CPP_DEFINE_METHOD(android::view::Menu,18,"getItem","(I)Landroid/view/MenuItem;")
J2CPP_DEFINE_METHOD(android::view::Menu,19,"close","()V")
J2CPP_DEFINE_METHOD(android::view::Menu,20,"performShortcut","(ILandroid/view/KeyEvent;I)Z")
J2CPP_DEFINE_METHOD(android::view::Menu,21,"isShortcutKey","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::view::Menu,22,"performIdentifierAction","(II)Z")
J2CPP_DEFINE_METHOD(android::view::Menu,23,"setQwertyMode","(Z)V")
J2CPP_DEFINE_FIELD(android::view::Menu,0,"NONE","I")
J2CPP_DEFINE_FIELD(android::view::Menu,1,"FIRST","I")
J2CPP_DEFINE_FIELD(android::view::Menu,2,"CATEGORY_CONTAINER","I")
J2CPP_DEFINE_FIELD(android::view::Menu,3,"CATEGORY_SYSTEM","I")
J2CPP_DEFINE_FIELD(android::view::Menu,4,"CATEGORY_SECONDARY","I")
J2CPP_DEFINE_FIELD(android::view::Menu,5,"CATEGORY_ALTERNATIVE","I")
J2CPP_DEFINE_FIELD(android::view::Menu,6,"FLAG_APPEND_TO_GROUP","I")
J2CPP_DEFINE_FIELD(android::view::Menu,7,"FLAG_PERFORM_NO_CLOSE","I")
J2CPP_DEFINE_FIELD(android::view::Menu,8,"FLAG_ALWAYS_PERFORM_CLOSE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_MENU_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
