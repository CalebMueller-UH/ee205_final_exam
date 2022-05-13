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
	Letter* cursor = head;

	if( cursor == nullptr )
	{
		cout << "No letters" << endl;
		return;
	}

	while( cursor != nullptr )
	{
		cout << cursor->value;
		cursor = cursor->next;
	}

	cout << endl;
}

void Text::reverseText()
{
	Text* tempText = new Text();

	Letter* cursor = head;
	while( cursor != nullptr )
	{
		tempText->pushNewLetter( cursor->value );
		cursor = cursor->next;
	}

	cursor = this->head;
	Letter* tempCursor = tempText->head;
	while( cursor != nullptr )
	{
		cursor->value = tempCursor->value;
		cursor = cursor->next;
		tempCursor = tempCursor->next;
	}
	delete tempCursor;
	delete tempText;
}

Text::~Text()
{
	Letter* cursor = head;
	while( cursor != nullptr )
	{
		Letter* nxt = cursor->next;
		delete cursor;
		cursor = nxt;
	}
}
