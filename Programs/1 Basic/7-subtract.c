#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two integers: ");
    int i, j;
    scanf("%d %d", &i, &j);
    // printf("negation of %d is %d\n", i, ~i +1);
    printf("%d - %d = %d\n", i, j, i + ~j + 1);
    return 0;
}