#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int *p;
    p=&a;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
        cout<<"pointer p points to address: "<<p<<endl;
        cout<<" value at the address point by p: "<<*p<<endl;
    p=&b;
    *p=40;
        cout<<"\n after changing value of b through pointers:"<<endl;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    return 0;        
}