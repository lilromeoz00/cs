/** lab17-05.c
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
    char operator;
    int num1, num2;
    int result;

    printf("Enter an operator (+, -, *, /):\n");
    scanf(" %c", &operator);

    printf("Please enter two integer values separated by a space:\n");
    scanf("%d %d", &num1, &num2);

    result = performOperation(operator, num1, num2);

    printf("Operation = %d\n", result);

    return 0;
}