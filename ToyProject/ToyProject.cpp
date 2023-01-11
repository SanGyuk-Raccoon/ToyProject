#include "UtilModule.h"
#include <stdio.h>

int main() {
	ConsoleHandler::setConsoleSize(120, 40);
	ConsoleHandler::setTitle("Test!!!");

	Cursor::getInstance().setPosition(0, 0);
	printf("Cursor");

	Cursor::getInstance().setFontColor(Color::Black, Color::Red);
	Cursor::getInstance().setPosition(0, 1);
	printf("Test");
	

    return 0;
}

