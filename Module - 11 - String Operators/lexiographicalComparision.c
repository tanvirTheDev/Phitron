#include <stdio.h>
#include <string.h>

// int main() 
// {
//     char a[101], b[101];
//     scanf("%s %s", &a, &b);
//     int i = 0;
//     while(1)
//     {
//         if( a[i] == '\0' && b[i] == '\0')
//         {
//             printf("Equal");
//             break;
//         }
//         else if(a[i] == '\0')
//         {
//             printf("A is smaller");
//             break;
//         }
//         else if(b[i] == '\0')
//         {
//             printf("B is smaller");
//             break;
//         }
//         else if(a[i] == b[i])
//         {
//             i++;
//         }
//         else if(a[i] < b[i])
//         {
//             printf("A is smaller");
//             break;
//         }
//         else if(a[i] > b[i])
//         {
//             printf("B is smaller");
//             break;
//         }
//     }
  
//     return 0;`````
// }



// bulit in fuction for comparision

int main() 
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int val = strcmp(a, b);

    //  Note : 
    // -1 = 1st string is smail
    // 1 = 2nd string is smail
    // 0 = Equal

    if(val < 0)
    {
        printf("A is smaller");
    }
    else if(val == 0)
    {
        printf("Equal");
    }
    else if(val > 0){
        printf("B is smaller");
    }

    return 0;
}