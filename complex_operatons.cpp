#include<iostream>
using namespace std;
class complex{
	float real;
	float img;
public:
	complex(void);
	complex(float x,float y);
	complex operator+(complex a1);         // overloaded + operator
	complex operator-(complex a2);		// overloaded - operator
	complex operator*(complex a3);		//overloaded * operator
	void display(complex a4);
};
/*  Definition of constractor */
complex::complex(void){
	real=img=0.0;
}

// Defination of paramiterized constructor.
complex::complex(float x,float y){
	real=x;
	img=y;
}

// Definition of overloaded + operator.
complex complex::operator+(complex a1){
	complex temp;
	temp.real=real+a1.real;
	temp.img=img+a1.img;
	return temp;
}

//Definition of overloaded - operator.
complex complex::operator-(complex a2){
	complex temp1;
	temp1.real=real-a2.real;
	temp1.img=img-a2.img;
	return temp1;	
}

// Defination of overloaded * operator
complex complex::operator*(complex a3){
	complex temp3;
	temp3.real= (real * a3.real) - (img * a3.img);
	temp3.img= (real * a3.img) + (a3.real * img);
	cout<<temp3.img<<endl;
	return temp3;
}

//Defination of display function.
void complex::display(complex a4){
	cout<<a4.real<<" + "<<"( "<<a4.img<<" )i";
}

int main(){
	complex c1,c2,c3;                                // three complex type objects
	float r,i;                                       //tempuray stores real & imaginary part
	int ch;
	do{
		cout<<"/////////////////////////////////"<<endl;
		cout<<"1.Initialise complex number."<<endl;
		cout<<"2.Addition."<<endl;
		cout<<"3.Subtraction."<<endl;
		cout<<"4.Multiplication."<<endl;
		cout<<"5.Exit."<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter the real and imaginary part of first complex number ."<<endl;
				cin>>r>>i;
				c1=complex(r,i);					//Dynamik initialization of constrator.
				cout<<"Enter the real and imaginary part of second complex number."<<endl;
				cin>>r>>i;
				c2=complex(r,i);
				cout<<"You have entered c1 = ";c1.display(c1);
				cout<<endl<<"Youhave entered c2 = ";c2.display(c2);
				cout<<endl;
				break;
			case 2:
				c3=c1+c2;
				cout<<"Addition result c3 = ";
				c3.display(c3);
				cout<<endl;
				break;
			case 3:
				c3=c1-c2;
				cout<<"Subtraction result c3 = ";
				c3.display(c3);
				cout<<endl;
				break;
			case 4:
				c3=c1*c2;
				cout<<"Multiplication result c3 = ";
				c3.display(c3);
				cout<<endl;
				break;
			case 5:
				break;
			default:
				cout<<"You have entered wrong choice!!"<<endl;
				break;		
		}
	}
	while(ch!=5);
	return 0;
}
