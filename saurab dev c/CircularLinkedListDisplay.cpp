#include<iostream>
#include<conio.h>
using namespace std;
int size=0;
class circular_link{
	
	private:
		struct node{
			int data;
			node* next;
		};
		node* head;
		node* tail;
	public:
	   void insert(int n);
	   void display();	
};

void circular_link::insert(int n){
	system("cls");
	node* new_node = new node;
	new_node -> data = n;
	new_node -> next = NULL;
	size++;
	
	if(head == NULL){
		
		head = new_node;
		tail = new_node;
		new_node -> next = head;
	} 
	else{
		tail -> next = new_node;
		tail = new_node;
		tail -> next = head;
	}
	cout<<"\n\n Node is created successfully...";
}	
	
void circular_link::display(){
	system("cls");
	if(head == NULL){
		cout<<"\n\n Circular Linked List is Empty...";
	}
	else{
		int c =0;
		node* ptr = head;
		while(c!=size){
			cout<<"\n\n Data : "<<ptr -> data;
			ptr = ptr -> next;
			c++;
		}
	}
	
}	
int main(){
	circular_link l;
	p:
		system("cls");
	cout<<"\n\n\t\t\t\t control panel";
	cout<<"\n\n 1. Insert Record";
	cout<<"\n\n 2. Display Record";
	cout<<"\n\n 3. exit";
	int choice;
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
			system("cls");
			int n;
			cout<<"\n\n Enter Value for insertion : ";
			cin>>n;
	     	l.insert(n);	
	    	break;
		case 2:
			l.display();
			break;
		case 3:
			exit(0);
			break;
			
		default:
		    cout<<"\n\n Entered choice is invalid";	
	}
	
	getch();
	goto p;
	
	
	return 0;
}

