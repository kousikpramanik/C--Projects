#include<iostream>
#include<cstdlib>
using namespace std;
class MyDate{
	int dd;
	int mm;
	int yyyy;
public:
	MyDate(int d=0,int m=0,int y=0);          // parameterized constructor with default value 0
	MyDate getAge(MyDate y,MyDate Y);              // y=DOB and Y=current date or age at the date of.
	void diplay(MyDate age);                      // Displays age & entered data.
};

MyDate::MyDate(int d,int m,int y){                    // constructor definition
	dd=d;
	mm=m;
	yyyy=y;
}

void MyDate::diplay(MyDate age){
	cout<<age.yyyy<<" years "<<age.mm<<" months "<<age.dd<<" days";    // dipplay function definition.
}
 
MyDate MyDate::getAge(MyDate y,MyDate Y){                    // getage() definition.
	MyDate myage;
	if(Y.dd>=y.dd){
		myage.dd=Y.dd-y.dd;
	}
	else{
		switch(Y.mm){
			case 1:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 2:
				Y.dd=Y.dd+28;
				myage.dd=Y.dd-y.dd;                    //    cases to determine the number of days in a month.
				Y.mm=Y.mm-1;
				break;
			case 3:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 4:
				Y.dd=Y.dd+30;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 5:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 6:
				Y.dd=Y.dd+30;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 7:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 8:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 9:
				Y.dd=Y.dd+30;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 10:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 11:
				Y.dd=Y.dd+30;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
			case 12:
				Y.dd=Y.dd+31;
				myage.dd=Y.dd-y.dd;
				Y.mm=Y.mm-1;
				break;
					
			}
	}
	
	if(Y.mm>y.mm){
		
		myage.mm=Y.mm-y.mm;
	}
	else if(Y.mm==y.mm){
	}
	else{
			Y.mm=Y.mm+12;
			myage.mm=Y.mm - y.mm;
			Y.yyyy=Y.yyyy-1;
	}
	
	myage.yyyy=Y.yyyy-y.yyyy;
	
	return myage;
}


int main(void){
	
	MyDate obj1,obj2,obj3;                                        // create 3 object of mydate class.
	int d,m,y,ch;                                                //store the user's DOB
	int dd,mm,yy;                                                // store current date
	do{
		cout<<endl<<"//////////////////////////////////////////////"<<endl;
		cout<<"1.Age Calculator:"<<endl;
		cout<<"2.Exit:"<<endl;
		cout<<"////////////////////"<<endl<<"Enter your choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"Enter your DOB in dd-mm-YYY format:"<<endl;
				cin>>d>>m>>y;
				obj1=MyDate(d,m,y);                                     //dynamic initialization of constructor
				cout<<"Enter the current date in dd-mm-yyyy format:"<<endl;
				cin>>dd>>mm>>yy;
				obj2=MyDate(dd,mm,yy);                                       //dynamic initialization of constructor.
				obj3=obj3.getAge(obj1,obj2);
				obj3.diplay(obj3);
				break;
			case 2:
				break;
			default:
				cout<<"You have entered wrong choice!!try again."<<endl;
				break;
		}
	}
	while(ch!=2);
	system("pause");
	return 0;
}

