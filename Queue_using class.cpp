//array reprasentation of queue.
// using template.
#include<iostream>
#define MAX 50
using namespace std;
template<class T>
class queue{
	T array[MAX];
	int rear,front;
public:
	queue(void);
	~queue();
	void enqueue(T item);
	T dequeue(void);
	void display(void);
};

template<class T>
queue<T>::queue(void){
	rear=-1;
	front=-1;
	for(int i=0;i<MAX;i++)
		array[i]=0;
}
template<class T>
queue<T>::~queue(){
	cout<<"Queue is deleted!"<<endl;
}

template<class T>
void queue<T>::enqueue(T item){
	if(rear==MAX-1){
		cout<<"Queue is full!"<<endl;
		return;
	}
	
	rear++;
	array[rear]=item;
	if(front==-1)
		front++;
}

template<class T>
T queue<T>::dequeue(void){
	if(front==-1 && rear==-1){
		return -1;
	}
	if(front>rear){
		return -1;
	}
	T data=array[front];
	array[front]=0;
	front++;
	return data;
}

template<class T>
void queue<T>::display(void){
	if(rear==-1 && front==-1){
		cout<<"Queue is empty!"<<endl;
		return;
	}
	if(front>rear){
		cout<<"Queue is empty!"<<endl;
		return;
	}
	for(int i=front;i<=rear;i++){
		cout<<array[i]<<" ";
	}
	
	cout<<endl;
	
}

int main(void){
	queue<float> Q1;
	int ch;
	float item,x;
	do{
		cout<<"///////////////////////////////////////"<<endl;
		cout<<"1.Enqueue."<<endl;
		cout<<"2.Dequeue."<<endl;
		cout<<"3.Display."<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter your choice."<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter item."<<endl;
				cin>>item;
				Q1.enqueue(item);
				break;
			case 2:
				x=Q1.dequeue();
				if(x==-1)
					cout<<"Queue is empty!"<<endl;
				else
					cout<<"Dequeue element is "<<x<<endl;
				break;
			case 3:	
				Q1.display();
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
