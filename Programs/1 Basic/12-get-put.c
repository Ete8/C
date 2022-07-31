#include "basic.h" 

int main(void) {
    clear_screen();
    char s[100];
    printf("Enter a string: ");
    gets(s);
    puts(s);
    printf("Enter a character: ");
    char c = getchar();
    putchar(c);
    return 0;
}