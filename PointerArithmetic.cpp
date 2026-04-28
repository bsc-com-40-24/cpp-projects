#include <iostream>
using namespace std;
int main(){
  int* pPointer=nullptr;
  int numberArrays[3]={10,20,30};
  pPointer=numberArrays;
  cout<<"Address at pPointer: "<<pPointer<<endl;
  cout<<"Address of numbersArray[0]: "<<numberArrays<<endl;
  cout<<"value at pPointer: "<<*pPointer<<endl;
  cout<<"value at ++pPointer: "<<*(++pPointer)<<endl;
  pPointer=numberArrays;
  cout<<"value at pPointer++: "<<*(pPointer++)<<endl;
  return 0;
}