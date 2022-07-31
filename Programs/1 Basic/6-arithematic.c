#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two integer: ");
    int i, j, k;
    scanf("%d %d", &i, &j);
    k = i + j;
    printf("The sum of %d and %d is %d\n", i, j, k);
    k = i-j;
    printf("The difference of %d and %d is %d\n", i, j, k);
    k = i*j;
    printf("The product of %d and %d is %d\n", i, j, k);
    k = i/j;
    printf("The quotient of %d and %d is %d\n", i, j, k);
    k = i%j;
    printf("The remainder of %d and %d is %d\n", i, j, k);
    return 0;
}