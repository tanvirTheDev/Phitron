#include <stdio.h>

int count_before_one(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            break;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int result = count_before_one(arr, n);
    printf("%d", result);
    return 0;
}
