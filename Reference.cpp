#include <iostream>
using namespace std;
int main(){
  int example=25;
  cout<<"The value of example before ref :"<<example<<endl;
  int& rExample=example;
  rExample=56;
  cout<<"The value of the example using reference is: "<<example<<endl;
  return 0;
}