/* write a program (cylindercomputation.cpp) prompts user for the surface , area, volume */
#include<iostream>
using namespace std;
int main(){
double  surface, area, voulme;
const double PI=3.14159265;
cout<<"Enter  the Surface Area of Cylinder: ";
cin>>surface;
//compute the cylinderference
double cilindre_fere=(2*PI)*(surface/PI);
 //print result
 cout<<"the surface is"<<surface<<endl;
 cout<<"Cylinders Ference is "<<cilindre_fere<<endl;
 //asking user to enter the area and volume
 cout<<"Please Enter the Area of Cylinder :";
 cin>>area;
 cout<<"Please Enter the Volume of Cylinder :";
 cin>>voulme;
 return 0;



}