/* unitTest.c
 * =============================================================
 *    Name: Jordan Moore
 * Section: T1
 * Purpose: executing unit tests for a function that assesses cold advisories based on given wind speed and temperature, using a structured approach to test each logical path within the function
 * =============================================================
 */
 
#include <stdbool.h> 
#include <stdio.h>
#include <assert.h>

#include "unitTest.h"
#include "advisory.h"
 
void unitTest01(){
    // Assert Statements Go Here
    assert(coldAdvisory(100, 20) == NO_COLD_ADVISORY);
    printf("Test 01 passed\n");
}
void unitTest02(){
    // Assert Statements Go Here
    assert(coldAdvisory(60, 10) == COLD_WARNING);
    printf("Test 02 passed\n");
}
void unitTest03(){
    // Assert Statements Go Here
    assert(coldAdvisory(30, 5) == COLD_ADVISORY);
    printf("Test 03 passed\n");
}
void unitTest04(){
    // Assert Statements Go Here
    assert(coldAdvisory(30, -5) == COLD_WARNING);
    printf("Test 04 passed\n");
}
void unitTest05(){
    // Assert Statements Go Here
    assert(coldAdvisory(10, -5) == COLD_ADVISORY);
    printf("Test 05 passed\n");
}
void unitTest06(){
    // Assert Statements Go Here
    assert(coldAdvisory(10, -20) == COLD_WARNING);
    printf("Test 06 passed\n");
}

void runAllTests(){
    unitTest01();
    unitTest02();
    unitTest03();
    unitTest04();
    unitTest05();
    unitTest06();
    // Additional Unit Test Calls Go Here
    printf("Testing completed\n");
}