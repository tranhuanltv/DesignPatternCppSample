#pragma once
#include <stdio.h>

class ConsoleAudio : public Audio
{
public:
	virtual void playSound(int soundID)
	{
		printf(__FUNCTION__ "(%d)\n", soundID);
	}

	virtual void stopSound(int soundID)
	{
		printf(__FUNCTION__ "(%d)\n", soundID);
	}

	virtual void stopAllSounds()
	{
		printf(__FUNCTION__);
	}
};