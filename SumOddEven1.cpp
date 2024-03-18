
#include<iostream>
using namespace std;
int main(){
  int sumodd=0;//for accumulating odd number
  int sumeven=0;//for accumalating even number
  int upperbound;
  int absDiff;
  //promot user for upperbond
  cout<<"Enter the upperbound";
  cin>>upperbound;
  //use a loop to repeatedly add{1,2,3 ...............}
  int number=1;
  while(number<=upperbound){
    if(number%2==0){
      sumeven=sumeven+number;
      }else {
        sumodd=sumodd+number;
        ++number;
    }
    if(sumodd>sumeven){
     absDiff=sumodd-sumeven;
  
    }
    //print result
    cout<<"The sum of even numbers is "<<sumeven<<endl;
    cout<<"The sum of odd numbers is "<<sumodd<<endl;
    cout<<"The difference is"<<(sumeven-sumodd)<<endl;
    cout<<"the absolute difference is"<<absDiff<<endl;
    return 0;
  }
  

}   