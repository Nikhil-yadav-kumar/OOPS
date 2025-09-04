#include<iostream>
using namespace std;
class students{
    string name;
    int age, roll_number;
    string grade;
     
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invalid name: ";
            return;

        }
        name=s;
    }
    void setage(int a)
    {
        if(age<0 || age<100){
            cout<<"invalid age: ";
        }
        age=a;
    }
    void setroll_number(int r)
    {
        roll_number=r;
    }
    void setgrade(string g)
    {
        grade=g;
    }

    void getname()
    {
        cout<<name<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }
    void getroll_number()
    {
        cout<<roll_number<<endl;
    }
    void getgrade()
    {
        cout<<grade<<endl;
    }
};

int main(){
    students s1;
    s1.setname("nikhil");
    s1.setage(10);
    s1.setroll_number(179);
    s1.setgrade("A+");

    s1.getage();
    s1.getname();
}