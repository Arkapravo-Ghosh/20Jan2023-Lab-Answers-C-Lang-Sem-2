#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double d = (int)a;
    double c = (int)d % 10 * 10;
    b = a - d;
    double e = (int)(d / 100) * 100;
    d = (int)(d / 10) % 10;
    printf("The required output is %lf.\n", b + c + d + e);
    return 0;
}