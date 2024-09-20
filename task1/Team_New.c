#include <stdio.h>

int main() {
    int n, a, b, c, count, i;

    // Read the number of test cases
    scanf("%d", &n);

    // Initialize the count of valid cases
    count = 0;

    // Loop through each test case
    for (i = n; i > 0; i--) {
        // Read the values of a, b, and c for each test case
        scanf("%d %d %d", &a, &b, &c);

        // Check if any two values are both 1
        if (((a == b) && (a == 1)) || ((b == c) && (b == 1)) || ((c == a) && (c == 1))) {
            count++;
        }
    }

    // Print the count of valid cases
    printf("%d\n", count);

    return 0;
}
