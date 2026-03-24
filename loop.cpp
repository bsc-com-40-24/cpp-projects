#include <iostream>
using namespace std;
int main(){
  int age;
  cin>>age;
  if (age>=18){
    cout<<"your Eligible to vote"<<endl;
  }else if(age<18){
    cout<<"your too young"<<endl;
  }else {cout<<"this is voting"<<endl;}
  return 0;

}