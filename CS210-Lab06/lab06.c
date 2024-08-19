// Not much is being provided to you this time.

// That's the point!  In this lab, you are going 
// to practice solving problems using a formal
// process.

/** lab06.c
* ===========================================================
* Name: Jordan Moore
* Section: T1
* Project: Lab 5
* Purpose: the number of seconds it takes for the object to reach the base of the building.
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab06functs.h"
/**
0 stories = 0 s
3 stor = 1.93192 s
6 stor = 2.73214 s

fG = 9.7998 m/sec^2
initVel = 0 m/sec
1 story = 20 feet
1 ft = 0.3048 m
time = sqrt( (2 * (STORY * 20 * 0.3048) )) / (fG) )

 */

int story;
double time;
int main(){
    printf("Enter number of stories: ");
    scanf("%d", &story);
    int height = story * 20;
    time = timeToFallFeet(height);
    printf("It takes %.3lf seconds for an object to fall from a building %d stories tall.\n", time, story);

    return 0;
}
