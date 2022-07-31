#include "basic.h" 

int main(void) {
    clear_screen();
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year%4) printf("Not a leap year\n");
    else if(year%100) printf("Leap year\n");
    else if(year%400) printf("Not a leap year\n");
    else printf("Leap year\n");

    return 0;
}