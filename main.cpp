#include <iostream>

#include "Letter.h"
#include "Text.h"

using std::cout;
using std::endl;

int main()
{
	std::cout << "Hello, World!" << std::endl;

	Text text;

	text.printText();

	text.pushNewLetter( 'c' );
	text.pushNewLetter( 'a' );
	text.pushNewLetter( 't' );

	text.printText();  // tac

	text.reverseText();

	text.printText();  // cat

	return 0;
}

