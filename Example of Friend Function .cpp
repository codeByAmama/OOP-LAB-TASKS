#include<iostream>
using namespace std;
class data{
	private:
		int id=39;
		friend void getid();
};
void getid(){
	data obj;
	cout<<obj.id;
}
int main(){
	getid();
}
