//Ques:- Parameterized constructor

#include<iostream>
using namespace std;

class Hero
{
    public:
    int health1;
    char level;

    Hero()          //default constructor
    {
        cout<<"constructor called"<<endl;
    }

    Hero(int health2)          //parameterized constructor
    {
        cout<<"value of 'this' is : "<<this<<endl;
        this -> health1 = health2;
    }
};
int main()
{
    Hero Ramesh(20);
    cout<<"Address of Ramesh is : "<<&Ramesh<<endl;
   
    Hero *hero1 = new Hero;           //by dynamically default constructor is called
    Hero *hero2 = new Hero(20);      //we get different garbage value
    return 0;
}
