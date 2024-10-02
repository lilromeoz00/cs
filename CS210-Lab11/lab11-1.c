/** lab11-1.c
* ===========================================================
* Name: Jordan Moore, 9/7/24
* Section: T1
* Project: Lab 11-1
* Purpose: Complete Lab 11
* ===========================================================
*/



#include <stdio.h>

int main() {
    char house;
    // Step 1:  Ask for the House Name
    printf("Enter the first letter of your house: ");
    scanf("%c", &house);
    switch (house) {
        case 'g':
            printf("Your house is Gryffindor\n");
            printf("Your founder is Godric Gryffindor\n");
            printf("Your house colours are scarlet and gold\n");
            break;
        case 'G':
            printf("Your house is Gryffindor\n");
            printf("Your founder is Godric Gryffindor\n");
            printf("Your house colours are scarlet and gold\n");
            break;
        case 'r':
            printf("Your house is Ravenclaw\n");
            printf("Your founder is Rowena Ravenclaw\n");
            printf("Your house colours are blue and bronze\n");
            break;
        case 'R':
            printf("Your house is Ravenclaw\n");
            printf("Your founder is Rowena Ravenclaw\n");
            printf("Your house colours are blue and bronze\n");
            break;
        case 'h':
            printf("Your house is Hufflepuff\n");
            printf("Your founder is Helga Hufflepuff\n");
            printf("Your house colours are yellow and black\n");
            break;
        case 'H':
            printf("Your house is Hufflepuff\n");
            printf("Your founder is Helga Hufflepuff\n");
            printf("Your house colours are yellow and black\n");
            break;
        case 's':
            printf("Your house is Slytherin\n");
            printf("Your founder is Salazar Slytherin\n");
            printf("Your house colours are green and silver\n");
            break;
        case 'S':
            printf("Your house is Slytherin\n");
            printf("Your founder is Salazar Slytherin\n");
            printf("Your house colours are green and silver\n");
            break;
        default:
            printf("No house starts with that letter\n");
            break;

    }
    // Step 2:  Create a Switch Statement

    return 0;
}
