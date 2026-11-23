#include<iostream>
using namespace std;
class Student{
	private:
	int id;
	string name;
	public:
		Student(){
			cout<<"Constructor Called"<<endl;
		}
		Student(int a, string s){
		  name=s;
		  id=a;
		}
		void display(){
		cout<<name<<endl;
		cout<<id<<endl;
		}
		// ~--->negation/tild/not
		~Student(){
			cout<<"Destructor Called"<<endl;
		}
};
int main(){
	Student s1;// jitni objectes hoti hain utni bar hi constructor and destructor run hota hai
	int id=150;
	Student s2(id,"Amama Asad");
	s2.display();
}
