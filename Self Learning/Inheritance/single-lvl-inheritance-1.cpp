// Example of program in C++ to perform single level inheritance

#include <iostream>
using namespace std;

class Animal {
	public:
		void eat() {
			cout << "Eating..." << endl;
		}
};

class Dog : public Animal {
	public:
		void bark() {
			cout << "Barking..." << endl;
		}
};

int main() {
	Dog d1;
	d1.eat(); // calling member function of parent (base) class using object of child (derived) class.
	d1.bark();
}
