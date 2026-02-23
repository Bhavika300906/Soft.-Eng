#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function declarations
void reverseString(char str[]);
void copyString(char str[]);
void concatString(char str[]);
void checkPalindrome(char str[]);
void stringLength(char str[]);
void charFrequency(char str[]);
void countVowelsConsonants(char str[]);
void countSpacesDigits(char str[]);

int main() {
    char str[100];
    int choice;
    int cont = 1;

    while(cont == 1) {
        printf("\n====== STRING OPERATIONS MENU ======\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate strings\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Length of string\n");
        printf("6. Frequency of a character\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Count spaces and digits\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        if(choice >= 1 && choice <= 8) {
            printf("Enter a string: ");
            gets(str);
        }

        switch(choice) {
            case 1: reverseString(str); break;
            case 2: concatString(str); break;
            case 3: checkPalindrome(str); break;
            case 4: copyString(str); break;
            case 5: stringLength(str); break;
            case 6: charFrequency(str); break;
            case 7: countVowelsConsonants(str); break;
            case 8: countSpacesDigits(str); break;
            case 9: 
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

        printf("\nDo you want to continue? (Press 1 to continue): ");
        scanf("%d", &cont);
        getchar(); // clear buffer
    }

    return 0;
}

// Function to reverse string
void reverseString(char str[]) {
    int i, len = strlen(str);
    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to copy string
void copyString(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

// Function to concatenate string
void concatString(char str[]) {
    char str2[100];
    printf("Enter another string: ");
    gets(str2);
    strcat(str, str2);
    printf("Concatenated string: %s\n", str);
}

// Function to check palindrome
void checkPalindrome(char str[]) {
    int i, len = strlen(str), flag = 1;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("String is Palindrome\n");
    else
        printf("String is not Palindrome\n");
}

// Function to find length
void stringLength(char str[]) {
    printf("Length of string: %d\n", strlen(str));
}

// Function to find frequency of character
void charFrequency(char str[]) {
    char ch;
    int i, count = 0;
    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            count++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[]) {
    int i, v = 0, c = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                v++;
            else
                c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", v, c);
}

// Function to count spaces and digits
void countSpacesDigits(char str[]) {
    int i, spaces = 0, digits = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            spaces++;
            
        else if(isdigit(str[i]))
            digits++;
    }
    printf("Spaces: %d\nDigits: %d\n", spaces, digits);
}
