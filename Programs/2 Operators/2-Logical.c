#include "basic.h" 

int main(void) {
    clear_screen();
    int i, j;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);

    if(i>0 && j>0) printf("Both numbers are positive\n");
    else if(i<0 && j<0) printf("Both numbers are negative\n");
    else printf("One number is positive and one is negative\n");

    if(i>0 || j>0) printf("One number is positive\n");
    else printf("Both numbers are negative\n");

    if(!(i<0)) printf("%d is not negative\n", i);
    if(!(j<0)) printf("%d is not negative\n", j);

    return 0;
}