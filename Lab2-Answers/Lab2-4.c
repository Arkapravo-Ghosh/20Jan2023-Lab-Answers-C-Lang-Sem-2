#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double d = (int)a;
    b = a - d;
    d = (int)(d / 10);
    b += d;
    printf("The required output is %lf.\n", b);
    return 0;
}