///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.cpp
/// @version 1.0
///
/// @author Caleb Mueller <mc61@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Text.h"

void Text::pushNewLetter( char newLetter )
{
	Letter* dynamicLetter = new Letter();
	dynamicLetter->value = newLetter;

	dynamicLetter->next = head;
	head = dynamicLetter;
}

void Text::printText()
{
	Letter* cur = head;

	while( cur != nullptr )
	{
		cout << cur->value;
		cur = cur->next;
	}

	cout << endl;
}
