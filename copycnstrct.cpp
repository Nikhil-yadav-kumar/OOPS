#include<iostream>
using namespace std;
class demo {
    int a;
    public:
    demo(){
        a = 10;
    }
    demo (demo &z){
        a=z.a;
    }
    void getdata(){
        cout<<"A= "<<a<<endl;
    }
};
int main(){
    demo aa;
    demo bb(aa);
    aa.getdata();
    bb.getdata();

    return 0;
}