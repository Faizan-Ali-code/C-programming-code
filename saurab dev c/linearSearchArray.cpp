#include<iostream>
using namespace std;

int linearSearch(int,int,int);

	int linearSearch(int arr[],int n,int key){
		for(int i=0;i<n;i++){
			if(arr[i] == key){
				return i;
			}
		}
		return -1;
	}

int main(){
	
	int n,i;
	cout<<"Enter the size of Array :";
	cin>>n;
	int arr[n];
	cout<<"Enter the Elements in Array :";
	
	for(i=0;i<n;i++){
		
		cin>>arr[i];
	}
	
	cout<<"Enter the Key whose index is required :";
	int key;
    cin>>key;
    
//    int result = linearSearch(arr,n,key);
//	cout<<result<<endl;
	cout<<linearSearch(arr,n,key)<<endl;
	
	return 0;
}
