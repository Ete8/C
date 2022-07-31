#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter two integers: ");
    int i, j;
    scanf("%d %d", &i, &j);
    int temp = i;
    i = j;
    j = temp;
    printf("swapped: %d %d\n", i, j);
    return 0;
}