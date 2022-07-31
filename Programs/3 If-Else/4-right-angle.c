#include "basic.h" 

int main(void) {
    clear_screen();
    int a, b, c;
    int max1, max2, max3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c) {max1 = a; max2 = b; max3 = c;}
    else if(b > a && b > c) {max1 = b; max2 = a; max3 = c;}
    else {max1 = c; max2 = b; max3 = a;}
    if(max1*max1 == max2*max2 + max3*max3) printf("Right angle triangle: %d %d %d\n", max1, max2, max3);
    else printf("Not a right angle triangle\n");

    return 0;
}