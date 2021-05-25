#include <iostream> // Include package for cout and cin

// standard namespace is needed to omit the 'std::'
// before iostream functions like cin, cout, and coutprecision
using namespace std;

int main() {
    //How to use switch statements

    //Switch statements are a way to simplify a long if-elseif statement comparing one variable.
    //For example, consider the following example:
    int numberIf;
    cout << "Enter a number 1-4: ";
    cin >> numberIf;

    if (numberIf == 1) {
        cout << "\nThe number you entered was 1." << endl;
    } else if (numberIf == 2) {
        cout << "\nThe number you entered was 2." << endl;
    } else if (numberIf == 3) {
        cout << "\nThe number you entered was 3." << endl;
    } else if (numberIf == 4) {
        cout << "\nThe number you entered was 4." << endl;
    } else {
        cout << "\nYou did not enter a number between 1 and 4." << endl;
    }

    //See how the following switch statement translates from the above:

    int numberSwitch;
    cout << "Enter another number 1-4: ";
    cin >> numberSwitch;

    //the variable _numberSwitch_ in the parenthesis is the single variable that we're comparing
    switch (numberSwitch) {
        //"case 1" equates to "if (numberSwitch == 1)"
        case 1:
            //anything indented here after the "case" and before the "break" gets executed
            cout << "\nThe number you entered was 1." << endl;
            //break is used to exit this specific case
            break;
        case 2:
            cout << "\nThe number you entered was 2." << endl;
            break;
        case 3:
            cout << "\nThe number you entered was 3." << endl;
            break;
        case 4:
            cout << "\nThe number you entered was 4." << endl;
            break;
        //The default case is for when the variable _numberSwitch_ does not match up with any of
        //the above cases
        default:
            cout << "\nYou did not enter a number between 1 and 4." << endl;
            break;
    }

    //What's the deal with the "break" in each case?
    /*
     * Not including "break" in each of your cases might lead to some unwanted results.
     *
     * Say that we didn't include "break" in any of the above cases.
     * Also let's consider what would happen if numberSwitch was 2.
     * Case 1 would be skipped since numberSwitch != 2.
     * Case 2 would be entered since numberSwitch == 2.
     * However, since there isn't a "break",
     *  case 3 would be entered
     *  case 4 would be entered
     *  default would be entered
     * and what would happen is that everything in those subsequent cases would run.
     *
     * Not including "break" is allowed, so C++/CLion won't flag it as incorrect and
     * in some cases it might be useful to design your code this way to hit multiple cases.
     * Most of the time, especially if you're trying to emulate the if-elseif behavior,
     * we include "break" to give distinct cases
     */


    //Why is there a default at the end of the switch statement?
    /*
     * The default case is a good catch-all to include in your switch statement and acts
     * as the "else" in your if statements. The default case gets hit if none of the other
     * cases match up.
     *
     * Like "break", including "default" is optional, but it is good practice to include.
     * That way, if you typo'd or the user purposely entered something incorrectly, you can
     * catch it and not break your program later down the line.
     *
     * If the default case is not included, your switch statement will still work fine for
     * valid inputs, but just not do anything for invalid inputs, similar to if you excluded
     * the "else" in a series of if-elseif.
     */

    //Let's look at another example using chars instead of ints
    char fyelicChar;
    cout << "Enter a character from the acronym FYELIC to learn what it stands for: ";
    cin >> fyelicChar;
    fyelicChar = toupper(fyelicChar);
    //the above line just uppercases the character to allow for 'f' and 'F' to be the same
    switch (fyelicChar) {
        case 'F':
            cout << fyelicChar << " stands for First" << endl;
            break;
        case 'Y':
            cout << fyelicChar << " stands for Year" << endl;
            break;
        case 'E':
            cout << fyelicChar << " stands for Engineering" << endl;
            break;
        case 'L':
            cout << fyelicChar << " stands for Learning" << endl;
            break;
        case 'I':
            cout << fyelicChar << " stands for Innovation" << endl;
            break;
        case 'C':
            cout << fyelicChar << " stands for Center" << endl;
            break;
        default:
            cout << "The character you entered is not in \"FYELIC\"" << endl;
    }

    //Switch statements have their limitations, you can only use integers or chars as the variable to
    //compare, and the cases must be constants and cannot be ranges (like if you had a variable and
    //wanted to see <10 <20 <30, etc., you wouldn't be able to use a switch)

    //Also, as a note, you can do more than just cout in a specific case.
    //Just think of switch statements as differently formatted if statements

    return 0;
}