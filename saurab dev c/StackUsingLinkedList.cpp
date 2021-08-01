#include<iostream>
#include<conio.h>
using namespace std;
int i = -1;	
	class stack{
		private:
			struct node{
				string data;
				node* pre ;
			};
			node* head;
			public:
				void push();
				void pop();
				void display();
	};
	
	void stack::push(){
		system("cls");
		cout<<"\n\n\t\t\t\t Stack push method using Linked list";
		string name;
		cout<<"\n\n Enter the value in the stack : ";
		cin>>name;
		node* new_node = new node;
		new_node -> data = name;
		new_node -> pre = head;
		head = new_node;
		cout<<"\n\n "<<name<<" is sucessfully inserted...";
	}
	
	void stack::pop(){
		system("cls");
		cout<<"\n\n\t\t\t\t Pop method of stack using linked list";
		if(head == NULL){
			cout<<"\n\n Stack is empty using Linked List is empty...";
		}
		else{
			node* ptr = head;
			head = head -> pre;
			cout<<"\n\n "<<ptr -> data<<" deleted successfully...";
			delete ptr;
		}
		
	}
	
	void stack::display(){
		system("cls");
		cout<<"\n\n\t\t\t\t Display function of stack using linked list";
	  if(head == NULL){
			cout<<"\n\nStack is empty using Linked List is empty...";
		}
	  else{
		node* ptr = head;
		while(ptr != NULL){
			cout<<"\n\n Data from Stack "<<ptr -> data;
			ptr = ptr -> pre; 
		}
	 }
	}

int main(){
	stack s;
	p:
		system("cls");
	cout<<"\n\n\t\t\t\t Control Panel ";
	cout<<"\n\n 1. Push into stack";
	cout<<"\n\n 2. pop into stack";
	cout<<"\n\n 3. display from stack";
	cout<<"\n\n 4. exit";
	int choice;
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
		  s.push();
		  break;
		case 2:
		  s.pop();
		  break;
		case 3:
		  s.display();
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

