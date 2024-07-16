#include <stdio.h>

double square(double num);

int main() {
    double num, result;
    printf("Please enter a number: ");
    scanf("%lf", &num);

    result = square(num);
    printf("Square of %.2lf = %.2lf", num, result);
    return 0;
}

double square(double num) {
    return num * num;
}
