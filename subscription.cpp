#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  srand(time(0));
  int daysUntilExpiraion=rand()%12;
  cout<<"days until expiration: "<<daysUntilExpiraion<<endl;
  if(daysUntilExpiraion==0){
    cout<<"your subscription has expired"<<endl;
  }
  else if (daysUntilExpiraion==1){
    cout<<"your subscription exppires within a day"<<endl;
    cout<<"renew now and save 20%"<<endl;
  }
  else if(daysUntilExpiraion<=5){
    cout<<"your subscription expires in "<<daysUntilExpiraion<<"days."<<endl;
    cout<<"renew now and save 10%"<<endl;
  }
  else if(daysUntilExpiraion<=10){
    cout<<"yor subscription will expire soon. Renew now!"<<endl;


  }
  else{
    cout<<"you have an active subscription"<<endl;
  }
  return 0;
}