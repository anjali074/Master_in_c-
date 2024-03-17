#include <iostream>
using namespace std;

int main() {
    // Initialize variables
    double a = 2; // first term
    double r = 3; // common ratio
    double sum = 0; // initialize sum to 0
    int n = 1; // first term index

    // Calculate sum of the geometric series
    while (n <= 10) {
        sum += a * (r, n - 1);
        n++;
    }

    // Print the sum
    cout << "The sum of the geometric series is " << sum << endl;

    return 0;
}