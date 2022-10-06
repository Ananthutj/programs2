#include<iostream>
using namespace std;
class Box
{
    private:
    int blackball;
    int redball;
    public:
    void getData();
    void display();
    friend Box operator +(Box,Box);
};
void Box::getData()
{
    cout<<"Enter the number of black balls:"<<endl;
    cin>>blackball;
    cout<<"Enter the number of red balls:"<<endl;
    cin>>redball;
}
void Box::display()
{
    cout<<"Number of black balls:"<<blackball<<endl;
    cout<<"Number of red balls:"<<redball<<endl;
}
Box operator +(Box b1,Box b2)
{
    Box result;
    result.blackball=b1.blackball+b2.blackball;
    result.redball=b1.redball+b2.redball;
    return result;
}
int main()
{
    Box b1,b2,b3;
    b1.getData();
    b2.getData();
    b1.display();
    b2.display();
    b3=b1+b2;
    b3.display();
    return 0;
}