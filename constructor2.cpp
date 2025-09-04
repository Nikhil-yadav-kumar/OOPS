#include<iostream>
using namespace std;
class student
{
    int roll;
    public:
    void setrollno(int r)
    {
        roll=r;
    }
    void display(){
        cout<<roll<<endl;
    }
};
int main(){
    student s;
    s.setrollno(101);
    s.display();
    return 0;
}