/*
Code 91: Remove all vowels from a string.
*/

#include <stdio.h>

int main() {
    char s[500],ch,l;
    int i=0;
    fgets(s,sizeof(s),stdin);
    while((ch=s[i++])!='\0'&&ch!='\n') {
        l=(ch>='A'&&ch<='Z')?ch+32:ch;
        if(!(l=='a'||l=='e'||l=='i'||l=='o'||l=='u'))putchar(ch);
    }
    return 0;
}
