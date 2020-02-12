#include<iostream>
#include<string.h>
using namespace std;
const int N =2;
class Employee
{
      public:
        int empno;
        char empname[10];
        char gender;
        int basic_salary;
        int da;
        int hra;
        int monthly_salary;
        int bonus;
        int grade;
        int yearly_salary;

void setemployee(int eno,char enm[],char gen,int bas_sal)
{
        empno=eno;
        strcpy(empname,enm);
        gender=gen;
        basic_salary=bas_sal;
}
void calcda()
{
    da=basic_salary*5/100;
}
void calchra()
{
    hra=basic_salary*2/100;
}
void calcmonthlysalary()
{
    monthly_salary=basic_salary+da+hra;
}
void calcbonus()
{
        cout<<"enter bonus:";
        cin>>bonus;

}
void calcyearlysalary()
{
    yearly_salary=bonus+(monthly_salary*12);
}
void show()
{
        cout<<empno<<'\t';
        cout<<empname<<'\t';
        cout<<gender<<'\t';
        cout<<basic_salary<<'\t';
        cout<<monthly_salary<<'\t';
        cout<<yearly_salary<<  '\t';}
};
int main()
{
    Employee emp_arr[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter eno:";
        cin>>emp_arr[i].empno;

        cout<<"Enter empname:";
        cin>>emp_arr[i].empname;

        cout<<"Enter gender:";
        cin>>emp_arr[i].gender;

        cout<<"Enter basic_salary:";
        cin>>emp_arr[i].basic_salary;

        emp_arr[i].setemployee(emp_arr[i].empno,emp_arr[i].empname,emp_arr[i].gender,emp_arr[i].basic_salary);
        emp_arr[i].calcbonus();
    }
    for(int i=0;i<N;i++)
    {
        emp_arr[i].calcda();
        emp_arr[i].calchra();
        emp_arr[i].calcmonthlysalary();
        emp_arr[i].calcyearlysalary();
    }
    cout<<endl<<"--------------------------------------------------------";
    cout<<endl<<"----------------Employee Database------------------------";
    cout<<"\nEnum\tEname\tGender\tBas_sal\tMont_sal    Year_sal\n";

    for(int i=0;i<N;i++)
    {
        emp_arr[i].show();
        cout<<endl;
    }
}
