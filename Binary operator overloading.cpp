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
	Student operator+(Student obj){ 
	Student temp(0);
	temp.rollNo=rollNo+obj.rollNo;
	return temp;
	}
	void display(){
		cout<<"After Binary Addition: "<<rollNo;
	}
};
int main(){
	Student s1(14);
	Student s2(16);
	Student s3=s1+s2;
	s3.display();
} 
