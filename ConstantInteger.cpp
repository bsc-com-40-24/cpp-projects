#include <iostream>
using namespace std;
int main(){
  int count =0;
  int tempInteger=13;
  const int* pcount=&count;
  *pcount=50;
  cout<<"The value of count is "<<*pcount<<endl;
  //we expect it to bring an error because it is a pointer pointing to a constant integer

}