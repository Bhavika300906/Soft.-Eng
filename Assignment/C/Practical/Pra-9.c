#include <stdio.h>

void main() {
    int a[5] = {1,2,3,4,5};
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j, sum = 0;

    printf("1D Array:");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            sum += b[i][j];

    printf("\nSum of 2D Array = %d", sum);
    getch();
}
