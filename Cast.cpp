#include <iostream>
using namespace std;
class dummy{
  int i,j;
};
class Addition : public dummy{
  //int x,y;
  public:
  Addition(int a, int b){i=a; j=b;
    //x=a;
    //y=b;
    int result(){
      return i+j;
    };
    int main (){
      AdditionaddObj(10,20);
      dummy *dPtr=&addObj;

      Addition * padd=(Addition*)dPtr;

      //padd=(Addition*) &d;
      cout<<"Result: "<<padd->result()<<endl;
      return 0;
    }
  }
}