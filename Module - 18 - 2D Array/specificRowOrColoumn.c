#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c]; // This is allowed in C99 and later (Variable Length Array)

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // int specific_row;
    // scanf("%d", &specific_row);
    // for (int i = 0; i < c; i++) {
    //    printf("%d ", arr[specific_row][i]);
    // }
   int specific_col;
    scanf("%d", &specific_col);
    for (int i = 0; i < r; i++) {
       printf("%d ", arr[i][specific_col]);
    }
    return 0;
}
