#include <stdio.h>
int main() {
    double a;
    int k;
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter k: ");
    scanf("%d", &k);
    double b = a - (int)a;
    for (int i = 0; i < k; i++) {
        b *= 10;
    }
    b = (int)b;
    int sum = 0;
    for (int j = 0; j < k; j++) {
        sum += (int)b % 10;
        b /= 10;
    }
    printf("The required output is %d.\n", sum);
    return 0;
}