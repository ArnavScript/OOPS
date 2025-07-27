#include<iostream>
using namespace std;

// class
class Student{

    private:   // access modifier
    // attributes
    string name;
    int age,rollnumber;
    string grade;

    // methods
    public:    // access modifier
    // Setters
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setRollNumber(int r) {
        rollnumber = r;
    }
    void setGrade(string g) {
        grade = g;
    }

    // Getters
    void getName(){
        cout << "Name: " << name << endl;
    }
    void getAge(){
        cout << "Age: " << age << endl;
    }
    void getRollNumber(){
        cout << "Roll Number: " << rollnumber << endl;
    }
    void getGrade(){
        cout << "Grade: " << grade << endl;
    }
};

int main() {
  // creating an object of class Student  
  // static object or memory allocation
  Student s1;


//   s1.name="Arnav Varshney";
//   s1.age=20;
//   s1.rollnumber=44;
//   s1.grade="A+";
//   cout<<s1.name<<endl;
//   cout<<s1.age<<endl;
//   cout<<s1.rollnumber<<endl;
//   cout<<s1.grade<<endl;

s1.setName("Arnav Varshney");
s1.setAge(20);
s1.setRollNumber(44);
s1.setGrade("A+");
s1.getName();
s1.getAge();
s1.getRollNumber();
s1.getGrade();

// dynamic object or memory allocation
 Student *s2 = new Student();
 s2->setName("John Doe");
 s2->setAge(22);
 s2->setRollNumber(55);
 s2->setGrade("B");
 s2->getName();
 s2->getAge();
 s2->getRollNumber();
 s2->getGrade();

 delete s2;  // free the allocated memory
}