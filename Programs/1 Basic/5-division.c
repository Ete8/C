#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two integers: ");
    int i, j;
    scanf("%d %d", &i, &j);
    int k = i / j;
    printf("The quotient of %d and %d is %d\n", i, j, k);
    return 0;
}