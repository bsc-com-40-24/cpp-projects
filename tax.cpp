#include <iostream>
using namespace std;
int main(){
  double sales=95000;
  cout <<"Sales : $" <<sales<<endl;

  double StateTax=0.4*sales;
  cout<<"StateTax : $" <<StateTax<<endl;

  double CountyTax=0.2*sales;
  cout<< "CountyTax : $" <<CountyTax<<endl;

  double TotalTax =StateTax+CountyTax;
  cout<<"TotalTax : $"<<TotalTax<<endl;

  double NetSales=sales-TotalTax;
  cout<<"NetSales : $"<<NetSales<<endl;
  
  return 0;
}