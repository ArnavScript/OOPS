#include<iostream>
using namespace std;

//1(a) polymorphism using function overloading
// compile time polymorphism

class overloading{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
};

// int main(){
//     overloading obj;
//     cout << "Sum of two numbers: " << obj.add(5, 10) << endl;
//     cout << "Sum of three numbers: " << obj.add(5, 10, 15) << endl;
//     return 0;
// }





// 1(b) operator overloading


class Complex {
    int real;
    int imaginary;
public:
    Complex(){
        real=0;
        imaginary=0;
     }
    Complex(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    
    // Overload + operator to add two Complex numbers
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imaginary + obj.imaginary);
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 6);
    Complex c2(6,3);
    Complex c3 = c1 + c2;
    cout << "Sum of complex numbers: ";
    c3.display();
    return 0;
}