#include<iostream>
#define MAX 50
using namespace std;
template<class T>
class stack{
	int top;
	T array[MAX];
public:
	stack(void);
	void push(T item);
	void pop(void);	
	void display(void);
	~stack();
};

template<class T>
stack<T>::stack(){
	top=-1;
	for(int i=0;i<MAX;i++){
		array[i]=0;
	}
}

template<class T>
void stack<T>::push(T item){
	if(top==(MAX-1)){
		cout<<"Stack in overflow!"<<endl;
		return;
	}
	
	top++;
	array[top]=item;	
}
template<class T>
void stack<T>::pop(void){
	if(top==-1){
		cout<<"Stack in underflow!"<<endl;
		return;
	}
	
	T data=array[top];
	array[top]=0;
	top--;
	cout<<"Poped element is "<<data<<endl;
}
template<class T>
void stack<T>::display(){
	if(top==-1){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	
	for(int i=top;i>=0;i--){
		cout<<array[i]<<endl;
	}
}
template<class T>
stack<T>::~stack(){
	cout<<"Stack is deleted."<<endl;
}
int main(){
	stack <char>s;
	stack<int>s1;
	stack<float>s2;
	int ch;
		
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
				char item;
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

