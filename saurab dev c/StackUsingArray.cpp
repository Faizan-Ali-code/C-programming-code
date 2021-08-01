#include<iostream>
#include<conio.h>
using namespace std;
int i = -1;	
	class stack{
		private:
			
			string stk[10];
		public:
			void push();
			void pop();
			void display();
	};
	
	void stack::push(){
		system("cls");
		cout<<"\n\n\t\t\t\t Stack push method ";
		if(i>9){
			cout<<"\n\n Stack is full ";
		}
		else{
			cout<<"\n\n Enter name in stack : ";
//			string name;
//			cin>>name;
//			stk[++i] = name;
//			cout<<name<<"\n\n is inserted successfully...";
			cin>>stk[++i];
		}
	}
	
	void stack::pop(){
		system("cls");
		cout<<"\n\n\t\t\t\t Pop method of stack ";
		if(i<0){
			cout<<"\n\nStack is empty, So no items to pop out ";
		}
		else{
			cout<<"\n\n pop from stack is : "<<stk[i--];
		}
	}
	
	void stack::display(){
		system("cls");
		cout<<"\n\n\t\t\t\t Display function of stack ";
		if(i<0){
			cout<<"\n\n Stack is Empty, So no items to display ";
		}
		else{
			for(int a=i;a>=0;a--){
				cout<<"\n\n Item from Stack is : "<<stk[a];
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

