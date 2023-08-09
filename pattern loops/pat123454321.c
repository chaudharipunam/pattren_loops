/*

Enter the number of rows: 6
                1 
             1  2  1 
          1  2  3  2  1 
       1  2  3  4  3  2  1 
    1  2  3  4  5  4  3  2  1 
 1  2  3  4  5  6  5  4  3  2  1 

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf("   ");
        }

        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%2d ", j);
        }

        // Print decreasing sequence
        for (int k = i - 1; k >= 1; k--) {
            printf("%2d ", k);
        }

        printf("\n");
    }

    return 0;
}

