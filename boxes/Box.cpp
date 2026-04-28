#include <iostream>
#include "Box.h"
using namespace std;
Box::Box(){
  length =0.0;
  breadth=0.0;
  height=0.0;

}
Box::Box(const double newLength, const double newBreadth, const double newHeight){
  length= newLength;
  breadth=newBreadth;
  height=newHeight;
}
Box:: ~Box(){

}
double Box::GetVolume(){
  return length * breadth * height;

}
void Box::SetLength(double len){
  length =len;
}
void Box::SetBreadth(double bre){
  breadth=bre;
}
void Box::SetHeight(double hei){
  height=hei;
}
Box Box::operator+(const Box& b){
  Box Box;
  Box.length=this->length + b.length;
  Box.breadth=this->breadth + b.breadth;
  Box.height=this->height + b.height;
  return Box;
};
