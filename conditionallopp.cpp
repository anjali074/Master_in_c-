/*loop will be executed multiple time
*1. do-while print sum of number*/
#include<iostream>
using namespace std;
int main(){
int sum=0, number=1;
do{
  if(number>=1&&number<=50){ //condition to check the
  sum+=number;
  ++number;
  
}
while(number<=1000){
    cout<<"Sum is : "<<sum<<endl;
  }
}
