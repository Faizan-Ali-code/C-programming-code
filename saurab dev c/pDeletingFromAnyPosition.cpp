#include<iostream>
using namespace std;

int main(){
	int size,i,position,item;
	cout<<"How many Element you want in the array? ";
	cin>>size;
	int arr[size];
	cout<<"Enter the Elements in the Array ";
	for(i=0;i<size;i++){
		cin>>arr[i];
	}
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	cout<<"Enter the position where you want to delete element :";
	cin>>position;
	
	if(position <=0 || position >size){
		cout<<"Invalid Position"<<endl;
	}
	else if(position == 1){
		cout<<"You are deleting from the Start"<<endl;
		item = arr[position-1];
		for(i=0;i<size-1;i++){
			arr[i] = arr[i+1];
		}size--;
		
		for(i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\nDeleted Element is :"<<item;
	}
	
	else if(position == size){
	    cout<<"you are deleting from "<<size<<"th position"<<endl;
		item = arr[position-1];
		arr[position-1] = 0;
	     size--;
	    for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	    }
	    cout<<"\nDeleted Element is :"<<item;

   }
	else {
		cout<<"You are deleting from "<<position<<"th position"<<endl;
		item = arr[position-1];
		for(i=position-1;i<size-1;i++){
			arr[i] = arr[i+1];
		}size--;
		
		for(i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\nDeleted Element is :"<<item;
	}
	
	return 0;
}

