#include<iostream>
#include<string.h>
using namespace std;
class Date
{
    public:
        int dd,mm,yyyy;
        void setDD(int d);
        void setMM(int m);
        void setYYYY(int y);
        void set(int d,int m,int y);
        int getDD();
        int getMM();
        int getYYYY();
        void printshortdate();
        void printlongdate();
        int checkleapyear();
        int isvaliddate();
};
void Date::setDD(int d)
{
    cout<<"date is:"<<d<<endl;
}
void Date::setMM(int m)
{
    cout<<"month is:"<<m<<endl;

}
void Date::setYYYY(int y)
{
    cout<<"year is:"<<y<<endl;
}
void Date::set(int d,int m,int y)
{
    cout<<"Date is: "<<d<<" "<<"month is: "<<m<<" "<<"Year is: "<<y<<endl;
}
int Date::getDD()
{
    cout<<"enter date:";
    cin>>dd;
}
int Date::getMM()
{
    cout<<"enter month:";
    cin>>mm;
}
int Date::getYYYY()
{
    cout<<"enter year:";
    cin>>yyyy;
}
void Date::printshortdate()
{
    cout<<"print short date:"<<endl;
    cout<<yyyy<<"-"<<mm<<"-"<<dd<<endl;

}
void Date::printlongdate()
{
    cout<<"print long date:"<<endl;
    cout<<dd<<"-"<<mm<<"-"<<yyyy<<endl;

}
int Date::checkleapyear()
{
    if(yyyy%4==0)
    {
        if(yyyy%100==0)
        {
            if(yyyy%400==0)
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
int Date::isvaliddate()
{
    if(yyyy>0)
    {
        if(mm==1||mm==3||mm==5||mm==7||mm==9||mm==11)
        {
            if(dd>=1 && dd<=31)
                return 1;
        }
    }
    else if(mm==4||mm==6||mm==8||mm==10||mm==9||mm==12)
    {
        if(dd>=1 && dd<=30)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if(mm==2)
    {
        if(yyyy%4==0)
        {
            if(yyyy%100==0)
            {
                if(yyyy%400==0)
                {
                    if(dd>=1 && dd<=29)
                    {
                        return 1;
                    }
                    else
                    {
                        if(dd>=1 && dd<=20)
                        {
                            return 1;
                        }
                    }
                }
                else
                {
                    if(dd>=1 && dd<=29)
                    {
                        return 1;
                    }
                }
                }
            else
            {
                return 0;
            }
            }
        else
        {
            return 0;
        }
        }
    else
    {
        return 0;
    }
}

int main()
{
    Date d1;
    int temp,temp1;

    d1.getDD();
    d1.getMM();
    d1.getYYYY();

    d1.setDD(d1.dd);
    d1.setMM(d1.mm);
    d1.setYYYY(d1.yyyy);
    d1.set(d1.dd,d1.mm,d1.yyyy);

    d1.printshortdate();
    d1.printlongdate();

    temp=d1.checkleapyear();
    if(temp==1)
    {
        cout<<"Leap year"<<endl;
    }
    else
    {
        cout<<"Not Leap year"<<endl;
    }
    temp1=d1.isvaliddate();
    if(temp1==1)
    {
        cout<<"valid date"<<endl;
    }
    else
    {
        cout<<"invalid date"<<endl;
    }
}
