#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int count2 = 0;
    int count3 = 0;
    for(int i = 0; i < n; i++)
    {        
        if(a[i] % 2 == 0)
        {
            count2++;
        }
        
        if(a[i] % 2 == 0)
        continue;
        if(a[i] % 3 == 0)
        {
            count3++;
        }
    }
    printf("%d %d", count2, count3);
    return 0;
}
