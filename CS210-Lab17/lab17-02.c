/** lab17-02.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/
#include <stdio.h>
#include "lab17functs.h"

int main() {
    char myStr[] = "hello, this is a test.";
    
    int numVowels = countVowels(myStr);
    
    printf("The number of vowels is %d.\n", numVowels);
    return 0;
}
