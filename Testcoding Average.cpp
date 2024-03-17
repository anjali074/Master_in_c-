/** tesing type cast*/
#include<iostream>
using namespace std;
int main(){
  int sum=0;
  double average;
  //compute the sum from 1 to 1000 (int)
  int number=1;
  while(number<=100){
    ++number;
  }
  cout<<"The sum is"<<sum<<endl;
  average=double(sum)/100;
  cout<<"The average is "<<average<<endl;
  average=sum/100;
  cout<<"Average 3 is"<<average<<endl;
  average=double(sum)/100;
  cout<<"Average 4 is"<<average<<endl;
  return 0;
}
