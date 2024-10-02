/** lab11-2functs.h
* ===========================================================
* Name: Jordan Moore, 9/7/24
* Section: T1
* Project: Lab 11-1
* Purpose: Header file for lab11-2
* ===========================================================
*/
#ifndef LAB11_2_FUNCTS_H
#define LAB11_2_FUNCTS_H
#define CHAR_IS_VOWEL     0
#define CHAR_IS_CONSONANT 1
#define CHAR_NOT_ALPHA    2
#define MAGIC_CHAR       '@'
#include <stdbool.h>

bool isFirstHalfAlpha(char theChar);
int typeOfChar(char theChar);
bool isMagicChar(char theChar);
#endif
