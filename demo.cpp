#include <bits/stdc++.h>
using namespace std;

class student {
    // This are private properties can be accessable outside the class defination 
    string name;
    int age;
    bool gender;

    public: // All the function below this will be accessable

    // In C++ their are 4 types of constructor
    // 1 => Default constructor: This will call while initializing instance of the class with no parameters. Majorly this is used for setup the default values to the instance properties
    student() {
        cout << "Default setup code here";
    }

    // 2 => Parameterised Constructor: This used to set the custom values to the instance properties.
    student(string n, int a, bool g) {
        name = n;
        age = a;
        gender = g;
    }

    // 3 => Copy constructor: This is used to make deep copy of the instance.
    student(student &c) {
        name = c.name;
        age = c.age;
        gender = c.gender;
    }

    // 4 => Destroy constructor: This constructor is called when the instance is deleting fron the memory or stack 
    ~student() {
        cout << "Destructor called";
    }
};

int main() { 
    student a;
    cout << "Main ends" << endl << endl;
}