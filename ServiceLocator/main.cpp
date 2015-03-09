#include "Locator.h"
#include "ConsoleAudio.h"

int main()
{
	// Initialize with null object (do nothing)
	Locator::initialize();
	Locator::getAudio().playSound(1001);

	// Provide a console audio service
	ConsoleAudio consoleAudio;
	Locator::provide(&consoleAudio);
	Locator::getAudio().playSound(1002);

	return 0;
}