#include<iostream>
#define MAX 50
using namespace std;

class stack{
	int top;
	int array[MAX];
public:
	stack(void);
	void push(int item);
	void pop(void);	
	void display(void);
	~stack();
};
stack::stack(){
	top=-1;
	for(int i=0;i<MAX;i++){
		array[i]=0;
	}
}

void stack::push(int item){
	if(top==(MAX-1)){
		cout<<"Stack in overflow!"<<endl;
		return;
	}
	
	top++;
	array[top]=item;
		
}

void stack::pop(){
	if(top==-1){
		cout<<"Stack in underflow!"<<endl;
		return;
	}
	
	int data=array[top];
	array[top]=0;
	top--;
	cout<<"Poped element is "<<data<<endl;
}

void stack::display(){
	if(top==-1){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	
	for(int i=top;i>=0;i--){
		cout<<array[i]<<endl;
	}
}
stack::~stack(){
	cout<<"Stack is deleted."<<endl;
}
int main(){
	stack s;
	int ch,item;
	do{
		cout<<"1.PUSH."<<endl;
		cout<<"2.POP."<<endl;
		cout<<"3.DISPLAY."<<endl;
		cout<<"4.EXIT."<<endl;
		cout<<"Enter yourchoice."<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter the item."<<endl;
				cin>>item;
				s.push(item);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4:
				break;
			default:
				cout<<"You have entered wrong choice!"<<endl;
				break;	
		}
		
	}
	while(ch!=4);
	return 0;
}

