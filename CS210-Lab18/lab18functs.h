/** lab18functs.h
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 18
* Purpose: 
* ===========================================================
*/
// lab18functs.h
#ifndef LAB18FUNCTS_H
#define LAB18FUNCTS_H

#define MAX_STR_LEN 81


void replaceCharInStr(char str[], char searchChar, char replaceChar);

void replaceMultiChar(char str[], char searchChars[], char replaceChar );

int findLocations(char str[], int locations[], char searchChar);

int countSeqStr(char str[], char searchStr[]); 

#endif