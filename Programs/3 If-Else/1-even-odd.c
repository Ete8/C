#include "basic.h" 

int main(void) {
    clear_screen();
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    if(a%2) printf("Odd Number\n");
    else printf("Even Number\n");
    printf("%.2f is greater\n", fmax(a, b));

    printf("%f\n", sqrt(a));
    printf("%f\n", sqrt(b));
    if(sqrt(a) == (float)((int)sqrt(a))) printf("a is Perfect\n");
    else printf("Not Perfect");
    if(sqrt(b) == (float)((int)sqrt(b))) printf("b is Perfect\n");
    else printf("Not Perfect");
    return 0;
}