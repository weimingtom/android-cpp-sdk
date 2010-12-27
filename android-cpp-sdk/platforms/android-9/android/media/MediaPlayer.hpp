/*================================================================================
  code generated by: java2cpp
  class: android.media.MediaPlayer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_DECL
#define J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnErrorListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnInfoListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnBufferingUpdateListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnSeekCompleteListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnVideoSizeChangedListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnCompletionListener; } } } }
namespace j2cpp { namespace android { namespace media { namespace MediaPlayer_ { class OnPreparedListener; } } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }


#include <android/content/Context.hpp>
#include <android/media/MediaPlayer.hpp>
#include <android/net/Uri.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace media {

	class MediaPlayer;
	namespace MediaPlayer_ {

		class OnErrorListener;
		class OnErrorListener
			: public cpp_object<OnErrorListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnErrorListener(jobject jobj)
			: cpp_object<OnErrorListener>(jobj)
			{
			}

			cpp_boolean onError(local_ref< android::media::MediaPlayer > const&, cpp_int const&, cpp_int const&);
		}; //class OnErrorListener

		class OnInfoListener;
		class OnInfoListener
			: public cpp_object<OnInfoListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnInfoListener(jobject jobj)
			: cpp_object<OnInfoListener>(jobj)
			{
			}

			cpp_boolean onInfo(local_ref< android::media::MediaPlayer > const&, cpp_int const&, cpp_int const&);
		}; //class OnInfoListener

		class OnBufferingUpdateListener;
		class OnBufferingUpdateListener
			: public cpp_object<OnBufferingUpdateListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnBufferingUpdateListener(jobject jobj)
			: cpp_object<OnBufferingUpdateListener>(jobj)
			{
			}

			void onBufferingUpdate(local_ref< android::media::MediaPlayer > const&, cpp_int const&);
		}; //class OnBufferingUpdateListener

		class OnSeekCompleteListener;
		class OnSeekCompleteListener
			: public cpp_object<OnSeekCompleteListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnSeekCompleteListener(jobject jobj)
			: cpp_object<OnSeekCompleteListener>(jobj)
			{
			}

			void onSeekComplete(local_ref< android::media::MediaPlayer > const&);
		}; //class OnSeekCompleteListener

		class OnVideoSizeChangedListener;
		class OnVideoSizeChangedListener
			: public cpp_object<OnVideoSizeChangedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnVideoSizeChangedListener(jobject jobj)
			: cpp_object<OnVideoSizeChangedListener>(jobj)
			{
			}

			void onVideoSizeChanged(local_ref< android::media::MediaPlayer > const&, cpp_int const&, cpp_int const&);
		}; //class OnVideoSizeChangedListener

		class OnCompletionListener;
		class OnCompletionListener
			: public cpp_object<OnCompletionListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnCompletionListener(jobject jobj)
			: cpp_object<OnCompletionListener>(jobj)
			{
			}

			void onCompletion(local_ref< android::media::MediaPlayer > const&);
		}; //class OnCompletionListener

		class OnPreparedListener;
		class OnPreparedListener
			: public cpp_object<OnPreparedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnPreparedListener(jobject jobj)
			: cpp_object<OnPreparedListener>(jobj)
			{
			}

			void onPrepared(local_ref< android::media::MediaPlayer > const&);
		}; //class OnPreparedListener

	} //namespace MediaPlayer_

	class MediaPlayer
		: public cpp_object<MediaPlayer>
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

		typedef MediaPlayer_::OnErrorListener OnErrorListener;
		typedef MediaPlayer_::OnInfoListener OnInfoListener;
		typedef MediaPlayer_::OnBufferingUpdateListener OnBufferingUpdateListener;
		typedef MediaPlayer_::OnSeekCompleteListener OnSeekCompleteListener;
		typedef MediaPlayer_::OnVideoSizeChangedListener OnVideoSizeChangedListener;
		typedef MediaPlayer_::OnCompletionListener OnCompletionListener;
		typedef MediaPlayer_::OnPreparedListener OnPreparedListener;

		MediaPlayer(jobject jobj)
		: cpp_object<MediaPlayer>(jobj)
		{
		}

		void setDisplay(local_ref< android::view::SurfaceHolder > const&);
		static local_ref< android::media::MediaPlayer > create(local_ref< android::content::Context > const&, local_ref< android::net::Uri > const&);
		static local_ref< android::media::MediaPlayer > create(local_ref< android::content::Context > const&, local_ref< android::net::Uri > const&, local_ref< android::view::SurfaceHolder > const&);
		static local_ref< android::media::MediaPlayer > create(local_ref< android::content::Context > const&, cpp_int const&);
		void setDataSource(local_ref< android::content::Context > const&, local_ref< android::net::Uri > const&);
		void setDataSource(local_ref< java::lang::String > const&);
		void setDataSource(local_ref< java::io::FileDescriptor > const&);
		void setDataSource(local_ref< java::io::FileDescriptor > const&, cpp_long const&, cpp_long const&);
		void prepare();
		void prepareAsync();
		void start();
		void stop();
		void pause();
		void setWakeMode(local_ref< android::content::Context > const&, cpp_int const&);
		void setScreenOnWhilePlaying(cpp_boolean const&);
		cpp_int getVideoWidth();
		cpp_int getVideoHeight();
		cpp_boolean isPlaying();
		void seekTo(cpp_int const&);
		cpp_int getCurrentPosition();
		cpp_int getDuration();
		void release();
		void reset();
		void setAudioStreamType(cpp_int const&);
		void setLooping(cpp_boolean const&);
		cpp_boolean isLooping();
		void setVolume(cpp_float const&, cpp_float const&);
		void setAudioSessionId(cpp_int const&);
		cpp_int getAudioSessionId();
		void attachAuxEffect(cpp_int const&);
		void setAuxEffectSendLevel(cpp_float const&);
		void setOnPreparedListener(local_ref< android::media::MediaPlayer_::OnPreparedListener > const&);
		void setOnCompletionListener(local_ref< android::media::MediaPlayer_::OnCompletionListener > const&);
		void setOnBufferingUpdateListener(local_ref< android::media::MediaPlayer_::OnBufferingUpdateListener > const&);
		void setOnSeekCompleteListener(local_ref< android::media::MediaPlayer_::OnSeekCompleteListener > const&);
		void setOnVideoSizeChangedListener(local_ref< android::media::MediaPlayer_::OnVideoSizeChangedListener > const&);
		void setOnErrorListener(local_ref< android::media::MediaPlayer_::OnErrorListener > const&);
		void setOnInfoListener(local_ref< android::media::MediaPlayer_::OnInfoListener > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > MEDIA_ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > MEDIA_ERROR_SERVER_DIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > MEDIA_INFO_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > MEDIA_INFO_VIDEO_TRACK_LAGGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > MEDIA_INFO_BUFFERING_START;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > MEDIA_INFO_BUFFERING_END;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > MEDIA_INFO_BAD_INTERLEAVING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > MEDIA_INFO_NOT_SEEKABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > MEDIA_INFO_METADATA_UPDATE;
	}; //class MediaPlayer

} //namespace media
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_IMPL
#define J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_IMPL

namespace j2cpp {



cpp_boolean android::media::MediaPlayer_::OnErrorListener::onError(local_ref< android::media::MediaPlayer > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnErrorListener,"android/media/MediaPlayer$OnErrorListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnErrorListener,0,"onError","(Landroid/media/MediaPlayer;II)Z")

cpp_boolean android::media::MediaPlayer_::OnInfoListener::onInfo(local_ref< android::media::MediaPlayer > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnInfoListener,"android/media/MediaPlayer$OnInfoListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnInfoListener,0,"onInfo","(Landroid/media/MediaPlayer;II)Z")

void android::media::MediaPlayer_::OnBufferingUpdateListener::onBufferingUpdate(local_ref< android::media::MediaPlayer > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnBufferingUpdateListener,"android/media/MediaPlayer$OnBufferingUpdateListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnBufferingUpdateListener,0,"onBufferingUpdate","(Landroid/media/MediaPlayer;I)V")

void android::media::MediaPlayer_::OnSeekCompleteListener::onSeekComplete(local_ref< android::media::MediaPlayer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnSeekCompleteListener,"android/media/MediaPlayer$OnSeekCompleteListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnSeekCompleteListener,0,"onSeekComplete","(Landroid/media/MediaPlayer;)V")

void android::media::MediaPlayer_::OnVideoSizeChangedListener::onVideoSizeChanged(local_ref< android::media::MediaPlayer > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnVideoSizeChangedListener,"android/media/MediaPlayer$OnVideoSizeChangedListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnVideoSizeChangedListener,0,"onVideoSizeChanged","(Landroid/media/MediaPlayer;II)V")

void android::media::MediaPlayer_::OnCompletionListener::onCompletion(local_ref< android::media::MediaPlayer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnCompletionListener,"android/media/MediaPlayer$OnCompletionListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnCompletionListener,0,"onCompletion","(Landroid/media/MediaPlayer;)V")

void android::media::MediaPlayer_::OnPreparedListener::onPrepared(local_ref< android::media::MediaPlayer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::media::MediaPlayer_::OnPreparedListener,"android/media/MediaPlayer$OnPreparedListener")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer_::OnPreparedListener,0,"onPrepared","(Landroid/media/MediaPlayer;)V")


template <>
local_ref< android::media::MediaPlayer > create< android::media::MediaPlayer>()
{
	return local_ref< android::media::MediaPlayer >(
		environment::get().get_jenv()->NewObject(
			get_class<android::media::MediaPlayer::J2CPP_CLASS_NAME>(),
			get_method_id<android::media::MediaPlayer::J2CPP_CLASS_NAME, android::media::MediaPlayer::J2CPP_METHOD_NAME(0), android::media::MediaPlayer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::media::MediaPlayer::setDisplay(local_ref< android::view::SurfaceHolder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::media::MediaPlayer > android::media::MediaPlayer::create(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1)
{
	return local_ref< android::media::MediaPlayer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::media::MediaPlayer > android::media::MediaPlayer::create(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1, local_ref< android::view::SurfaceHolder > const &a2)
{
	return local_ref< android::media::MediaPlayer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::media::MediaPlayer > android::media::MediaPlayer::create(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return local_ref< android::media::MediaPlayer >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setDataSource(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setDataSource(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setDataSource(local_ref< java::io::FileDescriptor > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setDataSource(local_ref< java::io::FileDescriptor > const &a0, cpp_long const &a1, cpp_long const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::media::MediaPlayer::prepare()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::media::MediaPlayer::prepareAsync()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::media::MediaPlayer::start()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::media::MediaPlayer::stop()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::media::MediaPlayer::pause()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::media::MediaPlayer::setWakeMode(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setScreenOnWhilePlaying(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::MediaPlayer::getVideoWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_int android::media::MediaPlayer::getVideoHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_boolean android::media::MediaPlayer::isPlaying()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::media::MediaPlayer::seekTo(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::MediaPlayer::getCurrentPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_int android::media::MediaPlayer::getDuration()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

void android::media::MediaPlayer::release()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

void android::media::MediaPlayer::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

void android::media::MediaPlayer::setAudioStreamType(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setLooping(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::media::MediaPlayer::isLooping()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

void android::media::MediaPlayer::setVolume(cpp_float const &a0, cpp_float const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setAudioSessionId(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::media::MediaPlayer::getAudioSessionId()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

void android::media::MediaPlayer::attachAuxEffect(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setAuxEffectSendLevel(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}


void android::media::MediaPlayer::setOnPreparedListener(local_ref< android::media::MediaPlayer_::OnPreparedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setOnCompletionListener(local_ref< android::media::MediaPlayer_::OnCompletionListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setOnBufferingUpdateListener(local_ref< android::media::MediaPlayer_::OnBufferingUpdateListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setOnSeekCompleteListener(local_ref< android::media::MediaPlayer_::OnSeekCompleteListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setOnVideoSizeChangedListener(local_ref< android::media::MediaPlayer_::OnVideoSizeChangedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setOnErrorListener(local_ref< android::media::MediaPlayer_::OnErrorListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

void android::media::MediaPlayer::setOnInfoListener(local_ref< android::media::MediaPlayer_::OnInfoListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(0),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::media::MediaPlayer::MEDIA_ERROR_UNKNOWN;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(1),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::media::MediaPlayer::MEDIA_ERROR_SERVER_DIED;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(2),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::media::MediaPlayer::MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(3),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_UNKNOWN;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(4),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_VIDEO_TRACK_LAGGING;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(5),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_BUFFERING_START;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(6),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_BUFFERING_END;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(7),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_BAD_INTERLEAVING;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(8),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_NOT_SEEKABLE;

static_field<
	android::media::MediaPlayer::J2CPP_CLASS_NAME,
	android::media::MediaPlayer::J2CPP_FIELD_NAME(9),
	android::media::MediaPlayer::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::media::MediaPlayer::MEDIA_INFO_METADATA_UPDATE;


J2CPP_DEFINE_CLASS(android::media::MediaPlayer,"android/media/MediaPlayer")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,1,"setDisplay","(Landroid/view/SurfaceHolder;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,2,"create","(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/MediaPlayer;")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,3,"create","(Landroid/content/Context;Landroid/net/Uri;Landroid/view/SurfaceHolder;)Landroid/media/MediaPlayer;")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,4,"create","(Landroid/content/Context;I)Landroid/media/MediaPlayer;")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,5,"setDataSource","(Landroid/content/Context;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,6,"setDataSource","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,7,"setDataSource","(Ljava/io/FileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,8,"setDataSource","(Ljava/io/FileDescriptor;JJ)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,9,"prepare","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,10,"prepareAsync","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,11,"start","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,12,"stop","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,13,"pause","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,14,"setWakeMode","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,15,"setScreenOnWhilePlaying","(Z)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,16,"getVideoWidth","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,17,"getVideoHeight","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,18,"isPlaying","()Z")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,19,"seekTo","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,20,"getCurrentPosition","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,21,"getDuration","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,22,"release","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,23,"reset","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,24,"setAudioStreamType","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,25,"setLooping","(Z)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,26,"isLooping","()Z")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,27,"setVolume","(FF)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,28,"setAudioSessionId","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,29,"getAudioSessionId","()I")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,30,"attachAuxEffect","(I)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,31,"setAuxEffectSendLevel","(F)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,32,"finalize","()V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,33,"setOnPreparedListener","(Landroid/media/MediaPlayer$OnPreparedListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,34,"setOnCompletionListener","(Landroid/media/MediaPlayer$OnCompletionListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,35,"setOnBufferingUpdateListener","(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,36,"setOnSeekCompleteListener","(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,37,"setOnVideoSizeChangedListener","(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,38,"setOnErrorListener","(Landroid/media/MediaPlayer$OnErrorListener;)V")
J2CPP_DEFINE_METHOD(android::media::MediaPlayer,39,"setOnInfoListener","(Landroid/media/MediaPlayer$OnInfoListener;)V")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,0,"MEDIA_ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,1,"MEDIA_ERROR_SERVER_DIED","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,2,"MEDIA_ERROR_NOT_VALID_FOR_PROGRESSIVE_PLAYBACK","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,3,"MEDIA_INFO_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,4,"MEDIA_INFO_VIDEO_TRACK_LAGGING","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,5,"MEDIA_INFO_BUFFERING_START","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,6,"MEDIA_INFO_BUFFERING_END","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,7,"MEDIA_INFO_BAD_INTERLEAVING","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,8,"MEDIA_INFO_NOT_SEEKABLE","I")
J2CPP_DEFINE_FIELD(android::media::MediaPlayer,9,"MEDIA_INFO_METADATA_UPDATE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_MEDIA_MEDIAPLAYER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
