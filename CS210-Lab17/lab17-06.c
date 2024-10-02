/** lab17-06.c
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
    int arr[] = {-4, 4, 5, 10, -10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min, max;

    getMinMax(arr, size, &min, &max);

    printf("Given array = {");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}, the min is %d, and the max is %d.\n", min, max);

    return 0;
}
