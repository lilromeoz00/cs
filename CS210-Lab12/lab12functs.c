/** lab12functs.c
 * =========================================================== 
 * Name: Jordan Moore
 * Section: T1
 * Project: Lab 12
 * Purpose: high level description of purpose of the program
 *          could be multiple lines
 * =========================================================== */

#include "lab12functs.h"
#include <stdio.h>

int numFactorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }

    }
    return 1;

}


void floydsTriangle(int height) {
    for (int row = 1; row <= height; row++) {
        for (int col = 1; col <= row; col++) {
            if ((row + col) % 2 == 0) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }


}