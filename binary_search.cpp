#include<iostream>
#define MAX 5
using namespace std;
template<typename T>
class search{
	int low,mid,high;
	T array[MAX];
public:
	search(void);
	~search();
	void get_data(void);
	int binary_search(T item);
	void display(void);
		
};
template<typename T>
search<T>::search(void){
	low=0;
	high=MAX-1;
	for(int i=0;i<MAX;i++)
		array[i]=0;
}
template<typename T>
search<T>::~search(){
	cout<<"Object deleted!"<<endl;
}
template<typename T>
void search<T>::get_data(void){
	cout<<"Enter the "<<MAX<<" values."<<endl;
	for(int i=0;i<MAX;i++){
		cin>>array[i];
	}
}
template<typename T>
int search<T>::binary_search(T item){
	while(low<=high){
		mid=((low+high)/2);
		if(array[mid]==item)
			return mid;
		if(item<array[mid])
		 	high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}
template<typename T>
void search<T>::display(void){
	cout<<"You have entered."<<endl;
	for(int i=0;i<MAX;i++)
		cout<<" "<<array[i];
	cout<<endl;
}

int main(void){
	search<float>obj;
	int x,ch;
	float data;
	obj.get_data();
	obj.display();
	cout<<"Enter the element to be searched."<<endl;
	cin>>data;
	x=obj.binary_search(data);
	if(x==-1)
		cout<<"Data not found!!"<<endl;
	else
		cout<<"Data found at location "<<x<<endl;
				
	
	return 0;
}

