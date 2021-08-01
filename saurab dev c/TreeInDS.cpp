#include<iostream>
#include<conio.h>
using namespace std;
class tree{
	private:
		struct node{
			int data;
			node* left;
			node* right;
		};
		node* root=NULL;
	public:
	    void insert(int &n);	
};

void tree::insert(int &n){
	node* new_node = new node;
	new_node -> data = n;
	new_node -> left = NULL;
	new_node -> right = NULL;
	if(root == NULL){
		root = new_node;
		cout<<"\n\n "<<n<<"Value Inserted Successfully...";
	}
	else{
		node* pre = NULL;
		node* ptr = root;
		while(ptr != NULL){
			if(n > ptr -> data){
				pre = ptr;
		    	ptr = ptr -> right;
		    if(ptr == NULL){
		    	pre -> right = new_node;
		    	cout<<"\n\n node has been added successfully";
			}	
			
			}
			
			else if(n < ptr -> data){
				pre = ptr;
		    	ptr = ptr -> left;
		    if(ptr == NULL){
		    	pre -> left = new_node;
		    	cout<<"\n\n node has been added successfully";
			}	
			
			}
			
			else{
				cout<<"\n\n "<<n<<"Value is Dublicated...";
				delete new_node;
				break;
			}
			
			
		}
	}
}
	
	
	
int main(){
	tree t;
	int choice,n;
	p:
		system("cls");
	cout<<"\n\n\t\t\t\tControl Panel";
	cout<<"\n\n 1. Insert in Tree";
	cout<<"\n\n 2. Exit";
	cout<<"\n\n Enter your choice : ";
	cin>>choice;
	switch(choice){
		case 1:
			system("cls");
			cout<<"\n\n Enter the value you wanna insert : ";
			cin>>n;
			t.insert(n);
			break;
		case 2:
		    exit(0);
		default:
		    cout<<"\n\nChoice is Invalid, Enter Again.";		
	}
	getch();
	goto p;
	
	
	
	return 0;
}

