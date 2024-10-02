/** lab12-01.c
 * =========================================================== 
 * Name: Jordan Moore
 * Section: T1
 * Project: Lab 12
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */
#include <stdio.h>
#include "lab12functs.h"

int main() {
    int num;
    printf("Give me an integer: ");
    scanf("%d", &num);
    int result = numFactorial(num);

    printf("The factorial of %d is %d.\n", num, result);

    return 0;
}