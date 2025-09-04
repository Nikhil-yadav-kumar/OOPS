#include <iostream>
using namespace std;

class person{
    int age;
    string name;
    public:

    person(){ // default constructor
        age=20;
        name="Nikhil";
    }
    void display(){
        cout<<"age: "<<age<<endl<<"name: "<<name<<endl;
    }
    
};
int main(){
    person p;
    p.display();
}