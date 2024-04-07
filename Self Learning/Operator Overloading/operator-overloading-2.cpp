// Overloading Unary operator
// In Unary operator Overloading, there is nothing passed in the paranthesis as arguments

#include <iostream>
using namespace std;

class Complex {
	private:
		int a, b;
	public:
		void set_data(int x, int y) {
			a = x;
			b = y;
		}
		void show_data() {
			cout << "a = " << a << "\tb = " << b << endl;
		}
		Complex operator-() {
			Complex temp;
			temp.a = -a;
			temp.b = -b;
			return temp;
		}
};

int main() {
	Complex c1, c2;
	c1.set_data(3, 4);
	// c2 = -c1; and c2 = c1.operator-(); both are totally same
	c2 = -c1;
	c2.show_data();
	return 0;
}
