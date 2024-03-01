// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

/* DEBUG EXERCISE 2:

Great job on completing exercise 1!

This exercise introduces a couple new concepts, namely linked lists, std::vector
and some very basic recursion. If you're not sure what either of these are, 
don't worry. The examples used here shouldn't be too hard to understand.

Basically: 
  - a std::vector functions as an array, but its size can grow/shrink during
  runtime. The `push_back` function
  See: https://en.cppreference.com/w/cpp/container/vector
  - recursion is when a function calls itself

Remember the "CALL STACK" menu, which will help with analyzing the behaviour of
recursive functions!

The amount of comments has lessened to encourage you to figure out the behaviour
of functions yourself.

There are a total of XXXXX LOGICAL ERRORS in this program.

If you can figure out what these algorithms should look like, you should have a
very easy time finding the errors.
*/

#include <iostream>
#include <vector>
using namespace std;

struct LinkedList
{
    int data;

    LinkedList* next;
};

// Prints the elements of vec to standard out
void print_vec(const vector<int>& vec);

// Reverses the elements of a vector in-place
void reverse_vec(vector<int>& vec);

// Prints the nodes of a linked list, from back to front
void print_list(LinkedList* front);

// Creates a linked list from the elements in a vector
// Returns a pointer to the front node of the list.
LinkedList* construct_list(const vector<int>& from);

int main()
{
    vector vec = { 1, 2, 3, 4, 5 };

    reverse_vec(vec);

    print_vec(vec);

    LinkedList* front = construct_list({ 42, 30, 10, 12 });

    print_list(front);
}

void print_vec(const vector<int>& vec)
{
    cout << "[ ";
    // Range-based for loop. Prevents off by one errors!
    // See: https://www.learncpp.com/cpp-tutorial/range-based-for-loops-for-each
    for (int n : vec) {
        cout << n << ' ';
    }
    cout << "]\n";
}

void reverse_vec(vector<int> &vec)
{
    if (vec.size() == 0) {
        return;
    }

    int num = vec.back();
    vec.pop_back();

    reverse_vec(vec);

    vec.insert(vec.begin(), num);
}

void print_list(LinkedList* front)
{
    if (front != nullptr) {
        print_list(front->next);

        cout << front->data << ' ';
    }
}


LinkedList* construct_list(const vector<int>& from)
{
    LinkedList* front = new LinkedList;
    LinkedList* current = front;

    for (int n : from) {
        current->data = n;
        
        current->next = new LinkedList;
        current = current->next;
    }

    return front;
}
