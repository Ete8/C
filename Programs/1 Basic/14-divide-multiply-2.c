#include "basic.h" 

int main(void) {
    clear_screen();
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d Multiplied by 4 = %d\n", a, a<<2);
    printf("%d Divided by 4 = %d\n", a, a>>2);
    return 0;
}