//Ques:- How can I access private entity in out side of the class?
#include<iostream>
using namespace std;

class Hero
{
    private:
    int health;
    public:
    char level;

    //use getter
    int getHealth()
    {
        return health;
    }
    
    //use setter
    int setHealth(int h)
    {
        health = h;
    }

};
int main()
{
    Hero golu,molu;

    cout<<"Health : "<<endl;
    int health;
    cin>>health;

    cout<<"level : "<<endl;
    char level;
    cin>>level;
    // golu.getHealth();         //give anything
    // golu.setHealth(900);      //update the value
    // molu.setHealth(1200);    //update the value

    golu.setHealth(health);
    molu.setHealth(health);

    // golu.level = 'A';
    // molu.level = 'B';

    cout<<"Golu health is : "<<golu.getHealth()<<endl;
    cout<<"Golu level is : "<<golu.level<<endl;

    cout<<"Molu health is : "<<molu.getHealth()<<endl;
    cout<<"Molu level is : "<<molu.level<<endl;

    return 0;
}