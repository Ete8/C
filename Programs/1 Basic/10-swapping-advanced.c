#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two integers: ");
    int i, j;
    scanf("%d %d", &i, &j);
    i = i+j;
    j = i-j;
    i = i-j;
    printf("swapped: %d %d\n", i, j);
    return 0;
}