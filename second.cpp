#include <stdio.h>

int main() {

    char answer;
    int start;
    int total;
    int correct;
    int false;

    printf("HEY WELCOME TO QUIZ GAME FOR START PRESS 1\n");
    printf("For exit press -1");
    scanf("%d", &start);
    if (start == -1) {
        return 0;
    }
    while (start < 3) {
        printf("Which year is berserk 1st chapter released?\n");
        printf("A)1989\nB)1990\nC)1991\nD)1988");
        scanf(" %c", &answer);
        if (answer == 'A') {
            printf("Correct");
            total += 10;
            correct += 1;
        } else {
            printf("Wrong");
            total += 0;
            false += 1;
        }f
        printf("Which year is google invented?\n");
        printf("A)1989\nB)1990\nC)1991\nD)1988");
        scanf(" %c", &answer);
        if (answer == 'A') {
            printf("Correct");
            total += 10;
            correct += 1;
        } else {
            printf("Wrong");
            total += 0;
            false += 1;
        }
        printf("QUIZ IS END YOUR TOTAL SCORE IS %d", total);
        break;

    }
}





















