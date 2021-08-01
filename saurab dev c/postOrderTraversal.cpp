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
		
	public:
		node* root=NULL;
	    void insert(int &n);
		void preorder(node *pointerr);	
		void inorder(node *pointerr);
		void postorder(node *pointerr);
		
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
				cout<<"\n\n "<<n<<" Value is Dublicated...";
				delete new_node;
				break;
			}
			
			
		}
	}
}
	
void tree::preorder(node *pointerr){
	if(root == NULL){
		cout<<"\n\n tree is empty...";
	}
	else{
		
		if(pointerr != NULL){
			cout<<"\n"<<pointerr -> data;
			preorder(pointerr -> left);
			preorder(pointerr -> right);
		}
	}
}

void tree::inorder(node* pointerr){
		if(root == NULL){
		cout<<"\n\n tree is empty...";
	}
	else{
		
		if(pointerr != NULL){
			inorder(pointerr -> left);
			cout<<"\n"<<pointerr -> data;
			inorder(pointerr -> right);
		}
	}
}

void tree::postorder(node* pointerr){
		if(root == NULL){
		cout<<"\n\n tree is empty...";
	}
	else{
		
		if(pointerr != NULL){
			postorder(pointerr -> left);
			postorder(pointerr -> right);
			cout<<"\n"<<pointerr -> data;

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
	cout<<"\n\n 2. pre Order Traversal in tree";
	cout<<"\n\n 3. In Order Traversal in tree";
	cout<<"\n\n 4. Post Order Traversal in tree";
	cout<<"\n\n 5. Exit";
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
		    system("cls");
			t.preorder(t.root);
			break;
		case 3:
		    system("cls");
			t.inorder(t.root);
			break;
		case 4:
		    system("cls");
			t.postorder(t.root);
			break;			
		case 5:
		    exit(0);
		default:
		    cout<<"\n\nChoice is Invalid, Enter Again.";		
	}
	getch();
	goto p;
	
	
	
	return 0;
}

