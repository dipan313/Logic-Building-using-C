#include <stdio.h>

int main() {
    int n, arr[20], i, a, count = 0;
    
    printf("How many numbers?\n");
    scanf("%d", &n);
    
    printf("Enter numbers\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    } 
    
    printf("What are you looking for?\n");
    scanf("%d", &a);
    
    printf("Positions of %d in the array:\n", a);
    for (i = 0; i < n; i++) {
        if (a == arr[i]) {
            printf("Element: %d, Position: %d\n", arr[i], i);
            count++;
        }
    }
    
    printf("The frequency of %d is %d\n", a, count);
    
    return 0;
}
