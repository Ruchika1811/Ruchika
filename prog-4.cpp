#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
    private:
        int empno;
        char empname[10];
        char gender;
        int basic_salary;
        int da;
        int hra;
        int monthly_salary;
        int bonus;
        int yearly_salary;
    public:
        void setemployee(int eno,char enm[],char gen,int bas_sal);
        void calcda();
        void calchra();
        void calcmonthlysalary();
        void calcbonus();
        void calcyearlysalary();
        void show();
};
int main()
{
    Employee krima;
    krima.setemployee(11,"parth",'M',20000);
    krima.calcda();
    krima.calchra();
    krima.calcmonthlysalary();
    krima.calcbonus();
    krima.calcyearlysalary();
    krima.show();
}
void Employee::setemployee(int eno,char enm[],char gen,int bas_sal)
{
    empno=eno;
    strcpy(empname,enm);
    gender=gen;
    basic_salary=bas_sal;
}
void Employee::calcda()
{
    da=basic_salary*5/100;
}
void Employee::calchra()
{
    hra=basic_salary*2/100;
}
void Employee::calcmonthlysalary()
{
    monthly_salary=basic_salary+da+hra;
}
void Employee::calcbonus()
{
        cout<<"enter bonus:";
        cin>>bonus;
  //  bonus=2000;
}
void Employee::calcyearlysalary()
{
    yearly_salary=bonus+(monthly_salary*12);
}
void Employee::show()
{
    cout<<"Employee no : "<<empno<<endl;
    cout<<"Employee name: "<<empname<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Basic_salary: "<<basic_salary<<endl;
    cout<<"DA: "<<da<<endl;
    cout<<"Monthly_salary: "<<monthly_salary<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Yearly_salary: "<<yearly_salary<<endl;
}


