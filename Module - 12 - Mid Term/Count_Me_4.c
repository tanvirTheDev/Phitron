#include <stdio.h>
#include <string.h>
int main(){
    char s[10001];
    scanf("%s", &s);
    int length = strlen(s);
    int count[26] = {0};
    for(int i = 0; i < length; i++)
    {
        char ch = s[i];

        if(s[i] >= 'a' && s[i] <= 'z' ){
            count[ch - 'a']++;
        }
        // printf("%c", s[i]);
    }
    for(int i = 0; i < 26; i++)
    {
        if (count[i] > 0) {
            printf("%c - %d \n", i + 'a', count[i]);
        }
    }
   
    return 0;
}