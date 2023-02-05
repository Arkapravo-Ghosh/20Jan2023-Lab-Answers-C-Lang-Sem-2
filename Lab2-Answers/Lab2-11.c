#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double d = (int)a;
    b = a - d;
    d = (int)d % 10 / 10.0;
    b = (int)(b * 10) % 10;
    double c = (int)(a / 10) * 10;
    double e = ((a - (int)a) * 10 - (int)((a - (int)a) * 10)) / 10.0;
    printf("The required output is %lf.\n", b + c + d + e);
    return 0;
}