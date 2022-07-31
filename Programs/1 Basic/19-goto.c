#include "basic.h" 

int main(void) {
    clear_screen();
    int a;
    Legal:
        printf("%d is greater than 18\n", a);
    Illegal:
        printf("%d is less than 18\n", a);
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>18) {
        goto Legal;
    } else if(a<18) goto Illegal;
    else printf("%d is equal to 18\n", a);
    return 0;
}