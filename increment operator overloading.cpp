#include<iostream>
using namespace std;
class value{
	int x;
public:
	void display(void);
	value(int a=0);        // Default constrator.
	void operator ++(void);      // overloaded increment operayor.
};

void value::display(){
	cout<<x;
}

value::value(int a){
	x=a;
}

void value::operator ++(){
	x++;
}

int main(){
	value obj(10);
	cout<<"The default value of obj is ";
	obj.display();
	++obj;
	cout<<endl <<"After increment the value of obj is ";
	obj.display();
	++obj;
	cout<<endl <<"After increment the value of obj is ";
	obj.display();
	return 0;
}

