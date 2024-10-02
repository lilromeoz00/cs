/** lab13-02.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"
int A;

int main() {
    scanf("%d", &A);
    if(isArmstrong(A)){
        printf("%d is an Armstrong number.\n", A);
    } else {
        printf("%d is not an Armstrong number.\n", A);
    }
    return 0;

}