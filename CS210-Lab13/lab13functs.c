/** lab13functs.c
 * =========================================================== 
 * Name: name, date
 * Section: your section
 * Project: assignment information 
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include <stdio.h>
#include "lab13functs.h"
#include <math.h>



int findGCD(int A, int B){
    while (A != B){
        if(A > B){
            A -= B;
        } else {
            B -= A;
        }
    }
    return A;
    
}




int printRange(int A, int  B){
    if (A < B) {
        while (A <= B){
            printf("%d\n", A);
            ++A;
        }

    } else {
        while (A >= B){
            printf("%d\n", A);
            --A;
        }
    }
    return 0;
}

int isArmstrong(int A) {
    int hold = A;
    int count = 0;
    int sum = 0;
    int orig = A;
    while (hold > 0) {
        hold /= 10;
        count++;
    }

    hold = A;
    while (hold > 0){
        int hold2 = hold %10;
        sum += pow(hold2, count);
        hold /= 10;
    }

    if (sum == orig){
        return 1;
    }


    
    return 0;
}
