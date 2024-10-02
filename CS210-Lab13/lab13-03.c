/** lab13-03.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"

int main() {
    int A;
    int B;
    int gcd;
    scanf("%d %d", &A, &B);
    gcd = findGCD(A, B);
    printf("GCD = %d\n", gcd);

}