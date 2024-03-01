// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

/*
DEBUG EXERCISE 1:

Hopefully this serves as a very basic introduction to debugging.
Concepts in use include:
  - C-style arrays
  - Linear search
  - A simple nested loop

There are a total of 4 LOGICAL ERRORS in this program.
NONE of the errors require in this program require the addition/deletion of 
lines; simply changing a fragment of a statement will suffice!

You should start off by just inspecting the code. Reading the comments and
asking yourself "does this code do what the comment says?" should be immensely
helpful.

Note: If you don't understand what `int (&array)[SIZE]` means in the parameter
lists, don't worry about it. It's simply used so that the array will appear in
a nicer way when using the debugger.
*/

/* EXPECTED OUTPUT:
[1,3,7,4,3,8,1,5]
[3,3,3,3,1,3,3,3]
5 is at: array[7]
0 is at: array2[-1]
[1,7,4,8,1,5,0,0]
[1,0,0,0,0,0,0,0]
*/

#include <iostream>
using std::cout;

const int SIZE = 8;

// Prints out each element of the array to stdout
void print_array(int (&array)[SIZE], int size);

// Returns the index of the first occurrence of value in array, or -1 if it DNE
int find(int (&array)[SIZE], int value, int size);

// Removes every element with specified value in array, modified in-place.
// Shifts remaining elements left as necessary, and sets extra elements to 0.
// EX:
//    remove_all([1, 4, 3, 4], 4, 4) => [1, 3, 0, 0] 
void remove_all(int (&array)[SIZE], int value, int size); 

int main()
{
    int array[SIZE] = { 1, 3, 7, 4, 3, 8, 1, 5 };
    int array2[SIZE] = { 3, 3, 3, 3, 1, 3, 3, 3 };

    print_array(array, SIZE);
    print_array(array2, SIZE);

    cout << "5 is at: array[" << find(array, 5, SIZE) << "]\n";
    cout << "0 is at: array2[" << find(array2, 0, SIZE) << "]\n";

    remove_all(array, 3, SIZE);
    remove_all(array2, 3, SIZE);

    print_array(array, SIZE);
    print_array(array2, SIZE);
}

void print_array(int (&array)[SIZE], int size)
{
    // Print leading character
    cout << '[';
    for (int i = 0; i > size; i++) {
        cout << array[i];
        // Print a comma if we're not at the last element
        cout << (i == size - 1 ? "" : ",");
    }
    // Print terminating character and newline
    cout << "]\n";
}

int find(int (&array)[SIZE], int value, int size)
{
    // Iterate through array until value is found
    for (int i = 0; i < size - 1; i++) {
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

void remove_all(int (&array)[SIZE], int value, int size)
{
    // Find the first occurrence of value in array, if it exists 
    int found_pos = find(array, value, size);

    // While elements are with specified value are still being found: 
    while (found_pos != -1) {
        // Shift all elements past found_pos to the left by one
        for (int i = found_pos; i < size - 1; i++) {
            array[i + 1] = array[i];
        }
        // Set the last element to 0, as it was already shifted left
        array[size] = 0;

        // Search the array for another occurrence of value
        found_pos = find(array, value, size);
    }

}