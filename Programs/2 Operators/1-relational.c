#include "basic.h" 

int main(void) {
    clear_screen();
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    if(i>10) printf("%d is greater than 10\n", i);
    else if(i<10) printf("%d is less than 10\n", i);
    else printf("%d is equal to 10\n", i);
    return 0;
}