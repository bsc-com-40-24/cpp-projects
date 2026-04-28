#include <iostream>
using namespace std;
int main(){
  double* pPointer=nullptr;
  pPointer=new double;
  *pPointer=25.5;
  delete pPointer;
  pPointer=nullptr;
  pPointer=new double;
  *pPointer=100.21;
  delete pPointer;
  pPointer=nullptr;
  //cout<<*pPointer<<endl;
  return 0;
}