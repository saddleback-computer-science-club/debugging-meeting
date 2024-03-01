// Saddleback Computer Science S.A.M.E. Cohort
// March 1st, 2024

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
    delete intPtr;

    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum += i;
    }

    factorial(8);

    return 0;
}
