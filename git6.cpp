//Ques:- Static keyword 
#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;
    static int timeToComplete;        //static keyword apply

    Hero()      //default constructor
    {
        cout<<"Simple constructor called"<<endl;
    }
};
int Hero::timeToComplete = 10;       //Initialisation of static keyword

int main()
{
    cout<<Hero::timeToComplete<<endl;      //direct access without creating object

    Hero a;                 
    cout<<a.timeToComplete<<endl;           // access after creating object

    Hero b;
    b.timeToComplete = 20;           //update value
    cout<<a.timeToComplete<<endl;    //print normally updated value
    cout<<b.timeToComplete<<endl;     ///print normally updated second value
    return 0;
}