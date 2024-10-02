/** lab18-04.c
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
    char searchStr[MAX_STR_LEN];
    int occurrences;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a search string (<= 80 chars): ");
    fgets(searchStr, MAX_STR_LEN, stdin);

    searchStr[strcspn(searchStr, "\n")] = '\0';

    occurrences = countSeqStr(str, searchStr);

    printf("There are %d occurrences of %s.\n", occurrences, searchStr);

    return 0;
}

