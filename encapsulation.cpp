#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;       // private data (hidden)
    string name;

public:
    // Setter methods
    void setRollNo(int r) {
        rollNo = r;
    }
    void setName(string n) {
        name = n;
    }

    // Getter methods
    int getRollNo() {
        return rollNo;
    }
    string getName() {
        return name;
    }
};

int main() {
    Student s;
    s.setRollNo(101);      // Access through public methods
    s.setName("Nikhil");

    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Name: " << s.getName() << endl;
    return 0;
}
