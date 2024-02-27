#include <iostream>
using namespace std;

class ClassA {
    public:
        virtual void f() { cout << "1 "; }
};
class ClassB : public 