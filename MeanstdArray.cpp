/* 
*find the mean and standard deviation of number kept  an aaray in array*/
#include<iostream>
#include<iomanip>
#include <cmath>
#define SIZE 7
using namespace std;
int main(){
  int marks[]={74, 43, 58, 60, 64, 70};
  int sum = 0;
  int sumsq = 0;
  double mean, stdDev;
  for(int i=0; i< SIZE; ++i){
    sum +=marks[i];
    sumsq +=marks[i]*marks[i];
  }
  mean=(double) sum/SIZE;
  cout<<fixed<<"Mean is"<<setprecision(2)<<mean<<endl;
  stdDev=sqrt((double)sumsq/SIZE-mean*mean);
  cout<<fixed<<"std dev is"<<setprecision(2)<<stdDev<<endl;
  return 0;
  }
