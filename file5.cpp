#include<iostream>
using namespace std;
class Caccount{
    int acc_no;
    float balance;
    public:
   Caccount( int x,float y){
        acc_no=x;
        balance=y;
    }

    void inputTransaction(){
        char type;
        float amount;
        cout<<"enter transaction type (d/w) ";
        cin>>type;
        cout<<"enter  amount: ";
        cin>>amount;
        if(type=='w'||type=='W')
          {if(amount>balance)
            cout<<"no money ";
          else
        balance=balance-amount;
    }
    else
        balance=balance +amount;
    }
    void printbalance(){
        cout<<"Net Balance: "<<balance<<endl;
        cout<<"account number of the holder: "<<acc_no;
    }
};
int main()
{      int a;
float b;
         cout<<"enter account number: ";
        cin>>a;
        cout<<"enter initial balance: ";
        cin>>b;

        Caccount obj(a,b);
        obj.inputTransaction();
        obj.printbalance();


}
