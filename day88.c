/*
Code 88: Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main() {
    char s[500];
    inat i=0;
    fgets(s,sizeof(s),stdin);
    while(s[i]!='\0'&&s[i]!='\n') {
        putchar(s[i]==' '?'-':s[i]);
        i++;
    }
    return 0;
}
