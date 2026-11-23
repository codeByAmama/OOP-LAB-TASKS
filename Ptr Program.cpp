#include<iostream>
using namespace std;
class A{
	public:
    void display(){
	cout<<"Parent Class "<<endl;	
	}
};
class B: public A{ 
	public:
	void display(){
	cout<<"Child Class "<<endl;	
	}
};
int main(){
	A *ptr;
	B obj;
	ptr=&obj;
	ptr->display();
}
