#include <iostream>
using namespace std;

// They are the attributes of class or class member.
class staticDataMember {
    static int count;  // Static data member declaration (obj  create hone se pehle hi initialize ho jata hai mtlb obj ka part nhi hai class ka part hai)
    public:
    staticDataMember() {
        count++;
    }
    // static member function to access static data member
    // static likhte hi class ka part ban jata hai staticDataMember ka hi access ho sakta hai non static member ka nhi
    static int getCount() {
        return count;
    }
};

// resolution of static data member
int staticDataMember::count = 0;  // Static data member definition

int main() {
    staticDataMember obj1;
    staticDataMember obj2;
    cout<< "Count: " << obj2.getCount() << endl;
//    cout << "Count: " << staticDataMember::count << endl;  Accessing static member directly for this count declared as public (bina obj ke access ho jyega)
    cout << "Count: " << staticDataMember::getCount() << endl;
    return 0;
}