/*prompt user for two integer and print their sum, differ
(interarthemtic.cpp)
*/
#include<iostream>
using namespace std;
int main(){
  int firstInt;//Declered a variable name firstInt of type integer
  int secondInt;//declered a variable name  secondInt also of type integer
  int sum, different, multiplcation , quotient; // Declaring variables to store the result of
  cout<<"Enter the First Integer: "; //Prompting
  cin>>firstInt; //Taking Input
  cout<<"Enter the Second Integer: "; //Prompting
  cin>>secondInt; //Taking
  //perfrom for arthimetic operation
  sum = firstInt + secondInt ; //Addition
  different = firstInt - secondInt ; //Subtraction
  multiplcation= firstInt * secondInt ; //Multiplication
  quotient= firstInt / secondInt ; //Division
  //print Result
  cout << "The Sum is : "<<sum<<endl;
  cout << "The Different is : "<<different<<endl;
  cout << "The Multiplcation is : "<<multiplcation<<endl;
  cout<<"The quotient is : "<<quotient<<endl;
  return 0;
}