//Ques:- Destructor

#include<iostream>
using namespace std;

class Hero
{
    public:
    int health;

    ~Hero()          //destructor allocation
    {
        cout<<"Destructor called"<<endl;
        cout<<endl;
    }
};

int main()
{
    Hero a;      //statically

    Hero *b = new Hero;       //dynamically

    delete b;           /*manually called, calling destructor by dynamically we areusing delete keyword.*/
    return 0;
}