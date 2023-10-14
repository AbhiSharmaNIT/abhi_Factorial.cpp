//Ques:- Static function
#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;
    static int timeToComplete; 

    Hero()
    {
        cout<<"Simple constructor called"<<endl;
    }

    static int pagal()            //static function
    {
        return timeToComplete;         // static function always return value 
    }
};
int Hero::timeToComplete = 10;          //Initialisation

int main()
{
    cout<<Hero::pagal()<<endl;           //access static value without creating object

    Hero a;                                 
    cout<<a.pagal()<<endl;                  //access static value after creating object
    return 0;
}