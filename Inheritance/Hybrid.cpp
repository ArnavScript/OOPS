#include<iostream>
using namespace std;

// Hybrid inheritance example

// student class
// boy class
// girl class
// male class
// female class

class Student {
    public:
    void Studentprint() {
        cout << "Student constructor called" << endl;
    }
    };

    
class Male{
    public:
   void Maleprint() {
        cout << "Male constructor called" << endl;
    }
};

class Female{
    public:
   void Femaleprint() {
        cout << "Female constructor called" << endl;
    }
};

class Boy : public Student , public Male 
{
    public:
   void Boyprint() {
        cout << "Boy constructor called" << endl;
    }
};

class Girl : public Student , public Female
 {
    public:
   void Girlprint() {
        cout << "Girl constructor called" << endl;
    }
};


int main(){
    Boy b;
    b.Boyprint();
    b.Studentprint();
    Girl g;
    g.Girlprint();
    g.Studentprint();
    return 0;
}