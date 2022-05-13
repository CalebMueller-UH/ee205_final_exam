///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Letter.h
/// @version 1.0
///
/// @author Caleb Mueller <mc61@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_FINAL_EXAM_LETTER_H
#define EE205_FINAL_EXAM_LETTER_H

class Text;

class Letter
{
  friend class Text;

  protected:
  char value;

  public:
  Letter* next{nullptr};
};

#endif //EE205_FINAL_EXAM_LETTER_H
