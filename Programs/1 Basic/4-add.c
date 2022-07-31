#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two integers: ");
    int i, j;
    scanf("%d %d", &i, &j);
    // printf("You entered: %d %d\n", i, j);
    int k = i + j;
    printf("The sum of %d and %d is %d\n", i, j, k);
    return 0;
}