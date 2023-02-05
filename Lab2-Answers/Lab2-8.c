#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double d = (int)a;
    b = (int)((a - d) * 10) / 10.0;
    b += a;
    printf("The required output is %lf.\n", b);
    return 0;
}