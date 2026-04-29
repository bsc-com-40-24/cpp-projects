#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
  Rectangle myRect; // a class becomes a a type on its own which enables the creation of instances
  float inputL, inputW;
 cout<<"Provide length value: \n";
 cin>>inputL;
   cout<<"Provide width value: \n";
   cin>>inputW;
   myRect.setLength(inputL);
   myRect.setLength(inputW);
  cout<<"The area of the rectangle is: "<<myRect.calculateArea()<<endl;
  float newL,newW;
  cout<<"Enter the length for a new rectangle: "<<endl;
  cin>>newL;
  cout<<"Enter the width for a new rectangle: "<<endl;
  cin>>newW;
  Rectangle rect2(newL,newW);
  cout<<"The area of the second rectangle is : "<<rect2.calculateArea()<<endl;
  return 0;


}