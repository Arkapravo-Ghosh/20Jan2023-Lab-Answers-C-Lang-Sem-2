#include <stdio.h>
int main() {
    double a;
    int k;
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter k: ");
    scanf("%d", &k);
    double b = a - (int)a;
    double c = b;
    for (int i = 0; i < k - 1; i++) {
        c *= 10;
    }
    c = (int)c;
    for (int i = 0; i < k - 1; i++) {
        c /= 10;
    }
    double d = b;
    for (int i = 0; i < k; i++) {
        d *= 10;
    }
    d -= (int)d;
    for (int i = 0; i < k - 1; i++) {
        d /= 10;
    }
    printf("The required output is %lf.\n", (int)a + c + d);
    return 0;
}