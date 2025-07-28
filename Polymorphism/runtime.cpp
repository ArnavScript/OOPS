// 2 Virtual Function
// Runtime polymorphism example in C++

#include <iostream>
using namespace std;

class Animal {
    public:
   virtual void sound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
   virtual ~Animal() {} // Virtual destructor
};

class Dog : public Animal {
    public:
    void sound() override { // Override the base class method
        cout << "Dog barks" << endl;
    }
};

// int main() {
//     Animal* p = new Dog(); // Create a Dog object
//     p->sound(); // Call the overridden sound() method
//     delete p; // Clean up
//     return 0;
// }






// 2(b) Abstract classes -->
// An abstract class is a class that has at least one pure virtual function.
// It cannot be instantiated directly and serves as a base for derived classes.
// Abstract class example
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();
    s1->draw();
    s2->draw();
    delete s1;
    delete s2;
    return 0;
}