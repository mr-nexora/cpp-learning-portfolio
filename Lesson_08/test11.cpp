#include <iostream>
using namespace std;

int main()
{
    // Example 1: Multiplication has higher precedence than addition
    int result1 = 5 + 3 * 2;
    // Step 1: 3 * 2 = 6
    // Step 2: 5 + 6 = 11
    cout << "Example 1 (5 + 3 * 2) = " << result1 << endl;

    cout << "\n\n";
    // Example 2: Parentheses () have the highest precedence
    int result2 = (5 + 3) * 2;
    // Step 1: (5 + 3) = 8
    // Step 2: 8 * 2 = 16
    cout << "Example 2 ((5 + 3) * 2) = " << result2 << endl;
    cout << "\n\n";

    // Example 3: Same precedence operators execute from Left-to-Right (Associativity)
    int result3 = 20 / 4 * 2;
    // Step 1: 20 / 4 = 5
    // Step 2: 5 * 2 = 10
    cout << "Example 3 (20 / 4 * 2) = " << result3 << endl;
    cout << "\n\n";

    // Example 4: Complex expression combining multiple rules
    int result4 = 10 + 40 / (2 * 2) - 3;
    // Step 1 (Parentheses): 2 * 2 = 4 -> (10 + 40 / 4 - 3)
    // Step 2 (Division): 40 / 4 = 10 -> (10 + 10 - 3)
    // Step 3 (Left-to-Right): 10 + 10 = 20 -> (20 - 3)
    // Step 4 (Subtraction): 20 - 3 = 17
    cout << "Example 4 (10 + 40 / (2 * 2) - 3) = " << result4 << endl;

    return 0;
}
