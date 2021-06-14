#include<iostream>
using namespace std;

int main(){
	int size,position,number,i;
	cout<<"Enter the size of the Array ?";
	cin>>size;
	int arr[size];
	cout<<"Enter the Elements in the Array :";
	
	for( i=0;i<size;i++){
		cin>>arr[i];
	}
	
	for( i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	cout<<"At which position you want to Enter the Element :";
	cin>>position;
	
	if(position<=0 || position>size){
		cout<<"Invalid Position";
	}
	else{
	cout<<"Enter the Element you want to Enter in the Array :";
	cin>>number;
	for(i=size-1;i>=position-1;i--){
		arr[i+1] = arr[i];
	}
	arr[position-1]=number;
	size++;
}
for(i=0;i<size;i++){
	cout<<arr[i]<<" ";
}










	return 0;
}

