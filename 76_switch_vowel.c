#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                // Skip vowels
                break;
            default:
                result[j++] = str[i];
        }
        i++;
    }
  result[j]='\0';
    printf("string without vowels: %s",result);
    return 0;
}
    