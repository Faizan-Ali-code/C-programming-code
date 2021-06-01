#include<stdio.h>

int main(){
	int a,b,sum;
	int choice;
	//showing the user the available options
	printf("Addition");
	printf("Odd or even");
	printf("for printing real numbers upto the number");
	
	//getting input from user
	
	printf("Enter number");
	scanf("%d",choice);
	
	//filtering out the user's choice by switch statement.
	switch(choice){
		case 1:
			
			printf("Enter two numbers for addition");
			scanf("%d %d",a,b);
			sum = a+b;
			printf("sum is :%d ",sum);
			break;
			
		case 2:
			int a;
			printf("Enter two numbers to check");
			scanf("%d ",a);
			if(a%==0){
			printf("number is even");	
			}
			else{
			printf("number is odd");
			}
			
			break;
			
		case 3:
			int a;
		    printf("enter a number to print upto");
			scanf("%d",a);
			for(int b=1;b<=a;b++){
				printf("%d",b);
			}		
			break;
	}


	
	
	
	return 0;
}

