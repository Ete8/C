#include "basic.h" 

int main(void) {
    clear_screen();
    long int seconds;
    printf("Enter the number of seconds: ");
    scanf("%ld", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    printf("%ld seconds = %ld hours %ld minutes %ld seconds\n", seconds, hours, minutes, seconds);
    return 0;
}