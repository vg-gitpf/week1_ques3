#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverseString(char str[]);

int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
