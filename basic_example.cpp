// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

#include <iostream>

// Returns factorial of n (n!)
// Examples:
//  factorial(1) = 1 = 1
//  factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
int factorial(unsigned int n)
{
    if (n <= 1) return 1;

    return n * factorial(n - 1);
}

int main()
{
    int* intPtr = new int{};
    std::cout << "intPtr = " << intPtr <<  " | *intPtr = " << *intPtr << '\n';
    delete intPtr;

    const int numIterations = 3;
    for (int i = 0; i < numIterations; ++i) {
        std::cout << "i = " << i << '\n';
    }

    std::cout << "8! = " << factorial(8) << std::endl;

    return 0;
}
