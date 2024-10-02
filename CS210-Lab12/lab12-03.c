/** lab12-03.c
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
    int height;
    printf("Give me an integer: ");
    scanf("%d", &height);
    floydsTriangle(height);
    return 0;
}