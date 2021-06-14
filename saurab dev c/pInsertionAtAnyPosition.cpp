#include<iostream>
using namespace std;

    int main(){
	int size,position,number,i;
	cout<<"Enter the size of the Array ?";
	cin>>size;
	int arr[size];
	cout<<"Enter the Elements in the Array :";
	
	//loop for getting elements in array
	for( i=0;i<size;i++){
		cin>>arr[i];
	}
	
	//loop for printing elements of the array
	for( i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	//Enter the position where you want to insert the new element
	cout<<"At which position you want to Enter the Element :";
	cin>>position;
	
	//check if the position is before or after the size of the array
	if(position<=0 || position>size){
		cout<<"Invalid Position";
	}
	
	//if the position is at the start then isert element at the start
	else if(position == 1){
	cout<<"You are inserting at Start"<<endl;
	cout<<"Enter the Element you want to Enter in the Array :";
	cin>>number;
	//start loop from end till the start as element is to be inserted at start
		for(i=size-1;i>=0;i--){
			arr[i+1] = arr[i];
		}
		//assign element at the start of the array.
		arr[0]=number;
		//increase the size of the array by one.
		size++;
		//print all elements in the array after insertion in the array
	    for(i=0;i<size;i++){
	    	cout<<arr[i]<<" ";
		}	
	}
	
	//if the position is equal to the size,means at the end, then isert element at the end.
	else if(position == size){
	cout<<"You are inserting at End"<<endl;
	cout<<"Enter the Element you want to Enter in the Array :";
	cin>>number;
	//assign element at the end of the array.
		arr[size]=number;
		//increase the size of the array by one.
		size++;
		//print all elements in the array after insertion in the array
	    for(i=0;i<size;i++){
	    	cout<<arr[i]<<" ";
		}	
	}
	
	
	else{
		cout<<"You are inserting at mid"<<endl;
	cout<<"Enter the Element you want to Enter in the Array :";
	cin>>number;
	for(i=size-1;i>=position-1;i--){
		arr[i+1] = arr[i];
	}
	arr[position-1]=number;
	size++;
	
	for(i=0;i<size;i++){
	cout<<arr[i]<<" ";
    }
    
    }
    
    










	return 0;
}

