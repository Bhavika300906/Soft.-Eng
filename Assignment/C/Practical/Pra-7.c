#include <stdio.h>

void main() {
    int i;
    for(i = 1; i <= 10; i++) {
        if(i == 5)
            break;
        if(i == 3)
            continue;
        printf("%d ", i);
    }
    getch();
}
