#include <stdio.h>

int main() {
    int N;
    int count = 0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &N);

    // Count the number of digits
    while (N != 0) {
        N /= 10;
        count++;
    }

    // Output the result
    printf("Total number of digits: %d\n", count);

    return 0;
}
