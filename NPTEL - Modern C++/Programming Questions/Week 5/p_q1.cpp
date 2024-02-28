/* Test Cases:-
Input    Output
3        3, 6, 9
10       10, 20, 30
*/

#include<iostream>
using namespace std;
class B{
    protected:
        int b1;
    public:
        B(int b) : b1(b){}
};
class D{
    protected:
        int b2;
    public:
        D(int b) : b2(b){}
};

class DD : public B, public D{ //LINE-1

    int d;
    public:
        DD(int x) : B(2*x), D(3*x), d(x){} //LINE-2

        void show(){
            cout << d << ", " << b1 << ", " << b2;
        }
};

int main(){
    int x;
    cin >> x;
    DD t1(x);
    t1.show();
    return 0;
}
