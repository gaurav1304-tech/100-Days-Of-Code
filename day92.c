/*
Code 92: Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main() {
    char s[500];
    int f[26]= {
        0
    }
    ,i=0;
    fgets(s,sizeof(s),stdin);
    while(s[i]!='\0'&&s[i]!='\n') {
        if(s[i]>='a'&&s[i]<='z') {
            f[s[i]-'a']++;
            if(f[s[i]-'a']==2) {
                putchar(s[i]);
                return 0;
            }
        }
        i++;
    }
    printf("No repeating alphabet");
    return 0;
}
