// C program to sort an array of strings
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to sort the values
void sort(char **names, int n)
{
    int i, j;

    // Perform sort operation using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap the pointers directly instead of copying strings
                char *temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

// Driver code
int main()
{
    char **names;
    int n, i;

    printf("Enter the number of names: ");
    scanf("%d", &n);  // ✅ Removed extra newline in scanf

    // Allocate memory for n string pointers
    names = (char **)calloc(n, sizeof(char *));
    if (names == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input strings
    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        names[i] = (char *)calloc(30, sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        scanf("%s", names[i]);
    }

    // Sort the names
    sort(names, n);

    // Output sorted names
    printf("\nArray after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
        free(names[i]); // ✅ Free memory for each string
    }

    free(names); // ✅ Free memory for array of pointers

    return 0;
}
