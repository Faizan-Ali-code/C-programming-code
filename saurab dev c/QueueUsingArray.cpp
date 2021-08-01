#include<iostream>
#include<conio.h>
using namespace std;
int i = -1,j=0;	
	class queue {
		private:
			
			string array[10];
		public:
			void push();
			void pop();
			void display();
			void reset();
	};
	
	void queue::push(){
		system("cls");
		cout<<"\n\n\t\t\t\t queue push method ";
		if(i>9){
			cout<<"\n\n queue is full ";
		}
		else{
			cout<<"\n\n Enter name in queue : ";
//			string name;
//			cin>>name;
//			stk[++i] = name;
//			cout<<name<<"\n\n is inserted successfully...";
			cin>>array[++i];
		}
	}
	
	void queue::pop(){
		system("cls");
		cout<<"\n\n\t\t\t\t Pop method of queue ";
		if(i<0 || j>9){
			cout<<"\n\n queue is empty, So no items to pop out ";
		}
		else{
			cout<<"\n\n pop from queue is : "<<array[j++];
		}
	}
	
	void queue::display(){
		system("cls");
		cout<<"\n\n\t\t\t\t Display function of queue ";
		if(i<0 || j>9){
			cout<<"\n\n queue is Empty, So no items to display ";
		}
		else{
			for(int a=j;a<=i;a++){
				cout<<"\n\n Item from queue is : "<<array[a];
			}
		}
	}
	
	void queue::reset(){
		system("cls");
		cout<<"\n\n\t\t\t\t Display function of queue ";
		if(i<0 || j>9){
			cout<<"\n\n queue is Empty, So no items to display ";
		}
		else{
			i = -1;
			j = 0;
			cout<<"\n\n Queue has been reset to as previous ";
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
	cout<<"\n\n 4. Reset the queue";
	cout<<"\n\n 5. exit";
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
		  q.reset();
		   break;  
		case 5:
		   exit(0);
		   break;
		   
		default:
		    cout<<"\n\n Invalid choice ... Enter choice agian...";      	
	};
	getch();
	goto p;
	
	
	
	return 0;
}

