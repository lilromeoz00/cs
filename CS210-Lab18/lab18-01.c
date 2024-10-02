/** lab18-01.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 18
* Purpose: 
* ===========================================================
*/

#include <stdio.h>
#include <string.h>
#include "lab18functs.h"

int main() {
    char str[MAX_STR_LEN];
    char searchChar, replaceChar;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a search character followed by replace character: ");
    scanf(" %c %c", &searchChar, &replaceChar);

    replaceCharInStr(str, searchChar, replaceChar);

    printf("New string (between arrows): -->%s<--\n", str);

    return 0;
}
