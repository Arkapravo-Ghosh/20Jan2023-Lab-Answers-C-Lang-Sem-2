#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    int d = (int)a * 10 + 1;
    b = (a - (int)a);
    b += (double)d;
    printf("The required output is %lf.\n", b);
    return 0;
}