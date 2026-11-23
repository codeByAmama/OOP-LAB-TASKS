// Uniry Perfix,Postfix
#include<iostream>
#include<string>
using namespace std;
class Student{
	private:
	int rollNo;
	public:
	Student(int a){
		rollNo=a;
	}
	Student operator--(int){  
//		--rollNo; // Postfix ma parameter pass karna zaroori hota hai
		rollNo--;
	}
	Student display(){
		cout<<"After Pre Increment: "<<rollNo;
	}
};
int main(){
	Student s1(28);
//	--s1;
	s1--;
	s1.display();
} 
