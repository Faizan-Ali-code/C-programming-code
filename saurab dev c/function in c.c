#include<stdio.h>
int add (int,int);
int main(){
	
	int x,y,s;
	printf("Enter two numbers for addition\n");
	scanf("%d%d",&x,&y);
	s = add(x,y);
	printf("sum is %d",s);
	
	return 0;
}
int add(int a,int b){
	int c;
	c = a+b;
	return (c);
}
