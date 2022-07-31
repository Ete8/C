#include "basic.h" 

int main(void) {
    clear_screen();
    float marks[5][2];
    for(int i = 0; i < 5; i++) {
        printf("Enter marks for internals Subject %d: ", i + 1);
        scanf("%f", &marks[i][0]);
        printf("Enter marks for externals Subject %d: ", i + 1);
        scanf("%f", &marks[i][1]);
    }
    float total[5];
    for(int i = 0; i < 5; i++) {
        total[i] = marks[i][0] + marks[i][1];
    }
    for(int i = 0; i < 5; i++) {
        if(marks[i][0] < 17) printf("Retest Sub %d\n", i + 1);
        else printf("Good InternaL Sub %d\n", i + 1);
        if(marks[i][1] < 20) printf("Supli Sub%d\n", i + 1);
        else printf("Good External Sub %d\n", i + 1);
    }
    float avg = 0;
    for(int i = 0; i < 5; i++) {
        avg += total[i];
    }
    printf("Average Marks: %.2f\n", avg / 5);
    return 0;
}