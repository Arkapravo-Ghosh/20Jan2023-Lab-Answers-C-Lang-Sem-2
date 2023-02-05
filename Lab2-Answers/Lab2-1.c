#include <stdio.h>
int main() {
    float a, b;
    int c;
    printf("Enter a number: ");
    scanf("%f", &a);
    b = a - (int)a;
    c = (int)(b * 10);
    printf("The first digit of the fractional part of %f is %d.\n", a, c);
    return 0;
}