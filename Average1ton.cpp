/*test explict type cast (Avearge in to 100)*/
#include<iostream>
#include<iomanip>
using  namespace std;
int main(){
  int sum=0;
  double avearge;
  for(int number=1; number<=100; ++number){
    sum+=number;
  }
  avearge=sum/100;
  cout<<fixed<<setprecision(1);
  cout<<"Average is "<<avearge <<endl;
  return 0;


}