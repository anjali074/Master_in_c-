/*Teting mix-testing arithmetic operation*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int i1=2, i2=4;
  double d1=2.5, d2=5.0;
  //print floating -point in fixed format with 1 decimal place
  cout<<fixed<<"setperecision(1)";
  cout<<i1<<"+"<<i2<<"="<<i1+i2<<endl;
  cout<<d1<<"+"<<d2<<"="<<d1+d2<<endl;
  cout<<i1<<"+"<<d2<<"="<<i1+d2<<endl;

  cout<<i1<<"-"<<i2<<"="<<i1-i2<<endl;
  cout<<d1<<"-"<<d2<<"="<<d1-d2<<endl;
  cout<<i1<<"-"<<d2<<"="<<i1-d2<<endl;
  
  cout<<i1<<"*"<<i2<<"="<<i1*i2<<endl;
  cout<<d1<<"*"<<d2<<"="<<d1*d2<<endl;
  cout<<i1<<"*"<<d2<<"="<<i1*d2<<endl;

  cout<<i1<<"/"<<i2<<"="<<i1/i2<<endl;
  cout<<d1<<"/"<<d2<<"="<<d1/d2<<endl;
  cout<<i1<<"/"<<d2<<"="<<i1/d2<<endl;
  return 0;
}