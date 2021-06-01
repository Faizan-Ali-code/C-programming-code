#include <stdio.h>

int main()
{
    int i;
    char a[7]={'f','a','i','z','a','n','\0'};
    for(i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }

    return 0;
}
