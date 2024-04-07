// Overloading Unary operator -> Increment Operator(++) or Decrement Operator(--) -> Postfix or Prefix 
// In Increment or Decrement Unary Operator overloading, to differentiate between pre and post, we simply pass "int" as the formal parameters, but don't pass anything while calling the function

#include <iostream>
using namespace std;

class Number {
	private:
		int x;
	public:
		void set_data(int a) {
			x = a;
		}
		void show_data() {
			cout << "x = " << x << "\t";
		}
		Number operator++() { // Pre-increment
			Number N;
			N.x = ++x;
			return N;
		}
		Number operator++(int) { // Post-increment
			Number N;
			N.x = x++;
			return N;
		}
};

int main() {
	Number n1, n2;
	n1.set_data(3);
	n1.show_data();

	cout << "\n\nPrefix Increment:-\n";
	n2 = ++n1; // n2 = n1.operator++();
	n1.show_data();
	n2.show_data();

	cout << "\n\nPostfix Increment:-\n";
	n1.set_data(3); // resetting x as 3
	n2 = n1++;
	n1.show_data();
	n2.show_data();
	
	return 0;
}
