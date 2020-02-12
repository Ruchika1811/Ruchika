#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char name[10];
        char surname[10];
        int age;
        char gender;
    public:
        void setname(char []);
        void setsurname(char []);
        void setage(int);
        void setgender(char);
        void setPerson(char [],char [],int,char);
        void showPerson();
};
int main()
{
    Person amit;
    amit.setPerson("Parth","shah",19,'M');
    amit.showPerson();
    return 0;
}
void Person::setPerson(char nm[],char snm[],int ag,char gen)
{
    setname(nm);
    setsurname(snm);
    setage(ag);
    setgender(gen);
}
void Person::setname(char nm[])
{
    strcpy(name,nm);
}
void Person::setsurname(char snm[])
{
    strcpy(surname,snm);
}
void Person::setage(int ag)
{
    age=ag;
}
void Person::setgender(char gen)
{
    gender=gen;
}
void Person::showPerson()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Surname: "<<surname<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
}
