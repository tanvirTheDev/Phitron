#include <stdio.h>


int sum(int a, int b)
{
    int sum = a + b;
    printf("%d", sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    

    return 0;
}
