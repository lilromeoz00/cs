/** lab12-02.c
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

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } 
    else {

        printf("%d is not a prime number.\n", num);
    }
    return 0;
}