#include<iostream>
#include<conio.h>
using namespace std;

	class queue {
		private:
			struct node{
				string data;
				node* next;
			};
			node* head= NULL;
			node* tail=NULL;
			
		public:
			void push();
			void pop();
			void display();
			
	};
	
	void queue::push(){
		system("cls");
		cout<<"\n\n\t\t\t\t queue push method ";
		string name;
		cout<<"\n\n Enter value in queue ";
		cin>>name;
		node* new_node = new node;
		new_node -> data = name;
		if(head == NULL && tail == NULL){
			head = new_node;
			tail = new_node;
		}
		else{
			head -> next = new_node;
			tail = new_node;
		}
		cout<<"\n\n Name has been Inserted Successfully...";
		
		
	}
	
	void queue::pop(){
		system("cls");
		cout<<"\n\n\t\t\t\t Pop method of queue ";
		if(head == NULL && tail == NULL){
	    	cout<<"\n\n Queue using Linked List is empty ";
		}
		else{
			node* ptr = head;
			head = head -> next;
			delete ptr;
			cout<<"\n\n "<<ptr -> data<<" Node has been deleted successfully ";
			if(head == NULL){
				tail = NULL;
			}
		}
	}
	
	void queue::display(){
		system("cls");
		cout<<"\n\n\t\t\t\t Display function of queue ";
	    if(head == NULL && tail == NULL){
	    	cout<<"\n\n Queue using Linked List is empty ";
		}
		else{
			node* ptr = head;
			while(ptr != NULL){
				cout<<"\n\n Data from Queue : "<<ptr -> data;
				ptr = ptr -> next;
			}
		}
	}
	
	

int main(){
	queue q;
	p:
		system("cls");
	cout<<"\n\n\t\t\t\t Control Panel ";
	cout<<"\n\n 1. Push into queue";
	cout<<"\n\n 2. pop into queue";
	cout<<"\n\n 3. display from queue";
	cout<<"\n\n 4. exit";
	int choice;
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
		  q.push();
		  break;
		case 2:
		  q.pop();
		  break;
		case 3:
		  q.display();
		  break;  
		case 4:
		   exit(0);
		   break;
		   
		default:
		    cout<<"\n\n Invalid choice ... Enter choice agian...";      	
	};
	getch();
	goto p;
	
	
	
	return 0;
}

