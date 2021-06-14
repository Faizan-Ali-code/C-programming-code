#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"How many Elements you wanna've in the array?";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements in the array :";
	
	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

