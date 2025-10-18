#include <stdio.h>

int main() {
    int n, num, count = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 != 0) {
            count++;
        }
    }
    
    printf("Number of odd numbers: %d\n", count);
    
    return 0;
}
