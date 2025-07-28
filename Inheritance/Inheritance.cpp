#include <iostream>
using namespace std;

// use of  access modifiers  
class Human {
    public:
        string name;
        int age;
        int height;
};

class child: private Human {
    int childAge;
};

int main(){
    child child1;
    child1.name = "Lavanshu";
}