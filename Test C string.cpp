/*Test - C string */
#include<iostream>
using namespace std;
int main(){
  char msg[256];
cout<<"Enter  a message (withs pce) "<<endl;
cin.getline(msg,256);
cout<<msg<<endl;

//Acess via null -terminated
for(int i=0; msg[i]!='\0'; ++i){
  cout<<msg[i];
}
cout<<endl;
cout<<"Enter a word(without space)"<<endl;
cin>>msg;
cout<<msg<<endl;

for(int i=0; msg[i]!='\0'; ++i){
  cout<<msg[i];
}
cout<<endl;
return 0;
}