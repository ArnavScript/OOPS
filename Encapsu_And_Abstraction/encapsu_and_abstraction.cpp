#include<iostream>
using namespace std;

class Encapsulation {
    private:
        int data;  // Private data member

    public:
        // Constructor to initialize data
        Encapsulation(int value){
            data = value;
        }

        // Getter method to access private data
        int getData(){
            return data;
        }

        // Setter method to modify private data
        // can be say that this is a abstraction means data hiding
        void setData(int value) {
            if(value < 0) {
                cout << "Value cannot be negative." << endl;
                return;
            }
            data = value;
        }
};
int main() {
    Encapsulation obj(10);  // Create an object of Encapsulation class
    cout << "Initial Data: " << obj.getData() << endl;  // Accessing private data using getter

    obj.setData(-79);  // Modifying private data using setter
    cout << "Modified Data: " << obj.getData() << endl;  // Accessing modified data

    return 0;
}