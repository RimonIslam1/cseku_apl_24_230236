#include <stdio.h>

int main() {
    int i, n;

    // Read the number of test cases
    scanf("%d", &n);

    // Loop through each test case
    for (i = 0; i < n; i++) {
        int a, b, c;

        // Read the values of a, b, and c for each test case
        scanf("%d %d %d", &a, &b, &c);

        // Check if any two numbers sum up to the third
        if (a + b == c || b + c == a || c + a == b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
