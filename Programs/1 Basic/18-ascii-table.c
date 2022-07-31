#include "basic.h" 

int main(void) {
    clear_screen();
    int a;
    printf("Enter a number greater than 47: ");
    scanf("%d", &a);
    for (int i = 48; i < a; i++) {
        printf("%d = %c\n", i, i);
    }
    return 0;
}