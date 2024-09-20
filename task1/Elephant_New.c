#include <stdio.h>

int main() {
    int n;
    // Read the input value for n
    scanf("%d", &n);

    // Calculate the number of steps required
    // Adding 4 to n and then dividing by 5 ensures rounding up
    int steps = (n + 4) / 5;

    // Print the result
    printf("%d\n", steps);

    return 0;
}
