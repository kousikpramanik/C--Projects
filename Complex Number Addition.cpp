#include<iostream>
#include<cstdlib>

using namespace std;
class complex_number{
	float real;
	float imagenary;
	public:
		complex_number(){
		}
		complex_number(float a){
			real=imagenary=a;
		}
		complex_number(float a,float b){
			real=a;
			imagenary=b;
		}
		friend complex_number complex_sum(complex_number,complex_number);
		friend void display(complex_number);
};

complex_number complex_sum(complex_number N,complex_number M){
	complex_number C;
	C.real=N.real+M.real;
	C.imagenary=N.imagenary+M.imagenary;
	return (C);
}

void display(complex_number C){
	cout<<C.real<<" + i"<<C.imagenary<<endl;
}

int main(void){
	complex_number c1(2.0);
	complex_number c2(3.2,1.5);
	complex_number c3;
	c3=complex_sum(c1,c2);
	cout<<"c1 = ";display(c1);
	cout<<"c2 = ";display(c2);
	cout<<"c3 = ";display(c3);
	system("pause");
	return 0;
}

