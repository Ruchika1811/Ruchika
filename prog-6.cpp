#include<iostream>
using namespace std;

void swap(int&,int&);
void swap(float&,float&);
void swap(double&,double&);
void swap(char&,char&);
void swap(char(&)[20],char(&)[20]);
int main()
{
    int v1,v2;
    cout<<"enter two integers values:";
    cin>>v1>>v2;
    cout<<"before swap v1="<<v1<<"v2="<<v2<<endl;
    swap(v1,v2);
    cout<<"after swap v1="<<v1<<"v2="<<v2<<endl;

    float f1,f2;
    cout<<"enter two float values:";
    cin>>f1>>f2;
    cout<<"before swap f1="<<f1<<"f2="<<f2<<endl;
    swap(f1,f2);
    cout<<"before swap f1="<<f1<<"f2="<<f2<<endl;

    double d1,d2;
    cout<<"enter two double values:";
    cin>>d1>>d2;
    cout<<"before swap d1="<<d1<<"d2="<<d2<<endl;
    swap(d1,d2);
    cout<<"before swap d1="<<d1<<"d2="<<d2<<endl;

     char c1,c2;
    cout<<"enter two character values:";
    cin>>c1>>c2;
    cout<<"before swap c1="<<c1<<"c2="<<c2<<endl;
    swap(c1,c2);
    cout<<"before swap c1="<<c1<<"c2="<<c2<<endl;

     char s1[10],s2[10];
    cout<<"enter two strings values:";
    cin>>s1>>s2;
    cout<<"before swap s1="<<s1<<"s2="<<s2<<endl;
    swap(s1,s2);
    cout<<"before swap s1="<<s1<<"s2="<<s2<<endl;
}

void swap(int& x,int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swap(float& x,float& y)
{
    float temp = x;
    x = y;
    y = temp;
}

void swap(double& x,double& y)
{
    double temp = x;
    x = y;
    y = temp;
}

void swap(char& x,char& y)
{
    char temp = x;
    x = y;
    y = temp;
}

void swap(char(&x)[10],int(&y)[10])
{
    for(int i=0;i<10;i++)
    {
        char temp=x[i];
        x[i]=y[i];
        y[i]=temp;

    }
}
