/*
Code 89: Count frequency of a given character in a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[500],ch;
    int i,count=0;
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")='\0';
    scanf(" %c",&ch);
    for(i=0;s[i];i++)if(s[i]==ch)count++;
    printf("%d",count);
    return 0;
}
