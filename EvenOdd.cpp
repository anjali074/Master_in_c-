#include<iostream>
using namespace std;
bool isEven(int a){
  if(a&1){
    return 0;
  }
  else{
    return 1;
  }
  }
  int main(){
    int num;
    cin>>num;
    if(isEven(num)){
      cout<<"number is Even "<<endl;
    }
    else{
      cout<<"Number is odd"<<endl;
      return 0;
    }
    }
 