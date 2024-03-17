#include <iostream>
using namespace std;

int main() {
    // Initialize count variable
    int count = 0;

    // Iterate through the years from 1 to 2010
    for (int year = 1; year <= 2010; year++) {
        // Check if the year is a leap year
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            // Increment the count variable
            count++;
            // Print the leap year if it's the 10th leap year
            if (count % 10 == 0) {
                cout << year << endl;
            } else {
                cout << year << " ";
            }
        }
    }

    // Print the total number of leap years
    cout << "The number of leap years is " << count << endl;

    return 0;
}