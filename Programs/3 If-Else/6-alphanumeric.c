#include "basic.h" 

int main(void) {
    clear_screen();
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if(isalnum(c)) printf("%c is an alphanumeric character\n", c);
    else if(isalpha(c)) printf("%c is an alphabetic character\n", c);
    else if(isdigit(c)) printf("%c is a digit\n", c);
    else if(isgraph(c)) printf("%c is a graphic character\n", c);
    else if(islower(c)) printf("%c is a lowercase character\n", c);
    else if(isupper(c)) printf("%c is an uppercase character\n", c);
    else if(isspace(c)) printf("%c is a whitespace character\n", c);
    else if(ispunct(c)) printf("%c is a punctuation character\n", c);
    else if(isxdigit(c)) printf("%c is a hexadecimal digit\n", c);
    return 0;
}