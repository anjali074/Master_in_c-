/* converting b/w cesius and fahernhit
* celsius=(5/9)(fahernheit-32)
* faherhit=(9/5)(celsius+32)
*/
#include<iostream>
#include<iomanip>
using  namespace std;
int main(){
  double celsius,fahrenhit;
  cout<<fixed<<"Setprecision(2)";
  cout<<"Enter temperature in celsius";
  cin>>celsius;
  fahrenhit=((9.0/5)*celsius)+32;
  cout<<celsius<<"c is"<<fahrenhit<<"f"<<endl;
  cin>>fahrenhit;
  celsius=((5.0)/(9))*(fahrenhit-32);
   cout<<fahrenhit<<"f is"<<celsius<<"c"<<endl;
   return 0;

}