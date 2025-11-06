#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase for uniformity
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z'))
            printf("'%c' is a consonant.\n",ch);
            else
            printf("'%c' is not an alphat character.\n",ch);
    }
    return 0;
}
               