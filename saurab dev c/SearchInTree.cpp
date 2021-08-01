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
		void search();	
};

void tree::insert(int &n){
	node* new_node = new node;
	new_node -> data = n;
	new_node -> left = NULL;
	new_node -> right = NULL;
	if(root == NULL){
		root = new_node;
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
		    	pre = ptr -> left;
		    if(ptr == NULL){
		    	ptr -> left = new_node;
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
	
void tree::search(){
	system("cls");
	if(root == NULL){
		cout<<"\n\n Tree is Empty";
	}
	else{
		int found=0,n;
		cout<<"\n\n Enter value you wanna search : ";
		cin>>n;
		node* ptr = root;
		while(ptr != NULL){
			
			if(n == ptr -> data){
				cout<<"\n\n Data is found "<<n;
				found++;
				break;
			}
			else if(n > ptr -> data){
				ptr = ptr -> right;
			}
			else{
				ptr = ptr -> left;
			}
		}
		if(found == 0){
			cout<<"\n\n Value is not found...";
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
	cout<<"\n\n 2. Search from tree";
	cout<<"\n\n 3. Exit";
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
		    t.search();
			break;	
		case 3:
		    exit(0);
		default:
		    cout<<"\n\nChoice is Invalid, Enter Again.";		
	}
	getch();
	goto p;
	
	
	
	return 0;
}

