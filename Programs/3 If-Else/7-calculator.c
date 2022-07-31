#include "basic.h" 

int main(void) {
    clear_screen();
    char op;
    int a, b;
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(op) {
        case '+': printf("%d + %d = %d\n", a, b, a + b); break;
        case '-': printf("%d - %d = %d\n", a, b, a - b); break;
        case '*': printf("%d * %d = %d\n", a, b, a * b); break;
        case '/': printf("%d / %d = %d\n", a, b, a / b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}