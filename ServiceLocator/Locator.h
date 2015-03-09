#pragma once
#include "Audio.h"
#include "NullAudio.h"

class Locator
{
public:
	static void initialize()
	{
		static NullAudio nullService_;
		service_ = &nullService_;
	}

	static Audio& getAudio()
	{
		return *service_;
	}

	static void provide(Audio* service)
	{
		if (!service)
		{
			initialize();
		}
		else
		{
			service_ = service;
		}
	}

private:
	static Audio* service_;
};

Audio* Locator::service_ = 0;
