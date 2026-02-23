#include <stdio.h>
#include <string.h>

void main() {
    char s1[50], s2[50];

    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    strcat(s1, s2);

    printf("Concatenated String: %s\n", s1);
    printf("Length: %lu", strlen(s1));

    getch();
}
