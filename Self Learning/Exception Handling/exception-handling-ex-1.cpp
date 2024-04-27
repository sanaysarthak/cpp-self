// Program in C++ to demonstrate Exception Handling using try and catch

/* Syntax:-

	try {         
	     // Code that might throw an exception
	     throw SomeExceptionType("Error message");
	} 
	catch( ExceptionName e1 )  {   
	     // catch block catches the exception that is thrown from try block
	} 

*/

// The try keyword represents a block of code that may throw an exception placed inside the try block. It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.
// The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.
// An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception. 
// Note: Multiple catch statements can be used to catch different type of exceptions thrown by try block.

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {

	// try block
	try {
		int numerator = 10;
		int denominator = 0;
		int res;

		// check if denominator is 0, then throw runtime error
		if(denominator == 0)
			throw runtime_error("Division by zero not allowed!");

		// calculate result, if no exception occurs
		res = numerator / denominator;
		cout << "Result after division: " << res << endl;
	}

	// catch block to catch the thrown exception
	catch(const exception& e) 
		cout << "Exception : " << e.what() << endl; // print the exception

	return 0;
}
