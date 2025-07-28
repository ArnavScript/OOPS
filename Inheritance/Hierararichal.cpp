#include<iostream>
using namespace std;


// hierarchical inheritance
class Human{
    public:
    void speak(){
        cout << "I can speak because I am an animal" << endl;
}
};

class Engineer : public Human{
    public:
    void work(){
        cout << "I can design and build" << endl;
    }
};

class Doctor : public Human{
    public:
    void treat(){
        cout << "I can treat patients" << endl;
    }
};

int main(){
    Engineer eng;
    Doctor doc;

    eng.speak();  // Inherited from Human
    eng.work();   // Specific to Engineer

    doc.speak();  // Inherited from Human
    doc.treat();  // Specific to Doctor

    return 0;
}