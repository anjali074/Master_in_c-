#include <iostream>
using namespace std;

int main() {
  int sum = 0; // for accumulating the sum
  int upperbound = 1000;

  // use a loop to repeatedly add the numbers divisible by 13, 15, or 17
  for (int number = 1; number <= upperbound; ++number) {
    if (number % 13 == 0 || number % 15 == 0 || number % 17 == 0|| number %30 !=0) {
      sum += number;
    }
    else{
  // print the result
  cout << "The sum of numbers divisible by 13, 15, or 17  from 1 to " << upperbound << " is " << sum << endl;
  cout<<"the sum of number not divisible by 30"<<endl;
    
  return 0;
}
}
}