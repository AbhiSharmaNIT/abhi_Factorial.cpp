//Ques:- Shallow copy constructor 
#include<iostream>
#include<string.h>
using namespace std;

class Hero
{
    public:
    char *name;
    int health;

    Hero()
    {
        cout<<"simple constructor called"<<endl;
        name = new char[100];
    }

    void print()
    {
        cout<<endl;
        cout<<"[Name : "<<this->name<<" , ";
        cout<<"Health : "<<this->health<<" ]";
        cout<<endl;
    }

    void setName(char name[])
    {
        strcpy(this -> name, name);
    }
};

int main()
{
    Hero hero1;

    hero1.health = 10;
    char name[7] = "saurav";
    hero1.setName(name);
    hero1.print();

    //used default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'm';
    hero1.print();

    hero2.print();

    return 0;
}
