/*
Code 95: Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[500],b[500],d[1000];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
    if(strlen(a)!=strlen(b)) {
        printf("Not rotation");
        return 0;
    }
    strcpy(d,a);
    strcat(d,a);
    printf(strstr(d,b)?"Rotation":"Not rotation");
    return 0;
}
