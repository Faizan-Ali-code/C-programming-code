#include<stdio.h>
#include<conio.h>

//make a program to check no is positive or negative.
int main(){
	
	int a;
	
    printf("Enter a number : %d");
    scanf("%d",&a);
//    printf("you entered %d",a);
	if(a>0){
		printf("positive number");
	}
	if(a<0){
		printf("negative number");
	}
	if(a==0){
		printf("invalid number");
	}
	
    	
	return 0;
}

