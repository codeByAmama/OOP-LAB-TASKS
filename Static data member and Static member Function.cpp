//#include<iostream>
//using namespace std;
//int i=1;
//void data(){
//	static             Static keyword only use with variable and member function
//	 int i=1;
//	cout<<"Call "<<" "<<i<<endl;
//	i++;
//	cout<<"Call "<<" "<<i<<endl;
//}
//int main(){
//	data();
//	data();
//	data();
//}

#include<iostream>
using namespace std;
class employee{
 int id;
// static 
 public: 
  static int count; 
 employee(int a){
 	count++;
 	id=a;
 }
// static function      static function access only static data member
 static void  data(){
   cout<<count<<endl;
}
};

int employee::count=0; 
int main(){
 //scope resolution operator 
	employee e1(12);  
	employee::data();
}
