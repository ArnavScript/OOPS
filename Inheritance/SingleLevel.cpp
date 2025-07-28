#include <iostream>
using namespace std;


// single level inheritance
class Animal{
    protected:
         string petname;
         string color;
         int age;

    public:
   Animal(string petname, string color, int age){
        this->petname = petname;
        this->color = color;
        this->age = age;
   }
    void baseclass() {
        cout<<"I am your base class Animal"<<endl;
    }
};

class Dog: public Animal {
    protected:
        string sound;
    public:
     Dog(string petname,string color, int age, string sound):Animal(petname, color, age){
        this->sound = sound;
     }
     void display() {
        cout << "Pet Name: " << petname << endl;
        cout << "Color: " << color << endl;
        cout << "Age: " << age << endl;
        cout << "Sound: " << sound << endl;
     }
};

int main(){
    Dog *dog=new Dog("Honululu","Brown",5,"Bark");
    dog->display();
    dog->baseclass();
}