#include<stdio.h>
#include<conio.h>

//make a program to check no is positive or negative with conditional operator.
int main(){
	
    int a;
    printf("Enter a number : %d");
    scanf("%d",&a);
    a>0 ? printf("positive no.") : printf("negative no.");

    	
	return 0;
}

