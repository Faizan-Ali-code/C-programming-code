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
		    void display();
		    void display_reverse();
		
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
	
void doubly_link::display(){
	system("cls");
	cout<<"\n\n\t\t\t\t Display Doubly Linked List";
	if(head == NULL){
		cout<<"\n\n Doubly Linked List is Empty";
	}
	else{
		node* ptr = head;
		while(ptr != NULL){
			cout<<"\n\n Value : "<<ptr -> data;
		    ptr = ptr -> next;
		}
	}
}	

void doubly_link::display_reverse(){
	system("cls");
	if(head == NULL){
		cout<<"\n\n Doubly Linked List is Empty";
	}
	else{
		node* ptr = tail;
		while(ptr != NULL){
			cout<<"\n\n Value : "<<ptr -> data;
			ptr = ptr -> pre;
		}
	}
}
int main(){
	int choice,n;
	doubly_link l;
	p:
		system("cls");
    cout<<"\n\n\t\t\t\t Control Panel";
    cout<<"\n\n 1. Insert in Doubly Linked List";
    cout<<"\n\n 2. Display Doubly Linked List";
    cout<<"\n\n 3. Display Reverse Linked List";
    cout<<"\n\n 4. Exit";
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
		   l.display();	
		    break;
		case 3:
		   l.display_reverse();
		    break;   
    	case 4:
		    exit(0);
        default:
		    cout<<"\n\n Invalid Value ... Please Try Again...";
			 			
	}
	getch();
	goto p;
    	
	
	
	
	return 0;
}

