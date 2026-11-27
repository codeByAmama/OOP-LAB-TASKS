// -------------=-----Interview Important Questions-----------------------------
// What is the Difference Between Virtual Function and Friend Function
// What is the Difference Between Function Overridden and Function Overloading
//--------------------------------------------------------------------------------
#include<iostream>
#include<string>
using namespace std;
class Employee{
protected:
    int id;
    string name;
    float salary;
public:
    Employee(int i, string n, float s){
        id=i;
        name=n;
        salary=s;
    }
    virtual float calculateSalary()=0;
    virtual void display(){
        cout<<"\nEmployee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Basic Salary: "<<salary<<endl;
    }
};

class Teacher : public Employee{
private:
    float bonus;
public:
    Teacher(int i, string n, float s, float b) : Employee(i, n, s){
        bonus=b;
    }
    float calculateSalary(){
        return salary+bonus;
    }

    void display(){
        Employee::display();
        cout<<"\nBonus: "<<bonus <<endl;
        cout<<"Total Salary: " <<calculateSalary()<<endl;
    }
};
class AdminStaff : public Employee{
private:
    float allowance;
public:
    AdminStaff(int i, string n, float s, float a): Employee(i, n, s){
        allowance=a;
    }
    float calculateSalary(){
        return salary+allowance;
    }

    void display(){
        Employee::display();
        cout<<"\nAllowance: "<<allowance<<endl;
        cout<<"Total Salary: "<<calculateSalary()<<endl;
    }
};

int main(){
    Teacher t1(101, "Ali", 50000, 2500);
    AdminStaff a1(102, "Ahmed", 40000, 5000);
    Employee* ptr;
    ptr=&t1;
    ptr->calculateSalary();
    ptr->display();
    ptr=&a1;
    ptr->calculateSalary();
    ptr->display();
    return 0;
}
