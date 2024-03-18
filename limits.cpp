/** test  integer limits in <climits>  header*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
  cout<<"int max= " << INT_MAX <<endl;
  cout<<"int min= " << INT_MIN << endl;
  cout<<"unsigned int max= " << UINT_MAX << endl;
  cout<<"long long Max= " << LLONG_MAX << endl;
  cout<<"unsigned long long Max= " <<ULLONG_MAX << endl;
  cout<<"Bit in char= CHAR_BIT"<<endl;
  cout<<"char Min=" << CHAR_MAX<<endl;
  cout<<"signed char min= SCHAR_MIN"<<endl;
  cout<<"unsigned char Max= SCHAR_MAX"<<endl;
return 0;
}