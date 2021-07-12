#include<iostream>
#include<conio.h>
using namespace std;


     class doubly_link{
		private:
			struct node{
				node* pre;
				int data;
				node* next;
			};
		node* head = NULL;
		node* tail = NULL;
		public:
			void insert(int n);
		
		
	};
	
void doubly_link::insert(int n){
	system("cls");
	node* new_node = new node;
	new_node -> data = n;
	new_node -> pre = NULL;
	new_node -> next = NULL;
	
	if(head == NULL){
		head = new_node;
		tail = new_node;
	}
	else{
		tail -> next = new_node;
		new_node -> pre = tail;
		tail = new_node;
	}
	
	
	
	
	
	
	
	
}	
	
	
int main(){
	int choice,n;
	doubly_link l;
	p:
    cout<<"\n\n\t\t\t\t Control Panel";
    cout<<"\n\n 1. Insert in Doubly Linked List";
    cout<<"\n\n 2. Exit";
    cout<<"\n\n Enter Your choice :";
    cin>>choice;

    switch(choice){
    	
    	case 1:
    		system("cls");
    		cout<<"\n\n\t\t\t\t Insert Record";
    		cout<<"\n\n Enter Value for insertion : ";
    		cin>>n;
    		l.insert(n);
    		break;
    	case 2:
		    exit(0);
        default:
		    cout<<"\n\n Invalid Value ... Please Try Again...";
			 			
	}
	getch();
	goto p;
    	
	
	
	
	return 0;
}

