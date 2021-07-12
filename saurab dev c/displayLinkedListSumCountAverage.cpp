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
		    void sum_count_avg();
		
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
	cout<<"\n\n Insertion is done in Doubly Linked List... ";
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

void doubly_link::sum_count_avg(){
	system("cls");
	cout<<"\n\n\t\t\t\t Sum, Count , Avg Record";
	int count=0,sum=0;
	float average;
	if(head == NULL){
		cout<<"\n\n Doubly Linked list is emtpy...";
	}
	else{
		node* ptr = head;
		while(ptr != NULL)
		{
			count++;
			sum = sum + ptr -> data;
			average = sum / count;
			ptr = ptr -> next;
			
		}
		cout<<"\n\n Total Number of Values : "<< count;
		cout<<"\n\n Total sum of Values : "<<sum;
		cout<<"\n\n Average of All values : "<<average;
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
    cout<<"\n\n 4. Sum , Count , Average";
    cout<<"\n\n 5. Exit";
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
			l.sum_count_avg();
			break;
		   	  
    	case 5:
		    exit(0);
        default:
		    cout<<"\n\n Invalid Value ... Please Try Again...";
			 			
	}
	getch();
	goto p;
    	
	
	
	
	return 0;
}

