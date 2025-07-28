#include<iostream>
using namespace std;

// multilevel inheritance
class Animal {
    protected:
        string name;
        string color;
        int age;
};

class Dog : public Animal {
    protected:
       string sound;
       bool isTrained;
       bool ispet;
};

class Vaccination: public Dog {
    protected:
        string vaccineName;
        bool isVaccinated;
    public:
        Vaccination(string name, string color, int age, string sound, bool isTrained, bool ispet, string vaccineName, bool isVaccinated){
            this->name = name;
            this->color = color;
            this->age = age;
            this->sound = sound;
            this->isTrained = isTrained;
            this->ispet = ispet;
            this->vaccineName = vaccineName;
            this->isVaccinated = isVaccinated;
        }
       void display() {
            cout << "Name: " << name << endl;
            cout << "Color: " << color << endl;
            cout << "Age: " << age << endl;
            cout << "Sound: " << sound << endl;
            cout << "Is Trained: " << (isTrained ? "Yes" : "No") << endl;
            cout << "Is Pet: " << (ispet ? "Yes" : "No") << endl;
            cout << "Vaccine Name: " << vaccineName << endl;
            cout << "Is Vaccinated: " << (isVaccinated ? "Yes" : "No") << endl;
        }
    };


    int main() {
        Vaccination dog("chusky", "DarkBrown", 6, "Bark", true, true, "Rabies", true);
        dog.display();
        return 0;
    }