#include <stdio.h>

int main()
{
   
    char a[20]={"faizan"}; //compiler will append null char at end.
    // scanf("%c",&a[0]); //it will create problem.
   gets(a);
   // printf("%c",a);
    puts(&a[0]);
//    puts(a);


    return 0;
}

//this program was ambigious as it might uses updated or newest version of compiler and lecture maybe new.
