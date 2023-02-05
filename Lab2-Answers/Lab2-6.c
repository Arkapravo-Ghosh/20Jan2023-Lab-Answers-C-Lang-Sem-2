#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double d = (int)a;
    b = (a - d) * 100;
    b = (b - (int)b) / 10;
    b += (double)d;
    double c = (a - d);
    c = (int)((c - (int)c) * 10) / 10.0;
    printf("The required output is %lf.\n", b + c);
    return 0;
}