#include<iostream>
#include<string>
using namespace std;
int main()
{
    string names[10];
    int num,i;
    cout<<"how many names you want to enter : ";
    cin>>num;
    for(int i=0;i<num;i++)
    cin>>names[i];
    cout<<"your array: "<<endl;
    for(int i=0;i<=num;i++)
    cout<<names[i]<<"  ";
     cout<<endl;
     cout<<"sorted names are:  ";
    for(int i=0;i<num;i++)
    {

        for(int j=0;j<num;j++)
        {

            if(names[j]>names[j+1])
            {
                string temp;
                temp=names[j];
                names[j]=names[j+1];
                names[j+1]=temp;
            }

        }
     }

     for(int i=0;i<num;i++)
        cout<<names[i]<<" ";
    return 0;
}
