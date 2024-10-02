/** lab17-01.c
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
    int arr[100];
    int length;

    length = loadVals(arr);

    reversePrint(arr, length);

    return 0;
}
