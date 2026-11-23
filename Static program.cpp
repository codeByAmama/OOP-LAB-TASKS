#include<iostream>
using namespace std;
class Student{
	public:
	static int total;
	Student(){
	total++;
	}
};
int Student::total=0;
int main(){
	Student s1;
	cout<<Student::total;
	return 0;
}
