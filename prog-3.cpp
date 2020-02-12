#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        int rollno;
        char name[10];
        int semester;
        float c_marks;
        float cpp_marks;
        float java_marks;
        float total_marks;
        float percentage;
        char grade[4];
    public:
        void setstudent(int rno,char nm[],int sem,float cm,float cppm,float jm);
        void calculatetotal_marks();
        void calculatepercentage();
        void calculategrade();
        void showstudent();

};
int main()
{
    Student hardil;
    hardil.setstudent(22,"ruchika",2,43,45,34);
    hardil.calculatetotal_marks();
    hardil.calculatepercentage();
    hardil.calculategrade();
    hardil.showstudent();

    cout<<"----------------------------------------------------"<<endl;

    Student mira;
    mira.setstudent(11,"priyanka",2,56,32,45);
    mira.calculatetotal_marks();
    mira.calculatepercentage();
    mira.calculategrade();
    mira.showstudent();
    return 0;
}

void Student::setstudent(int rno,char nm[],int sem,float cm,float cppm,float jm)
{
    rollno=rno;
    strcpy(name,nm);
    semester=sem;
    c_marks=cm;
    cpp_marks=cppm;
    java_marks=jm;
}
void Student::calculatetotal_marks()
{
    total_marks=c_marks+cpp_marks+java_marks;
}
void Student::calculatepercentage()
{
    percentage=total_marks/3;
}
void Student::calculategrade()
{
    if(percentage>=70)
        grade='A';
    else if(percentage>=60)
        grade='B';
    else if(percentage>=50)
        grade='C';
    else if(percentage>=40)
        grade='Pass';
    else
        grade='Fail';
}
void Student::showstudent()
{
    cout<<"Roll no: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Semester: "<<semester<<endl;
    cout<<"C_Marks: "<<c_marks<<endl;
    cout<<"CPP_Marks: "<<cpp_marks<<endl;
    cout<<"Java_Marks: "<<java_marks<<endl;
    cout<<"Total_Marks: "<<total_marks<<endl;
    cout<<"Percentage: "<<percentage<<endl;
  //  cout<<"Grade: "<<grade<<endl;
}

