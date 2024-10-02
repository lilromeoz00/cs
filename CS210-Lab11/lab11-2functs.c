/** lab11-2functs.c
* ===========================================================
* Name: Jordan Moore, 9/7/24
* Section: T1
* Project: Lab 11-1
* Purpose: Implementation file for lab11-2.h
* ===========================================================
*/

#include <stdio.h>
#include <ctype.h>
#include "lab11-2functs.h"

bool isFirstHalfAlpha(char theChar) {
    // For now, this function always returns false.  We will fix it later!
    theChar = tolower(theChar);
    return (theChar >= 'a' && theChar <= 'm');
}

int typeOfChar(char theChar) {
    theChar = tolower(theChar);
    if (theChar >= 'a' && theChar <= 'z') {
        if (theChar == 'a' || theChar == 'e' || theChar == 'i' || theChar == 'o' || theChar == 'u') {
            return CHAR_IS_VOWEL;
        }
        else {
            return CHAR_IS_CONSONANT;
        }

    }
    else {
        return CHAR_NOT_ALPHA;
    }
     // Stub, change it later
}

bool isMagicChar(char theChar) {
    return (theChar == MAGIC_CHAR); // Stub, change it later
}