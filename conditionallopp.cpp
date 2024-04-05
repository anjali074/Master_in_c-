/*loop will be executed multiple time
*1. for-loop print sum of number*/
#include<iostream>
using namespace std;
int main(){
int sum=0, number=1;
/*for(int number=1; number<=1000;++number ){
  sum+=number;
}*/
//while-l00p
while(number <= 1000){
  sum+=number;
  ++number;
  cout<<"sum is"<<sum<<endl;
}
}