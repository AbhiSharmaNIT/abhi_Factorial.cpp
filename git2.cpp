//Ques:- How can we call constructor?
/*Constructor:- A constructor in cpp is a special method that is automatically called when
an object of a class is created */
#include<iostream>
using namespace std;

class Man
{
    public:
    int Humanity;
    char grade;

    Man()          //default constructor
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<"Man will be man"<<endl;
        }
        
    }
};

int main()
{
    cout<<"From now constructor will be calling"<<endl;

    Man man;          //constructor are calling

    cout<<"End"<<endl;

    cout<<"start dynamecally"<<endl;

    Man *woman = new Man;      //dynamically constructor are calling

    return 0;
}