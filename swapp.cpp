#include <iostream>
using namespace std;
void swap(int &a, int b) {
    a +=5;
    b*=2;
    cout<<"inside swapping function: a="<<a<<",b="<<b<<endl;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    // Function call
    swap(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
