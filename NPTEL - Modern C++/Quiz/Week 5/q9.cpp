#include <iostream>
using namespace std;

class A {
    public:
        int x;
        void printA() { cout << "Class A"; }
};

class B : public A // will not work with any other keywords like private, protected, and friend
{
    public:
        void printB() { cout << "Class B"; }
};

int main() {
    B b;
    b.printA();
    return 0;
}
