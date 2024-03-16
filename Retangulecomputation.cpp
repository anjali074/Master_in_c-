/* write a program(Retangule computation.cpp) prompts user for the area perimeter of raectangle*/
#include<iostream>
using namespace std;
int main(){
double  area, perimeter, rectangle;
const double  pi = 3.14159;
cout<<"Enter the Area of Rectangle: ";
cin>>rectangle;
//compute area and  perimter using formulae
area=pi*rectangle*rectangle;
rectangle=2*(pi*rectangle);
//print result
cout<<"\nThe Perimeter of the Rectanagle is"<<rectangle<<endl;
cout<<"The Area of the Rectangle is"<<area<<endl;
return 0;
}


