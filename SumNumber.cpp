/*sum fom 1 to an upperbond using a while .loop (sumNumber.cpp)*/
#include<iostream>
using namespace std;
int main(){
  int upperbond;
  int sum=0;//sum form  1 upperbond
  cout<<"Enter the number of upper bond: ";
  cin>>upperbond;
  int number=1;
  while( number<=upperbond){
    sum=sum+number;
++number;
}
  cout<<"The  sum from 1 to "<<upperbond<<"is"<<sum<<endl;
  return 0;
}