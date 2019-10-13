
#include <iostream>
#include <new>
using namespace std;

int main ()
{
  int n=0;
  int *arr;
  char ch='y';
  arr=new(nothrow) int[n];
    while(ch=='y'||ch=='Y')
  {

      cout<<"want to enter numners(y/n): ";
      cin>>ch;
      if(ch=='n'||ch=='N')
        break;
        else{
      cout<<"enter number: ";

      cin>>arr[n];
      n++;
        }
}



cout<<"your array is : ";
  for(int i=0;i<n;i++)
      cout<<" "<<arr[i];
      cout<<endl;

    for(int j=0;j<n;j++)
    {
       for(int i=0;i<n;i++)
       {

           if(arr[i]>arr[i+1])
           {

               int temp;
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
            }
       }

    }
  for(int i=0;i<n;i++)
    cout<<" "<<arr[i];
delete[] arr;

return 0;
}
