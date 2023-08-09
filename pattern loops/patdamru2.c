
/*

task: create this pattern:-

4_4_3_2
 3_4_3
  2_4
   1
  2_4
 3_4_3
4_4_3_2

*/

/*

4_3_2_1_2_3_4
  3_2_1_2_3
    2_1_2
      1
    2_1_2
  3_2_1_2_3
4_3_2_1_2_3_4

*/

#include <stdio.h>
int main() {
    int rows = 4;
    for (int i = 0; i < rows; i++) {
        for (int s = 0; s < i; s++) {
            printf("  ");
        }
        for (int j = rows - i; j >= 1; j--) {
            printf("%d", j);
            if (j > 1) {
                printf("_");
            }
        }
        for (int j = 2; j <= rows - i; j++) {
            printf("_%d", j);
        }
        printf("\n");
    }
    for (int i = rows - 2; i >= 0; i--) {
        for (int s = 0; s < i; s++) {
            printf("  ");
        }
        for (int j = rows - i; j >= 1; j--) {
            printf("%d", j);
            if (j > 1) {
                printf("_");
            }
        }
        for (int j = 2; j <= rows - i; j++) {
            printf("_%d", j);
        }
        printf("\n");
    }
    return 0;
}



