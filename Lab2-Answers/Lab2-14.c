#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    int inm = (int)num, sum = 0;
    while (k-- != 0) {
        sum += inm % 10;
        inm /= 10;
    }
    printf("The required output is %d.\n", sum);
    return 0;
}