#include <iostream>
#include <limits>
void calculateSquare();
void calculateRectangle();
void calculateTriangle();

using namespace std;
int main(){
  int Selection=0;
  while (Selection !=4){

  
  cout<<"Please select the area of the shape to calculate \n 1. Square \n 2. Rectangle \n 3. Triangle \n 4. Quit program \n Enter Selection: "<<endl;
  cin>>Selection;
  if(cin.fail() || Selection> 4){
    cout<<"Theinput that was entered was invalid. Please enter a valid input (1-4)."<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    continue;
  }
  switch (Selection){
    case 1:
    calculateSquare();
    break;
    case 2:
    calculateRectangle();
    break;
    case 3:
    calculateTriangle();
    break;
    case 4:
    cout<<"Exiting program..."<<endl;
    break;
  }
  }
  return 0;
}
  void calculateSquare(){
    double side;
    cout<<"Enter the length of a side"<<endl;
    cin>>side;
    cout<<"The area of the square is: "<<(side *side)<<endl;
  }
  void calculateRectangle(){
    double length, width;
    cout<<"Enter the length"<<endl;
    cin>>length;
    cout<<"Enter the width:"<<endl;
    cout<<"The area of the rectangle is :"<<(length * width)<<endl;
  }
  void calculateTriangle(){
    double base, height;
    cout<<"Enter the base"<<endl;
    cin>>base;
    cout<<"Enter the height"<<endl;
    cin>>height;
    cout<<"The area of the triangle is:"<<(0.5 * base * height)<<endl;

  }
  
 

