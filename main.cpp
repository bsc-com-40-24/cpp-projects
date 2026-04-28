#include <iostream>
#include "Rectangle.h"
using namespace std;
int main(){
  Rectangle rect1;
  float inputLength1, inputWidth1;
  cout<<"---Rectangle 1: Default construcctor & accessors ---"<<endl;
  cout<<"Enter the length of the rectangle \n";
  cin>>inputLength1;
  cout<<"Enter the width of the ractangle \n ";
  cin>>inputWidth1;
  rect1.setLength(inputLength1);
  rect1.setWidth(inputWidth1);
  cout<<"The area of the rectangle 1 is: "<<rect1.calculateArea()<<endl;
  cout<<"----------------------------------"<<endl<<endl;
  float inputLength2, inputWidth2;
  cout<<"---Rectangle 2: Overloading Constructor ---"<<endl;
  cout<<"Enter the length: ";
  cin>>inputLength2;
  cout<<"Enter the width: ";
  cin>>inputWidth2;
  Rectangle rect2(inputLength2,inputWidth2);
  cout<<"Area of Rectangle 2: "<<rect2.calculateArea()<<endl;
  cout<<"----------------------------------"<<endl;
  return 0;
}