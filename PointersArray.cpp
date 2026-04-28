#include <iostream>
using namespace std;
int main(){
  int numberArrays[5];
  int * pPointer=nullptr;
  pPointer=numberArrays;
  *pPointer=10;
  pPointer++;
  *pPointer=20;
  pPointer=&numberArrays[2];
  *pPointer=30;
  pPointer=numberArrays +3;
  *pPointer=40;
  pPointer=numberArrays;
  *(pPointer+4)=50;
  for (int n=0; n<5; n++){
    cout<<numberArrays[n]<<","<<endl;
  }
  return 0;
}