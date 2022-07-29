#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define PIE 3.14159265358979323846

int factorial(int n) {
    if (n == 0)  return 1;
    else return n * factorial(n - 1);
} // factorial copilot

int fibonacci(int n) {
    if (n == 0 || n == 1)  return n;
    else return fibonacci(n - 1) + fibonacci(n - 2);
} // fibonacci copilot

int sum(int n) {
    // if (n == 0) return 0;
    // return n + sum(n - 1);

    // int sum = 0;
    // for (int i = 1; i <= n; i++) sum+= i;
    // return sum;

    return n * (n + 1) / 2; 
} // sum of digits copilot

int sum_of_digits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sum_of_digits(n / 10);
} // sum of digits copilot

int sum_of_digits_recursive(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sum_of_digits_recursive(n / 10);
} // sum of digits copilot

bool isPalindrome(int x) {
    if(x<0) return false; 
    else {
        int rev=0, c=x;
        for(int i=0; i< itoa(); i++) {
            rev = rev*pow(10, i)+c%10;
            if(c<10) c=0;
            else c/=10;
        }
       printf("%d %d\n", x, rev);
        return x==rev;
    }
} // isPalindrome copilot

