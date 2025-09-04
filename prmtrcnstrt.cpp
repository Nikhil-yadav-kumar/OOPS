#include <iostream>
using namespace std;

class person{
    int age;
    string name;
    public:

    person(int a,string s){ // parameterised constructor
        age=a;
        name=s;
    }
    void display(){
        cout<<"age: "<<age<<endl<<"name: "<<name<<endl;
    }
    
};
int main(){
    person p(20,"nikhil");
    p.display();
}