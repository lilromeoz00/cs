/** lab11-2.c
* ===========================================================
* Name: Jordan Moore, 9/7/24
* Section: T1
* Project: Lab 11-1
* Purpose: Testing character functions implemented in Lab 11-2
* ===========================================================
*/

#include <stdio.h>
#include "lab11-2functs.h"

int main() {

    // This variable will contain the character we want to test
    char theChar = '\0';

    // ----------------------------------------------------------
    // isFirstHalfAlpha
    // ----------------------------------------------------------
    printf("Enter a single character to pass to isFirstHalfAlpha():\n");
    scanf(" %c",&theChar);

    if (isFirstHalfAlpha(theChar)) {
        printf("A %c is in the first half of the alphabet.\n", theChar);
    } else {
        printf("A %c is NOT in the first half of the alphabet.\n", theChar);
    }


    // ----------------------------------------------------------
    // typeOfChar()
    // ----------------------------------------------------------
    printf("Enter a single character to pass to typeOfChar():\n");
    scanf(" %c",&theChar);
    
    switch (typeOfChar(theChar)) {
        case CHAR_IS_VOWEL:
            printf("A %c is a vowel.\n", theChar);
            break;
        case CHAR_IS_CONSONANT:
            printf("A %c is a consonant.\n", theChar);
            break;
        default:
            printf("A %c is neither a vowel nor a consonant.\n", theChar);

    }

    // ----------------------------------------------------------
    // isMagicChar
    // ----------------------------------------------------------
    printf("Enter a single character to pass to isMagicChar():\n");
    scanf(" %c",&theChar);
    
    if (isMagicChar(theChar)) {
        printf("A %c is the magic character %c.\n", theChar, MAGIC_CHAR);
    } else {
        printf("A %c is NOT the magic character %c.\n", theChar, MAGIC_CHAR);
    }

    return 0;
}
