#include<iostream>
using namespace std;
class A{    //BASE CLASS/ PARENT CLASS
	public:
		void displayA(){
			cout<<"Class A"<<endl;
		}
};

class B: public A{     //CHILD CLASS/ DREIVED CLASS
	public:
		void displayB(){
			cout<<"Class B"<<endl;
		}
		
};

class E{
	
};

class D: public A: public B: public E{
	
};
int main(){
	
//	Person obj;
//	obj.displayPersonInfo();
//	Student obj1;
//	Person obj1;
//	obj1.displayStudentInfo();
//	obj1.displayPersonInfo();

//    Person P1;
//    P1.displayPersonInfo();
//    
//    Student S1;
//    S1.displayStudentInfo();

//     A obj1;
//     obj1.displayA();
//     obj1.displayB();
}
