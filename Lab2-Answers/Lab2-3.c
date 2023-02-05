#include <stdio.h>
int main() {
    double a, b;
    int c;
    printf("Enter a number: ");
    scanf("%lf", &a);
    b = a - (int)a;
    c = (int)(b * 100);
    c = c % 10;
    printf("The first digit of the fractional part of %lf is %d.\n", a, c);
    return 0;
}