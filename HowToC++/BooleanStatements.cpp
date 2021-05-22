#include <iostream> // Include package for cout and cin

// standard namespace is needed to omit the 'std::'
// before iostream functions like cin, cout, and coutprecision
using namespace std;

int main() {
	//How to use boolean operators and contitional statements
	//Booleans are values which are either true or false, 1 or 0
	
	bool a1;
	bool a2;
	
	a1 = true;
	a2 = false;
	
	//When printing out booleans, true becomes 1, false becomes 0
	cout << "a1 == " << a1 << endl;
	cout << "a2 == " << a2 << endl << endl;
	
	//AND Operator - &&
	//The AND Operator returns true if the two used booleans
	//are also true
	//Truth Table for Y = A && B
	//
	// A		B		Y
	//-----------------------
	// false	false	false
	// false	true	false
	// true		false	false
	// true		true	true
	
	cout << "false && false => " << (false && false) << endl;
	cout << "false && true => " << (false && true) << endl;
	cout << "true && false => " << (true && false) << endl;
	cout << "true && true => " << (true && true) << endl << endl;
		
	//AND Operator - ||
	//The AND Operator returns true if either of 
	//the two used booleans are also true
	//Truth Table for Y = A || B
	//
	// A		B		Y
	//-----------------------
	// false	false	false
	// false	true	true
	// true		false	true
	// true		true	true
	
	cout << "false || false => " << (false || false) << endl;
	cout << "false || true => " << (false || true) << endl;
	cout << "true || false => " << (true || false) << endl;
	cout << "true || true => " << (true || true) << endl << endl;
	
	//NEGATION - !
	//The negation turns a true to a false and a
	//false to a true
	//Truth Table for Y = !A
	//
	// A		Y		
	//-------------
	// false	true
	// true		false
	
	cout << "!false =>" << (!false) << endl;
	cout << "!true => " << (!true) << endl;
	
	//Boolean Expressions
	//These are operators for outputting a boolean
	//dependent on the comparison made
	//EQUALS 					"==" 		returns true if the two values are equal
	//NOTEQUALS 				"!=" 		returns true if the two values are not equal
	//LESS THAN 				"<" 		returns true if the first value is less than the second value
	//LESS THAN OR EQUAL 		"<="		returns true if the first value is less than or equal the second value
	//GREATER THAN 				">" 		returns true if the first value is less than the second value
	//GREATER THAN OR EQUAL 	">="		returns true if the first value is less than or equal the second value
	
	cout << "3 == 3 =>" << (3 == 3) << endl;
	cout << "3 == 4 =>" << (3 == 4) << endl << endl;
	
	cout << "3 != 3 =>" << (3 != 3) << endl;
	cout << "3 != 4 =>" << (3 != 4) << endl << endl;
	
	cout << "5 < 3 =>" << (5 < 3) << endl;
	cout << "3 < 5 =>" << (5 < 3) << endl << endl;
	
	cout << "5 <= 3 =>" << (5 <= 3) << endl;
	cout << "5 <= 5 =>" << (5 <= 5) << endl << endl;
	
	cout << "1 > 4 =>" << (1 > 4) << endl;
	cout << "6 > 2 =>" << (6 > 2) << endl << endl;
	
	cout << "1 <= 4 =>" << (1 <= 4) << endl;
	cout << "8 <= 8 =>" << (8 <= 8) << endl << endl;
	
	//Boolean Expressions will work for all basic types (like int, double, char, etc.)
	//It will work for strings sometimes, but due to strings
	//being a list of chars, it may be inconsistent
	
	cout << "Double: 1.5 == 1.5 => " << (1.5 == 1.5) << endl;
	cout << "Char: 'A' == 'A' => " << ('A' == 'A') << endl;
	string str1 = "Hello";
	string str2 = "Hello";
	cout << "String: Hello == Hello => " << (str1 == str2) << endl << endl;
	
	
	//Boolean Operators and Expressions can be used together
	//Always a good idea to use parenthesis for organization
	
	cout << "(5 > 7) && (6 == 6) => " << ((5 > 7) && (6 == 6)) << endl;
	cout << "Statement Translated : True or False - 5 is greater than 7 AND six equals six" << endl;
	
	
	
	
}
