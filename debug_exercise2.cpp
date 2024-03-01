// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

/* DESCRIPTION
*/

#include <iostream>

// Returns the index of a value in an array using the binary search algorithm
// or -1 if value does not exist in array.
// see: https://www.programiz.com/dsa/binary-search if review is needed
int binary_search(int array[], int value);

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