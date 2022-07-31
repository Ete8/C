#include "basic.h" 

int main(void) {
    clear_screen();
    int a =10, b, c, d, e, f;
    b = c = d = e = f = 23;
    printf("a %d b %d c %d\n", a, b, c);
    printf("d %d e %d f %d\n", d, e, f);
    b++; c--;
    d += 2;
    e -= 2;
    f *=10;
    a /= 2;
    printf("a %d b %d c %d\n", a, b, c);
    printf("d %d e %d f %d\n", d, e, f);

    a = 10; b = 5;
    printf("%d\t", a & b);
    printf("%d\t", a | b);
    printf("%d\t", a ^ b);
    printf("%d\t", ~b);
    printf("%d\t", a >> 1);
    printf("%d\t", a << 1);

    printf("\nsize of int is %d", sizeof(int));
    printf("\nsize of double is %d", sizeof(double));

    18>13? printf("\n18"): printf("\n13");

    
    return 0;
}