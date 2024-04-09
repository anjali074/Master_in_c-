#include<iostream>
using namespace  std;
int main(){
  int number[]={11,22, 33, 44, 55};
  //for each memeber caaled number of aaray
  for( int number:number){
    cout<<number<<endl;

  }
  //to modify member , neede to use frenece
  for(int &number:number){
    number=99;

  }
  for(int number: number){
    cout<<number<<endl;
    return 0;
  }
}
