#include<iostream>
#include<cmath>
using namespace std;
class quadrilaterals{
	float ab;
	float bc;
	float cd;
	float da;
public:
	quadrilaterals(float a=0, float b=0,float c=0,float d=0);
	int check_square(void);
	int check_rectangle(void);
	int check_parallelogram(void);
	void display(void);
};


void quadrilaterals::display(void){
	cout<<endl<<"You have entered AB = "<<ab <<" BC = " << bc<<" CD = "<<cd <<" DA = "<<da<<endl;
}
quadrilaterals::quadrilaterals(float a, float b,float c,float d){
	ab=a;
	bc=b;
	cd=c;
	da=d;
}

int quadrilaterals::check_square(void){
	if(ab==bc && ab==cd && ab==da)
		return 0;
	else
		return 1;
}

int  quadrilaterals::check_rectangle(){
	int r1,r2;
	r1=sqrt(pow(da,2)+pow(cd,2));
	r2=sqrt(pow(bc,2)+pow(cd,2));	
	if(ab!=bc && r1==r2)
		return 0;
	else
		return 1;
}

int  quadrilaterals::check_parallelogram(){
	int r1,r2;
	r1=sqrt(pow(da,2)+pow(cd,2));
	r2=sqrt(pow(bc,2)+pow(cd,2));	
	if(r1!=r2)
		return 0;
	else
		return 1;
}

int main(){
	quadrilaterals obj1;
	float a,b,c,d;
	int ch;
	do{

	
	cout<<endl<<"1.Check what type of  quadrilaterals."<<endl;
	cout<<"2.Exit"<<endl;
	cout<<"Enter your choice."<<endl;
	cin>>ch;
	switch(ch){
	
	 case 1:
		cout<<"//////////////////////////"<<endl;
		cout<<endl<<"Enter the length of the four sides i.e., AB,BC,CD,DA:"<<endl;
		cin>>a>>b>>c>>d;
		obj1=quadrilaterals(a,b,c,d);
		obj1.display();
		if(obj1.check_square()==0)
			cout<<endl<<"This is a Square."<<endl;
	
		if(obj1.check_rectangle()==0)
			cout<<endl<<"This is a rectangle."<<endl;
	
		if(obj1.check_parallelogram()==0)
			cout<<endl<<"This is a parallelogram."<<endl;
		break;
	case 2:
		break;
	default:
		cout<<"You have entered wrong choice!!"<<endl;
		break;
	}
}
while(ch!=2);
	return 0;
}

