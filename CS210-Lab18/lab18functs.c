#include <stdio.h>
#include <string.h>

#include "lab18functs.h"

/** lab18functs.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 18
* Purpose: 
* ===========================================================
*/

int countSeqStr(char str[], char searchStr[]) {
    int count = 0;
    int strLen = strlen(str);
    int searchLen = strlen(searchStr);

    for (int i = 0; i <= strLen - searchLen; i++) {
        if (strncmp(&str[i], searchStr, searchLen) == 0) {
            count++;
        }
    }

    return count;
}

int findLocations(char str[], int locations[], char searchChar) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == searchChar) {
            locations[count] = i;
            count++;
        }
    }

    return count;
}

void replaceMultiChar(char str[], char searchChars[], char replaceChar) {
    int strLen = strlen(str);
    int searchLen = strlen(searchChars);

    for (int i = 0; i < strLen; i++) {
        for (int j = 0; j < searchLen; j++) {
            if (str[i] == searchChars[j]) {
                str[i] = replaceChar;
                break;
            }
        }
    }
}

void replaceCharInStr(char str[], char searchChar, char replaceChar) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == searchChar) {
            str[i] = replaceChar;
        }
    }
}
