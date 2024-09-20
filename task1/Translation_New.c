#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse_string(char *str) {
    int i, len;
    len = strlen(str);

    // Swap characters from the beginning and end of the string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char s[102], t[102];

    // Read two strings from input
    scanf("%s", s);
    scanf("%s", t);

    // Reverse the second string
    reverse_string(t);

    // Compare the first string with the reversed second string
    if (strcmp(s, t) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
