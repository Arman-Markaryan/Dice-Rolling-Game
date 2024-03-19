#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int dice;
    char input[10];

    srand(time(0));

    printf("Welcome to Dice Rollers!\n");

    while (1) {
        printf("Type 'roll' to roll your dice: ");
        scanf("%s", input);

        if (strcmp(input, "roll") == 0) {
            dice = rand() % 6 + 1;
            printf("You rolled a: %d\n", dice);
            break; 
        } else {
            printf("Invalid command. Please type 'roll' to roll the dice.\n");
        }
    }

    return 0;
}
