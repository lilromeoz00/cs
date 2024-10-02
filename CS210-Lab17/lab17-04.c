/** lab17-04.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 17
* Purpose: Programming practice for Lessons 1 - 15
* ===========================================================
*/

#include <stdio.h>

int main() {
    int rating;

    printf("Survey response scale: 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average,\n");
    printf("3-4 - Below Average, 1-2 - Awful, 0 - Horrible.\n");

    printf("Enter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream: ");
    scanf("%d", &rating);

    switch (rating) {
        case 10:
            printf("Outstanding\n");
            break;
        case 8:
        case 9:
            printf("Excellent\n");
            break;
        case 6:
        case 7:
            printf("Good\n");
            break;
        case 5:
            printf("Average\n");
            break;
        case 3:
        case 4:
            printf("Below Average\n");
            break;
        case 1:
        case 2:
            printf("Awful\n");
            break;
        case 0:
            printf("Horrible\n");
            break;
        default:
            printf("You did not enter a value between 0 and 10.\n");
            break;
    }
    return 0;
}
