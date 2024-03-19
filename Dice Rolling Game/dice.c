#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int dice;
    char command[10];


    srand(time(0));
    dice = rand() % 6 + 1;


    printf("Welcome to Dice Rollers!\n");
    printf("Type 'roll' to roll the dice: ");


    scanf("%s", command);

     if (strcmp(command, "roll") == 0) {
        printf("You rolled: %d\n", dice);
    } else {
        printf("Invalid command. Type 'roll' to roll the dice.\n");
    }



    return 0;
}