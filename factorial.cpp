#include<iostream>
using namespace std;

int factorial(int n){
  int factorial=1;

}
int nCr (int n, int r) {
  int num =factorial(n);
  int denom=factorial(r)*factorial(n-r);
  int ans=num/denom;
  return ans;
}
  int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Answer is:"<<(n,r)<<endl;
    return 0;
  }
