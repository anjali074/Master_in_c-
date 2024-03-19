 /* test type  casting*/
 #include<iostream>
#include<iomanip>
using  namespace std;
int main(){
  //print floating point number fixed format
  cout<<fixed<<setprecision;
  //test expilict type casting
  int i1=4, i2=8;
  cout<<i1/i2<<endl;
  cout<<(double)i1/i2<<endl;
  cout<<i1/(double)i2<<endl;
  cout<<(double)(i1/i2)<<endl;//same as above line
  double d1=5.5, d2=6.6;
  cout<<(int)(d1/i2)<<endl;//
//testing implict type casting
d1=i1;
cout<<d1<<endl;
i2=d2;
cout<<i2<<endl;
}

