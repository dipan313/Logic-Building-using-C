#include <stdio.h>

int main() {
    int num, i, k, temp, rem, div;
    printf("Enter a number:\n");
    scanf("%d", &num);
    
    printf("Repetitive digits in %d are: ", num);
    
    for (i = num; i > 0; i = i / 10) {
        rem = i % 10;
        div = i / 10;
        
        for (k = div; k > 0; k = k / 10) {
            temp = k % 10;
            if (temp == rem) {
                printf("%d ", temp);
                break;
            }
        }
    }
    
    return 0;
}
