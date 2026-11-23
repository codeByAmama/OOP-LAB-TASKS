#include<iostream>
using namespace std;
class student{
	private:
	int lab9=9;
	public:
		string name="Amama";
		friend void display();
};
void display(){
	student obj;
	cout<<obj.lab9;
}
int main(){
	display();
}
