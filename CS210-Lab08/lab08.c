/* lab08.c
 * =============================================================
 *    Name: Jordan Moore
 * Section: T1
 * Purpose: executing unit tests for a function that assesses cold advisories based on given wind speed and temperature, using a structured approach to test each logical path within the function
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "advisory.h"
#include "unitTest.h"

#define RUNTESTS 0

int main(void) {

    // This runs the unit tests when #define RUNTESTS is 1
    if (RUNTESTS) {
        runAllTests();
        exit(0);
    }
    
    int ambientTemp = 0;
    int windSpeed = 0;
    int coldAdvise = NO_COLD_ADVISORY;

   // user input
    printf("enter the wind speed: ");
    scanf("%d", &windSpeed);

    printf("enter the ambient temp: ");
    scanf("%d", &ambientTemp);

    // get cold advisory level
    coldAdvise = coldAdvisory(windSpeed, ambientTemp);

    // output
    if(coldAdvise == NO_COLD_ADVISORY) {
        printf("There is no advisory ");
    } else if(coldAdvise == COLD_ADVISORY) {
        printf("There is a COLD ADVISORY ");
    } else {
        printf("There is a COLD WARNING ");
    }

    printf("for temp: %2d ", ambientTemp);
    printf("and wind: %2d\n", windSpeed);

    return 0;
}