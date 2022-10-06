#include<iostream>
using namespace std;

class swapping
{
    private:
    int a,b;
    public:
    
    void swap1(int a,int b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
        
    }
    void swap2(int &a,int &b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
        
    }
    void swap3(int *a,int *b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
       
    }
};

int main()
{
    swapping s;
    int ch;
    int x,y;
    
        cout<<"Enter the two numbers before swapping:"<<endl;
        cin>>x>>y;

        while(ch!=0)
        {
            cout<<"1.Call by value"<<endl;
            cout<<"2.Call by reference"<<endl;
            cout<<"3.Call by address"<<endl;
            cout<<"Enter the choice"<<endl;
            cin>>ch;

            switch(ch)
            {
                case 1:
                cout<<"Value of a and b before swapping:"<<x<<" and "<<y<<"(main function)"<<endl;
                s.swap1(x,y);
                cout<<"Value of a and b after swapping:"<<x<<" and "<<y<<"(main function)"<<endl;
                break;

                case 2:
                cout<<"Value of a and b before swapping:"<<x<<" and "<<y<<"(main function)"<<endl;
                s.swap2(x,y);
                cout<<"Value of a and b after swapping:"<<x<<" and "<<y<<"(main function)"<<endl;
                break;

                case 3:
                cout<<"Value of a and b before swapping:"<<x<<" and "<<y<<"(main function)"<<endl;
                s.swap3(&x,&y);
                cout<<"Value of a and b after swapping:"<<x<<" and "<<y<<"(main function)"<<endl;
                break;
            }
        }
    
}