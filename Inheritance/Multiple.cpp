#include<iostream>
using namespace std;

// multilevel inheritance
class Teacher {
    protected:
        string name;
        string subject;
        int experience;
};

class Engineer {
    protected:
       string company;
       string specialization;
};

class codeTeacher : public Teacher, public Engineer {
    protected:
        string programmingLanguage;
        bool isCertified;
    public:
        codeTeacher(string name, string subject, int experience, string company, string specialization, string programmingLanguage, bool isCertified) {
            this->name = name;
            this->subject = subject;
            this->experience = experience;
            this->company = company;
            this->specialization = specialization;
            this->programmingLanguage = programmingLanguage;
            this->isCertified = isCertified;
        }
        
        void display() {
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Company: " << company << endl;
            cout << "Specialization: " << specialization << endl;
            cout << "Programming Language: " << programmingLanguage << endl;
            cout << "Certified: " << (isCertified ? "Yes" : "No") << endl;
        }
};


int main() {
    codeTeacher teacher("Arnav", "Computer Science", 5, "TechCorp", "Software Development", "C++", true);
    teacher.display();
    return 0;
}