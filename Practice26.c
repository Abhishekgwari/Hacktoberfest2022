// Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter the Alphabet\n");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break;

    default:
        printf("Consonant\n");
        break;
    }
    return 0;
}