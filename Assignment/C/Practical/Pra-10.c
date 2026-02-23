#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    *p = 40;   // change value using pointer
    printf("Value of a = %d", a);

    return 0;
}
