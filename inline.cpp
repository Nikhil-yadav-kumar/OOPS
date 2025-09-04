#include<iostream>
using namespace std;
inline int add(int a, int b){
    return a+b;
}
int main(){
    int num1,num2;
    cout<<"enter first number: "<<endl;
    cin>>num1;
    cout<<"enter second number: "<<endl;
    cin>>num1;
    int sum=add(num1,num2);
    cout<<"sum= "<<sum<<endl;
    return 0;
}