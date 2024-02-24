#include <iostream>
using namespace std;

class Base {
    protected:
        double i;
    public:
        Base(double _i) : i(_i) {}
        void calculate() { cout << i << endl; }
};

class Derived : public Base {
    public:
        Derived(double _i) : Base(_i) {}
        void calculate(double pi) { cout << i * pi << endl; }
};

int main() {
    Derived i1(6.75);
    i1.calculate(); // compilation error: no matching function for call to 'Derived::calculate()
    return 0;
}
