#pragma once
#include "Audio.h"

class LoggedAudio : public Audio
{
public:
	LoggedAudio(Audio& wrapped)
		: wrapped_(wrapped)
	{}

	virtual void playSound(int soundID)
	{
		log("play sound");
		wrapped_.playSound(soundID);
	}

	virtual void stopSound(int soundID)
	{
		log("stop sound");
		wrapped_.stopSound(soundID);
	}

	virtual void stopAllSounds()
	{
		log("stop all sounds");
		wrapped_.stopAllSounds();
	}

private:
	void log(const char* message)
	{
		printf("Log: %s\n", message);
	}

	Audio& wrapped_;
};