#include <iostream>

using namespace std;

class String
{   int length;
    char *a=new(nothrow) char[length];
public:

    void getdata()
    {
        cout<<"enter size of string: ";
        cin>>length;
        cout<<"enter string: ";
        for(int i=0;i<length;i++)
        cin>>a[i];
        if((sizeof(a)/sizeof(char))>length)
            exit(0);
    }
    void putdata()
    {
        cout<<"string is : ";
        cout<<a;
       cout<<endl;

    }
    String()
    {
        cout<<"default constructor called : value of string is: "<<a<<endl;
    }
    String(const String &p)
    {
        cout<<"value copied from default constructor: ";
        cout<<p.a<<endl;
    }
     void rev()
     {   cout<<"reversed string : ";
         for(int i=length;i>=0;i--)
            cout<<a[i];
            cout<<endl;
     }

    ~String()
    {
        delete a;
        cout<<"object destroyed "<<endl;
    }
};
int main()
{  String obj1;

 obj1.getdata();
 obj1.putdata();
  String obj2=obj1;
 obj1.rev()
;
    return 0;
}
