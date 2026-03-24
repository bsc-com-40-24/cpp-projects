#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int timeUntilExpiration= rand()%12;
  switch(timeUntilExpiration){
    case 0:
    cout<<"Your subscription has expired \n"<<endl;
    break;
    case 1:
    cout<<"Your subscription will exppire in a day \n "<<endl;
    break;
    case 2:
    cout<<"Your subscription will expire in 2 days \n"<<endl;
    case 3:
    case 4:
    case 5:
    cout<<" Your subscription in "<<timeUntilExpiration<<" days" <<endl;
    break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    cout<<"Your subscription will expire soon \n Please renew your subscription \n"<<endl;

  }
  return 0;
}