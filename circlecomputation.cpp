/* write a program (circlecomputation.cpp) prompts user for the radius of a circle , then print its area and circuference*/
#include<iostream>
using namespace std;
int main(){
double radius, area, circumference;
const double PI=3.14;
cout<<"Enter the value of Radius"<<endl;
cin>>radius;
//compute area of circumference
area = PI * radius * radius;
circumference=2.0*radius*PI;
  //PRINT RESULT
  cout << "The Area is  " << area << endl;
  cout<<"The Circumference is  "<<circumference<<endl;
  cout<<"radius is"<<radius<<endl;
  return 0;
}