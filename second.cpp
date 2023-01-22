#include <stdio.h>
void pointtable(int correct, int false,int total){
    printf("Your correct answer is total: %d\nYour total false is; %d\nYour total score is:%d",correct,false,total);
}
int main() {

    char answer;
    int start;
    int total;
    int false;
    int correct;

    correct = 0;
    false = 0;

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
            printf("Correct\n");
            total += 10;
            correct += 1;
        } else {
            printf("Wrong\n");
            total += 0;
            false += +1;
        }
        printf("Which year is google invented?\n");
        printf("A)1989\nB)1990\nC)1991\nD)1988");
        scanf(" %c", &answer);
        if (answer == 'A') {
            printf("Correct\n");
            total += 10;
            correct += 1;
        } else {
            printf("Wrong\n");
            total += 0;
            false += 1;
        }
        pointtable(correct, false, total);
        break;

    }
}





















