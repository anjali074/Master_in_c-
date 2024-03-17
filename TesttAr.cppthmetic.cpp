/* Test arthmetic operation 
*/
#include<iostream>
using namespace std;
int main(){
  int number1, number2;
  int sum, difference, product,quotient, remainder;
  //prompt user for the two number
  cout<<"Enter two intege"<<endl;
  cin>>number1, number2;
  //Do arithmetic operation
  sum=number1+number2;
  difference=number1-number2;
  product=number1*number2;
quotient=number1/number2;
remainder=number1%number2;
//print result
cout<<"The Sum of "<<number1<<" and "<<number2<<" is: "<<sum<<endl;
cout<<"The Difference between "<<number1<<" and "<<number2<<" is: "<<difference<<endl;

cout<<"The quotient  of"<<number1<<"and"<<number2<<"is"<<quotient<<endl;
cout<<"The remainder of"<<number1<<"and"<<number2<<"is"<<remainder<<endl;
return 0;
} 
