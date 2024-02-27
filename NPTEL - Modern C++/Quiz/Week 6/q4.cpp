//All 4 lines are giving error
// Try fixing it as the question is asking, which lines will NOT give the error.

#include <iostream>
using namespace std;

class myClass {
    public:
        virtual void test() = 0; //LINE-1
};
void myClass::test {
    cout << "Pure virtual function";
}

int main() {
    myClass m; //LINE-2
    myClass *p = new myClass(); //LINE-3
    myClass.test(); //LINE-4
    return 0;
}