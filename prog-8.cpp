#include<iostream>
using namespace std;

int max(int [],int);
int min(int [],int);
float avg(int [],int);
void swap(int& ,int&);

int main()
{
    int n;
    cout<<"enter no of elements:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"maximum number:"<<max(arr,n)<<endl;
    cout<<"minimum number:"<<min(arr,n)<<endl;
    cout<<"average of numbers:"<<avg(arr,n)<<endl;

    int v1,v2;
    cout<<"enter two values:";
    cin>>v1>>v2;
    cout<<"Before swapping v1 = " <<v1 << "v2 = "<<v2<<endl;
    swap(v1,v2);
    cout<<"After swapping v1 = " <<v1 << "v2 = "<<v2<<endl;
    return 0;
}

int max(int x[],int  y)
{
    int m = x[0];
    for(int i=0;i<y;i++)
    {
        if(x[i]>m)
            m=x[i];
    }
    return m;
}

int min(int x[],int  y)
{
    int m = x[0];
    for(int i=0;i<y;i++)
    {
        if(x[i]<m)
            m=x[i];
    }
    return m;
}

float avg(int x[], int y)
{
    int sum=0;
    for(int i=0;i<y;i++)
        sum+=x[i];
    return ((float)sum/y);
}

void swap(int& x,int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
