/** lab18-03.c
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
    char searchChar;
    int locations[MAX_STR_LEN];
    int occurrences;

    printf("Enter a string (<= 80 chars): ");
    fgets(str, MAX_STR_LEN, stdin);
    
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character whose locations you wish to find: ");
    scanf(" %c", &searchChar);

    occurrences = findLocations(str, locations, searchChar);

    printf("There are %d occurrences of %c.\n", occurrences, searchChar);
    for (int i = 0; i < occurrences; i++) {
        printf("%c found at location %d.\n", searchChar, locations[i]);
    }

    return 0;
}

