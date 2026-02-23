#include <stdio.h>

void main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);

    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    printf("a && b: %d\n", a && b);

    getch();
}
