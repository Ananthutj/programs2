#include<iostream>
using namespace std;

class Complex
{
  
      int real,img;
      public:
      
      void getData()
      {
          cout<<"Enter the real and img part:"<<endl;
          cin>>real>>img;
      }
      void operator +(Complex c1,Complex c2)
      {
          Complex c3;
          c3.real=c1.real+c2.real;
          c3.img=c1.img+c2.img;
          return c3;
      }
      void display()
      {
          cout<<"Complex number is:"<<real<<"+i"<<img<<endl;
      }
};

int main()
{
    Complex c1,c2,c3;
    c1.getData();
    c2.getData();
    
    c3=c1+c2; 
    c3.display();    
    return 0;

}