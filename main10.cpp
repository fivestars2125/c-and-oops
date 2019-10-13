#include <iostream>

using namespace std;

class Complex
{
    float real,img;
public:

     void input()
     {
         cout<<"enter real and imaginary part of complex number resp.: ";
         cin>>real>>img;
     }
     Complex operator + (Complex const &p)
     {
         Complex res;
         res.real=real+p.real;
         res.img=img+p.img;
         return res;
     }
      Complex operator - (Complex const &p)
     {
         Complex res;
         res.real=real-p.real;
         res.img=img-p.img;
         return res;
     }
      Complex operator * (Complex const &p)
     {
         Complex res;
         res.real=real*p.real-(img*p.img);
         res.img=img*p.real+real*p.img;

         return res;
     }
      Complex operator / (Complex const &p)
     {
         Complex res;
         res.real=real*p.real+(img*p.img);
         res.img=img*p.real-real*p.img;
         res.real=res.real/(p.real*p.real+p.img*p.img);
         res.img=res.img/(p.real*p.real+p.img*p.img);
         return res;
     }
     void show()
     {
         cout<<real<<"+i"<<img<<endl;
     }
};
int main()
{
    Complex obj1,obj2,obj3;
    obj1.input();
    obj2.input();
    obj3=obj1+obj2;
    obj3.show();
    obj3=obj1-obj2;
    obj3.show();
    obj3=obj1*obj2;
    obj3.show();
    obj3=obj1/obj2;
    obj3.show();
    return 0;
}
