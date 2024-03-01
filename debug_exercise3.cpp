// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

/*
DEBUG EXERCISE 3:

Congratulations making it here!

This exercise is much less algorithm based than the prior two, and is more made
to illustrate a few examples of C++'s annoying quirks.

While solving most of these may be fairly obvious based on context clues,
figuring out WHY this behaviour occurs is more complex, and should help further
your knowledge of the language.

I recommend https://en.cppreference.com/w/ as your primary reference.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yes = {'y', 'e', 's'};
    string no = {"n", "o"};

    cout << yes << " " << no << endl;

    string maybe(string()); // Try looking at this in the debugger

    cout << maybe << endl;

    
    int i = { 1 };
    auto j { 2 };
    auto k = { 3 }; // C++ initialization rules are amazing, right?

    cout << i << j << k.size();
}