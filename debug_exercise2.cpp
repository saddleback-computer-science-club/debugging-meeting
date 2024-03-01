// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

/* DEBUG EXERCISE 2:

Great job on completing exercise 1!

This exercise introduces a couple new concepts, namely std::vector and some
very basic recursion. If you're not sure what either of these are, don't worry.
The examples used here aren't too hard to wrap your head around.

Basically: 
  - a std::vector functions as an array, but its size can grow/shrink during
  runtime. The `push_back` function
  - recursion is when a function calls itself 

Remember the "CALL STACK" menu, which will help with analyzing the behaviour of
recursive functions!

There are a total of XXXXX ERRORS.
*/

#include <iostream>
#include <vector>
using std::cout, std::vector;

// Computes the fibin

int main()
{

}

int binary_search(int array[], int value, int size)
{
    // TODO: Break this lol
    int low = 0, high = size - 1;
    int mid{};

    while (low <= high) {
        mid = (low + high) / 2;

        if (array[mid] == value) {

        } else if (array[mid] > value) {
            high = mid - 1;
        } else {
            high = mid + 1;
        }
    }

    return -1;
}