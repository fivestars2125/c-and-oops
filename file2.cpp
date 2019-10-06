#include<iostream>
using namespace std;
int val(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}

int re(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}
int main()
{  int a,b;
    cout<<"enter two values to swap: ";
    cin>>a>>b;

    cout<<"swapped values in the main function after call by value: ";
    val(  a,  b);
    cout<<"a= "<<a<<"b= "<<b;
cout<<endl;
    cout<<"swapped values int the main function after call by reference: ";
    re( a,b);
     cout<<"a= "<<a<<"b= "<<b;

}
