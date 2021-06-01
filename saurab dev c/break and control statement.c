#include<stdio.h>

int main(){
	
	int i=0,j;
	while(i<5){
		printf("Enter the number: ");
		scanf("%d",j);
		printf("program will only run if the value is less than 1");
		
		if(j>0){
			printf("break applied");
			break;
		}
		
		i++;
	}
	i>0?printf("ends successfully"):printf("break applied");
	
	
	return 0;
}

