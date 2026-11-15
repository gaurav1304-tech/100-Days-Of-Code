/*
Code 94: Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[500],word[500],longest[500]="";
    int i=0,j=0;
    fgets(s,sizeof(s),stdin);
    while(1) {
        if(s[i]!=' '&&s[i]!='\n'&&s[i]!='\0')word[j++]=s[i];
        else {
            word[j]='\0';
            if(j>(int)strlen(longest))strcpy(longest,word);
            j=0;
            if(s[i]=='\n'||s[i]=='\0')break;
        }
        i++;
    }
    printf("%s",longest);
    return 0;
}
