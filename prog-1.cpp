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
        void showPerson();
};

int main()
{
    Person ram;
    ram.setname("Ruchika");
    ram.setsurname("shah");
    ram.setage(22);
    ram.setgender('F');
    ram.showPerson();

    cout<<"--------------------------------------------------"<<endl;
    Person rahim;
    rahim.setname("Priyanka");
    rahim.setsurname("mahepal");
    rahim.setage(21);
    rahim.setgender('F');
    rahim.showPerson();
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
