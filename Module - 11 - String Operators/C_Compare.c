#include <stdio.h>
#include <string.h>

// int main() 
// {
//     char a[21], b[21];
//     scanf("%s %s", &a, &b);
//     // printf("%s %s", a, b);
//     int i = 0;
//     while(1)
//     {
//         if(a[i] == '\0' && b[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if(a[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if(b[i] == '\0')
//         {
//             printf("%s", b);
//             break;
//         }
//         else if(a[i] == b[i])
//         {
//             i++;
//         }
//         else if(a[i] < b[i])
//         {
//             printf("%s", a);
//             break;
//         }
//         else if(a[i] > b[i])
//         {
//             printf("%s", b);
//             break;
//         }
//     }

//     return 0;
// }


// built in fuction

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);
    int val = strcmp(a, b);
    // printf("%d", val);
    // int i = 0;
    while(1)
    {
        if(val == -1)
        {
            printf("%s", a);
            break;
        }
        else if(val == 1)
        {
            printf("%s", b);
            break;
        }
        else if(val == 0)
        {
            printf("%s", a);
            break;
        }
    }
    return 0;
}