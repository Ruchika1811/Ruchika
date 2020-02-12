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
        float getmonthly_salary();
        void show();
};
void Employee:: setemployee(int eno,char enm[],char gen,int bas_sal)
{
    empno=eno;
    int i=0;
    for(i=0;enm[i]!='\0';i++)
        empname[i]=enm[i];
        empname[i]='\0';
        gender=gen;
        basic_salary=bas_sal;
}
void Employee:: calcda()
{
    da=basic_salary*5/100;
}
void Employee:: calchra()
{
    hra=basic_salary*2/100;
}
void Employee::calcmonthlysalary()
{
    float ms=monthly_salary=basic_salary+da+hra;
    monthly_salary=ms/12;
}
void Employee::calcbonus()
{
    bonus=1000;
}
void Employee::calcyearlysalary()
{
    yearly_salary=bonus+(monthly_salary*12);
}
float Employee::getmonthly_salary()
{
    return monthly_salary;
}
void Employee::show()
{
    cout<<"Employee no : "<<empno<<endl;
    cout<<"Employee name: "<<empname<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Basic_salary: "<<basic_salary<<endl;
    //cout<<"DA: "<<da<<endl;
   // cout<<"HRA: "<<hra<<endl;
    cout<<"Monthly_salary: "<<monthly_salary<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Yearly_salary: "<<yearly_salary<<endl;
}
int main()
{
    int emp_no;
    float bs;
    char empname[20],gender;
    const int N=2;
    Employee emp_arr[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter eno:";
        cin>>emp_no;

        cout<<"Enter empname:";
        cin>>empname;

        cout<<"Enter gender:";
        cin>>gender;

        cout<<"Enter basic_salary:";
        cin>>bs;

        emp_arr[i].setemployee(emp_no,empname,gender,bs);
        emp_arr[i].calcda();
        emp_arr[i].calchra();
        emp_arr[i].calcmonthlysalary();
        emp_arr[i].calcbonus();
        emp_arr[i].calcyearlysalary();
    }
    cout<<endl<<"--------------------------------------------------------";
    cout<<endl<<"----------------Employee Database------------------------"<<endl;
     for(int i=0;i<N;i++)
    {
        emp_arr[i].show();
    }
    cout<<endl;
    float temp[N];
    float tmp=0.0;
    int t;
    int i=0;
    for(i=0;i<N;i++)
    {
        temp[i]=emp_arr[i].getmonthly_salary();
        if(temp[i]>tmp)
        {
            tmp=temp[i];
            t=i;
        }
    }
    cout<<"Highest earning employee is:"<<endl;
    emp_arr[t].show();
    cout<<endl;
    for(i=0;i<N;i++)
    {
        temp[i]=emp_arr[i].getmonthly_salary();
        if(i==0)
        {
            tmp=temp[0];
            t=i;
        }
        if(temp[i]<tmp)
        {
            tmp=temp[i];
            t=i;
        }
    }
    cout<<"Least earning employee is:"<<endl;
    emp_arr[i].show();
    cout<<endl;

}



