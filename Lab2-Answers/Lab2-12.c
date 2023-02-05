#include <stdio.h>
int main() {
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    int b = (int)a * 100;
    printf("The required output is %d.\n",(b % 10) + ((b / 10) % 10));
    return 0;
}
