#include<iostream>
#include<string>
#define MAX 20
using namespace std;
class password{
	char arr[MAX];
public:
	void get_pass(char a[]);
	void password_proper(void);
	void display(void);
};

void password::get_pass(char a[]){
	int i=0;
	while(a[i]!='\0'){
		arr[i]=a[i];
		i++;
	}
}

void password::password_proper(void){
	int i=0;
	int flag1=0,flag2=0,flag3=0,flag4=0,sum=0;
	while(arr[i]!='\0'){
		if(arr[i]>='a' && arr[i] <='z')
			flag1++;
		if(arr[i]>='A' && arr[i]<='Z')
			flag2++;
		if(arr[i]>=48 && arr[i]<=57)                 // 48-57 -> '0' to '9'
			flag3++;
		if((arr[i]>=33 && arr[i]<=47) || (arr[i]>=58 && arr[i]<=64))  //other special character.
			flag4++;
		i++;
	}
	sum=flag1+flag2+flag3+flag4;
	
	if(flag1!=0 && flag2!=0 && flag3!=0 && flag4!=0 && sum>=6)
		cout<<"Strong Password."<<endl;
	else
		cout<<"Weak password!!!"<<endl;
}



void password::display(void){
	cout<<"You have entered "<<arr<<endl;
}

int main(){
	password p;
	char s[MAX];
	cout<<"Enter password"<<endl;
	cin.getline(s,MAX);
	p.get_pass(s);
	p.display();
	p.password_proper();
	return 0;
}
