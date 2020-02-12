#include<iostream>
using namespace std;
void swapbyvalue(int ,int);
void swapbyreference(int &,int &);
void swapbypointer(int *,int *);
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    swapbyvalue(a,b);
    cout<<"After swapbyvalue :a= "<<a<<" b= "<<b<<endl;
    swapbyreference(a,b);
    cout<<"After swapbyreference :a= "<<a<<" b= "<<b<<endl;
    swapbypointer(&a,&b);
    cout<<"After swapbypointer :a= "<<a<<" b="<<b<<endl;
}
void swapbyvalue(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"In function  swapbyvalue is:a= "<<x<<" b= "<<y<<endl;
}
void swapbyreference(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"In function  swapbyreference is:a= "<<x<<" b= "<<y<<endl;
}
void swapbypointer(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"In function  swapbypointer is:a= "<<*x<<" b= "<<*y<<endl;
}
