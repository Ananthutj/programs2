#include<iostream>

using namespace std;
class Wall
{
    private:
    float length,breadth,height;
    public:
    Wall(float len,float bre,float hei)
    {
        length=len;
        breadth=bre;
        height=hei;
    }
    Wall(Wall &obj)
    {
        length=obj.length;
        breadth=obj.breadth;
        height=obj.height;
    }
    float calculateArea() 
    {
         return length*breadth*height;
    }
};
int main()
{
    float length,breadth,height;
    cout<<"Enter the length ,breadth and height of the wall:"<<endl;
    cin>>length>>breadth>>height;
    Wall wall1(length,breadth,height);
    Wall wall2=wall1;
    cout<<"Area of wall1:"<<wall1.calculateArea()<<endl;
    cout<<"Area of wall2:"<<wall2.calculateArea();
    return 0;
}
