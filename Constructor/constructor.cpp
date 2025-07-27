#include<iostream>
using namespace std;

// contructor
// types of constructors

 class Constructor{
    public:
        int x, y;

        // Default constructor
        Constructor() {
            x = 0;
            y = 0;
            cout<< "Default constructor called" << endl;
         }

        // Parameterized constructor
        Constructor(int a, int b) {
            x = a;
            y = b;
            cout << "Parameterized constructor called with values: " << x << ", " << y << endl;
        }

        // Copy constructor
        Constructor(Constructor &obj) {
            x = obj.x;
            y = obj.y;
            cout << "Copy constructor called" << endl;
        }


        // Method to display values
        void display() {
            cout << "x: " << x << ", y: " << y << endl;
        }

        // Destructor
        ~Constructor() {
            cout << "Destructor called ";
        }
    };
    
    
 int main() {
    // Creating an object using the default constructor
    Constructor obj1;
    obj1.display();

    // Creating an object using the parameterized constructor
    Constructor obj2(10, 20);
    obj2.display();

    // // default copy constructor
    // Constructor obj3(obj2); // default Copy constructor called
    // cout << "Copy constructor called" << endl;
    // obj3.display();

    // copy constructor
    Constructor obj4(obj2);
    obj4.display();

    return 0;
}