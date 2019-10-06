#include<iostream>
using namespace std;

class bank{
    private:
    char name[10];
    int acc_no;
    char type;
    int balance;

    public:
     void getvalues(){
         cout<<"enter name: ";
         cin>>name;
         cout<<"enter acc_no: ";
         cin>>acc_no;
         cout<<"enter type of account: ";
         cin>>type;
         cout<<"enter inital balance in the account : ";
         cin>>balance;

     }

     void depoamount(){
         float amount;
         cout<<"enter the amount you want to deposit: ";
         cin>>amount;
         balance=balance+amount;;
         cout<<"your money is deposited successfully..."<<endl<<"Final Balance is: "<<balance<<endl;
     }

     void withdraw(){
         float deduce;
         cout<<"enter the amount you want to withdraw : ";
         cin>>deduce;
         if(deduce>balance){
             cout<<"insufficient money in your account "<<endl;
         }
         else if(deduce<balance)
         {
             balance=balance-deduce;
             cout<<"Final balance is: "<<balance<<endl;
         }

     }

     void display(){
         cout<<"Name os the account holder: "<<name<<endl;

         cout<<"Net Balance is: "<<balance;
     }
};
int main(){
bank obj;
obj.getvalues();
obj.depoamount();
obj.withdraw();
obj.display();
}
