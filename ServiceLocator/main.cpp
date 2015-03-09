#include "Locator.h"
#include "ConsoleAudio.h"
#include "LoggedAudio.h"

void enableAudioLogging()
{
	// Decorate the existing service.
	Audio *service = new LoggedAudio(Locator::getAudio());

	// Swap it in.
	Locator::provide(service);
}

int main()
{
	// Initialize with null object (do nothing)
	Locator::initialize();
	Locator::getAudio().playSound(1001);

	// Provide a console audio service
	ConsoleAudio consoleAudio;
	Locator::provide(&consoleAudio);
	Locator::getAudio().playSound(1002);

	enableAudioLogging();
	Locator::getAudio().playSound(1003);

	return 0;
}