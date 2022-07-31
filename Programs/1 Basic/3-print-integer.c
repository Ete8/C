#include "basic.h" 

int main(void) {
    clear_screen();
    printf("Enter an integer: ");
    int i;
    scanf("%d", &i);
    printf("You entered: %d\n", i);
    return 0;
}