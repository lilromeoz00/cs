/** lab18-02.c
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
    char searchChars[MAX_STR_LEN];
    char replaceChar;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);
    
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a search string (<= 80 chars): ");
    fgets(searchChars, MAX_STR_LEN, stdin);
    
    searchChars[strcspn(searchChars, "\n")] = '\0';

    printf("Enter a replace character: ");
    scanf(" %c", &replaceChar);

    replaceMultiChar(str, searchChars, replaceChar);

    printf("New string (between arrows): -->%s<--\n", str);

    return 0;
}
