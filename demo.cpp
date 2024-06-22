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

// INHERITANCE
// 5 types of inheritance are; 
// 1 => Single inheritance: Here their were two class one parent and one child. The child class has the ability to get access all the public properties and function of parent class

class Parent {
    public:
    void legacy() {
        cout << "Inherited";
    }
};

class Child : public Parent {
};

// 2 => Multiple Inheritance: IN this inheritance child class has more than one parent class
class Parent1 {
    public: 
    void p1Legacy() {
        cout << "Parent 1 inherited" << endl;
    }
};
class Parent2 {
    public: 
    void p2Legacy() {
        cout << "Parent 2 inherited" << endl;
    }
};

class ChildMulti : public Parent1, public Parent2 {
};


int main() { 
    ChildMulti c1;
    c1.p1Legacy();
    c1.p2Legacy();
    cout << endl << endl;
}