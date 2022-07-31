#include "basic.h" 

int main(void) {
    clear_screen();
    int day;
    printf("Enter the day of the week (monday is 1, sunday is 7)\n: ");
    scanf("%d", &day);
    printf("Today is ");
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
    return 0;
}