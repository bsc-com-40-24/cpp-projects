#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
string Reverse(string data){
  reverse(data.begin(), data.end());
  return data;

}
int main(){
  ifstream inputFile("c++.txt");
  string fileData;
  if (inputFile.is_open()){
    getline(inputFile, fileData);
    inputFile.close();
  }
  else{
    cout<<"Error: Could not open file. Please create c++.txt first."<<endl;
    return 1;
  }
  int vowels=0;
  string vowelList="aeiouAEIOU";
  for(char c: fileData){
    if(vowelList.find(c) !=string::npos){
      vowels++;
    }
  }
  cout<<"Number of vowels :"<<vowels<<endl;
  stringstream ss(fileData);
  string word;
  int wordCount=0;
  while(ss>>word){
    wordCount++;
  }
  cout<<"Number of words: "<< wordCount <<endl;
  cout<<"Reversed statement :"<< Reverse(fileData)<<endl;
  stringstream ss2(fileData);
  string resultStatement= "";
  while(ss2>> word){
    if(word.length() >=2){
      word[1]=toupper(word[1]);
    }
    resultStatement +=word + " ";
  }
  cout<<"Capitalized second letters: "<<resultStatement<<endl;
  return 0;
  
}