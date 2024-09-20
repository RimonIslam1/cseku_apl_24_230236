#include <stdio.h>

int main() {
    int t;
    // Read the number of test cases
    scanf("%d", &t);

    while (t--) {
        long long n;
        // Read the value of n for each test case
        scanf("%lld", &n);

        // Check the value of n and print the result accordingly
        if (n <= 2) {
            printf("0\n");
        } else if (n % 2 != 0) {
            // If n is odd, print n/2
            printf("%lld\n", n / 2);
        } else {
            // If n is even, print (n/2) - 1
            printf("%lld\n", (n / 2) - 1);
        }
    }

    return 0;
}
