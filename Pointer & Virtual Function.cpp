//#include<iostream>
//using namespace std;
//class A{
//	public:
//    void display(){
//	cout<<"Parent Class "<<endl;	
//	}
//};
//class B: public A{
//	public:
//	void display(){
//	A::display();
//	cout<<"Child Class "<<endl;	
//	}
//};
//int main(){
//	B obj;
//	obj.display();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class A{
//	public:
//    void display(){
//	cout<<"Parent Class "<<endl;	
//	}
//};
//class B: public A{
//	public:
//	void display(){
//	cout<<"Child Class "<<endl;	
//	}
//};
//int main(){
//	A *ptr;
//	B obj;
//	ptr=&obj;
//	ptr->display();
//	
//}

#include<iostream>
using namespace std;
class A{
	public:
    virtual void display(){
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
