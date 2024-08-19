/** lab05functs.c
* ===========================================================
* Name: Jordan Moore
* Section: T1
* Project: Lab 5
* Purpose: Learn function prototypes, user-defined functions,
*          return values, and parameters.
* ===========================================================
*/
#include "lab05functs.h"
#include <math.h>
#include <stdio.h>

double degreesToRadians(int a){

    return M_PI * (a/180.0);
};

void printLine(int a) {
    double rad = degreesToRadians(a);
    printf("%d\t%.3f\t%.3f\n", a, sin(rad), cos(rad));
};