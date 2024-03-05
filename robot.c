#include <stdio.h>
#include "robot.h"

void initialize(int *x, int *y) {
    *x = 0;
    *y = 0;
}

void printLocation(int x, int y) {
    printf("Current location: (%d, %d)\n", x, y);
}

void move(int *x, int *y) {
    int direction, distance;
    printf("Enter direction (6-East, 4-West, 8-North, 2-South): ");
    scanf("%d", &direction);
    printf("Enter distance: ");
    scanf("%d", &distance);

    switch (direction) {
        case 6:
            *x += distance;
            break;
        case 4:
            *x -= distance;
            break;
        case 8:
            *y += distance;
            break;
        case 2:
            *y -= distance;
            break;
        default:
            printf("Invalid direction. Please try again.\n");
            break;
    }
}

void exitProgram(void) {
    printf("Program terminated. Thank you!\n");
}

char printCommand(void) {
    char command;
    printf("\nChoose a command:\n");
    printf("a] Origin\n");
    printf("b] Location\n");
    printf("c] Move\n");
    printf("d] Exit\n");
    printf("Enter command: ");
    scanf(" %c", &command);
    return command;
}

