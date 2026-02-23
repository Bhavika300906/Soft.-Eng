#include <stdio.h>

void main() {
    FILE *fp;
    char str[50];

    fp = fopen("data.txt", "w");
    fprintf(fp, " Hello ");
    fclose(fp);

    fp = fopen("data.txt", "r");
    fscanf(fp, "%s", str);
    printf("File Content: %s", str);
    fclose(fp);

    getch();
}
