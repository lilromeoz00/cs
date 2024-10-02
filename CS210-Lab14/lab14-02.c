/** lab14-02.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab14functs.h"

int main() {
    int c;
    int q, d, n, c2;
    scanf("%d", &c);
    makeChange(c, &q, &d, &n, &c2);
    printf("quarters: %d, dimes: %d, nickels: %d, pennies: %d\n", q, d, n, c2);
    return 0;
    
}