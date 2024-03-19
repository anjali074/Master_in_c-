/*test Arithmetic overflow/underflow*/
#include<iostream>
using namespace std;
int main(){
  //rane of int is[-21474, 21474]
  int i1=2147483647;
  cout<<i1+1<<endl;
  cout<<i1+2<<endl;
  cout<<i1*i1<<endl;
  cout<<i1*i1<<endl;
  int i2=-2147483648;//{c++ runtime does not issue and error /warning produces incoorect result}
  cout<<i2-1<<endl;
  cout<<i2-2<<endl;
  cout<<i2*i2<<endl;
  return 0;


}