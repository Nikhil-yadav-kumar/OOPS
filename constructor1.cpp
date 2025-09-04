#include<iostream>
using namespace std;


class sample {
    int a, b;
    public:
    sample(){
        cout << "this is constructor"<<endl;
        a=100;
        b=200;

    }
    int add(){
        return(a+b);
    }
};

int main(){
    sample s;
    cout<<"output is: "<<s.add() <<endl;
    return 0;
}