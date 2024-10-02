/** lab17functs.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 17
* Purpose: 
* ===========================================================
*/

#include <stdio.h>
#include "lab17functs.h"
#include <string.h>
#include <math.h>

void getMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i]; 
        }
    }
}

int performOperation(char operator, int num1, int num2) {
    int result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            result = 0;
            break;
    }

    return result;
}

int analyzeValues(double arr[], int size) {
    if (size == 0) {
        return 0;
    }

    double sum = 0.0;
    double mean = 0.0;
    double varianceSum = 0.0;
    double standardDeviation = 0.0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    for (int i = 0; i < size; i++) {
        varianceSum += pow(arr[i] - mean, 2);
    }

    standardDeviation = sqrt(varianceSum / size);

    for (int i = 0; i < size; i++) {
        if (fabs(arr[i] - mean) <= standardDeviation) {
            count++;
        }
    }

    return count;
}

int countVowels(char str[]) {
    int vowelCount = 0;
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'y':
                vowelCount++;
                break;
            default:
                break;
        }
    }

    return vowelCount;
}

int loadVals(int arr[]) {
    int count = 0;
    int value;

    while (1) {
        printf("Enter a value (negative value to end): ");
        scanf("%d", &value);

        if (value < 0) {
            break;
        }

        arr[count] = value;
        count++;
    }

    return count;
}

void reversePrint(int arr[], int length) {
    for (int i = length - 1; i >= 0; i -= 2) {
        printf("%d\n", arr[i]);
    }
}
