/* switch case opertor
*/
#include<iostream>
using namespace std;
int main(){
    char oper;
  int num1, num2,result;
  switch(oper){
    case'+':
    result=num1+num2;
    break;
    case'-':
    result=num1-num2;
    break;
    case'*':
    result=num1*num2;
    break;
    case'/':
    result=num1/num2;
    break;
    
    default:
    cout<<"Invalid operator";
  }
  }
  