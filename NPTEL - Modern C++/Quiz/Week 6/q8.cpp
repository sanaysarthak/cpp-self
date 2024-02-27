#include <iostream>
using namespace std;

class classA {
    public:
        virtual void f() { cout << "1 "; }
};
class classB : public classA {
    public:
        void f() { cout << "2 "; }
};
class classC : public classB {
    public:
        void f() { cout << "3 "; }
};

int main() {
    classC *cb = new classC;
    // Check which of the options will give 1 as output
    // cb->f()
    // classA::cb->f()
    // cb->classA::f()
    // classA::f()
    return 0;
}