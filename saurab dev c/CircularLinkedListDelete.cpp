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
	   void search();
	   void update();
	   void sum_count_avg();
	   void delelte_Node();	
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

void circular_link::search(){
	system("cls");
	if(head == NULL){
		cout<<"\n\n Circualr Linked List is empty...";
	}
	else{
		int c=0,found=0,n;
		cout<<"\n\n Enter the Value which you wanna search : ";
		cin>>n;
		node* ptr = head;
		while(c!=size){
			if(n == ptr -> data){
				cout<<"\n\n Value has been found : "<<ptr -> data;
				found++;
				break;

			}ptr = ptr -> next;
			c++;
		}
		if(found == 0){
			cout<<"\n\n Value is not found in Circular linked list...";
		}
	}
}

void circular_link::update(){
	system("cls");
	if(head==NULL){
		cout<<"\n\n Circular Linked List is empty...";
	}
	else{
		int c=0,found=0,n;
		cout<<"\n\n Enter Value which you wanna replace with : ";
		cin>>n;
		node* ptr = head;
		while(c!=size){
			if(n == ptr -> data){
				cout<<"\n\n Enter the updated Value : ";
				cin>>n;
				ptr -> data = n;
				found++;
				break;
			}ptr = ptr -> next;
			c++;
			
		}if(found == 0){
			cout<<"\n\n Value has not been found ";
		}
	}
}

void circular_link::sum_count_avg(){
	system("cls");
	if(head == NULL){
		cout<<"\n\n Circular Linked List is Empty...";
	}
	else{
		int c=0,sum=0;
		node* ptr = head;
		while(c!=size){
			sum += ptr -> data;
			ptr = ptr -> next;
			c++;
		}
		cout<<"\n\n Numbers of Nodes : "<<size;
		cout<<"\n\n Sum of All Nodes : "<<sum;
		cout<<"\n\n Average of All Nodes : "<<sum/size;
	}
}

void circular_link::delelte_Node(){
	system("cls");
	if(head == NULL){
		cout<<"Circular Linked list is empty...";
	}
	else{
		int n,found=0;
		cout<<"Enter the Value which u wanna delete  : ";
		cin>>n;
		node* ptr = head;
		//for deleting very first node and has only one node in list
		if(size == 1 && n == ptr -> data){
			head = NULL;
			tail = NULL;
			size--;
			found++;
			delete ptr;
			cout<<"\n\nNode has been deleted successfully...";
		}
		//for deleting very first node but has many nodes
		else if(n == ptr -> data){
			head = head -> next ;
			tail -> next = head; 
			size--;
			found++;
			cout<<"\n\n Node has been deleted successfully...";
			delete ptr;
			
		}
		//for deleting last node in the list
		else if(n == tail -> data){
			while(ptr -> next != tail ){
				
				ptr = ptr -> next;
			}
			node* pre =  tail;
			tail = ptr;
			tail -> next = head;
			size--;
			found++;
			cout<<"\n\n Node has been deleted successfully...";
			delete pre;
			
		}
		//for deleting node at the mid of the list where nodes are many 
		else {  
			node* pre_ptr = head;
			ptr = head -> next;
			int c = 1;
			while(c !=size){
				if(n == ptr -> data){
					pre_ptr -> next = ptr -> next;
					size--;
			        found++;
			        cout<<"\n\n Node has been deleted successfully...";
		         	delete ptr;
		         	break; 
				}
				pre_ptr = ptr;
				ptr = ptr -> next;
				c++;
			}
		}if(found == 0){
			cout<<"\n\n Value is not found...";
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
	cout<<"\n\n 3. Search Record";
	cout<<"\n\n 4. Update Record";
	cout<<"\n\n 5. Sum , Count and Average Record";
	cout<<"\n\n 6. Delete Node in Circular Linked List";
	cout<<"\n\n 7. exit";
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
		    l.search();
			break;
		case 4:
		    l.update();
			break;
		case 5:
		    l.sum_count_avg();
			break;
		case 6:
		    l.delelte_Node();
			break;				
		case 7:
			exit(0);
			break;
			
		default:
		    cout<<"\n\n Entered choice is invalid";	
	}
	
	getch();
	goto p;
	
	
	return 0;
}

