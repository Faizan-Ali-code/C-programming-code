#include<iostream>
#include<conio.h>
using namespace std;

   class singly_link{
	private:
		struct node{
			int data;
			node* next_node_address;
		};
	    node* head = NULL;
	public:
		void insert(int &n);
		
	
	};
void singly_link::insert(int &n){
	node* new_node_address = new node;
	new_node_address -> data = n;
	new_node_address -> next_node_address = NULL;
	if(head == NULL){
		head = new_node_address;
	}
	else{
		node* ptr = head;
		while(ptr -> next_node_address != NULL){
			ptr = ptr -> next_node_address;
		}
	    ptr -> next_node_address = new_node_address;
	}
}

int main(){
	int n;
	singly_link s;
	cout<<"\n\n Enter Value : ";
	cin>>n;
	s.insert(n);
	
	
	return 0;
}

