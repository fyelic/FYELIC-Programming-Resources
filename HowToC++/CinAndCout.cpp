#include <iostream> // Include package for cout and cin

// standard namespace is needed to omit the 'std::'
// before iostream functions like cin, cout, and coutprecision
using namespace std;

int main() {
	// How to use Cout and Cin
	
	// In order to print to the terminal, we can use the Cout function with double arrows.
	// At the end of the cout statement,
	// use an 'endl' to press "enter" after typing to the terminal
	cout << "Hello World!" << endl; // Make sure you end each line with a semicolon
	
	// You can use an empty cout statement along with an 'endl' for a blank line:
	cout << endl;
	
	// You can use multiple double arrows to include multiple strings:
	cout << "First String" << ", Second String" << endl;
	
	// You can use escape sequences such as:
	// \n --> newline
	// \t --> tab
	// \\ --> backslash
	// in order to format strings when printing
	cout << "First line\nSecond Line\nThird Line" << endl;
	cout << "Left side \t Right side" << endl;
	
	// You can also include numbers along with strings when printing:
	cout << "The radius of a circle can be " << 4 << " meters large." << endl;
	
	// You can use cout to print variables that you have declared
	int x = 5;
	int y = 2;
	cout << "I'm a point located at (" << x << "," << y << ")" << endl;
	
	// You can also print booleans, which will appear as 0 or 1(false or true):
	cout << "True or False? Penguins can fly: " << false << endl;
	cout << "True or False? Cats can run: " << true << endl;
	
	// You can use cin to save user input to a variable:
	int variable = 0; // declare a variable and initialize to zero
	cout << "Enter an int to save: "; // Omit the 'endl' so the user can type on the same line
	cin >> variable; // Wait for user to press enter after typing input
	cout << "The variable is saved as: " << variable << endl;
	
	// You can save strings as well
	string answer = "";
	cout << "What is your name: ";
	cin >> answer;
	cout << "Hello there " << answer << "! I am a computer." << endl;
	
	// Be careful to save user inputs as valid variable types
	int userResponse = 0;
	cout << "Enter the word cat: "; // user will enter a string
	cin >> userResponse; // the variable is an int
	cout << "User Response: " << userResponse << endl;
	
	return 0; // return 0 to end main()
}