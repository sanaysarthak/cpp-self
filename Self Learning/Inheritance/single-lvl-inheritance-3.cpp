// Example of program in C++ to perform single level inheritance

#include <iostream>
using namespace std;

class A {
	private:
		int a = 4;
		int b = 5;

	public:
		int mul() {
			int c = a * b;
			return c;
		}
};

class B : private A {
	public:
		void display() {
			int result = mul();
			cout << "Multiplication of A and B is : " << result << endl;
		}
};

int main() {
	B b;
	b.display();
	return 0;
}
