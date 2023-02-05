#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double d = (int)a;
    b = a - d;
    d = (int)d % 10;
    b = (int)(b * 10) % 10;
    printf("The required output is %d.\n", (int)(b + d));
    return 0;
}