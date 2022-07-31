#include "basic.h" 

int main(void) {
    clear_screen();
    int a, b, c;
    printf("Enter quadratic equation coefficients: ");
    scanf("%d %d %d", &a, &b, &c);
    float d = b * b - 4 * a * c;
    if(d < 0) printf("No real roots\n");
    else if(d == 0) printf("Repeated roots: %.2f\n", -b / (2 * a));
    else printf("Two roots: %.2f and %.2f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    return 0;
}