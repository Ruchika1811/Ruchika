#include<iostream>
using namespace std;
long calcfactorial(int);
int main()
{
    int n=7;
    long fact;
    fact=calcfactorial(n);
    cout<<n<<" Factorial:"<<calcfactorial(n)<<endl;

}
long calcfactorial(int x)
{

    long fact =1;
    for(int i=1;i<=x;i++)
        fact *= i;
     return (fact);
}
