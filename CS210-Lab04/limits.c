/** limits.c
 * =============================================================
 * Name: Jordan Moore, 8/14/24
 * Section:  T1
 * Project:  Lab 04
 * Purpose:  Determine the max and min values of ints and longs
 * ============================================================= */

#include <stdio.h>
#include <limits.h>

#define WORLD_POPULATION_2020 7794798739

int main() {

    // Task 1 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of the world population
    int world = WORLD_POPULATION_2020;

    // Print out the integer variable you just made
    printf("world population in 2020 was (as int): %d\n", world);

    // Create a long variable, and assign it the value of the world population
    long worldL = WORLD_POPULATION_2020;

    // Print out the long variable you just made
    printf("world population in 2020 was (as long): %lu\n", worldL);
    
    // Task 2 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of INT_MAX - 1
    int val = INT_MAX - 1;
    // Print the value of the variable you just made
    printf("value of int: %d\n", val);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of int: %d\n", val + 1);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of int: %d\n", val + 2);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of int: %d\n", val + 3);
    
    // Task 3 -----------------------------------------------------------------------

    // Create an long variable, and assign it the value of LONG_MAX - 1
    long val2 = LONG_MAX - 1;
    // Print the value of the variable you just made
    printf("value of long: %ld\n", val2);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", val2 + 1);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", val2 + 2);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", val2 + 3);
    return 0;
}