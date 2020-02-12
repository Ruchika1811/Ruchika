#include <iostream>
using namespace std;
void printline(int len,char ch='*');
int main()
{
    printline(10,'-');
    cout<<"with explicit argument"<<endl;
    printline(65);
    cout<<"with default value"<<endl;
    printline(10);
    cout<<"with default value"<<endl;
    printline(15,'#');
    cout<<"with explicit argument"<<endl;
}
void printline(int len,char ch='*')
{
    for(int i=0;i<len;i++)
    cout<<ch;
    cout<<endl;
}
