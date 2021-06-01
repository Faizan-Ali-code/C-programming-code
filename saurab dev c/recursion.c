#include<stdio.h>

int main(){
	int v;
	v = sum(5);
	printf("%d",v);
	
	
	return 0;
}
 int sum (int a){
 	int s;
 	if(a==1){
 		return (a);
	 }
	 else{
	 	s=a+sum(a-1);
	 	return(s);
	 }
 }
