#pragma once

class NullAudio: public Audio
{
public:
	virtual void playSound(int soundID) { /* Do nothing. */ }
	virtual void stopSound(int soundID) { /* Do nothing. */ }
	virtual void stopAllSounds()        { /* Do nothing. */ }
};