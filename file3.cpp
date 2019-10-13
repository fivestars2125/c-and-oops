#include<iostream>
using namespace std;
float pow(float x,float y){
    int res=1;
    for(int i=1;i<=y;i++)
     res=res*x;
     return res;
}
int main()
{   float num,p;
    cout<<"enter the number: ";
    cin>>num;
   cout<<"default parameter for p is taken as 3 "<<endl;
    cout<<"the value of number raised to the power :"<<pow(num,p=3);
}
