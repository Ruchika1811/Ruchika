#include <iostream>
using namespace std;
int checkLeapYear(int year);
int main()
{
    int year;
    cout<<"enter year: "<<endl;
    cin>>year;
    cout<<"The Year "<<year<<" is "<<(checkLeapYear(year) ? "Leap Year" : "Not Leap Year")<<endl;

}
int checkLeapYear(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
