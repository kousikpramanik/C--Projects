#include<iostream>
using namespace std;

class value{
	int x;
	public:
		void display(void);
		value(int a=0);
		void operator --(void);
};

void value::display(void){
	cout<<"x = "<<x;
}

value::value(int a){
	x=a;
}

void value::operator --(void){
	--x;
}

int main(void){
	value obj(10);
	cout<<"Before decrement the value is ";
	obj.display();
	--obj;
	cout<<endl<<"After decrement by 1 the value is ";
	obj.display();
	--obj;
	cout<<endl<<"After decrement by 1 the value is ";
	obj.display();
	return 0;
}
