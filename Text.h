///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Text.h
/// @version 1.0
///
/// @author Caleb Mueller <mc61@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_TEXT_H
#define EE205_FINAL_EXAM_TEXT_H

#include <iostream>

#include "Letter.h"

using std::cout;
using std::endl;

class Text
{
  private:
  Letter* head{nullptr};

  public:
  void pushNewLetter( char newLetter );

  void printText();

  void reverseText();

  ~Text();
};

#endif //EE205_FINAL_EXAM_TEXT_H
