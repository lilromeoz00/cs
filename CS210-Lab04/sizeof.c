/** sizeof.c
 * =============================================================
 * Name: Jordan Moore, 8/14/24
 * Section:  T1
 * Project:  Lab 04
 * Purpose:  Determine the size of various data types
 * ============================================================= */

// Create Include Statements Here
#include <stdio.h>

int main() {

    // Create Your Variables Here
    int intVar;
    long longVar;
    float floatVar;
    double doubleVar;
    char charVar;


    // Create Your Print Statements Here
    printf("An int variable uses %02lu bytes\n", sizeof(intVar));
    printf("A long variable uses %02lu bytes\n", sizeof(longVar));
    printf("A float variable uses %02lu bytes\n", sizeof(floatVar));
    printf("A double variable uses %02lu bytes\n", sizeof(doubleVar));
    printf("A char variable uses %02lu bytes\n", sizeof(charVar));

    //int points          = 97;
    //int points_possible = 100;

    //float percentage   = points / points_possible;

    //printf("Percentage = %f", percentage);

    return 0;
}