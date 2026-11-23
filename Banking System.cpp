#include<iostream>
#include<string>
using namespace std;
class BankAccount{
	private:
		int accountNumber;
		string accountHolder;
		float balance, tax;
		
	public:
	     BankAccount(){
	     	accountNumber=0;
	     	accountHolder="Unknown";
	     	balance=0;
	     	tax=0;
		 }	
		 BankAccount(int accNo, string name, float b){
	     	accountNumber=accNo;
	     	accountHolder=name;
	     	balance=b;
		 }	
		 BankAccount(int accNo, string name, float b, float t){
	     	accountNumber=accNo;
	     	accountHolder=name;
	     	balance=b;
	     	tax=t;
		 }	
	
		void setAccountNumber(int accNo){
			if(accNo>0){
			accountNumber=accNo;
		}
		else{
			cout<<"Invalid Account Number"<<endl;
		}
		
		}
		void setAccountHolder(string name){
        if(!name.empty()){
         	accountHolder=name;
		}
		else{
			cout<<"Invalid Name"<<endl;
		}
     	}
		void setBalance(int b){
		if(b>0){
			balance=b;
		}
		else{
			cout<<"Invalid Balance"<<endl;
		}
		}
		void getAccountNumber() const{
			cout<<"Account Number is: "<<accountNumber<<endl;
		}
		void getAccountHolder() const{
			cout<<"Account Holder is: "<<accountHolder<<endl;
		}
		void getBalance() const{
			cout<<"Balance is: "<<balance<<endl;
		}
		
		void deposit(float amount) {
            if(amount>=0){
            balance=balance+amount;
            cout<<"Deposited Successfully"<<endl;
        }
        
    }
	
     	void withdraw(float amount){
            if(amount>balance){
            cout<<"Insufficient Balance"<<endl;
            }
            else{
            balance=balance-amount;
            cout<<"Withdrawal Successfully"<<endl;
            }
        }
		
		void displayAccountInfo() const {
            cout<<"Account Number: "<<accountNumber<< endl;
            cout<<"Account Holder: "<<accountHolder<<endl;
            cout<<"Balance: "<<balance<<endl;
            }
        ~BankAccount(){
		}   
		
};

int main() {
    BankAccount b1;
    int accNo;
    string name;
    float initialBalance, amount;
    cout<<"Enter Account Number: ";
    cin>>accNo;
    cin.ignore();
    cout<<"Enter Account Holder Name: ";
    getline(cin, name);
    cout<<"Enter Initial Balance: ";
    cin>>initialBalance;
    b1.setAccountNumber(accNo);
    b1.setAccountHolder(name);
    b1.setBalance(initialBalance);
    cout<<"\n--- Account Information ---"<<endl;
    b1.displayAccountInfo();
    cout<<"\nEnter Deposit Amount: ";
    cin>>amount;
    b1.deposit(amount);
    cout<<"\nEnter Withdrawal Amount: ";
    cin>>amount;
    b1.withdraw(amount);
    cout<<"\n--- Updated Account Information ---"<<endl;
    b1.displayAccountInfo();
    return 0;
}
