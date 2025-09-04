#include<iostream>
using namespace std;
int main(){
    int i, arr[5];
    cout<<"enter the elements: ";
    for (i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"array elements are: "<<endl;

    for(i=0;i<5;i++){
        cout<<arr[i];
        cout<<endl;
    }
    return 0;
}