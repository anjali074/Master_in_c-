#include<iostream>
using namespace std;
int main(){
  char ch ='1';
  int num=1;
  cout<<endl;
  switch(ch){
    case 1: cout<<"first"<<endl;
    cout<<"again first"<<endl;
    break;
    case '1': switch(num){
      case 1: cout<<"valued of num is " <<endl;
      cout<<endl;
      return 0;
    }

  }
}