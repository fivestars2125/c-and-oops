#include <iostream>

using namespace std;

class distancef1
{
    float feet;
    float inch;
    public:

        void input()
        {
            cout<<"enter distance: "<<endl;
            cout<<"feet: ";
            cin>>feet;
            cout<<"inch: ";
            cin>>inch;
            cout<<endl;
        }

         distancef1 operator + (distancef1 const &obj)
       {
           distancef1 res;
           res.feet=feet+obj.feet;
           res.inch=inch+obj.inch;
                if(res.inch==12)
            {res.feet++;
            res.inch=0;}
           while(res.inch>12)
           {
               res.feet++;
               res.inch=res.inch-12;
           }

           return res;
       }
       void show()
        {
            cout<<feet<<" :feet "<<inch<<" inches "<<endl;
        }
        friend class distancemc;
};
class distancemc
{
    float meter;
    float centi;
public:
    void input()
        {
            cout<<"enter distance: "<<endl;
            cout<<"meter: ";
            cin>>meter;
            cout<<"centimeter: ";
            cin>>centi;
            cout<<endl;
        }
         distancemc operator + (distancemc const &obj)
       {
           distancemc res;
           res.meter=meter+obj.meter;
           res.centi=centi+obj.centi;

           if(res.centi==100)
            {res.meter++;
            res.centi=0;}
           while(res.centi>100)
           {
               res.meter++;
               res.centi=res.centi-100;
           }
           return res;
       }
     void show()
        {
            cout<<"total: "<<meter<<" :meter "<<centi<<" centimeter"<<endl;
        }
   void interadd(distancemc &A,distancef1 &B)
   {
       int ch,x;
   cout<<"press 1 for meter-centimeter measurement: "<<endl<<"press 2 for feet-inches measurement:";
   cin>>ch;
   if(ch==1)
   {
       distancemc Y;
       x=A.meter*100+B.feet*30.48 +A.centi+B.inch*2.54;
       if(x>100)
        {Y.centi=x%100;
        Y.meter=x/100;}
        else
        {Y.meter=0;
        Y.centi=x;}
        Y.show();
   }
   else if(ch==2)
   {
       distancef1 C;
       x=B.feet*12+A.meter*39.37+A.centi*.3937+B.inch;
       if(x>12)
    {C.feet=x/12;
        C.inch=x%12;}
        else
        {
          C.feet=0;
        C.inch=x%12;}
        C.show();
   }
   }

};

int main()
{
    distancef1 obj1,obj2;
    obj1.input();obj1.show();
    obj2.input();obj2.show();
    distancef1 obj3=obj1+obj2;
    obj3.show();
    distancemc Obj1,Obj2;
    Obj1.input();Obj1.show();
    Obj2.input();Obj2.show();
    distancemc Obj3=Obj1+Obj2;
    Obj3.show();
     cout<<endl;
    interadd(Obj1,obj1);
    return 0;
}
