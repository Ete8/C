#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("swapped: %d %d\n", a, b);
    return 0;
}