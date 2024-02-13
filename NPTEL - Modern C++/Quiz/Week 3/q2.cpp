#include <iostream>
using namespace std;
class Check {
    public:
        Check() { cout << "Default" << endl; }
        Check(int x=0) { cout << "Parameterized" << endl; }
};

int main() {
    Check m1;
    // It will return an error "call of overloaded Check() is ambiguous"
    // class Check has more than one default constructor
    return 0;
}
