#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int start = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        space--;
        for(int j = 1; j <= start; j++)
        {
            printf("*");
        }
        
        start = start + 2;
        printf("\n");
    }
    return 0;
}
