#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  srand(time(0));
  int daysUntilExpiration=rand()%12;
  cout<<"days until expiration: "<<daysUntilExpiration<<endl;
  if(daysUntilExpiration==0){
    cout<<"your subscription has expired"<<endl;
  }
  else if (daysUntilExpiration==1){
    cout<<"your subscription exppires within a day"<<endl;
    cout<<"renew now and save 20%"<<endl;
  }
  else if(daysUntilExpiration<=5){
    cout<<"your subscription expires in "<<daysUntilExpiration<<"days."<<endl;
    cout<<"renew now and save 10%"<<endl;
  }
  else if(daysUntilExpiration<=10){
    cout<<"yor subscription will expire soon. Renew now!"<<endl;


  }
  else{
    cout<<"you have an active subscription"<<endl;
  }
  return 0;
}