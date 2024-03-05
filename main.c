#include <stdio.h>
#include <stdlib.h>
#include "robot.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int x, y;
    char command;

    initialize(&x, &y);

    while (1) {
        command = printCommand();

        switch (command) {
            case 'a':
            case 'A':
                initialize(&x, &y);
                printLocation(x, y);
                break;
            case 'b':
            case 'B':
                printLocation(x, y);
                break;
            case 'c':
            case 'C':
                move(&x, &y);
                printLocation(x, y);
                break;
            case 'd':
            case 'D':
                exitProgram();
                return 0;
            default:
                printf("Invalid command. Please try again.\n");
                break;
        }
    }
	return 0;
}
