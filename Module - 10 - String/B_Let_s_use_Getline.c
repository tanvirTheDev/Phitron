#include <stdio.h>
#include <string.h>

int main(){
    char s[1000001];
    gets(s);
    for(int i = 0; s[i] != '\\'; i++){
        printf("%c", s[i]);
    }
    // fgets(s, 14, stdin);
    // printf("%s\n", s);
}