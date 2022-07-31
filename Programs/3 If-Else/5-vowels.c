#include "basic.h" 

int main(void) {
    clear_screen();
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') printf("%c is a vowel\n", c);
    else printf("%c is not a vowel\n", c);
    return 0;
}