/*
conveted temprature between celisus and fahrenheit
(convert Tempertaure.cpp)*/
#include<iostream>
using namespace std;
int main(){
  double celsius,Fahernhit;
  cout<<"Enter the temperature in Celsius: ";
  cin>>celsius;
  Fahernhit= (9.0/5.0+32.0);
  cout<<celsius<<"degree C is"<<Fahernhit<<"degree  F is"<<endl<<endl;
  cout<<"Enter temprature in Faherenhit";
  cin>>Fahernhit;
  celsius=(Fahernhit-32)*5.0/9.0;
  cout<<Fahernhit<<"degree F is "<<celsius<<" degree C"<<endl<<endl;

}