#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number of elements you want to have in array";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements in Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<" ";
		cin>>arr[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
		     	int temp = arr[j];
		     	arr[j] = arr[i];
		     	arr[i] = temp;
			}
			
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		}cout<<endl;
	
	
	return 0;
}
