#include <iostream> // Include package for cout and cin

// standard namespace is needed to omit the 'std::'
// before iostream functions like cin, cout, and coutprecision
// and also before rand and srand, as you'll see in this example
using namespace std;

int main() {
    //Using rand() and srand()

    //We can generate random numbers in C++ using rand()
    //but we get some interesting results depending on how we call rand()


    //using just rand() to print four "random" numbers
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << " of 4 random numbers, no seed, same random number each run: " << rand() << endl;
    }
    cout << endl;
    //as you'll see from above, every time we run the program, we generate the SAME 4 "random" numbers

    /*
     * Why do we get the same four numbers each run? That's because we didn't set the seed.
     *
     * A random seed (citing Wikipedia) is a number used to initialize a pseudorandom number generator.
     * What exactly does that mean? Essentially, we can think of a seed as a number that dictates
     * the sequence of random numbers that'll be generated.
     */

    //We can use srand() to set the seed for our program
    //Let's try setting the seed to a constant integer, 12
    srand(12);
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << " of 4 random numbers, same seed (12), same random number each run: " << rand() << endl;
    }
    cout << endl;
    //What? Still the same numbers? Again, this is because this particular sequence of four random numbers
    //is tied to the seed 12 and will produce those numbers every run.

    /*
     * Why would anyone want to generate the same numbers each time if they aren't random?
     * For the purposes of the assignments in Cornerstone and GE1110/11, it's true, we
     * probably don't want this type of behavior. It can be useful for testing the behavior
     * of programs if you know the expected output. But let's get to actual random number generation!
     */


    //We've seen that the sequence of random numbers are tied to a seed.
    //If we provide a number that's different every run (not necessarily provide a random number)
    //then we can get some actual random numbers.

    //Here's two examples using srand() that will lead to random number generation
    srand(time(0));
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << " of 4 random numbers, different seed (time(0)), different random numbers each run: "
             << rand() << endl;
    }
    cout << endl;

    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << " of 4 random numbers, different seed (time(NULL)), different random numbers each run: "
             << rand() << endl;
    }
    cout << endl;

    /*
     * You'll notice that time(0) and time(NULL) produced the same random numbers for that run of the program
     * but the sequence of numbers changed for each.
     *
     * time(0) and time(NULL) represents the number of seconds since 00:00 hours, Jan 1, 1970 UTC
     * (i.e., the current unix timestamp).
     *
     * So what we're doing is not supplying srand() with a random seed, but instead supplying it with a
     * time-based number that will be different each run since, well, time doesn't stop. That way
     * we'll get differently seeded random numbers every time we run our program.
     */


    //How to actually use srand() and rand()
    /*
     * If you want random numbers each run, use srand(time(0)) or srand(time(NULL)) to achieve this.
     *
     * You only need to declare the seed once at the beginning of your program - no need to
     * seed it every since time you generate a number since we've seen that
     * repeated calls to rand() after using a properly seeded srand() give different numbers.
     */

    //How to make the randomly generated numbers more useful
    /*
     * Alright, alright. Maybe you wanted to see how to simulate a dice roll and generate a number
     * between 1 and 6, or even something as simple as a coin toss with 0 or 1.
     * How is the number 1081905661 gonna help me at all??
     *
     * Using the modulo operator (%) will be key for obtaining desired ranges.
     *
     * Recall that doing a { number % x } will yield a number in the range [0, x-1]
     */

    //As an example, let's generate a random number between 12 and 19 to determine
    //how many credit hours you should take next semester (jk don't rely on this).

    //We can create range of possible values by using the form
    // rand() % <number of possible values in range> + <minimum value>
    int creditHours = rand() % 8 + 12;
    cout << "Random number between 12 and 19: " << creditHours << endl;

    /*
     * Let's think how that worked.
     * rand() % 8   ->    gave an integer between 0 and 7 (inclusive)
     *                    so our possible values were [0, 7]
     * + 12         ->    pushed the range up 12
     *                    so our possible values are [12, 19]
     */

    return 0;
}