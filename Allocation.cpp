#include <iostream>
#include <string>
using namespace std;
int main(){
int * num=new int;
string* text=new string;
cout<<"Enter an integer value \n";
cin>>*num;
cout<<"Enter a string value \n";
cin.ignore();
getline(cin,*text);
cout<<"\nYou entered "<<endl;
cout<<"Integer: "<<*num<<endl;
cout<<"String "<<*text<<endl;
delete num;
delete text;
return 0;
}