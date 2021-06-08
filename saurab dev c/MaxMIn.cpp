#include<iostream>
using namespace std;

int main(){
	int n,max,min,i;
	cout<<"Enter the size of Array :";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements in Array :";
	
	for(i=0;i<n;i++){
		
		cin>>arr[i];
	}
	max = arr[0];
	min = arr[1];
	
	for(i=0;i<n;i++){
		
		if(max < arr[i]){
			max = arr[i];
		}
		
		if(min > arr[i]){
			min = arr[i];
		}
	}
	cout<<"Maximum no. is :"<<max<<endl;
	cout<<"minimum no. is :"<<min<<endl;

	
	
	
	return 0;
}
