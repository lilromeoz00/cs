/** lab17-03.c
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
    double values[] = {5.0, 3.1, 7.2, 3.8, 4.2, 1.1};
    int size = sizeof(values) / sizeof(values[0]);

    int result = analyzeValues(values, size);

    printf("The number of values within one standard deviation of the mean is %d\n", result);

    return 0;
}
