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
		void display();
	
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

void singly_link::display(){
	system("cls");
	cout<<"\n\n\t\t\t\t Display Record";
	if(head == NULL){
		cout<<"\n\n Link List is Empty...";
	}
	else{
		node* ptr = head;
		while(ptr != NULL){
			cout<<"\n Value :"<<ptr -> data ;
			ptr = ptr -> next_node_address;
		}
	}
}

int main(){
	int n,choice;
	singly_link s;
	p:
		system("cls");
	cout<<"\n\n\t\t\t\t Control Panel";
    cout<<"\n\n 1. Insert Record";
    cout<<"\n 2. Display Record";
	cout<<"\n 2. Exit";
		
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
			system("cls");
			cout<<"\n\n\t\t\t\t Insert Record";
			cout<<"\n\n Enter Value : ";
			cin>>n;
			s.insert(n);
			break;
		case 2:
			cout<<"\n\n\t\t\t\t Display Record";
			
			s.display();
			break;	
		case 3:
			exit(0);
		default:
		    cout<<"\n\n Invalid value ... Please try Agian";	
	}
	    getch();
	    goto p;
	
	return 0;
}

