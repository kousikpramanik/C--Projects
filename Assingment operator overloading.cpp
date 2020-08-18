#include<iostream>
using namespace std;
class value{
	int x;
	int y;
public:
	void display(void);
	value(int a=0,int b=0);
	void operator =(value v);
};

void value::display(void){
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
}

value::value(int a,int b){
	x=a;
	y=b;
}

void value::operator =(value v){
	x=v.x;
	y=v.y;
}

int main(void){
	value obj1(10,20),obj2;
	cout<<"The value of obj1 is"<<endl;
	obj1.display();
	cout<<"The value of obj2 is"<<endl;
	obj2.display();
	obj2=obj1;
	cout<<" The value after assing the value of obj1 to obj2 is"<<endl<<"obj2 = "<<endl;
	obj2.display();
	return 0;
	
}
