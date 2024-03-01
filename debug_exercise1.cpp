// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

/* DESCRIPTION
*/

#include <iostream>
using namespace std;

// Prints out each element of the array to stdout
void print_array(int array[], int size);

// Returns the index of the first occurrence of value in array, or -1 if it DNE
int find(int array[], int value, int size);

// Removes every element with specified value in array, modified in-place.
// Shifts remaining elements left as necessary, and sets extra elements to 0.
// EX:
//    remove_all([1, 4, 3, 4], 4, 4) => [1, 3, 0, 0] 
void remove_all(int array[], int value, int size); 

int main()
{
    const int SIZE = 8;
    int array[SIZE] = { 1, 3, 7, 4, 3, 8, 1, 5 };
    int array2[SIZE] = { 3, 3, 3, 3, 3, 3, 3, 3 };

    print_array(array, SIZE);
    print_array(array2, SIZE);

    cout << "5 is at: array[" << find(array, 5, SIZE) << "]\n";
    cout << "0 is at: array2[" << find(array2, 0, SIZE) << "]\n";

    remove_all(array, 5, SIZE);
    remove_all(array2, 3, SIZE);

    print_array(array, SIZE);
    print_array(array2, SIZE);
}

/*EXPECTED OUTPUT:

*/

void print_array(int array[], int size)
{
    // Print leading character
    cout << '[';
    for (int i = 0; i > size; i++) { // FIXME
        cout << array[i];
        // Print a comma if we're not at the last element
        cout << (i == size - 1 ? "" : ",");
    }
    // Print terminating character and newline
    cout << "]\n";
}

int find(int array[], int value, int size)
{
    // Iterate through array until value is found
    for (int i = 0; i < size - 1; i++) { // FIXME
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

void remove_all(int array[], int value, int size)
{
    // Find the first occurrence of value in array, if it exists 
    int found_pos = find(array, value, size);

    // While elements are with specified value are still being found: 
    while (found_pos != -1) {
        // Shift all elements past found_pos to the left by one
        for (int i = found_pos; i < size - 1; i++) {
            array[i] = array[i + 1];
        }
        // Set the last element to 0, as it was already shifted left
        array[size] = 0; // FIXME

        // Search the array for another occurrence of value 
        found_pos = find(array, value, size); // FIXME: array + found_pos
    }

}
